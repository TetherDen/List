#include <iostream>
using namespace std;
#include "List.h"
#include <ctime>









int main()
{
	srand(time(0));
	List list;


	for (int i = 0; i < 10; i++)
	{
		list.addHead(rand() % (100 - 1) + 1);
	}

	list.show();

	for (int i = 0; i < 10; i++)
	{
		list.addTail(rand() % (100 - 1) + 1);
	}
	list.show();

	list.deleteHead();
	list.show();
	list.deleteTail();
	list.show();



	return 0;
}