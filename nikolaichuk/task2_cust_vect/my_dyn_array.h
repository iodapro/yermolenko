#include <cstdlib>
#include <iostream>

using std::size_t;

template <class elem> 
class MyDynamicArray {
private:
    size_t size;        // size of data in array
    size_t capacity;    // maximum current capacity
    elem* data;           // pointer to actual items in memory
    
    const static int initial_size = 32;
    const static int size_multiply = 2;

    void resize();
public:
    MyDynamicArray();
    ~MyDynamicArray();

    std::size_t get_size();
    void push_back(elem &item);
    elem& operator[] (size_t index);
};

template <class elem> 
MyDynamicArray<elem>::MyDynamicArray() {
    size = 0;
    capacity = initial_size;

    data = new elem[capacity];
}

template <class elem> 
MyDynamicArray<elem>::~MyDynamicArray() {
    if (data) {
        delete[] data;
    }
}

template <class elem>
void MyDynamicArray<elem>::push_back(elem &item){
// TODO: allow resize of dynamic array    
    data[size] = item;
    ++size;
}

template <class elem>
elem& MyDynamicArray<elem>::operator[] (size_t index) {
    if (index < size) {
        return data[index];
    }
}