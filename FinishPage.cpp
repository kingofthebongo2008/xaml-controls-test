#include "pch.h"
#include "FinishPage.h"
#include "FinishPage.g.cpp"

namespace winrt::App1::implementation
{
    using namespace winrt;
    using namespace Microsoft::UI::Xaml;

    FinishPage::FinishPage()
    {
        InitializeComponent();
    }

    int32_t FinishPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void FinishPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }
}
