/*************************************************************************
	> File Name: productb.h
	> Author: 
	> Mail: 
	> Created Time: 二  4/23 15:19:17 2019
 ************************************************************************/

#ifndef _PRODUCTB_H
#define _PRODUCTB_H

#include "productbase.h"

class productb : public productbase
{
public:
    productb(int gid);
    ~productb() {}
    int gid() override;
private:
    int _gid;
};

#endif
