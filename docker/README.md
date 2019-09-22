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


#### Java
Use the following to compile your java code
```
mpijavac
```

### RUN
```
mpiexec     mpirun
```
