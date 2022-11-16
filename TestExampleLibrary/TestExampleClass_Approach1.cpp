#include <gtest/gtest.h>

#include <Example/ExampleClass.h>

#include "Mocks/mockDependency1.h"
#include "Mocks/mockDependency2.h"
#include "Mocks/mockDependency3.h"
#include "Mocks/mockDependency4.h"

#include <memory>

class TestExampleClass_Approach1 : public ::testing::Test
{
public:
   void SetUp() override
   {
      _mockDep1 = std::make_shared<MockDependency1>();
      _mockDep2 = std::make_shared<MockDependency2>();
      _mockDep3 = std::make_shared<MockDependency3>();
      _mockDep4 = std::make_shared<MockDependency4>();

      _exampleClass = std::make_unique<ExampleClass>( _mockDep1,
                                                      _mockDep2,
                                                      _mockDep3,
                                                      _mockDep4 );
   }

   std::shared_ptr<MockDependency1> _mockDep1;
   std::shared_ptr<MockDependency2> _mockDep2;
   std::shared_ptr<MockDependency3> _mockDep3;
   std::shared_ptr<MockDependency4> _mockDep4;
   std::unique_ptr<ExampleClass> _exampleClass;
};

TEST_F( TestExampleClass_Approach1, ExampleTest_Always_CallsDependency1SomeMethod )
{
   EXPECT_CALL( *_mockDep1, SomeMethod ).Times( 1 );
   _exampleClass->TestDep1();
}
