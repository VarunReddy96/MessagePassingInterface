# Docker Image for Parallel Computing

Please run ```docker images``` and check whether ```csci654``` image exist. 

If not, run the following to create a docker image. 
```
docker build -t csci654:latest .
```

The following commands for you to run within docker containers.

## OpenMP

### C/C++
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

### Start multiple docker containers
```
cd {PROJECT_ROOT}/docker
bash createContainers.bash 3
```
This will create 3 docker containers with names: container-{yourusername}-index. For example,
```
container-ph-1
container-ph-2
container-ph-3
```

### Stop and remove all docker containers
```
cd {PROJECT_ROOT}/docker
bash removeMyContainers.bash
```

### Compile source code

In each container, run the following
```
git pull
cd /csci654/docker
bash initContainer.bash
cd /csci654/openmpi_examples/src/main/mpitutorial/mpi-hello-world/code
make
```

#### C/C++

In the first container, add additional docker containers after ```172.17.0.2``` in ```/csci654/docker/myDockerHostFile```.

```
cd /csci654/openmpi_examples/src/main/mpitutorial/mpi-hello-world/code
mpirun -np 8 --hostfile /csci654/docker/myDockerHostFile --allow-run-as-root mpi_hello_world
```

[OpenMPI Reference](https://www.open-mpi.org/doc/current/)

Example run in Docker containers (each container offer one processor)
```
root@7b0565f38e7d:/csci654/openmpi_examples/src/main/mpitutorial/mpi-hello-world/code# mpirun -np 4 --hostfile /csci654/docker/myDockerHostFile --allow-run-as-root mpi_hello_world
Hello world from processor 7b0565f38e7d, rank 0 out of 4 processors
Hello world from processor 7b0565f38e7d, rank 1 out of 4 processors
Hello world from processor e917980366ed, rank 2 out of 4 processors
Hello world from processor e917980366ed, rank 3 out of 4 processors
```


#### Java
To compile your MPI java source code
```
cd openmpi_examples/src/main/java
mpijavac -cp <PATH-TO-OpenMPI-Source>/openmpi-4.0.1/ompi/mpi/java/java/mpi.jar edu/rit/cs/MPI_Hello.java
```
```mpi.jar``` can be found in your OpenMPI installation folder e.g.,```openmpi-4.0.1/ompi/mpi/java/java/mpi.jar```. 

Note, in docker containers, you can find a copy of ```mpi.jar``` in ```/csci654Tools/```.

To run your MPI program
```
cd openmpi_examples/src/main/java
mpiexec java -cp <PATH-TO-OpenMPI-Source>/openmpi-4.0.1/ompi/mpi/java/java/mpi.jar  edu.rit.cs.MPI_Hello
```

Sample output
```
From Java Program: Number of tasks= 2, My rank=1, Running on mac-2.local
From Java Program: Number of tasks= 2, My rank=0, Running on mac-2.local
```
```
