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


int IList::getSize() const
{
	return m_count;
	
}


bool IList::isEmpty() const
{
	//TODO - hint use m_count


	return false;
	
}



PointerBasedLinkedList::PointerBasedLinkedList() : IList(), m_head(nullptr), m_tail(nullptr)
{

}


bool PointerBasedLinkedList::add(int val)
{
	return false;
	//TODO
}

bool PointerBasedLinkedList::remove(int val)
{
	//TODO
	return false;
}


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
