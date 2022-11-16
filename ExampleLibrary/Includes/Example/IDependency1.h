#pragma once

class IDependency1
{
public:
   virtual ~IDependency1() = default;

   virtual void SomeMethod() = 0;
};

