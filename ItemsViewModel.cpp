#include "pch.h"
#include "ItemsViewModel.h"
#include "ItemsViewModel.g.cpp"
#include "Item.g.cpp"

namespace winrt::App1::implementation
{
    using namespace winrt;
    using namespace Microsoft::UI::Xaml;

    ItemsViewModel::ItemsViewModel()
    {
        
    }

    Windows::Foundation::Collections::IObservableVector<App1::Item> ItemsViewModel::Items() const
    {
        return {};
    }

    

    Item::Item()
    {

    }
}
