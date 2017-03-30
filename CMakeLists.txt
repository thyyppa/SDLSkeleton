cmake_minimum_required( VERSION 3.7 )
project( SDL2Skeleton )

set( CMAKE_CXX_STANDARD 11 )

include_directories( lib/ app/ )

add_definitions( -DWIDTH=800 )
add_definitions( -DHEIGHT=600 )
add_definitions( -DPROJECT_NAME="${PROJECT_NAME}" )
add_definitions( -DLANG=en )

set( LIB_FILES lib/app/App.h lib/app/App.cpp lib/app/color.h lib/app/coord.h lib/init/init_sdl.h lib/lang/lang.h lib/lang/en.h )
set( SOURCE_FILES main.cpp ${LIB_FILES} app/DemoApp.cpp app/DemoApp.h )
add_executable( ${PROJECT_NAME} ${SOURCE_FILES} )

find_package( SDL2 REQUIRED )
include_directories( ${SDL2_INCLUDE_DIRS} )
target_link_libraries( ${PROJECT_NAME} ${SDL2_LIBRARIES} )