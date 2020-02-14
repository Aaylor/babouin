#include <iostream>

struct Foo {
    int x = 2;
};

int
main()
{   
    std::cout << "Test cout" << std::endl;
    Foo f;
    return f.x;
}
