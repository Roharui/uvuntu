# CMAKE 기본 설정
cmake_minimum_required(VERSION 3.0.0)
project(raylib_cmake VERSION 0.1.0)

# 기본 컴파일러
set(CMAKE_CXX_COMPILER g++)
set(CMAKE_CXX_STANDARD 20)

# 전역 사용 디렉토리 지정
include_directories(${CMAKE_SOURCE_DIR}/src)

# 전역 사용 외부 디렉토리
link_directories(C:/msys64/mingw64/include)

# 다른 CmakeLists.txt 추가
add_subdirectory(${CMAKE_SOURCE_DIR}/src)

# 의존성 추가
add_dependencies(raylib_loader raylib_utils)
add_dependencies(raylib_driver raylib_utils raylib_loader)

# 실행 파일 등록
add_executable(${PROJECT_NAME} main.cpp)

# 컴파일 옵션 설정
target_compile_options(${PROJECT_NAME} PUBLIC -std=c++20 -ggdb3 -O3 -Wall -Werror -Wwrite-strings -fno-default-inline)

# 라이브러리 추가
target_link_libraries(
  # 프로젝트 이름
  ${PROJECT_NAME} 
  # 내부 라이브러리 추가
  raylib_driver raylib_loader raylib_utils
  # 외부 라이브러리 추가
  raylib gdi32 winmm
)
