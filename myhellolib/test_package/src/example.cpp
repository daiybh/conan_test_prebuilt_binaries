#include "myhellolib.h"
#include <vector>
#include <string>

int main() {
    myhellolib();

    std::vector<std::string> vec;
    vec.push_back("test_package");

    myhellolib_print_vector(vec);
}
