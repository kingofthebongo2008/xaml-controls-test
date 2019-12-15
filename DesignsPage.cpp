#include "pch.h"
#include "DesignsPage.h"
#include "DesignsPage.g.cpp"

namespace winrt::App1::implementation
{
    using namespace winrt;
    using namespace Microsoft::UI::Xaml;

    DesignsPage::DesignsPage()
    {
        InitializeComponent();
    }

    int32_t DesignsPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void DesignsPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }
}
