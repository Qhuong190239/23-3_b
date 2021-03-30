#include <iostream>
#include "../include/test.h"
using namespace std;

int main()
{
	Test t1;
	t1.show();

	Test t2(5, 15);
	t2.show();

	t1.show();

	Test *t3 = new Test();
	t3->show();

	delete t3;

	t1.show();

}