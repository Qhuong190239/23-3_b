#pragma once

class Test
{
private:
    int x;
    int *py;
    static int count;
public:
    Test();
    Test(const int &x, 
        const int &y);

    void show();
    ~Test();
}; 