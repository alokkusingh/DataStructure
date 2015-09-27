/*
 * BubbleSortMain.c
 *
 *  Created on: 28-Aug-2011
 *      Author: Alok
 */
#include <iostream>
#include <MyQueue.hpp>

using namespace ds;

int main()
{
    MyQueue<unsigned> q(10);
    unsigned x;

    for (int i = 0; i < 12; i++)
    {
    	//std::cout<<"Size: "<<q.size_q()<<std::endl;
    	if (!q.insert_element(i))
    	{
    		std::cout<<"Queue is full: "<<i<<std::endl;
    		break;
    	}
    }
    q.print();
    std::cout<<std::endl;
    //std::cout<<"Size: "<<q.size_q()<<std::endl;

    for (int i = 0; i < 10; i++)
    {
    	q.delete_element(x);
    	std::cout<<"x: "<<x<<std::endl;
    	//std::cout<<"Size: "<<q.size_q()<<std::endl;
    }
    q.print();
    std::cout<<std::endl;
    for (int i = 0; i < 12; i++)
    {
    	if (!q.insert_element(i))
        {
        	std::cout<<"Queue is full"<<std::endl;
        	break;
        }
    }
    q.print();
    std::cout<<std::endl;
    for (int i = 0; i < 11; i++)
    {
    	if (!q.delete_element(x))
    	{
    		std::cout<<"Queue is empty"<<std::endl;
    		break;
    	}
    	std::cout<<"x: "<<x<<std::endl;
    }
//std::cout<<"Size: "<<q.size_q()<<std::endl;
    for (int i = 0; i < 11; i++)
    {
    	if (!q.delete_element(x))
    	{
    		std::cout<<"Queue is empty"<<std::endl;
    		break;
    	}
    	std::cout<<"x: "<<x<<std::endl;
    }
return 0;
}
