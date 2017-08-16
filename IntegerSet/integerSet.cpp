//Christopher Eduarte

#include "integerSets.h"
#include <iostream>
#include <malloc.h>
using namespace std;


IntegerSet::IntegerSet()
{
	//setSize = size;
	
	pointer = new int [setSize];

	for(int counter = 0; counter <= setSize; counter++)
	{
		pointer[counter] = 0;
	}
}
IntegerSet::~IntegerSet()//de-allocates the memory
{
	
	delete pointer;
	pointer = NULL;
}
bool setArraySize(int size)
{
	bool validData = false;
	if(size <= 0)
	{
		validData = true;
		return validData;
	}
	else
	{
		validData = false;
		return validData;
	}
}
void IntegerSet::unionSets(const IntegerSet &set, const IntegerSet &set2)
{
	IntegerSet size3;
	
	for(int count = 0; count < setSize; count++)
	{
		if(pointer[count] == 1 || set.pointer[count] == 1)
		{
			size3.pointer[count] = 1;
			//return size3;

		}
	}
	//return size3;


}
void IntegerSet::interSet(const IntegerSet &set, const IntegerSet &set2)
{
	IntegerSet size3;
	
	for(int count = 0; count < setSize ; count++)
	{
		if(pointer[count] == 1 && set.pointer[count] == 1)
		{
			size3.pointer[count] = 1;
			//return size3;
		}

	}
	//return size3;
}
void IntegerSet::insertElement(int arrSize)
{
	IntegerSet set;

	if(arrSize > 0)
	{
		set.pointer[arrSize] = 1;
	}
	else
	{
		cout << "Invalid insertion of number. " << endl;
		arrSize = 0;
	}
}
void IntegerSet::deleteElement(int arrSize)
{
	IntegerSet set;
	set.pointer[arrSize] = 0;
	
}
void IntegerSet::printSet(int set)
{
	cout << "Set: ";
	for(int index = 0; index <= setSize; index++)
	{
		if(pointer[setSize]  == 1)
		{
			 cout << " " << set;
		}
		else if(pointer[setSize] == 0)
		{
			cout << "----" << endl;
		}
	}
}
bool IntegerSet::isEqual(int setSize, IntegerSet setSize2)
{
	bool equal = false;

	for(int count = 0; count < setSize; count ++)
	{
		if(pointer[count] == setSize2.pointer[count])
		{
			equal = true;
			return equal;
		}
		else 
		{
			equal = false;
			return equal;
		}
	}

	return equal;
		

}
IntegerSet::IntegerSet(int sizeSet[], int size)
{
	IntegerSet set3;
	sizeSet[size];
	for(int index = 0; index < size; index++)
	{
		set3.pointer[index] = 0;
	}
}
