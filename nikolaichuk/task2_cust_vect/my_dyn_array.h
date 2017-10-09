#include <cstdlib>

using std::size_t;

template <class elem> 
class MyDynamicArray {
private:
    size_t size;        // size of data in array
    size_t capacity;    // maximum current capacity
    el* data;           // pointer to actual items in memory
    
    const static int initial_size = 32;
    const static int size_multiply = 2;
public:
    MyDynamicArray();
    ~MyDynamicArray();

    std::size_t size();
    void push_back(const el &item);
    el& operator[] (size_t index);
};
