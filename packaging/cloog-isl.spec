%define keepstatic 1

Name:           cloog-isl-static
Version:        0.18.1
Release:        0
Summary:        The Chunky Loop Generator
License:        GPL-2.0+
Group:          Development/Toolchain
Url:            http://www.cloog.org/
Source:         cloog-%{version}.tar.gz
Source1:        baselibs.conf
BuildRequires:  libtool
BuildRequires:  gmp-static
BuildRequires:  isl-static

%description
CLooG is a free software and library to generate code for scanning
Z-polyhedra. It is used by the GCC Graphite optimization framework.

%prep
%setup -q -n cloog-%{version}

%build
%configure --with-isl=system --enable-static --disable-shared
make %{_smp_mflags}

%check
make %{_smp_mflags} check

%install
%make_install
rm %{buildroot}%{_bindir}/cloog

%files
%defattr(-,root,root,-)
%{_includedir}/cloog
%{_libdir}/libcloog-isl.a
%{_libdir}/pkgconfig/*.pc

%changelog
