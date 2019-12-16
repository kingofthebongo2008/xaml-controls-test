#pragma once

#include "FinishPage.g.h"
#include "ItemsViewModel.g.h"

namespace winrt::App1::implementation
{
    struct FinishPage : FinishPageT<FinishPage>
    {
        FinishPage();

        App1::ItemsViewModel ViewModel() const;

        private:
        App1::ItemsViewModel m_ViewModel;
    };
}

namespace winrt::App1::factory_implementation
{
    struct FinishPage : FinishPageT<FinishPage, implementation::FinishPage>
    {
    };
}
