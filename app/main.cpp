#include <iostream>
#include <stdlib.h>

#include "exampleConfig.h"
#include "FizzBuzz.h"

/*
 * Simple main program that demontrates how access
 * CMake definitions (here the version number) from source code.
 */
int main() {
  std::cout << "C++ Boiler Plate v"
            << PROJECT_VERSION_MAJOR
            << "."
            << PROJECT_VERSION_MINOR
            << std::endl;
  std::system("cat ../LICENCE");

  // Bring in the dummy class from the example source,
  // just to show that it is accessible from main.cpp.
  // Dummy d = Dummy();
  // return d.doSomething() ? 0 : -1;
}
