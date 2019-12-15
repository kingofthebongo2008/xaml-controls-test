#pragma once

#include "DesignsPage.g.h"


namespace winrt::App1::implementation
{
    struct DesignsPage : DesignsPageT<DesignsPage>
    {
        DesignsPage();

        int32_t MyProperty();
        void MyProperty(int32_t value);
    };
}

namespace winrt::App1::factory_implementation
{
    struct DesignsPage : DesignsPageT<DesignsPage, implementation::DesignsPage>
    {
    };
}
