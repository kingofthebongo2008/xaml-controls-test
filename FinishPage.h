#pragma once

#include "FinishPage.g.h"

namespace winrt::App1::implementation
{
    struct FinishPage : FinishPageT<FinishPage>
    {
        FinishPage();

        int32_t MyProperty();
        void MyProperty(int32_t value);
    };
}

namespace winrt::App1::factory_implementation
{
    struct FinishPage : FinishPageT<FinishPage, implementation::FinishPage>
    {
    };
}
