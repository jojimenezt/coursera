#include <iostream>
#include "negocio.h"
#include "a_entero.h"
using namespace std;

int main()
{
    int n=5;
    int* A= new int[n];
    A[0]=3;
    A[1]=-4;
    A[2]=8;
    A[3]=5;
    A[4]=6;
    cout<<maximo(A,n)<<endl;
	return 0;
}
