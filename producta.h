/*************************************************************************
	> File Name: producta.h
	> Author: 
	> Mail: 
	> Created Time: 二  4/23 15:17:08 2019
 ************************************************************************/

#ifndef _PRODUCTA_H
#define _PRODUCTA_H

#include "productbase.h"

class producta : public productbase
{
public:
    producta(int gid);
    ~producta(){}
    int gid() override;
private:
    int _gid;
};

#endif
