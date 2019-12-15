#include "pch.h"
#include "MainPage.h"
#include "FinishPage.h"
#include "DesignsPage.h"
#include "MainPage.g.cpp"


namespace winrt::App1::implementation
{
    using namespace winrt;
    using namespace Microsoft::UI::Xaml;
    using namespace Microsoft::UI::Xaml::Interop;
    using namespace Microsoft::UI::Xaml::Controls;
    using namespace winrt::Windows::Foundation;


    MainPage::MainPage()
    {
        InitializeComponent();
    }

    int32_t MainPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void MainPage::NavigationView_SelectionChanged(IInspectable const&, Microsoft::UI::Xaml::Controls::NavigationViewSelectionChangedEventArgs  const& e)
    {
        {
            if (e.SelectedItem())
            {
               NavigationViewItem item = e.SelectedItem().try_as<NavigationViewItem>();
               auto tag = item.Name();

               if ( tag == L"Finish" )
               {
                   ContentFrame().Navigate(xaml_typename<App1::FinishPage>());
               }
               else
               {
                   ContentFrame().Navigate(xaml_typename<App1::DesignsPage>());
               }
            }
        }
    }
}
