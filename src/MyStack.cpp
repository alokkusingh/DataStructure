/*
 * MyStack.cpp
 *
 *  Created on: 18-Sep-2011
 *      Author: Alok
 */

#include <iostream>
#include <MyStack.h>

using namespace ds;

template<typename T>
MyStack<T>::MyStack()
{
	size = 10;
	data = new T[size];
	top = -1;
}

template<typename T>
MyStack<T>::MyStack(const unsigned size)
{
	this->size = size;
	data = new T[size];
	top = -1;
}

template<typename T>
MyStack<T>::~MyStack()
{
	delete [] data;
}

template<typename T>
int MyStack<T>::push(const T &data)
{
	if (this->top == (size - 1))
		return 0;

	top++;
	this->data[top] = data;

	return 1;
}

template<typename T>
int MyStack<T>::pop(T &data)
{
	if (top == -1)
		return 0;

	data = this->data[top];
	top--;

	return 1;
}

