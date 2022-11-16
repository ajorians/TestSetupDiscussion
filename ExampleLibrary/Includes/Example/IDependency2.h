#pragma once

class IDependency2
{
public:
   virtual ~IDependency2() = default;

   virtual void SomeMethod() = 0;
};

