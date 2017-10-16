#include <iostream>

using namespace std;

class vectar
{
private:
	int *ptr;
	int size;
	int capasity;
public:
	vectar(): size(0), capasity(5)
		{
		ptr = new int[capasity];
		}
	vectar(int razm): size(0), capasity(razm)
		{
		ptr = new int[capasity];
		}
	~vectar()
		{
		delete [] ptr;
		}
	int getsize()
		{
		return size;
		}
	int& operator[] (int num)
		{
		if (num>size) 
			{ 
			cout<< "too much" <<endl; 
			return ptr[0];
			}
		else
			return ptr[num];
		}
	void print ()
		{
		for (int i=0; i < size; ++i)
			cout<<(*this)[i]<<" ";
		cout << endl;
		}
	void pushback (int elem)
		{
		if (size<capasity)
			{
			(*this)[size] = elem;
			++size;
			}
		else
			{
			vectar copa(capasity+1);
			for (int i=0; i<size; ++i)
				copa.pushback( (*this)[i] );
			copa.pushback(elem);
			copa.print();
			cout << endl;
			delete [] ptr;
			ptr = copa.ptr;
//			cout << copa.ptr << " " << ptr << endl;
			++capasity;
			++size;
			(*this).print();
			}
		}
	
};

int main()
{
	vectar v(2);
	v.pushback(8);
	cout << "size " << v.getsize() << endl;
	v.pushback(7);
	v.print();
	v.pushback(145);
	cout << "size " << v.getsize() << endl;
	v.print();
return 0;
}




