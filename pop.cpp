#include "Header.h"

int stack::pop()
{
	if (!isEmpty())
	{
		int item = s_array[top--];
		return item;
	}
	return -1;
}