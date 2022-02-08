// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210806.1

#pragma once
#ifndef WINRT_Microsoft_UI_Composition_Core_0_H
#define WINRT_Microsoft_UI_Composition_Core_0_H
WINRT_EXPORT namespace winrt::Microsoft::UI::Composition
{
    struct Compositor;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Microsoft::UI::Composition::Core
{
    struct ICompositorController;
    struct CompositorController;
}
namespace winrt::impl
{
    template <> struct category<winrt::Microsoft::UI::Composition::Core::ICompositorController>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Composition::Core::CompositorController>{ using type = class_category; };
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Composition::Core::CompositorController> = L"Microsoft.UI.Composition.Core.CompositorController";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Composition::Core::ICompositorController> = L"Microsoft.UI.Composition.Core.ICompositorController";
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Composition::Core::ICompositorController>{ 0xCC107CDC,0x558F,0x5D1A,{ 0x96,0xA5,0xA7,0x35,0xAC,0x04,0x38,0x6B } }; // CC107CDC-558F-5D1A-96A5-A735AC04386B
    template <> struct default_interface<winrt::Microsoft::UI::Composition::Core::CompositorController>{ using type = winrt::Microsoft::UI::Composition::Core::ICompositorController; };
    template <> struct abi<winrt::Microsoft::UI::Composition::Core::ICompositorController>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Compositor(void**) noexcept = 0;
            virtual int32_t __stdcall Commit() noexcept = 0;
            virtual int32_t __stdcall EnsurePreviousCommitCompletedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall add_CommitNeeded(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CommitNeeded(winrt::event_token) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Microsoft_UI_Composition_Core_ICompositorController
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Microsoft::UI::Composition::Compositor) Compositor() const;
        WINRT_IMPL_AUTO(void) Commit() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) EnsurePreviousCommitCompletedAsync() const;
        WINRT_IMPL_AUTO(winrt::event_token) CommitNeeded(winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::UI::Composition::Core::CompositorController, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using CommitNeeded_revoker = impl::event_revoker<winrt::Microsoft::UI::Composition::Core::ICompositorController, &impl::abi_t<winrt::Microsoft::UI::Composition::Core::ICompositorController>::remove_CommitNeeded>;
        [[nodiscard]] CommitNeeded_revoker CommitNeeded(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::UI::Composition::Core::CompositorController, winrt::Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) CommitNeeded(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Microsoft::UI::Composition::Core::ICompositorController>
    {
        template <typename D> using type = consume_Microsoft_UI_Composition_Core_ICompositorController<D>;
    };
}
#endif
