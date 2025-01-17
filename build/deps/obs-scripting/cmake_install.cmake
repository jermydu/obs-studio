# Install script for directory: D:/sourcecode/obs/obs-studio/deps/obs-scripting

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "D:/sourcecode/obs/obs-studio/build/rundir")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/sourcecode/obs/obs-studio/build/deps/obs-scripting/obslua/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/sourcecode/obs/obs-studio/build/deps/obs-scripting/obspython/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "obs-scripting_Development" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/64bit" TYPE STATIC_LIBRARY OPTIONAL FILES "D:/sourcecode/obs/obs-studio/build/deps/obs-scripting/Debug/obs-scripting.lib")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/64bit" TYPE STATIC_LIBRARY OPTIONAL FILES "D:/sourcecode/obs/obs-studio/build/deps/obs-scripting/Release/obs-scripting.lib")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/64bit" TYPE STATIC_LIBRARY OPTIONAL FILES "D:/sourcecode/obs/obs-studio/build/deps/obs-scripting/MinSizeRel/obs-scripting.lib")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/64bit" TYPE STATIC_LIBRARY OPTIONAL FILES "D:/sourcecode/obs/obs-studio/build/deps/obs-scripting/RelWithDebInfo/obs-scripting.lib")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "obs-scripting_Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/64bit" TYPE SHARED_LIBRARY FILES "D:/sourcecode/obs/obs-studio/build/deps/obs-scripting/Debug/obs-scripting.dll")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/64bit" TYPE SHARED_LIBRARY FILES "D:/sourcecode/obs/obs-studio/build/deps/obs-scripting/Release/obs-scripting.dll")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/64bit" TYPE SHARED_LIBRARY FILES "D:/sourcecode/obs/obs-studio/build/deps/obs-scripting/MinSizeRel/obs-scripting.dll")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/64bit" TYPE SHARED_LIBRARY FILES "D:/sourcecode/obs/obs-studio/build/deps/obs-scripting/RelWithDebInfo/obs-scripting.dll")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "obs_obs-scripting")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/64bit" TYPE SHARED_LIBRARY FILES "D:/sourcecode/obs/obs-studio/build/deps/obs-scripting/Debug/obs-scripting.dll")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/64bit" TYPE SHARED_LIBRARY FILES "D:/sourcecode/obs/obs-studio/build/deps/obs-scripting/Release/obs-scripting.dll")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/64bit" TYPE SHARED_LIBRARY FILES "D:/sourcecode/obs/obs-studio/build/deps/obs-scripting/MinSizeRel/obs-scripting.dll")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/64bit" TYPE SHARED_LIBRARY FILES "D:/sourcecode/obs/obs-studio/build/deps/obs-scripting/RelWithDebInfo/obs-scripting.dll")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "obs-scripting_Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/64bit" TYPE FILE OPTIONAL FILES "D:/sourcecode/obs/obs-studio/build/deps/obs-scripting/Debug/obs-scripting.pdb")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/64bit" TYPE FILE OPTIONAL FILES "D:/sourcecode/obs/obs-studio/build/deps/obs-scripting/RelWithDebInfo/obs-scripting.pdb")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "obs_obs-scripting")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/64bit" TYPE FILE OPTIONAL FILES "D:/sourcecode/obs/obs-studio/build/deps/obs-scripting/Debug/obs-scripting.pdb")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/64bit" TYPE FILE OPTIONAL FILES "D:/sourcecode/obs/obs-studio/build/deps/obs-scripting/RelWithDebInfo/obs-scripting.pdb")
  endif()
endif()

