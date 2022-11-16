#include <gmock/gmock.h>

#include <Example/IDependency3.h>

class MockDependency3 : public IDependency3
{
public:
   MOCK_METHOD( void, SomeMethod, ( ), ( override ) );
};