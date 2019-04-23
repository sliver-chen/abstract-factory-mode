/*************************************************************************
	> File Name: factory.h
	> Author: 
	> Mail: 
	> Created Time: 二  4/23 15:12:48 2019
 ************************************************************************/

#ifndef _FACTORY_H
#define _FACTORY_H

#include "productbase.h"

template <class T>
class factory {
public:
    template <typename... Args>
    productbase* createProduct(Args... args) {
        productbase *p = new T(args...);
        return p;
    }
};

#endif
