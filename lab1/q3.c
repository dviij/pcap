#include "mpi.h"
#include <stdio.h>

 int main(int argc, char  **argv)
{
	int rank , size;
	int a=6;
	int b=7;
	MPI_Init(&argc,&argv);
	MPI_Comm_rank(MPI_COMM_WORLD,&rank);
	/* code */
	if(rank==0){
		printf("the operation is + and the ans is %d\n",a+b);
	}
	if(rank==1){
		printf("the operation is - and the ans is %d\n",a-b);
	}
	if(rank==2){
		printf("the operation is  * and the ans is %d\n",a*b);
	}
	if(rank==3){
		printf("the operation is / and the ans is %d\n",a/b);
	}
	MPI_Finalize();
	return 0;
}