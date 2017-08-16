//Christopher Eduarte

#ifndef INTEGERSETS_H
#define INTEGERSETS_H
#include <iostream>
using namespace std;

class IntegerSet
{
private:
	int setSize;
	int *pointer;

public:
	IntegerSet();
   ~IntegerSet();
    bool setArraySize(int size);
	//int getArraySize()const;
    void unionSets(const IntegerSet &set, const IntegerSet &set2);
	void interSet(const IntegerSet &set,  const IntegerSet &set2);
	void insertElement(int arrSize);
	void deleteElement(int arrSize);
	void printSet(int set);
	bool isEqual(int set, IntegerSet set2);
    IntegerSet(int setSize[], int size);
	void enterValue(int sizeSet);


};
#endif