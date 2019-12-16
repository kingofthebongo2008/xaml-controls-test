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
        std::vector<App1::Item> items;

        m_Items = single_threaded_observable_vector(std::move(items));
        
        m_Items.Append(make<App1::implementation::Item>());
        m_Items.Append(make<App1::implementation::Item>());
    }

    Windows::Foundation::Collections::IObservableVector<App1::Item> ItemsViewModel::Items() const
    {
        return m_Items;
    }

    

    Item::Item()
    {

    }
}
