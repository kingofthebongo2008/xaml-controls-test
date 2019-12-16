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

    App1::ItemsViewModel FinishPage::Items() const
    {
        return m_Items;
    }
}
