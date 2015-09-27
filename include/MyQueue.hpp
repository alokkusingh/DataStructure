/*
 * MyQueue.hpp
 *
 *  Created on: 19-Sep-2011
 *      Author: Alok
 */

#include <iostream>

#ifndef MyQueue_HPP_
#define MyQueue_HPP_

namespace ds {

template<typename T>
class MyQueue {

	unsigned size;
	int front;
	int rear;
	T *data;
public:
	MyQueue();

	MyQueue(const unsigned size);

	~MyQueue();

	unsigned insert_element(const T &data);

	unsigned delete_element(T &data);

	unsigned is_empty();

	unsigned is_full();

	unsigned size_q();

	void print();
};

template<typename T>
MyQueue<T>::MyQueue()
{
	size = 10;
	data = new T[size];
	front = 0;
	rear = 0;
}

template<typename T>
MyQueue<T>::MyQueue(const unsigned size)
{
	this->size = size;
	data = new T[size];
	front = 0;
	rear = 0;
}

template<typename T>
MyQueue<T>::~MyQueue()
{
	delete [] data;
}

template<typename T>
unsigned MyQueue<T>::size_q()
{
	/*
	if (this->rear == -1)
		return 0;

	unsigned n;
	if (this->rear >= this->front)
	{
		n = this->rear - this->front + 1;
		//n = (this->rear - this->front + 1) % this->size;
	}
	else
	{
		//n = this->size - (this->front - this->rear) + 1;
		n =  ((this->front - this->rear) + 1) % this->size;
	}

	return n;
	*/
	return 0;
}

template<typename T>
unsigned MyQueue<T>::is_empty()
{
	//if (this->size_q() == 0)
	return (this->front == this->rear);
}

template<typename T>
unsigned MyQueue<T>::is_full()
{
	//if (this->size_q() == this->size)

	return (((this->rear + 1) % this->size) == this->front);
	//return (((this->rear % this->size) + 1) == this->front);
}

template<typename T>
unsigned MyQueue<T>::insert_element(const T &data)
{
	std::cout<<"Front: "<<this->front<<", Rear: "<<this->rear<<std::endl;
	if (this->is_full())
		return 0;

	this->data[rear] = data;
	rear = (rear + 1) % size;

	return 1;
}

template<typename T>
unsigned MyQueue<T>::delete_element(T &data)
{
	if (this->is_empty())
		return 0;

	data = this->data[front];
	front = (front + 1) % size;

//std::cout<<"Front: "<<this->front<<", Rear: "<<this->rear<<std::endl;
	return 1;
}

template<typename T>
void MyQueue<T>::print()
{
	for (int i = this->front; i != this->rear; i = (i + 1) % this->size)
		std::cout<<this->data[i]<<" ";
}

}
#endif /* MyQueue_HPP_ */
