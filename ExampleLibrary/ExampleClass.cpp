#include "Example/ExampleClass.h"

#include "Example/IDependency1.h"
#include "Example/IDependency2.h"
#include "Example/IDependency3.h"
#include "Example/IDependency4.h"

ExampleClass::ExampleClass( std::shared_ptr<IDependency1> dep1,
                            std::shared_ptr<IDependency2> dep2,
                            std::shared_ptr<IDependency3> dep3,
                            std::shared_ptr<IDependency4> dep4 )
   : _dep1( std::move( dep1 ) )
   , _dep2( std::move( dep2 ) )
   , _dep3( std::move( dep3 ) )
   , _dep4( std::move( dep4 ) )
{

}

void ExampleClass::TestDep1()
{
   _dep1->SomeMethod();
}
void ExampleClass::TestDep2()
{
   _dep2->SomeMethod();
}
void ExampleClass::TestDep3()
{
   _dep3->SomeMethod();
}
void ExampleClass::TestDep4()
{
   _dep4->SomeMethod();
}