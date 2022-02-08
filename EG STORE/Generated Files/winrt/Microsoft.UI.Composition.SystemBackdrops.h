// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210806.1

#pragma once
#ifndef WINRT_Microsoft_UI_Composition_SystemBackdrops_H
#define WINRT_Microsoft_UI_Composition_SystemBackdrops_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.210806.1"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.210806.1"
#include "winrt/Microsoft.UI.Composition.h"
#include "winrt/impl/Microsoft.UI.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.UI.Composition.2.h"
#include "winrt/impl/Windows.UI.Core.2.h"
#include "winrt/impl/Microsoft.UI.Composition.SystemBackdrops.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::UI::Color) consume_Microsoft_UI_Composition_SystemBackdrops_IDesktopAcrylicController<D>::FallbackColor() const
    {
        winrt::Windows::UI::Color value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Composition::SystemBackdrops::IDesktopAcrylicController)->get_FallbackColor(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Microsoft_UI_Composition_SystemBackdrops_IDesktopAcrylicController<D>::FallbackColor(winrt::Windows::UI::Color const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Composition::SystemBackdrops::IDesktopAcrylicController)->put_FallbackColor(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(float) consume_Microsoft_UI_Composition_SystemBackdrops_IDesktopAcrylicController<D>::LuminosityOpacity() const
    {
        float value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Composition::SystemBackdrops::IDesktopAcrylicController)->get_LuminosityOpacity(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Microsoft_UI_Composition_SystemBackdrops_IDesktopAcrylicController<D>::LuminosityOpacity(float value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Composition::SystemBackdrops::IDesktopAcrylicController)->put_LuminosityOpacity(value));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::UI::Color) consume_Microsoft_UI_Composition_SystemBackdrops_IDesktopAcrylicController<D>::TintColor() const
    {
        winrt::Windows::UI::Color value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Composition::SystemBackdrops::IDesktopAcrylicController)->get_TintColor(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Microsoft_UI_Composition_SystemBackdrops_IDesktopAcrylicController<D>::TintColor(winrt::Windows::UI::Color const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Composition::SystemBackdrops::IDesktopAcrylicController)->put_TintColor(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(float) consume_Microsoft_UI_Composition_SystemBackdrops_IDesktopAcrylicController<D>::TintOpacity() const
    {
        float value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Composition::SystemBackdrops::IDesktopAcrylicController)->get_TintOpacity(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Microsoft_UI_Composition_SystemBackdrops_IDesktopAcrylicController<D>::TintOpacity(float value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Composition::SystemBackdrops::IDesktopAcrylicController)->put_TintOpacity(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Microsoft_UI_Composition_SystemBackdrops_IDesktopAcrylicControllerStatics<D>::IsSupported() const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Composition::SystemBackdrops::IDesktopAcrylicControllerStatics)->IsSupported(&result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::UI::Color) consume_Microsoft_UI_Composition_SystemBackdrops_IMicaController<D>::FallbackColor() const
    {
        winrt::Windows::UI::Color value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Composition::SystemBackdrops::IMicaController)->get_FallbackColor(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Microsoft_UI_Composition_SystemBackdrops_IMicaController<D>::FallbackColor(winrt::Windows::UI::Color const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Composition::SystemBackdrops::IMicaController)->put_FallbackColor(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(float) consume_Microsoft_UI_Composition_SystemBackdrops_IMicaController<D>::LuminosityOpacity() const
    {
        float value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Composition::SystemBackdrops::IMicaController)->get_LuminosityOpacity(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Microsoft_UI_Composition_SystemBackdrops_IMicaController<D>::LuminosityOpacity(float value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Composition::SystemBackdrops::IMicaController)->put_LuminosityOpacity(value));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::UI::Color) consume_Microsoft_UI_Composition_SystemBackdrops_IMicaController<D>::TintColor() const
    {
        winrt::Windows::UI::Color value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Composition::SystemBackdrops::IMicaController)->get_TintColor(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Microsoft_UI_Composition_SystemBackdrops_IMicaController<D>::TintColor(winrt::Windows::UI::Color const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Composition::SystemBackdrops::IMicaController)->put_TintColor(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(float) consume_Microsoft_UI_Composition_SystemBackdrops_IMicaController<D>::TintOpacity() const
    {
        float value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Composition::SystemBackdrops::IMicaController)->get_TintOpacity(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Microsoft_UI_Composition_SystemBackdrops_IMicaController<D>::TintOpacity(float value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Composition::SystemBackdrops::IMicaController)->put_TintOpacity(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Microsoft_UI_Composition_SystemBackdrops_IMicaControllerStatics<D>::IsSupported() const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Composition::SystemBackdrops::IMicaControllerStatics)->IsSupported(&result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Microsoft_UI_Composition_SystemBackdrops_ISystemBackdropController<D>::SetTarget(winrt::Microsoft::UI::WindowId const& windowId, winrt::Windows::UI::Composition::CompositionTarget const& desktopWindowTarget) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Composition::SystemBackdrops::ISystemBackdropController)->SetTargetWithWindowId(impl::bind_in(windowId), *(void**)(&desktopWindowTarget), &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Microsoft_UI_Composition_SystemBackdrops_ISystemBackdropController<D>::SetTarget(winrt::Windows::UI::Core::CoreWindow const& coreWindow, winrt::Windows::UI::Composition::CompositionTarget const& compositionTarget) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::UI::Composition::SystemBackdrops::ISystemBackdropController)->SetTargetWithCoreWindow(*(void**)(&coreWindow), *(void**)(&compositionTarget), &result));
        return result;
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Microsoft::UI::Composition::SystemBackdrops::IDesktopAcrylicController> : produce_base<D, winrt::Microsoft::UI::Composition::SystemBackdrops::IDesktopAcrylicController>
    {
        int32_t __stdcall get_FallbackColor(struct struct_Windows_UI_Color* value) noexcept final try
        {
            zero_abi<winrt::Windows::UI::Color>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Color>(this->shim().FallbackColor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_FallbackColor(struct struct_Windows_UI_Color value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FallbackColor(*reinterpret_cast<winrt::Windows::UI::Color const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LuminosityOpacity(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().LuminosityOpacity());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_LuminosityOpacity(float value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LuminosityOpacity(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TintColor(struct struct_Windows_UI_Color* value) noexcept final try
        {
            zero_abi<winrt::Windows::UI::Color>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Color>(this->shim().TintColor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TintColor(struct struct_Windows_UI_Color value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TintColor(*reinterpret_cast<winrt::Windows::UI::Color const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TintOpacity(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().TintOpacity());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TintOpacity(float value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TintOpacity(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Microsoft::UI::Composition::SystemBackdrops::IDesktopAcrylicControllerStatics> : produce_base<D, winrt::Microsoft::UI::Composition::SystemBackdrops::IDesktopAcrylicControllerStatics>
    {
        int32_t __stdcall IsSupported(bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Microsoft::UI::Composition::SystemBackdrops::IMicaController> : produce_base<D, winrt::Microsoft::UI::Composition::SystemBackdrops::IMicaController>
    {
        int32_t __stdcall get_FallbackColor(struct struct_Windows_UI_Color* value) noexcept final try
        {
            zero_abi<winrt::Windows::UI::Color>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Color>(this->shim().FallbackColor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_FallbackColor(struct struct_Windows_UI_Color value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FallbackColor(*reinterpret_cast<winrt::Windows::UI::Color const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LuminosityOpacity(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().LuminosityOpacity());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_LuminosityOpacity(float value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LuminosityOpacity(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TintColor(struct struct_Windows_UI_Color* value) noexcept final try
        {
            zero_abi<winrt::Windows::UI::Color>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Color>(this->shim().TintColor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TintColor(struct struct_Windows_UI_Color value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TintColor(*reinterpret_cast<winrt::Windows::UI::Color const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TintOpacity(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().TintOpacity());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TintOpacity(float value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TintOpacity(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Microsoft::UI::Composition::SystemBackdrops::IMicaControllerStatics> : produce_base<D, winrt::Microsoft::UI::Composition::SystemBackdrops::IMicaControllerStatics>
    {
        int32_t __stdcall IsSupported(bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, winrt::Microsoft::UI::Composition::SystemBackdrops::ISystemBackdropController> : produce_base<D, winrt::Microsoft::UI::Composition::SystemBackdrops::ISystemBackdropController>
    {
        int32_t __stdcall SetTargetWithWindowId(struct struct_Microsoft_UI_WindowId windowId, void* desktopWindowTarget, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().SetTarget(*reinterpret_cast<winrt::Microsoft::UI::WindowId const*>(&windowId), *reinterpret_cast<winrt::Windows::UI::Composition::CompositionTarget const*>(&desktopWindowTarget)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetTargetWithCoreWindow(void* coreWindow, void* compositionTarget, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().SetTarget(*reinterpret_cast<winrt::Windows::UI::Core::CoreWindow const*>(&coreWindow), *reinterpret_cast<winrt::Windows::UI::Composition::CompositionTarget const*>(&compositionTarget)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
WINRT_EXPORT namespace winrt::Microsoft::UI::Composition::SystemBackdrops
{
    inline DesktopAcrylicController::DesktopAcrylicController() :
        DesktopAcrylicController(impl::call_factory_cast<DesktopAcrylicController(*)(winrt::Windows::Foundation::IActivationFactory const&), DesktopAcrylicController>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<DesktopAcrylicController>(); }))
    {
    }
    inline auto DesktopAcrylicController::IsSupported()
    {
        return impl::call_factory_cast<bool(*)(IDesktopAcrylicControllerStatics const&), DesktopAcrylicController, IDesktopAcrylicControllerStatics>([](IDesktopAcrylicControllerStatics const& f) { return f.IsSupported(); });
    }
    inline MicaController::MicaController() :
        MicaController(impl::call_factory_cast<MicaController(*)(winrt::Windows::Foundation::IActivationFactory const&), MicaController>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<MicaController>(); }))
    {
    }
    inline auto MicaController::IsSupported()
    {
        return impl::call_factory_cast<bool(*)(IMicaControllerStatics const&), MicaController, IMicaControllerStatics>([](IMicaControllerStatics const& f) { return f.IsSupported(); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Microsoft::UI::Composition::SystemBackdrops::IDesktopAcrylicController> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::UI::Composition::SystemBackdrops::IDesktopAcrylicControllerStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::UI::Composition::SystemBackdrops::IMicaController> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::UI::Composition::SystemBackdrops::IMicaControllerStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::UI::Composition::SystemBackdrops::ISystemBackdropController> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::UI::Composition::SystemBackdrops::DesktopAcrylicController> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::UI::Composition::SystemBackdrops::MicaController> : winrt::impl::hash_base {};
#endif
}
#endif
