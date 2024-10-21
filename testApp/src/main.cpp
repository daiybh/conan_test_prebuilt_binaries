#include "testApp.h"
#include <vector>
#include <string>
#include "myhellolib.h"
int main() {
    myhellolib();

    MyHelloLib lib;
    lib.sayHello();

    MyHelloLibWithoutExport lib2;
    lib2.sayHello2();
    return 0;
}
