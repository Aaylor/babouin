#include <iostream>

struct Foo {
    int x = 2;
};

int
main()
{   
    cout << "Test cout" << endl;
    Foo f;
    return f.x;
}
