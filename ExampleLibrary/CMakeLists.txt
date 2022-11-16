add_library(ExampleLibrary SHARED
               Dependency1.cpp
               Includes/Example/Dependency1.h
               Dependency2.cpp
               Includes/Example/Dependency2.h
               Dependency3.cpp
               Includes/Example/Dependency3.h
               Dependency4.cpp
               Includes/Example/Dependency4.h
               Includes/Example/IDependency1.h
               Includes/Example/IDependency2.h
               Includes/Example/IDependency3.h
               Includes/Example/IDependency4.h
               ExampleClass.cpp
               Includes/Example/ExampleClass.h
               ExampleProgram.cpp)

target_include_directories( ExampleLibrary PUBLIC Includes )
