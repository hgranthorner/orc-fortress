add_executable(Test
        tests.cpp
        fixtures/InputHandlerTest.cpp
        fixtures/InputHandlerTest.h)
target_include_directories(Test
        PUBLIC ../libs/googletest/googletest
        PUBLIC ../src)
target_link_libraries(Test
        Orc-Lib
        gtest
        gtest_main)


#add_test(NAME MyTests COMMAND FirstTest)