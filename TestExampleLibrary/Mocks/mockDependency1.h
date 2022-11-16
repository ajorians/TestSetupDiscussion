#include <gmock/gmock.h>

#include <Example/IDependency1.h>

class MockDependency1 : public IDependency1
{
public:
   MOCK_METHOD( void, SomeMethod, ( ), ( override ) );
};