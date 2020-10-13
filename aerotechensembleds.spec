Summary: 	Tango Device for Aerotech Ensemble
Name:    	tangods-aerotechensemble
Version: 	1.0.0
Release:	1%{?dist}.maxlab
License:	GPL
URL:		https://gitlab.maxiv.lu.se/kits-maxiv/dev-soleil-aerotechensemble
BuildRequires:	libyat-devel
BuildRequires: 	libyat4tango-devel
BuildRequires: 	libtango9-devel
BuildRequires: 	cppzmq-devel
Requires:	libyat
Requires:	libyat4tango
Requires:	libtango9
AutoReqProv:	no
Source:         %{name}-%{version}.tar.gz

%description
Tango Device for Aerotech Ensemble


%prep
%setup -q
make clean

%build
make all

%install
mkdir -p %{buildroot}/%{_bindir}
mv EnsembleDS %{buildroot}/%{_bindir}

%clean
make clean
[ -z %{buildroot} ] || rm -rf %{buildroot}

%post

%postun

%files
%defattr (-,root,root,755)
%{_bindir}/*

