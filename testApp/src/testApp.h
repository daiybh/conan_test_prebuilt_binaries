#pragma once

#include <vector>
#include <string>


#ifdef _WIN32
  #define TESTAPP_EXPORT __declspec(dllexport)
#else
  #define TESTAPP_EXPORT
#endif

TESTAPP_EXPORT void testApp();
TESTAPP_EXPORT void testApp_print_vector(const std::vector<std::string> &strings);
