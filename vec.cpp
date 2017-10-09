#include <stdio.h>
#include <iostream>
#include "vect.h"

vect::vect()
{
int *array = new int[1];
capacity=1;
size=0;
}

void vect::push_back(int a)
{
if (size<capacity)
  {
        array[size]=a;
	size++;
  }
else
  {
	int *sarray = new int[size+1];
	for (int j=0; j<size; j++)
	{
		sarray[j]=array[j];
	}
	sarray[size]=a;
        
	delete [] array;
	
	array = sarray;
        
	capacity++;
	size++;
  }
}
		
int	 main()
{
vect m;
m.push_back(9); 
m.push_back(2);
//m.push_back(4);
int a=m.size;
//std::cout << m.array << std::endl;
std::cout << m.size << std::endl;
std::cout << m.capacity << std::endl;
return 0;
}
