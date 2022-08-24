
# 내부 라이브러리 추가
add_library(raylib_driver STATIC driver.cpp)

# 외부 라이브러리 추가
target_link_libraries(raylib_driver raylib gdi32 winmm)