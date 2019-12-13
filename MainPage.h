#pragma once

#include "MainPage.g.h"

namespace winrt::App1::implementation
{
    struct MainPage : MainPageT<MainPage>
    {
        MainPage();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void NavigationView_SelectionChanged(IInspectable const&, Microsoft::UI::Xaml::Controls::NavigationViewSelectionChangedEventArgs  const&);
    };
}

namespace winrt::App1::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {
    };
}
