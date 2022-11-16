#pragma once

#include <memory>

class IDependency1;
class IDependency2;
class IDependency3;
class IDependency4;

class ExampleClass
{
public:
   ExampleClass( std::shared_ptr<IDependency1> dep1,
                 std::shared_ptr<IDependency2> dep2,
                 std::shared_ptr<IDependency3> dep3,
                 std::shared_ptr<IDependency4> dep4 );

   void TestDep1();
   void TestDep2();
   void TestDep3();
   void TestDep4();

private:
   std::shared_ptr<IDependency1> _dep1;
   std::shared_ptr<IDependency2> _dep2;
   std::shared_ptr<IDependency3> _dep3;
   std::shared_ptr<IDependency4> _dep4;
};
