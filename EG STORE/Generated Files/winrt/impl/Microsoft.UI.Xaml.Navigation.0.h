// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210806.1

#pragma once
#ifndef WINRT_Microsoft_UI_Xaml_Navigation_0_H
#define WINRT_Microsoft_UI_Xaml_Navigation_0_H
WINRT_EXPORT namespace winrt::Microsoft::UI::Xaml
{
    struct DependencyProperty;
}
WINRT_EXPORT namespace winrt::Microsoft::UI::Xaml::Media::Animation
{
    struct NavigationTransitionInfo;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct HResult;
    struct Uri;
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Interop
{
    struct TypeName;
}
WINRT_EXPORT namespace winrt::Microsoft::UI::Xaml::Navigation
{
    enum class NavigationCacheMode : int32_t
    {
        Disabled = 0,
        Required = 1,
        Enabled = 2,
    };
    enum class NavigationMode : int32_t
    {
        New = 0,
        Back = 1,
        Forward = 2,
        Refresh = 3,
    };
    struct IFrameNavigationOptions;
    struct IFrameNavigationOptionsFactory;
    struct INavigatingCancelEventArgs;
    struct INavigationEventArgs;
    struct INavigationFailedEventArgs;
    struct IPageStackEntry;
    struct IPageStackEntryFactory;
    struct IPageStackEntryStatics;
    struct FrameNavigationOptions;
    struct NavigatingCancelEventArgs;
    struct NavigationEventArgs;
    struct NavigationFailedEventArgs;
    struct PageStackEntry;
    struct NavigatedEventHandler;
    struct NavigatingCancelEventHandler;
    struct NavigationFailedEventHandler;
    struct NavigationStoppedEventHandler;
}
namespace winrt::impl
{
    template <> struct category<winrt::Microsoft::UI::Xaml::Navigation::IFrameNavigationOptions>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Navigation::IFrameNavigationOptionsFactory>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Navigation::INavigatingCancelEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Navigation::INavigationEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Navigation::INavigationFailedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Navigation::IPageStackEntry>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Navigation::IPageStackEntryFactory>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Navigation::IPageStackEntryStatics>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Navigation::FrameNavigationOptions>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Navigation::NavigatingCancelEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Navigation::NavigationEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Navigation::NavigationFailedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Navigation::PageStackEntry>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Navigation::NavigationCacheMode>{ using type = enum_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Navigation::NavigationMode>{ using type = enum_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Navigation::NavigatedEventHandler>{ using type = delegate_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Navigation::NavigatingCancelEventHandler>{ using type = delegate_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Navigation::NavigationFailedEventHandler>{ using type = delegate_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Navigation::NavigationStoppedEventHandler>{ using type = delegate_category; };
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Navigation::FrameNavigationOptions> = L"Microsoft.UI.Xaml.Navigation.FrameNavigationOptions";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Navigation::NavigatingCancelEventArgs> = L"Microsoft.UI.Xaml.Navigation.NavigatingCancelEventArgs";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Navigation::NavigationEventArgs> = L"Microsoft.UI.Xaml.Navigation.NavigationEventArgs";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Navigation::NavigationFailedEventArgs> = L"Microsoft.UI.Xaml.Navigation.NavigationFailedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Navigation::PageStackEntry> = L"Microsoft.UI.Xaml.Navigation.PageStackEntry";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Navigation::NavigationCacheMode> = L"Microsoft.UI.Xaml.Navigation.NavigationCacheMode";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Navigation::NavigationMode> = L"Microsoft.UI.Xaml.Navigation.NavigationMode";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Navigation::IFrameNavigationOptions> = L"Microsoft.UI.Xaml.Navigation.IFrameNavigationOptions";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Navigation::IFrameNavigationOptionsFactory> = L"Microsoft.UI.Xaml.Navigation.IFrameNavigationOptionsFactory";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Navigation::INavigatingCancelEventArgs> = L"Microsoft.UI.Xaml.Navigation.INavigatingCancelEventArgs";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Navigation::INavigationEventArgs> = L"Microsoft.UI.Xaml.Navigation.INavigationEventArgs";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Navigation::INavigationFailedEventArgs> = L"Microsoft.UI.Xaml.Navigation.INavigationFailedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Navigation::IPageStackEntry> = L"Microsoft.UI.Xaml.Navigation.IPageStackEntry";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Navigation::IPageStackEntryFactory> = L"Microsoft.UI.Xaml.Navigation.IPageStackEntryFactory";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Navigation::IPageStackEntryStatics> = L"Microsoft.UI.Xaml.Navigation.IPageStackEntryStatics";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Navigation::NavigatedEventHandler> = L"Microsoft.UI.Xaml.Navigation.NavigatedEventHandler";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Navigation::NavigatingCancelEventHandler> = L"Microsoft.UI.Xaml.Navigation.NavigatingCancelEventHandler";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Navigation::NavigationFailedEventHandler> = L"Microsoft.UI.Xaml.Navigation.NavigationFailedEventHandler";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Navigation::NavigationStoppedEventHandler> = L"Microsoft.UI.Xaml.Navigation.NavigationStoppedEventHandler";
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Xaml::Navigation::IFrameNavigationOptions>{ 0x390DE593,0x14CF,0x5312,{ 0xAF,0x99,0x6C,0xD8,0xD5,0x9E,0xC5,0xD5 } }; // 390DE593-14CF-5312-AF99-6CD8D59EC5D5
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Xaml::Navigation::IFrameNavigationOptionsFactory>{ 0xDDF3F748,0x7127,0x5CEE,{ 0x9F,0x79,0xAC,0x28,0x1A,0x23,0x46,0x32 } }; // DDF3F748-7127-5CEE-9F79-AC281A234632
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Xaml::Navigation::INavigatingCancelEventArgs>{ 0x172FDE12,0xE06F,0x5DF6,{ 0x93,0x0E,0x5F,0xAC,0xF7,0xB3,0xFB,0xE7 } }; // 172FDE12-E06F-5DF6-930E-5FACF7B3FBE7
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Xaml::Navigation::INavigationEventArgs>{ 0x876B70B4,0x2923,0x5785,{ 0x9C,0xEA,0x2E,0x44,0xAA,0x07,0x61,0xBD } }; // 876B70B4-2923-5785-9CEA-2E44AA0761BD
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Xaml::Navigation::INavigationFailedEventArgs>{ 0xF808F9A0,0x130C,0x5974,{ 0x87,0xF8,0x44,0x33,0x27,0x1A,0x35,0xA9 } }; // F808F9A0-130C-5974-87F8-4433271A35A9
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Xaml::Navigation::IPageStackEntry>{ 0xD591F56E,0x4262,0x5C91,{ 0x9D,0x79,0x29,0x16,0x5C,0xD8,0x21,0x00 } }; // D591F56E-4262-5C91-9D79-29165CD82100
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Xaml::Navigation::IPageStackEntryFactory>{ 0x7E5A9469,0x6108,0x5E92,{ 0xA4,0x99,0x5E,0xE9,0xF0,0x65,0xA6,0x8A } }; // 7E5A9469-6108-5E92-A499-5EE9F065A68A
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Xaml::Navigation::IPageStackEntryStatics>{ 0x2F1D4CB7,0x923B,0x59BB,{ 0xBF,0xC4,0x75,0x09,0x33,0xF2,0x83,0x85 } }; // 2F1D4CB7-923B-59BB-BFC4-750933F28385
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Xaml::Navigation::NavigatedEventHandler>{ 0x8631B517,0x6D8E,0x58EE,{ 0x82,0xFE,0xD4,0x03,0x4D,0x1B,0xD7,0xC1 } }; // 8631B517-6D8E-58EE-82FE-D4034D1BD7C1
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Xaml::Navigation::NavigatingCancelEventHandler>{ 0xFCAE1401,0xEC94,0x565F,{ 0x9F,0x48,0x7C,0x4B,0x62,0x72,0xB3,0xB1 } }; // FCAE1401-EC94-565F-9F48-7C4B6272B3B1
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Xaml::Navigation::NavigationFailedEventHandler>{ 0x97CA2B56,0xD6EB,0x5FD2,{ 0xA6,0x75,0xA3,0x39,0x64,0x0E,0xED,0xBA } }; // 97CA2B56-D6EB-5FD2-A675-A339640EEDBA
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Xaml::Navigation::NavigationStoppedEventHandler>{ 0xB9E796A6,0x7FFE,0x5A63,{ 0xAE,0xF4,0xCB,0xC3,0x31,0x66,0x3B,0x66 } }; // B9E796A6-7FFE-5A63-AEF4-CBC331663B66
    template <> struct default_interface<winrt::Microsoft::UI::Xaml::Navigation::FrameNavigationOptions>{ using type = winrt::Microsoft::UI::Xaml::Navigation::IFrameNavigationOptions; };
    template <> struct default_interface<winrt::Microsoft::UI::Xaml::Navigation::NavigatingCancelEventArgs>{ using type = winrt::Microsoft::UI::Xaml::Navigation::INavigatingCancelEventArgs; };
    template <> struct default_interface<winrt::Microsoft::UI::Xaml::Navigation::NavigationEventArgs>{ using type = winrt::Microsoft::UI::Xaml::Navigation::INavigationEventArgs; };
    template <> struct default_interface<winrt::Microsoft::UI::Xaml::Navigation::NavigationFailedEventArgs>{ using type = winrt::Microsoft::UI::Xaml::Navigation::INavigationFailedEventArgs; };
    template <> struct default_interface<winrt::Microsoft::UI::Xaml::Navigation::PageStackEntry>{ using type = winrt::Microsoft::UI::Xaml::Navigation::IPageStackEntry; };
    template <> struct abi<winrt::Microsoft::UI::Xaml::Navigation::IFrameNavigationOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsNavigationStackEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsNavigationStackEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_TransitionInfoOverride(void**) noexcept = 0;
            virtual int32_t __stdcall put_TransitionInfoOverride(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Xaml::Navigation::IFrameNavigationOptionsFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Xaml::Navigation::INavigatingCancelEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Cancel(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Cancel(bool) noexcept = 0;
            virtual int32_t __stdcall get_NavigationMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SourcePageType(struct struct_Windows_UI_Xaml_Interop_TypeName*) noexcept = 0;
            virtual int32_t __stdcall get_Parameter(void**) noexcept = 0;
            virtual int32_t __stdcall get_NavigationTransitionInfo(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Xaml::Navigation::INavigationEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Content(void**) noexcept = 0;
            virtual int32_t __stdcall get_Parameter(void**) noexcept = 0;
            virtual int32_t __stdcall get_NavigationTransitionInfo(void**) noexcept = 0;
            virtual int32_t __stdcall get_SourcePageType(struct struct_Windows_UI_Xaml_Interop_TypeName*) noexcept = 0;
            virtual int32_t __stdcall get_NavigationMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
            virtual int32_t __stdcall put_Uri(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Xaml::Navigation::INavigationFailedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Exception(winrt::hresult*) noexcept = 0;
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
            virtual int32_t __stdcall get_SourcePageType(struct struct_Windows_UI_Xaml_Interop_TypeName*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Xaml::Navigation::IPageStackEntry>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SourcePageType(struct struct_Windows_UI_Xaml_Interop_TypeName*) noexcept = 0;
            virtual int32_t __stdcall get_Parameter(void**) noexcept = 0;
            virtual int32_t __stdcall get_NavigationTransitionInfo(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Xaml::Navigation::IPageStackEntryFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(struct struct_Windows_UI_Xaml_Interop_TypeName, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Xaml::Navigation::IPageStackEntryStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SourcePageTypeProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Xaml::Navigation::NavigatedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Xaml::Navigation::NavigatingCancelEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Xaml::Navigation::NavigationFailedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Xaml::Navigation::NavigationStoppedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Microsoft_UI_Xaml_Navigation_IFrameNavigationOptions
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsNavigationStackEnabled() const;
        WINRT_IMPL_AUTO(void) IsNavigationStackEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Microsoft::UI::Xaml::Media::Animation::NavigationTransitionInfo) TransitionInfoOverride() const;
        WINRT_IMPL_AUTO(void) TransitionInfoOverride(winrt::Microsoft::UI::Xaml::Media::Animation::NavigationTransitionInfo const& value) const;
    };
    template <> struct consume<winrt::Microsoft::UI::Xaml::Navigation::IFrameNavigationOptions>
    {
        template <typename D> using type = consume_Microsoft_UI_Xaml_Navigation_IFrameNavigationOptions<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_Xaml_Navigation_IFrameNavigationOptionsFactory
    {
        WINRT_IMPL_AUTO(winrt::Microsoft::UI::Xaml::Navigation::FrameNavigationOptions) CreateInstance(winrt::Windows::Foundation::IInspectable const& baseInterface, winrt::Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<winrt::Microsoft::UI::Xaml::Navigation::IFrameNavigationOptionsFactory>
    {
        template <typename D> using type = consume_Microsoft_UI_Xaml_Navigation_IFrameNavigationOptionsFactory<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_Xaml_Navigation_INavigatingCancelEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Cancel() const;
        WINRT_IMPL_AUTO(void) Cancel(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Microsoft::UI::Xaml::Navigation::NavigationMode) NavigationMode() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Interop::TypeName) SourcePageType() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::IInspectable) Parameter() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Microsoft::UI::Xaml::Media::Animation::NavigationTransitionInfo) NavigationTransitionInfo() const;
    };
    template <> struct consume<winrt::Microsoft::UI::Xaml::Navigation::INavigatingCancelEventArgs>
    {
        template <typename D> using type = consume_Microsoft_UI_Xaml_Navigation_INavigatingCancelEventArgs<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_Xaml_Navigation_INavigationEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::IInspectable) Content() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::IInspectable) Parameter() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Microsoft::UI::Xaml::Media::Animation::NavigationTransitionInfo) NavigationTransitionInfo() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Interop::TypeName) SourcePageType() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Microsoft::UI::Xaml::Navigation::NavigationMode) NavigationMode() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Uri) Uri() const;
        WINRT_IMPL_AUTO(void) Uri(winrt::Windows::Foundation::Uri const& value) const;
    };
    template <> struct consume<winrt::Microsoft::UI::Xaml::Navigation::INavigationEventArgs>
    {
        template <typename D> using type = consume_Microsoft_UI_Xaml_Navigation_INavigationEventArgs<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_Xaml_Navigation_INavigationFailedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::hresult) Exception() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Handled() const;
        WINRT_IMPL_AUTO(void) Handled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Interop::TypeName) SourcePageType() const;
    };
    template <> struct consume<winrt::Microsoft::UI::Xaml::Navigation::INavigationFailedEventArgs>
    {
        template <typename D> using type = consume_Microsoft_UI_Xaml_Navigation_INavigationFailedEventArgs<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_Xaml_Navigation_IPageStackEntry
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Interop::TypeName) SourcePageType() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::IInspectable) Parameter() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Microsoft::UI::Xaml::Media::Animation::NavigationTransitionInfo) NavigationTransitionInfo() const;
    };
    template <> struct consume<winrt::Microsoft::UI::Xaml::Navigation::IPageStackEntry>
    {
        template <typename D> using type = consume_Microsoft_UI_Xaml_Navigation_IPageStackEntry<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_Xaml_Navigation_IPageStackEntryFactory
    {
        WINRT_IMPL_AUTO(winrt::Microsoft::UI::Xaml::Navigation::PageStackEntry) CreateInstance(winrt::Windows::UI::Xaml::Interop::TypeName const& sourcePageType, winrt::Windows::Foundation::IInspectable const& parameter, winrt::Microsoft::UI::Xaml::Media::Animation::NavigationTransitionInfo const& navigationTransitionInfo) const;
    };
    template <> struct consume<winrt::Microsoft::UI::Xaml::Navigation::IPageStackEntryFactory>
    {
        template <typename D> using type = consume_Microsoft_UI_Xaml_Navigation_IPageStackEntryFactory<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_Xaml_Navigation_IPageStackEntryStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Microsoft::UI::Xaml::DependencyProperty) SourcePageTypeProperty() const;
    };
    template <> struct consume<winrt::Microsoft::UI::Xaml::Navigation::IPageStackEntryStatics>
    {
        template <typename D> using type = consume_Microsoft_UI_Xaml_Navigation_IPageStackEntryStatics<D>;
    };
}
#endif
