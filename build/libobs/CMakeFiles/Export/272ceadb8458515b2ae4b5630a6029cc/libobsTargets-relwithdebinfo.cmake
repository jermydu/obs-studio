#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "OBS::libobs" for configuration "RelWithDebInfo"
set_property(TARGET OBS::libobs APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(OBS::libobs PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "${_IMPORT_PREFIX}/bin/64bit/obs.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELWITHDEBINFO "OBS::w32-pthreads"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/bin/64bit/obs.dll"
  )

list(APPEND _cmake_import_check_targets OBS::libobs )
list(APPEND _cmake_import_check_files_for_OBS::libobs "${_IMPORT_PREFIX}/bin/64bit/obs.lib" "${_IMPORT_PREFIX}/bin/64bit/obs.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
