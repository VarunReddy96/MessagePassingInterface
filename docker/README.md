# Docker Image for Parallel Computing

The following commands for you to run within docker containers.

## OpenMP

### C++
Add ```-fopenmp``` to your compile command, for example,
```
g++ -fopenmp -o myProgram myProgram.cpp
``` 

For more details, see [OpenMP site](https://www.openmp.org/resources/openmp-compilers-tools/).
More examples about OpenMP [here](https://bisqwit.iki.fi/story/howto/openmp/)

### Java
Use [OMP4J](http://www.omp4j.org) library. OMP4J is a compile with a wrapper on top of javac. 
```
java -cp /csci654Tools/omp4j-1.2.jar myProgram.java
java -cp . myProgram
```



## OpenMPI
We use Open MPI implementation. 

### Compile source code

#### C++
```
mpiCC        mpic++       mpicc        mpicxx 
```

[OpenMPI Reference](https://www.open-mpi.org/doc/current/)

Example run in Docker containers (each container offer one processor)
```
root@7b0565f38e7d:/csci654/openmpi_examples/src/main/mpitutorial/mpi-hello-world/code# make
root@7b0565f38e7d:/csci654/openmpi_examples/src/main/mpitutorial/mpi-hello-world/code# mpirun -np 4 --hostfile /csci654/docker/myDockerHostFile --allow-run-as-root mpi_hello_world
Hello world from processor 7b0565f38e7d, rank 0 out of 4 processors
Hello world from processor 7b0565f38e7d, rank 1 out of 4 processors
Hello world from processor e917980366ed, rank 2 out of 4 processors
Hello world from processor e917980366ed, rank 3 out of 4 processors
```


#### Java
Use the following to compile your java code
```
mpijavac
```

### RUN
```
mpiexec     mpirun
```
