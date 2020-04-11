#include "Int.h"

Int::Int(int index, int depth, MyArray *arr){
    mIndex = index;
    mDepth = depth;
    mArr = arr;
}
Int Int::operator[](int n){
    if(mDepth > mArr->mDim - 1) return *this;

    int chunk = 1;
    for(int i = 1; i < mArr->mDim - mDepth; ++i) {
        chunk *= mArr->mSize[mDepth + i];
    }
    return Int(mIndex + n * chunk, mDepth + 1, mArr);
}