cmake_minimum_required(VERSION 3.5)

set(LIBEV_SRC
  ev.c
  event.c)

IF(UNIX)
   SET(MY_MATH_LIB -lm)
ELSE(UNIX)
    SET(MY_MATH_LIB)
ENDIF(UNIX)

# Create a library called "Hello" which includes the source file "hello.cxx".
# The extension is already found. Any number of sources could be listed here.
add_library (libev STATIC ${LIBEV_SRC})

# Make sure the compiler can find include files for our Hello library
# when other libraries or executables link to Hello
target_include_directories (libev PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Add executable called "helloDemo" that is built from the source files
# "demo.cxx" and "demo_b.cxx". The extensions are automatically found.
add_executable (ev_timeout sample/ev_timeout.c)

# Link the executable to the Hello library. Since the Hello library has
# public include directories we will use those link directories when building
# helloDemo
target_link_libraries (ev_timeout LINK_PUBLIC libev m)

#gcc -o ev_timeout  -I ./ sample/ev_timeout.c .libs/libev.a -lm
