#ifndef _MY_ARRAY_H_
#define _MY_ARRAY_H_
class Int;

class MyArray {
    friend Int;
public:
    MyArray(int dim, int *size);
    Int operator[](int n);
private:
    int mDim;
    int *mSize;
    int *mData;


};
#endif