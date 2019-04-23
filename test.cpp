/*************************************************************************
	> File Name: test.cpp
	> Author: 
	> Mail: 
	> Created Time: 二  4/23 15:26:00 2019
 ************************************************************************/

#include <iostream>
#include "factory.h"
#include "producta.h"
#include "productb.h"

using namespace std;

int main(int argc, char **argv)
{
    factory<producta> factorya;
    factory<productb> factoryb;

    productbase* pa = factorya.createProduct(1);
    productbase* pb = factoryb.createProduct(2);

    cout << "producta " << pa->gid() << endl;
    cout << "productb " << pb->gid() << endl;

    delete pa;
    delete pb;
    return 0;
}
