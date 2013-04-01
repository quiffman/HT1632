# - Try to find WiringPi
# Once done, this will define
#
#  WiringPi_FOUND - system has WiringPi
#  WiringPi_INCLUDE_DIRS - the WiringPi include directories
#  WiringPi_LIBRARIES - link these to use WiringPi

include(LibFindMacros)

# Use pkg-config to get hints about paths
libfind_pkg_check_modules(WiringPi_PKGCONF WiringPi)

# Include dir
find_path(WiringPi_INCLUDE_DIR
	NAMES wiringPi.h
	PATHS ${WiringPi_PKGCONF_INCLUDE_DIRS} /usr/local/include
	)

# Finally the library itself
find_library(WiringPi_LIBRARY
	NAMES wiringPi
	PATHS ${WiringPi_PKGCONF_LIBRARY_DIRS} /usr/local/lib
	)

# Set the include dir variables and the libraries and let libfind_process do the rest.
# NOTE: Singular variables for this library, plural for libraries this this lib depends on.
set(WiringPi_PROCESS_INCLUDES WiringPi_INCLUDE_DIR)
set(WiringPi_PROCESS_LIBS WiringPi_LIBRARY)
libfind_process(WiringPi)
