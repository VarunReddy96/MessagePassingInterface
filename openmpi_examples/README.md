# Open MPI Examples 

## C/C++ 
To compile your MPI C/C++ source code
```
cd src/main/c
make
```
Binary executables will be placed in the ```bin``` folder.

To run your MPI program
```
cd src/main/c/bin
mpiexec mpi_hello
```

Sample output
```
From C/C++ Program: Number of tasks= 2 My rank= 1 Running on mac-2.local
From C/C++ Program: Number of tasks= 2 My rank= 0 Running on mac-2.local
```


## Java


To compile your MPI java source code
```
cd src/main/java
mpijavac -cp <PATH-TO-OpenMPI-Source>/openmpi-4.0.1/ompi/mpi/java/java/mpi.jar edu/rit/cs/MPI_Hello.java
```
```mpi.jar``` can be found in your OpenMPI installation folder e.g.,```openmpi-4.0.1/ompi/mpi/java/java/mpi.jar```. 

Note, here is how your can ```mpi.jar``` to your IntelliJ: Go to ```File/Project Structure.../Modules```, navigate to ```<PATH-TO-OpenMPI-Source>/openmpi-4.0.1/ompi/mpi/java/java/mpi.jar```.


To run your MPI program
```
mpiexec java -cp <PATH-TO-OpenMPI-Source>/openmpi-4.0.1/ompi/mpi/java/java/mpi.jar  edu.rit.cs.MPI_Hello
```

Sample output
```
From Java Program: Number of tasks= 2, My rank=1, Running on mac-2.local
From Java Program: Number of tasks= 2, My rank=0, Running on mac-2.local
```
