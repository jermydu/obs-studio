# Install script for directory: D:/sourcecode/obs/obs-studio/plugins/obs-ffmpeg/ffmpeg-mux

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "obs-ffmpeg-mux_Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/64bit" TYPE EXECUTABLE FILES "D:/sourcecode/obs/obs-studio/build/plugins/obs-ffmpeg/ffmpeg-mux/Debug/obs-ffmpeg-mux.exe")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/64bit" TYPE EXECUTABLE FILES "D:/sourcecode/obs/obs-studio/build/plugins/obs-ffmpeg/ffmpeg-mux/Release/obs-ffmpeg-mux.exe")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/64bit" TYPE EXECUTABLE FILES "D:/sourcecode/obs/obs-studio/build/plugins/obs-ffmpeg/ffmpeg-mux/MinSizeRel/obs-ffmpeg-mux.exe")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/64bit" TYPE EXECUTABLE FILES "D:/sourcecode/obs/obs-studio/build/plugins/obs-ffmpeg/ffmpeg-mux/RelWithDebInfo/obs-ffmpeg-mux.exe")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "obs_obs-ffmpeg-mux")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/64bit" TYPE EXECUTABLE FILES "D:/sourcecode/obs/obs-studio/build/plugins/obs-ffmpeg/ffmpeg-mux/Debug/obs-ffmpeg-mux.exe")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/64bit" TYPE EXECUTABLE FILES "D:/sourcecode/obs/obs-studio/build/plugins/obs-ffmpeg/ffmpeg-mux/Release/obs-ffmpeg-mux.exe")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/64bit" TYPE EXECUTABLE FILES "D:/sourcecode/obs/obs-studio/build/plugins/obs-ffmpeg/ffmpeg-mux/MinSizeRel/obs-ffmpeg-mux.exe")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/64bit" TYPE EXECUTABLE FILES "D:/sourcecode/obs/obs-studio/build/plugins/obs-ffmpeg/ffmpeg-mux/RelWithDebInfo/obs-ffmpeg-mux.exe")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "obs-ffmpeg-mux_Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/64bit" TYPE FILE OPTIONAL FILES "D:/sourcecode/obs/obs-studio/build/plugins/obs-ffmpeg/ffmpeg-mux/Debug/obs-ffmpeg-mux.pdb")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/64bit" TYPE FILE OPTIONAL FILES "D:/sourcecode/obs/obs-studio/build/plugins/obs-ffmpeg/ffmpeg-mux/RelWithDebInfo/obs-ffmpeg-mux.pdb")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "obs_obs-ffmpeg-mux")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/64bit" TYPE FILE OPTIONAL FILES "D:/sourcecode/obs/obs-studio/build/plugins/obs-ffmpeg/ffmpeg-mux/Debug/obs-ffmpeg-mux.pdb")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/64bit" TYPE FILE OPTIONAL FILES "D:/sourcecode/obs/obs-studio/build/plugins/obs-ffmpeg/ffmpeg-mux/RelWithDebInfo/obs-ffmpeg-mux.pdb")
  endif()
endif()

