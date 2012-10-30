Name:           cloog
Version:        0.15.10+ppl
Release:        0
Summary:        The Chunky Loop Generator
License:        GPL-2.0+
Group:          Development/Languages/C and C++
Url:            http://www.cloog.org/
Source:         cloog-ppl-0.15.10.tar.bz2
Source1:        baselibs.conf
BuildRequires:  libtool
BuildRequires:  ppl-devel

%description
CLooG is a free software and library to generate code for scanning
Z-polyhedra. It is used by the GCC Graphite optimization framework.

%package devel
Summary:        Development tools for CLOOG
Group:          Development/Languages/C and C++
Requires:       libcloog = %{version}-%{release}

%description devel
Development tools and headers for the Chunky Loop Generator.

%package -n libcloog
Summary:        The CLOOG shared library
Group:          Development/Languages/C and C++

%description -n libcloog
The shared library for the Chunky Loop Generator.

%prep
%setup -q -n cloog-ppl-0.15.10

%build
./autogen.sh
%configure --with-ppl
make %{_smp_mflags}

%check
make %{_smp_mflags} check

%install
%make_install

%post -n libcloog -p /sbin/ldconfig

%postun -n libcloog -p /sbin/ldconfig

%files
%defattr(-,root,root,-)
%{_bindir}/cloog
%doc %{_infodir}/cloog.info*gz

%files -n libcloog
%defattr(-,root,root,-)
%{_libdir}/libcloog.so.*

%files devel
%defattr(-,root,root,-)
%{_includedir}/cloog
%{_libdir}/libcloog.so
%{_libdir}/libcloog.a

%changelog
