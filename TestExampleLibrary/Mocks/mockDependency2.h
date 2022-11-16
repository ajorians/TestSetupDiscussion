#include <gmock/gmock.h>

#include <Example/IDependency2.h>

class MockDependency2 : public IDependency2
{
public:
   MOCK_METHOD( void, SomeMethod, ( ), ( override ) );
};