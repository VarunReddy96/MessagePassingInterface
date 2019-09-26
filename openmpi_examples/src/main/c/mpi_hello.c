/*

 mpiexec mpi_hello

 Sample program output:

 Number of tasks= 2 My rank= 0 Running on mac.lan
 Number of tasks= 2 My rank= 1 Running on mac.lan

 */


// required MPI include file
#include "mpi.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
    int  numtasks, rank, len, rc;
    char hostname[MPI_MAX_PROCESSOR_NAME];

    // initialize MPI
    MPI_Init(&argc,&argv);

    // get number of tasks
    MPI_Comm_size(MPI_COMM_WORLD,&numtasks);

    // get my rank
    MPI_Comm_rank(MPI_COMM_WORLD,&rank);

    // this one is obvious
    MPI_Get_processor_name(hostname, &len);
    printf ("From C/C++ Program: Number of tasks= %d My rank= %d Running on %s\n", numtasks,rank,hostname);

    // do some work with message passing

    // done with MPI
    MPI_Finalize();
}

