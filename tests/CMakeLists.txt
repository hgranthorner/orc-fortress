add_executable(Test src/main.cpp)
target_include_directories(Test
        PUBLIC ../libs/catch
        PUBLIC ../src)
target_link_libraries(Test
        Orc-Lib
        Catch)


#add_test(NAME MyTests COMMAND FirstTest)