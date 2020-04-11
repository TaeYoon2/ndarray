#include "MyArray.h"
#include "Int.h"

MyArray::MyArray(int dim, int *size) {
    mDim = dim;
    mSize = new int[mDim];
    int total = 1;
    for(int i = 0; i < mDim; ++i){
        mSize[i] = size[i];
        total *= mSize[i];
    }
    mData = new int[total];
    
}

Int MyArray::operator[](int n) {
    int chunk = 1;
    for(int i = 1; i < mDim; ++i){
        chunk *= mSize[i];
    }
    return Int(n * chunk, 1, this);
}

