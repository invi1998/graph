#include "Edge.h"
#include <iostream>
#include <list>

void myprint() {
    string s("12143");
    for(auto i : s) {
        std::cout << i << " ";
    }
}

int main() {
    Edge<int> e1(1, 2, 3);
    Edge<int> e2(1, 2, 5);

    std::cout << e1 << std::endl;
    std::cout << e2 << std::endl;

    bool res = e1 >= e2;

    std::cout << res << std::endl;

    myprint();

    getchar();

    return 0;
}
