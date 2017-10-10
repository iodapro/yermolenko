#include <iostream>
#include <ctime>
#include <time.h>

#include <chrono>
#include <thread>
using namespace std;

int main()
{

int size = 1000;
int i, j, k;
	cout << "N: ";
	cin >> size;

int **A = new int*[size];
int **B = new int*[size];
int **C = new int*[size];
for (i=0; i<size; i++){
	A[i] = new int[size];
	B[i] = new int[size];
	C[i] = new int[size];
}

	for (i=0; i<size; i++){
	for (j=0; j<size; j++){
		A[i][j] = i*j;
		B[i][j] = i+j;	
		C[i][j] = 0;
	}
	}
long t = clock();
//time_t start = time();
//    auto t1 = std::chrono::high_resolution_clock::now();
	for (i=0; i<size; i++){
	for (j=0; j<size; j++){
		for (k=0; k<size; k++) { C[i][j] += A[i][k]*B[k][j]; }		
	}
	}
t = clock() - t;
cout << (double)(t) / CLOCKS_PER_SEC << "\n\n";
//    auto t2 = std::chrono::high_resolution_clock::now();	
//time_t end = time();
//double timer = difftime(end, start) * 1000.0;
//	cout << std::chrono::duration_cast<std::chrono::milliseconds>(t2-t1).count() <<"\n\n" ;
return 0;
}
