
# 내부 라이브러리 추가
add_library(uvuntu_objmanager STATIC objectManager.cpp) 

# 외부 라이브러리 추가
target_link_libraries(uvuntu_objmanager raylib gdi32 winmm)