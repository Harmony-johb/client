cmake_minimum_required(VERSION 3.27.0)

project(harmony)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)

# Request the required wxWidgets libs
find_package(wxWidgets COMPONENTS base core net xml gl media ribbon stc webview html aui xrc richtext qa REQUIRED)

# Include the wxWidgets use file to initialize various settings
include(${wxWidgets_USE_FILE})

# Define a variable containing a list of source files for the project
set(SRC_FILES 
    src/App.cpp
    src/MainFrame.cpp
    src/Persistance.cpp
    src/ServerList.cpp
    src/ConversationList.cpp
    src/ChatArea.cpp
    src/MessageList.cpp
    src/MessageWritingBox.cpp
)

# Define the build target for the executable
add_executable(${PROJECT_NAME} WIN32 MACOSX_BUNDLE ${SRC_FILES})

# Define include directory containing header files
target_include_directories(${PROJECT_NAME} PRIVATE include/model include/view)

# Link required libraries to the executable
target_link_libraries(${PROJECT_NAME} ${wxWidgets_LIBRARIES})
