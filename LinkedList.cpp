// LinkedList.cpp : Defines the exported functions for the DLL application.
//

#include "LinkedList.h"
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <sstream>

using namespace std;

IList::IList() : m_count(0)
{

}

/** Returns true  if list is empty, otherwise true */
int IList::getSize() const
{
	return m_count;
	
}

/** Returns true  if list is empty, otherwise true */
bool IList::isEmpty() const
{
	//TODO - hint use m_count

	return false;
	
}



PointerBasedLinkedList::PointerBasedLinkedList() : IList(), m_head(nullptr), m_tail(nullptr)
{

}

/** Adds a value to the LinkedList.  Return true if able to, otherwise false */
bool PointerBasedLinkedList::add(int val)
{
	return false;
	//TODO
}
/** Remove a value to the LinkedList.  Return true if able to, otherwise false.
Will only remove one entry if there are multiple entries with the same value */
bool PointerBasedLinkedList::remove(int val)
{
	//TODO
	return false;
}

/** Remove  all elements from LinkedList */
void PointerBasedLinkedList::clear()
{
	delete m_head;

	//TODO - 
	// dangling pointer warning
	// what other private data members should be adjusted?
}
PointerBasedLinkedList::~PointerBasedLinkedList()
{
	clear();
	
}

std::string PointerBasedLinkedList::toString() const
{
	string str = "";


    //TODO
	return str;
}

ArrayBasedList::ArrayBasedList() : IList()
{
    m_count = 0;
	// you got it for free :)
}

bool ArrayBasedList::add(int val)
{
	//TODO
	return false;
}
bool ArrayBasedList::remove(int val)
{
	//TODO
	return false;
}
void ArrayBasedList::clear()
{
	//TODO
}
ArrayBasedList::~ArrayBasedList()
{
	clear();
}

std::string ArrayBasedList::toString() const
{
	string str = "";
	
	//TODO

	return str;
}
