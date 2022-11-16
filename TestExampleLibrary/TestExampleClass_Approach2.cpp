#include <gtest/gtest.h>

#include <Example/ExampleClass.h>
#include "Mocks/mockDependency1.h"
#include "Mocks/mockDependency2.h"
#include "Mocks/mockDependency3.h"
#include "Mocks/mockDependency4.h"

class TestExampleClass_Approach2 : public ::testing::Test
{
public:
};

TEST_F( TestExampleClass_Approach2, ExampleTest_Always_CallsDependency1SomeMethod )
{
   auto mockDependency1 = std::make_shared<MockDependency1>();
   ExampleClass exampleClass( mockDependency1,
                              std::make_shared<MockDependency2>(),
                              std::make_shared<MockDependency3>(),
                              std::make_shared<MockDependency4>() );

   EXPECT_CALL( *mockDependency1, SomeMethod ).Times( 1 );

   exampleClass.TestDep1();
}
