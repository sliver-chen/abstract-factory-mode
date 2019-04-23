/*************************************************************************
	> File Name: productbase.h
	> Author: 
	> Mail: 
	> Created Time: 二  4/23 15:16:29 2019
 ************************************************************************/

#ifndef _PRODUCTBASE_H
#define _PRODUCTBASE_H

class productbase {
public:
    virtual ~productbase() {}
    virtual int gid() = 0;
};

#endif
