set(TEST_FILES
    TestExampleClass_Approach1.cpp
    TestExampleClass_Approach2.cpp
    TestExampleClass_Approach3.cpp)

set(MOCK_FILES
    Mocks/mockDependency1.h
    Mocks/mockDependency2.h
    Mocks/mockDependency3.h
    Mocks/mockDependency4.h)

add_executable(TestExampleLibrary
               TestExampleRunner.cpp
               ${TEST_FILES}
               ${MOCK_FILES})

target_link_libraries(
  TestExampleLibrary PUBLIC
  GTest::gmock
  ExampleLibrary
)