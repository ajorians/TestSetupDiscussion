#include <gtest/gtest.h>

#include <Example/ExampleClass.h>
#include "Mocks/mockDependency1.h"
#include "Mocks/mockDependency2.h"
#include "Mocks/mockDependency3.h"
#include "Mocks/mockDependency4.h"

#include <optional>

class TestExampleClass_Approach3 : public ::testing::Test
{
public:
};

namespace
{
   struct SetupParams
   {
      std::optional<std::shared_ptr<IDependency1>> Dep1;
      std::optional<std::shared_ptr<IDependency2>> Dep2;
      std::optional<std::shared_ptr<IDependency3>> Dep3;
      std::optional<std::shared_ptr<IDependency4>> Dep4;
   };

   ExampleClass CreateSubjectUnderTest( SetupParams params )
   {
      ExampleClass sut( params.Dep1.value_or( std::make_shared<MockDependency1>() ),
                        params.Dep2.value_or( std::make_shared<MockDependency2>() ),
                        params.Dep3.value_or( std::make_shared<MockDependency3>() ),
                        params.Dep4.value_or( std::make_shared<MockDependency4>() ) );
      return sut;
   }
}

TEST_F( TestExampleClass_Approach3, ExampleTest_Always_CallsDependency1SomeMethod )
{
   auto mockDependency1 = std::make_shared<MockDependency1>();
   ExampleClass exampleClass = CreateSubjectUnderTest( { .Dep1 = mockDependency1 } );

   EXPECT_CALL( *mockDependency1, SomeMethod ).Times( 1 );

   exampleClass.TestDep1();
}
