
####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was libobsConfig.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

macro(check_required_components _NAME)
  foreach(comp ${${_NAME}_FIND_COMPONENTS})
    if(NOT ${_NAME}_${comp}_FOUND)
      if(${_NAME}_FIND_REQUIRED_${comp})
        set(${_NAME}_FOUND FALSE)
      endif()
    endif()
  endforeach()
endmacro()

####################################################################################

include(CMakeFindDependencyMacro)

if(MSVC)
  find_dependency(w32-pthreads REQUIRED)
endif()
find_dependency(Threads REQUIRED)

include("${CMAKE_CURRENT_LIST_DIR}/libobsTargets.cmake")
check_required_components("libobs")

set(LIBOBS_PLUGIN_DESTINATION "${PACKAGE_PREFIX_DIR}/obs-plugins/64bit")
set(LIBOBS_PLUGIN_DATA_DESTINATION "${PACKAGE_PREFIX_DIR}/data/obs-plugins")

set(LIBOBS_LIBRARIES libobs)
