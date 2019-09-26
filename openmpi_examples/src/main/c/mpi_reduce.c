/*
 mpiexec --hostfile ../hostfiles/myHostfile  mpi_reduce

Sample program output:

Checkin from processor mac.lan, rank 2 out of 4 processors
Checkin from processor mac.lan, rank 3 out of 4 processors
Checkin from processor mac.lan, rank 0 out of 4 processors
Checkin from processor mac.lan, rank 1 out of 4 processors
PI: 3.141601

 */

#include <mpi.h>
#include <stdio.h>

int main(int argc, char** argv) {
  // Initialize the MPI environment. The two arguments to MPI Init are not
  // currently used by MPI implementations, but are there in case future
  // implementations might need the arguments.
  MPI_Init(NULL, NULL);

  // Get the number of processes
  int world_size;
  MPI_Comm_size(MPI_COMM_WORLD, &world_size);

  // Get the rank of the process
  int world_rank;
  MPI_Comm_rank(MPI_COMM_WORLD, &world_rank);

  // Get the name of the processor
  char processor_name[MPI_MAX_PROCESSOR_NAME];
  int name_len;
  MPI_Get_processor_name(processor_name, &name_len);

  // Print off a hello world message
  printf("Checkin from processor %s, rank %d out of %d processors\n",
         processor_name, world_rank, world_size);

  int nint = 100; // Intervals.
  float h = 1.0 / (float)nint;
  float sum = 0.0;

  int i;
  float x;
  for (i = world_rank + 1; i <= nint; i += world_size) {
        x = h * ((float)i - 0.5);
        sum += (4.0 / (1.0 + x * x));
  }

  float sBuf[] = { h * sum }, rBuf[1];


  MPI_Reduce(&sBuf, &rBuf, 1, MPI_FLOAT, MPI_SUM, 0, MPI_COMM_WORLD);
  if (world_rank == 0) printf("PI: %f\n", rBuf[0]);

  // Finalize the MPI environment. No more MPI calls can be made after this
  MPI_Finalize();
}
