# Install script for directory: C:/SRO/Filters/SRO_DEVKIT/source

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/SRO_DevKit")
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
  # Include the install script for each subdirectory.
  include("C:/SRO/Filters/SRO_DEVKIT/helpers/source/libs/BSLib/cmake_install.cmake")
  include("C:/SRO/Filters/SRO_DEVKIT/helpers/source/libs/ClientNet/cmake_install.cmake")
  include("C:/SRO/Filters/SRO_DEVKIT/helpers/source/libs/ClientLib/cmake_install.cmake")
  include("C:/SRO/Filters/SRO_DEVKIT/helpers/source/libs/DiscordRichPresence/cmake_install.cmake")
  include("C:/SRO/Filters/SRO_DEVKIT/helpers/source/libs/GFX3DFunction/cmake_install.cmake")
  include("C:/SRO/Filters/SRO_DEVKIT/helpers/source/libs/GFXFileManagerLIB/cmake_install.cmake")
  include("C:/SRO/Filters/SRO_DEVKIT/helpers/source/libs/GFXMainFrame/cmake_install.cmake")
  include("C:/SRO/Filters/SRO_DEVKIT/helpers/source/libs/NavMesh/cmake_install.cmake")
  include("C:/SRO/Filters/SRO_DEVKIT/helpers/source/libs/SimpleViewer/cmake_install.cmake")
  include("C:/SRO/Filters/SRO_DEVKIT/helpers/source/libs/MathHelpers/cmake_install.cmake")
  include("C:/SRO/Filters/SRO_DEVKIT/helpers/source/libs/TypeId/cmake_install.cmake")
  include("C:/SRO/Filters/SRO_DEVKIT/helpers/source/tests/cmake_install.cmake")
  include("C:/SRO/Filters/SRO_DEVKIT/helpers/source/third-party/remodel/cmake_install.cmake")
  include("C:/SRO/Filters/SRO_DEVKIT/helpers/source/third-party/memory/cmake_install.cmake")
  include("C:/SRO/Filters/SRO_DEVKIT/helpers/source/third-party/imgui/cmake_install.cmake")
  include("C:/SRO/Filters/SRO_DEVKIT/helpers/source/third-party/abi-testing/cmake_install.cmake")
  include("C:/SRO/Filters/SRO_DEVKIT/helpers/source/third-party/ghidra/cmake_install.cmake")
  include("C:/SRO/Filters/SRO_DEVKIT/helpers/source/DevKit_DLL/cmake_install.cmake")

endif()

