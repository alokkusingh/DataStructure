/*
 * Stack.hpp
 *
 *  Created on: 18-Sep-2011
 *      Author: Alok
 */

#ifndef MyStack_HPP_
#define MyStack_HPP_

namespace ds {

template<typename T>
class MyStack {

	unsigned size;
	unsigned top;
	T *data;
public:
	MyStack();

	MyStack(const unsigned size);

	~MyStack();

	int push(const T &data);

	int pop(T &data);
};

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


}
#endif /* MyStack_HPP_ */
