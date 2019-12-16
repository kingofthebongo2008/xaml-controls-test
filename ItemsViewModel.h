#pragma once

#include "ItemsViewModel.g.h"
#include "Item.g.h"

namespace winrt::App1::implementation
{
    struct ItemsViewModel : ItemsViewModelT<ItemsViewModel>
    {
        ItemsViewModel();
     
    };

    struct Item : ItemT<Item>
    {
        Item();

        hstring Name()   const    { return to_hstring(L"Name"); }
        hstring Position() const  { return to_hstring(L"Position"); }


        void Position(hstring v) {}
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
