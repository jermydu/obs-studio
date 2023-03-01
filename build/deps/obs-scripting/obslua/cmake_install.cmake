# Install script for directory: D:/sourcecode/obs/obs-studio/deps/obs-scripting/obslua

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "obslua_Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/obs-scripting/64bit" TYPE MODULE FILES "D:/sourcecode/obs/obs-studio/build/deps/obs-scripting/obslua/Debug/obslua.dll")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/obs-scripting/64bit" TYPE MODULE FILES "D:/sourcecode/obs/obs-studio/build/deps/obs-scripting/obslua/Release/obslua.dll")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/obs-scripting/64bit" TYPE MODULE FILES "D:/sourcecode/obs/obs-studio/build/deps/obs-scripting/obslua/MinSizeRel/obslua.dll")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/obs-scripting/64bit" TYPE MODULE FILES "D:/sourcecode/obs/obs-studio/build/deps/obs-scripting/obslua/RelWithDebInfo/obslua.dll")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "obs_obslua")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/obs-scripting/64bit" TYPE MODULE FILES "D:/sourcecode/obs/obs-studio/build/deps/obs-scripting/obslua/Debug/obslua.dll")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/obs-scripting/64bit" TYPE MODULE FILES "D:/sourcecode/obs/obs-studio/build/deps/obs-scripting/obslua/Release/obslua.dll")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/obs-scripting/64bit" TYPE MODULE FILES "D:/sourcecode/obs/obs-studio/build/deps/obs-scripting/obslua/MinSizeRel/obslua.dll")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/obs-scripting/64bit" TYPE MODULE FILES "D:/sourcecode/obs/obs-studio/build/deps/obs-scripting/obslua/RelWithDebInfo/obslua.dll")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "obs_obslua")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/obs-scripting/64bit" TYPE FILE OPTIONAL FILES "D:/sourcecode/obs/obs-studio/build/deps/obs-scripting/obslua/Debug/obslua.pdb")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/obs-scripting/64bit" TYPE FILE OPTIONAL FILES "D:/sourcecode/obs/obs-studio/build/deps/obs-scripting/obslua/RelWithDebInfo/obslua.pdb")
  endif()
endif()

