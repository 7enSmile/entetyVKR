#################################################################################################
## File created by QxEntityEditor 1.2.6 (2021/03/24 12:12) : please, do NOT modify this file ! ##
#################################################################################################

cmake_minimum_required(VERSION 3.1)

project(department LANGUAGES CXX)

if(NOT TARGET QxOrm)
   add_subdirectory("C:/Qt/QxOrm/" ./QxOrm)
endif() # NOT TARGET QxOrm

include("C:/Qt/QxOrm/QxOrm.cmake")

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_DEBUG_POSTFIX "d")

set(DEPARTMENT_HEADERS
    ./include/department_precompiled_header.gen.h
    ./include/department_export.gen.h
    ./include/Activity.gen.h
    ./include/Collaboration.gen.h
    ./include/Employer.gen.h
    ./include/Task.gen.h
    ./include/Practice.gen.h
    ./custom/include/Activity.h
    ./custom/include/Collaboration.h
    ./custom/include/Employer.h
    ./custom/include/Task.h
    ./custom/include/Practice.h
   )

if(_QX_UNITY_BUILD)

   set(DEPARTMENT_SRCS ./src/department_all.gen.cpp)

else() # _QX_UNITY_BUILD

   set(DEPARTMENT_SRCS
       ./src/Activity.gen.cpp
       ./src/Collaboration.gen.cpp
       ./src/Employer.gen.cpp
       ./src/Task.gen.cpp
       ./src/Practice.gen.cpp
       ./custom/src/Activity.cpp
       ./custom/src/Collaboration.cpp
       ./custom/src/Employer.cpp
       ./custom/src/Task.cpp
       ./custom/src/Practice.cpp
       ./src/department_main.gen.cpp
      )

endif() # _QX_UNITY_BUILD

add_library(department SHARED ${DEPARTMENT_SRCS} ${DEPARTMENT_HEADERS})

target_compile_definitions(department PRIVATE -D_BUILDING_DEPARTMENT)

if(COMMAND target_precompile_headers)
   target_precompile_headers(department PRIVATE ./include/department_precompiled_header.gen.h)
endif() # (COMMAND target_precompile_headers)

target_link_libraries(department ${QX_LIBRARIES} QxOrm)

set_target_properties(department PROPERTIES
                      ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      LIBRARY_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      ARCHIVE_OUTPUT_DIRECTORY_DEBUG "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      LIBRARY_OUTPUT_DIRECTORY_DEBUG "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      RUNTIME_OUTPUT_DIRECTORY_DEBUG "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      ARCHIVE_OUTPUT_DIRECTORY_RELEASE "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      LIBRARY_OUTPUT_DIRECTORY_RELEASE "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      RUNTIME_OUTPUT_DIRECTORY_RELEASE "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      ARCHIVE_OUTPUT_DIRECTORY_MINSIZEREL "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      LIBRARY_OUTPUT_DIRECTORY_MINSIZEREL "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      RUNTIME_OUTPUT_DIRECTORY_MINSIZEREL "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      ARCHIVE_OUTPUT_DIRECTORY_RELWITHDEBINFO "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      LIBRARY_OUTPUT_DIRECTORY_RELWITHDEBINFO "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                      RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO "${CMAKE_CURRENT_SOURCE_DIR}/bin"
                     )

qx_auto_source_group("${DEPARTMENT_SRCS};${DEPARTMENT_HEADERS}")
