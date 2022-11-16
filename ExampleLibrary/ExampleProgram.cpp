#include "Example/Dependency1.h"
#include "Example/Dependency2.h"
#include "Example/Dependency3.h"
#include "Example/Dependency4.h"

#include "Example/ExampleClass.h"

#include <memory>

int main()
{
   auto dep1 = std::make_shared<Dependency1>();
   auto dep2 = std::make_shared<Dependency2>();
   auto dep3 = std::make_shared<Dependency3>();
   auto dep4 = std::make_shared<Dependency4>();

   auto example = std::make_shared<ExampleClass>( dep1, dep2, dep3, dep4);
   example->TestDep1();
   example->TestDep2();
   example->TestDep3();
   example->TestDep4();
}
