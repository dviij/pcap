#include <stdio.h>
#include "mpi.h"

int fact(int a){
	if(a==0||a==1){
		return 1;
	}
	else{
		return a*fact(a-1);
	}
}
int fibo(int b){
	if(b<=1){
		return 1;
	}
	else{
		return fibo(b-1)+fibo(b-2);
	}
}
int main(int argc, char  **argv)
{
	int a , b;
	int rank , size;
	MPI_Init(&argc,&argv);
	MPI_Comm_rank(MPI_COMM_WORLD,&rank);
	if(rank%2==0){
		printf("%d\n",fact(rank) );
	}
	else{
		printf("%d",fact(rank));
	}
	/* code */
	return 0;
}