
# 내부 라이브러리 추가
add_library(uvuntu_detactor STATIC detactor.cpp)

# 외부 라이브러리 추가
target_link_libraries(uvuntu_detactor raylib gdi32 winmm)