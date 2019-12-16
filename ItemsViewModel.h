﻿#pragma once

#include "ItemsViewModel.g.h"
#include "Item.g.h"

namespace winrt::App1::implementation
{
    struct ItemsViewModel : ItemsViewModelT<ItemsViewModel>
    {
        ItemsViewModel();
     
        Windows::Foundation::Collections::IObservableVector<App1::Item> Items() const;
        void Items(Windows::Foundation::Collections::IObservableVector<App1::Item>& v);
    };

    struct Item : ItemT<Item>
    {
        Item();

        hstring Name()   const    { return to_hstring(L"Name"); }
        hstring Asset() const     { return to_hstring(L"Asset"); }


        void Asset(hstring v) {}
        void Name(hstring v) {}



    };
}

namespace winrt::App1::factory_implementation
{
    struct ItemsViewModel : ItemsViewModelT<ItemsViewModel, implementation::ItemsViewModel>
    {
    };

    struct Item : ItemT<Item, implementation::Item>
    {
    };
}