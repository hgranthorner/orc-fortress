add_executable(Test
        tests.cpp
        fixtures/InputHandlerTest.cpp
        fixtures/InputHandlerTest.h fixtures/SDLGridTest.cpp fixtures/SDLGridTest.h fixtures/PositionMapTest.cpp fixtures/PositionMapTest.h fixtures/OrcTest.cpp fixtures/OrcTest.h fixtures/TargeterTest.cpp fixtures/TargeterTest.h)
target_include_directories(Test
        PUBLIC ../libs/googletest/googletest
        PUBLIC ../src)
target_link_libraries(Test
        Orc_Lib
        gtest
        gtest_main
        Models)


#add_test(NAME MyTests COMMAND FirstTest)