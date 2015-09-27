/*
 * BubbleSortMain.c
 *
 *  Created on: 28-Aug-2011
 *      Author: Alok
 */
#include <iostream>
#include <MyStack.hpp>

using namespace ds;

int main()
{
    MyStack<unsigned> stac(10);
    unsigned x;

    stac.push(10);
    stac.push(20);
    stac.push(30);

    stac.pop(x);
    std::cout<<"x: "<<x<<std::endl;

    stac.push(40);

    stac.pop(x);
    std::cout<<"x: "<<x<<std::endl;

    stac.pop(x);
    std::cout<<"x: "<<x<<std::endl;


return 0;
}
