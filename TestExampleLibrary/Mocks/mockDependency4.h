#include <gmock/gmock.h>

#include <Example/IDependency4.h>

class MockDependency4 : public IDependency4
{
public:
   MOCK_METHOD( void, SomeMethod, ( ), ( override ) );
};