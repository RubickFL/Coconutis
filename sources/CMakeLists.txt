# output filename
set(PROJECT_NAME coconutis)

# project files without ","
set(SOURCES main.cpp errors/str.h errors/signal.h)

# option libs without ","
set(LIBRARIES your_libraries_here)


# flags without ","

# processor instruction flags: -msse, -msse2, -msse3, -mmmx, -m3dnow -march='your CPU here'
# default is auto-definition of march: -march=native

# warning: if you use flag '-march', binary file can not work in else CPU!!!
# warning: don't use '-march-native' flag with distcc compiller!!!

# you should use   $cat /proc/cpuinfo | tr " " "\012" |grep -e sse -e mmx -e now -e pni | sort -u
# to be confident that your processor can use instructions '-msse, -msse2, -msse3, -mmmx, -m3dnow'
# just switch on CPU flags which 'fit' for you CPU
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pipe -O2 -ftree-vectorize -fno-protect-parens -fno-stack-protector -fstack-arrays -march=native -mmmx -msse -msse2 -msse3 -msse4 -msse4.1 -msse4.2 -mssse3")


project(${PROJECT_NAME})
add_executable(${PROJECT_NAME} ${SOURCES})
#target_link_libraries(${PROJECT_NAME} ${LIBRARIES})
