cmake_minimum_required(VERSION 3.8)
project(appvoyerdeploy)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF) 
option(BUILD_SHARED_LIBS "Build shared library" OFF) 

include_directories(	
	include  
) 

add_library(${PROJECT_NAME} 
	src/main.cpp
)
 
 if(${BUILD_SHARED_LIBS})	
	set_target_properties(${PROJECT_NAME} PROPERTIES DEFINE_SYMBOL APPVOYER_DEPLOY_EXTERN)
endif()

install (TARGETS ${PROJECT_NAME}  
	RUNTIME DESTINATION bin
	ARCHIVE DESTINATION lib
	LIBRARY DESTINATION lib
)

install (FILES 
	include/main.h 
	DESTINATION include
)

