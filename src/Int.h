#ifndef _INT_H_
#define _INT_H_
#include "MyArray.h"
#include <iostream>

class Int {
public:
    Int(int index, int depth, MyArray *arr);
    Int operator[](int n);
    operator int() {
        return mArr->mData[mIndex];
    }
    Int& operator=(const int& a) {
        std::cout << a << " : " << mIndex <<std::endl; 
        if (mArr) mArr->mData[mIndex] = a;
        return *this;
  }
private:
    int mIndex;
    int mDepth;
    MyArray *mArr;

};

#endif