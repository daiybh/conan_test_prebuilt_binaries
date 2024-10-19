#include "testApp.h"
#include <vector>
#include <string>
#include "myhellolib.h"
int main() {
    myhellolib();
    return 0;
    testApp();

    std::vector<std::string> vec;
    vec.push_back("test_package");

    testApp_print_vector(vec);
}
