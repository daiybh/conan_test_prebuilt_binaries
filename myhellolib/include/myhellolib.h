#pragma once

#include <vector>
#include <string>


#ifdef _WIN32
  #define MYHELLOLIB_EXPORT __declspec(dllexport)
#else
  #define MYHELLOLIB_EXPORT
#endif

MYHELLOLIB_EXPORT void myhellolib();
MYHELLOLIB_EXPORT void myhellolib_print_vector(const std::vector<std::string> &strings);

class MYHELLOLIB_EXPORT MyHelloLib
{
public:
  void sayHello();
};