//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#pragma once


namespace winrt::EG_STORE::implementation
{
    using IInspectable = ::winrt::Windows::Foundation::IInspectable;

    template <typename D, typename ... I>
    struct MainWindowT : public ::winrt::EG_STORE::implementation::MainWindow_base<D,
        ::winrt::Microsoft::UI::Xaml::Markup::IComponentConnector,
        I...>
    {
        using base_type = typename MainWindowT::base_type;
        using base_type::base_type;
        using class_type = typename MainWindowT::class_type;

        void InitializeComponent();
        void Connect(int32_t connectionId, IInspectable const& target);
        ::winrt::Microsoft::UI::Xaml::Markup::IComponentConnector GetBindingConnector(int32_t connectionId, IInspectable const& target);
        void UnloadObject(::winrt::Microsoft::UI::Xaml::DependencyObject const& dependencyObject);
        void DisconnectUnloadedObject(int32_t connectionId);

        ::winrt::Microsoft::UI::Xaml::Controls::NavigationView NavView()
        {
            return _NavView;
        }
        void NavView(::winrt::Microsoft::UI::Xaml::Controls::NavigationView value)
        {
            _NavView = value;
        }

        ::winrt::Microsoft::UI::Xaml::Controls::NavigationViewItem Home()
        {
            return _Home;
        }
        void Home(::winrt::Microsoft::UI::Xaml::Controls::NavigationViewItem value)
        {
            _Home = value;
        }

        ::winrt::Microsoft::UI::Xaml::Controls::NavigationViewItem Apps()
        {
            return _Apps;
        }
        void Apps(::winrt::Microsoft::UI::Xaml::Controls::NavigationViewItem value)
        {
            _Apps = value;
        }

        ::winrt::Microsoft::UI::Xaml::Controls::NavigationViewItem Account()
        {
            return _Account;
        }
        void Account(::winrt::Microsoft::UI::Xaml::Controls::NavigationViewItem value)
        {
            _Account = value;
        }

        ::winrt::Microsoft::UI::Xaml::Controls::NavigationViewItem Downloads()
        {
            return _Downloads;
        }
        void Downloads(::winrt::Microsoft::UI::Xaml::Controls::NavigationViewItem value)
        {
            _Downloads = value;
        }

        ::winrt::Microsoft::UI::Xaml::Controls::StackPanel contentFrame()
        {
            return _contentFrame;
        }
        void contentFrame(::winrt::Microsoft::UI::Xaml::Controls::StackPanel value)
        {
            _contentFrame = value;
        }

        ::winrt::Microsoft::UI::Xaml::Controls::StackPanel spHome()
        {
            return _spHome;
        }
        void spHome(::winrt::Microsoft::UI::Xaml::Controls::StackPanel value)
        {
            _spHome = value;
        }

        ::winrt::Microsoft::UI::Xaml::Controls::StackPanel spApps()
        {
            return _spApps;
        }
        void spApps(::winrt::Microsoft::UI::Xaml::Controls::StackPanel value)
        {
            _spApps = value;
        }

        ::winrt::Microsoft::UI::Xaml::Controls::StackPanel spAccount()
        {
            return _spAccount;
        }
        void spAccount(::winrt::Microsoft::UI::Xaml::Controls::StackPanel value)
        {
            _spAccount = value;
        }

        ::winrt::Microsoft::UI::Xaml::Controls::StackPanel spDownloads()
        {
            return _spDownloads;
        }
        void spDownloads(::winrt::Microsoft::UI::Xaml::Controls::StackPanel value)
        {
            _spDownloads = value;
        }
        
    protected:
        bool _contentLoaded{false};

    private:
        struct MainWindow_obj1_Bindings;

        ::winrt::Microsoft::UI::Xaml::Controls::NavigationView _NavView{nullptr};
        ::winrt::Microsoft::UI::Xaml::Controls::NavigationViewItem _Home{nullptr};
        ::winrt::Microsoft::UI::Xaml::Controls::NavigationViewItem _Apps{nullptr};
        ::winrt::Microsoft::UI::Xaml::Controls::NavigationViewItem _Account{nullptr};
        ::winrt::Microsoft::UI::Xaml::Controls::NavigationViewItem _Downloads{nullptr};
        ::winrt::Microsoft::UI::Xaml::Controls::StackPanel _contentFrame{nullptr};
        ::winrt::Microsoft::UI::Xaml::Controls::StackPanel _spHome{nullptr};
        ::winrt::Microsoft::UI::Xaml::Controls::StackPanel _spApps{nullptr};
        ::winrt::Microsoft::UI::Xaml::Controls::StackPanel _spAccount{nullptr};
        ::winrt::Microsoft::UI::Xaml::Controls::StackPanel _spDownloads{nullptr};
    };
}

