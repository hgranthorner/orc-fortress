add_executable(Test src/main.cpp)
target_include_directories(Test
        PUBLIC ../libs/googletest/googletest
        PUBLIC ../src)
target_link_libraries(Test
        Orc-Lib
        gtest)


#add_test(NAME MyTests COMMAND FirstTest)