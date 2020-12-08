// This header file is new in C++20
#include <version>

#include <iostream>

int main()
{
  #if __cplusplus > 201703L
  std::cout << "Hello C++20\n";
  #else
  This line will not compile :-)
  #endif
}
