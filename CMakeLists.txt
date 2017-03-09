cmake_minimum_required(VERSION 3.3)
project(ProgressBar)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(wxWidgets_CONFIGURATION mswu)
set(SOURCE_FILES  ProgressBar.cpp ProgressBar.h ResourceFile.h Observer.h Subject.h FilesQueue.h
        ProgBarApp.cpp ProgBarApp.h ProgBarMain.cpp ProgBarMain.h GUIFrame.cpp GUIFrame.h)
find_package(wxWidgets COMPONENTS core base REQUIRED)
include(${wxWidgets_USE_FILE})
add_executable(ProgressBar ${SOURCE_FILES})

target_link_libraries(${PROJECT_NAME} ${wxWidgets_LIBRARIES})