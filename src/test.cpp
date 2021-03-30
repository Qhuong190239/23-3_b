#include "../include/test.h"
#include <iostream>
using namespace std;

int Test::count = 0;              //khoi tao 1 bien static

Test::Test() 
{
    x   = 10;
    py  = new int;
    *py = 20;
    count++;
}

Test::Test(const int &x, const int &y) 
{
    this ->x = x;
    this ->py = new int;
    *py = y;
    count++;
}

void Test::show() 
{
    cout << "x = " << x << endl;
    cout << "py-> " << *py << endl;
    cout << "count = " << count << endl; 
}

Test::~Test() 
{
    delete py;
    count--;
    cout << "Test object is removed" << endl;
}
