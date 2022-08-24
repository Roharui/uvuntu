
# 내부 라이브러리 추가
add_library(raylib_utils STATIC utils.cpp "path.cpp")

# 외부 라이브러리 추가
target_link_libraries(raylib_utils raylib gdi32 winmm)