# Executable name
set(EXE_NAME Singleton)

# Path to .hpp
set(INCROOT ${PROJECT_SOURCE_DIR}/include/Singleton)
# Path to .cpp
set(SRCROOT ${PROJECT_SOURCE_DIR}/src/Singleton) 

# SRC
set(SRC
	${INCROOT}/Singleton.hpp
	${SRCROOT}/Singleton.cpp
	${SRCROOT}/Main.cpp
)

# Executable
add_executable(${EXE_NAME} ${SRC})

# Include headers
target_include_directories(${EXE_NAME} PRIVATE ${INCROOT})

# If Linux
if(UNIX)
	target_link_libraries(${EXE_NAME} PRIVATE pthread)
endif(UNIX)
