#include <iostream>
#include "my_dyn_array.h"

int main(int argc, char const *argv[])
{
    MyDynamicArray<int> arr;

    for(int i;i<20;i++){
        arr.push_back(i);
    };

    std::cout << arr[15] << std::endl;
    std::cout << arr[10] << std::endl;

    return 0;
}
