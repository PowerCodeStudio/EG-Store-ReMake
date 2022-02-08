// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210806.1

#pragma once
#include "winrt/EG_STORE.h"
#include "winrt/Microsoft.UI.Xaml.h"
namespace winrt::EG_STORE::implementation
{
    template <typename D, typename... I>
    struct __declspec(empty_bases) MainWindow_base : implements<D, EG_STORE::MainWindow, composing, I...>,
        impl::require<D, winrt::Microsoft::UI::Xaml::IWindow>,
        impl::base<D, winrt::Microsoft::UI::Xaml::Window>
    {
        using base_type = MainWindow_base;
        using class_type = EG_STORE::MainWindow;
        using implements_type = typename MainWindow_base::implements_type;
        using implements_type::implements_type;
        using composable_base = winrt::Microsoft::UI::Xaml::Window;
        hstring GetRuntimeClassName() const
        {
            return L"EG_STORE.MainWindow";
        }
        MainWindow_base()
        {
            impl::call_factory<winrt::Microsoft::UI::Xaml::Window, winrt::Microsoft::UI::Xaml::IWindowFactory>([&](winrt::Microsoft::UI::Xaml::IWindowFactory const& f) { [[maybe_unused]] auto winrt_impl_discarded = f.CreateInstance(*this, this->m_inner); });
        }
    };
}
namespace winrt::EG_STORE::factory_implementation
{
    template <typename D, typename T, typename... I>
    struct __declspec(empty_bases) MainWindowT : implements<D, winrt::Windows::Foundation::IActivationFactory, I...>
    {
        using instance_type = EG_STORE::MainWindow;

        hstring GetRuntimeClassName() const
        {
            return L"EG_STORE.MainWindow";
        }
        auto ActivateInstance() const
        {
            return make<T>();
        }
    };
}

#if defined(WINRT_FORCE_INCLUDE_MAINWINDOW_XAML_G_H) || __has_include("MainWindow.xaml.g.h")
#include "MainWindow.xaml.g.h"
#else

namespace winrt::EG_STORE::implementation
{
    template <typename D, typename... I>
    using MainWindowT = MainWindow_base<D, I...>;
}

#endif