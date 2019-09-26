MPICC?=mpicc
OUT_DIR=bin

EXECS= mpi_blocking \
       mpi_contiguous_ddt \
       mpi_groups \
       mpi_hello \
       mpi_indexed_ddt \
       mpi_nonblocking \
       mpi_pi_reduce \
       mpi_reduce \
       mpi_scatter \
       mpi_struct_ddt \
       mpi_vector_ddt \
       mpi_virtual_topology


all: directories ${EXECS}

directories: ${OUT_DIR}

${OUT_DIR}:
	mkdir -p ${OUT_DIR}

mpi_blocking: mpi_blocking.c
	${MPICC} -o ${OUT_DIR}/mpi_blocking mpi_blocking.c

mpi_contiguous_ddt: mpi_contiguous_ddt.c
	${MPICC} -o ${OUT_DIR}/mpi_contiguous_ddt mpi_contiguous_ddt.c

mpi_groups: mpi_groups.c
	${MPICC} -o ${OUT_DIR}/mpi_groups mpi_groups.c

mpi_hello: mpi_hello.c
	${MPICC} -o ${OUT_DIR}/mpi_hello mpi_hello.c

mpi_indexed_ddt: mpi_indexed_ddt.c
	${MPICC} -o ${OUT_DIR}/mpi_indexed_ddt mpi_indexed_ddt.c

mpi_nonblocking: mpi_nonblocking.c
	${MPICC} -o ${OUT_DIR}/mpi_nonblocking mpi_nonblocking.c

mpi_pi_reduce: mpi_pi_reduce.c
	${MPICC} -o ${OUT_DIR}/mpi_pi_reduce mpi_pi_reduce.c

mpi_reduce: mpi_reduce.c
	${MPICC} -o ${OUT_DIR}/mpi_reduce mpi_reduce.c

mpi_scatter: mpi_scatter.c
	${MPICC} -o ${OUT_DIR}/mpi_scatter mpi_scatter.c

mpi_struct_ddt: mpi_struct_ddt.c
	${MPICC} -o ${OUT_DIR}/mpi_struct_ddt mpi_struct_ddt.c

mpi_vector_ddt: mpi_vector_ddt.c
	${MPICC} -o ${OUT_DIR}/mpi_vector_ddt mpi_vector_ddt.c

mpi_virtual_topology: mpi_virtual_topology.c
	${MPICC} -o ${OUT_DIR}/mpi_virtual_topology mpi_virtual_topology.c

clean:
	rm -f ${EXECS}