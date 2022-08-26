
# 내부 라이브러리 추가
add_library(uvuntu_block STATIC block.cpp)

# 외부 라이브러리 추가
target_link_libraries(uvuntu_block raylib gdi32 winmm)