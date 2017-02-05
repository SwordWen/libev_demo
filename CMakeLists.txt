cmake_minimum_required(VERSION 3.5)

####################################
set(LIBEV_SRC
  ev.c
  event.c)

IF(UNIX)
   SET(MY_MATH_LIB -lm)
ELSE(UNIX)
    SET(MY_MATH_LIB)
ENDIF(UNIX)


add_library (libev STATIC ${LIBEV_SRC})
target_include_directories (libev PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

#gcc -o ev_timeout  -I ./ sample/ev_timeout.c .libs/libev.a -lm
add_executable (ev_timeout sample/ev_timeout.c)
target_link_libraries (ev_timeout LINK_PUBLIC libev m)

add_executable (ev_socket sample/ev_socket.c)
target_link_libraries (ev_socket LINK_PUBLIC libev m)
