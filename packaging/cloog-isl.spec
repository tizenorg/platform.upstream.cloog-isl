%define keepstatic 1

Name:           cloog-isl
Version:        0.18.0
Release:        0
Summary:        The Chunky Loop Generator
License:        GPL-2.0+
Group:          Development/Toolchain
Url:            http://www.cloog.org/
Source:         cloog-%{version}.tar.gz
Source1:        baselibs.conf
BuildRequires:  libtool
BuildRequires:  gmp-devel
BuildRequires:  isl-devel

%description
CLooG is a free software and library to generate code for scanning
Z-polyhedra. It is used by the GCC Graphite optimization framework.

%package devel
Summary:        Development tools for CLOOG
Requires:       libcloog-isl = %{version}-%{release}

%description devel
Development tools and headers for the Chunky Loop Generator.

%package -n libcloog-isl
Summary:        The CLOOG shared library

%description -n libcloog-isl
The shared library for the Chunky Loop Generator.


%prep
%setup -q -n cloog-%{version}

%build
%configure --with-isl=system --disable-static
make %{_smp_mflags}

%check
make %{_smp_mflags} check

%install
%make_install

%post -n libcloog-isl -p /sbin/ldconfig

%postun -n libcloog-isl -p /sbin/ldconfig


%files
%license LICENSE
%defattr(-,root,root,-)
%{_bindir}/cloog

%files -n libcloog-isl
%license LICENSE
%defattr(-,root,root,-)
%{_libdir}/libcloog-isl.so.*


%files devel
%defattr(-,root,root,-)
%{_includedir}/cloog
%{_libdir}/libcloog-isl.so
%{_libdir}/pkgconfig/*.pc

%changelog
