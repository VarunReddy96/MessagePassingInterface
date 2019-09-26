/*
 mpiexec mpi_pi_reduce

 Sample program output:

MPI task 0 has started...
MPI task 1 has started...
   After    50000 throws, average value of pi = 3.14472000
   After   100000 throws, average value of pi = 3.14434000
   After   150000 throws, average value of pi = 3.14292000
   After   200000 throws, average value of pi = 3.14201000
   After   250000 throws, average value of pi = 3.14124000
   After   300000 throws, average value of pi = 3.14192000
   After   350000 throws, average value of pi = 3.14267429
   After   400000 throws, average value of pi = 3.14215000
   After   450000 throws, average value of pi = 3.14128444
   After   500000 throws, average value of pi = 3.14048400
   After   550000 throws, average value of pi = 3.14096000
   After   600000 throws, average value of pi = 3.14111667
   After   650000 throws, average value of pi = 3.14197538
   After   700000 throws, average value of pi = 3.14203429
   After   750000 throws, average value of pi = 3.14187200
   After   800000 throws, average value of pi = 3.14171250
   After   850000 throws, average value of pi = 3.14219059
   After   900000 throws, average value of pi = 3.14220222
   After   950000 throws, average value of pi = 3.14165684
   After  1000000 throws, average value of pi = 3.14157800
   After  1050000 throws, average value of pi = 3.14144571
   After  1100000 throws, average value of pi = 3.14165273
   After  1150000 throws, average value of pi = 3.14141043
   After  1200000 throws, average value of pi = 3.14120500
   After  1250000 throws, average value of pi = 3.14087200
   After  1300000 throws, average value of pi = 3.14096923
   After  1350000 throws, average value of pi = 3.14128296
   After  1400000 throws, average value of pi = 3.14130286
   After  1450000 throws, average value of pi = 3.14114345
   After  1500000 throws, average value of pi = 3.14114267
   After  1550000 throws, average value of pi = 3.14093161
   After  1600000 throws, average value of pi = 3.14089000
   After  1650000 throws, average value of pi = 3.14115152
   After  1700000 throws, average value of pi = 3.14127882
   After  1750000 throws, average value of pi = 3.14127200
   After  1800000 throws, average value of pi = 3.14105444
   After  1850000 throws, average value of pi = 3.14116865
   After  1900000 throws, average value of pi = 3.14136421
   After  1950000 throws, average value of pi = 3.14141744
   After  2000000 throws, average value of pi = 3.14145000
   After  2050000 throws, average value of pi = 3.14153073
   After  2100000 throws, average value of pi = 3.14147524
   After  2150000 throws, average value of pi = 3.14143256
   After  2200000 throws, average value of pi = 3.14157909
   After  2250000 throws, average value of pi = 3.14154933
   After  2300000 throws, average value of pi = 3.14156783
   After  2350000 throws, average value of pi = 3.14148851
   After  2400000 throws, average value of pi = 3.14141583
   After  2450000 throws, average value of pi = 3.14131020
   After  2500000 throws, average value of pi = 3.14123200
   After  2550000 throws, average value of pi = 3.14128706
   After  2600000 throws, average value of pi = 3.14152462
   After  2650000 throws, average value of pi = 3.14162340
   After  2700000 throws, average value of pi = 3.14167481
   After  2750000 throws, average value of pi = 3.14160945
   After  2800000 throws, average value of pi = 3.14172071
   After  2850000 throws, average value of pi = 3.14176000
   After  2900000 throws, average value of pi = 3.14188207
   After  2950000 throws, average value of pi = 3.14193017
   After  3000000 throws, average value of pi = 3.14189200
   After  3050000 throws, average value of pi = 3.14187607
   After  3100000 throws, average value of pi = 3.14171871
   After  3150000 throws, average value of pi = 3.14164508
   After  3200000 throws, average value of pi = 3.14171187
   After  3250000 throws, average value of pi = 3.14168923
   After  3300000 throws, average value of pi = 3.14170485
   After  3350000 throws, average value of pi = 3.14168776
   After  3400000 throws, average value of pi = 3.14162647
   After  3450000 throws, average value of pi = 3.14168870
   After  3500000 throws, average value of pi = 3.14178229
   After  3550000 throws, average value of pi = 3.14168282
   After  3600000 throws, average value of pi = 3.14174667
   After  3650000 throws, average value of pi = 3.14180658
   After  3700000 throws, average value of pi = 3.14179892
   After  3750000 throws, average value of pi = 3.14172107
   After  3800000 throws, average value of pi = 3.14172895
   After  3850000 throws, average value of pi = 3.14166390
   After  3900000 throws, average value of pi = 3.14173282
   After  3950000 throws, average value of pi = 3.14179848
   After  4000000 throws, average value of pi = 3.14176450
   After  4050000 throws, average value of pi = 3.14181037
   After  4100000 throws, average value of pi = 3.14175366
   After  4150000 throws, average value of pi = 3.14167229
   After  4200000 throws, average value of pi = 3.14173381
   After  4250000 throws, average value of pi = 3.14179012
   After  4300000 throws, average value of pi = 3.14168884
   After  4350000 throws, average value of pi = 3.14168644
   After  4400000 throws, average value of pi = 3.14163273
   After  4450000 throws, average value of pi = 3.14171685
   After  4500000 throws, average value of pi = 3.14175289
   After  4550000 throws, average value of pi = 3.14177582
   After  4600000 throws, average value of pi = 3.14173304
   After  4650000 throws, average value of pi = 3.14180000
   After  4700000 throws, average value of pi = 3.14184170
   After  4750000 throws, average value of pi = 3.14185389
   After  4800000 throws, average value of pi = 3.14181958
   After  4850000 throws, average value of pi = 3.14181526
   After  4900000 throws, average value of pi = 3.14186082
   After  4950000 throws, average value of pi = 3.14181333
   After  5000000 throws, average value of pi = 3.14172800

Real value of PI: 3.1415926535897
 */

/**********************************************************************
 * FILE: mpi_pi_reduce.c
 * OTHER FILES: dboard.c
 * DESCRIPTION:
 *   MPI pi Calculation Example - C Version
 *   Collective Communication example:
 *   This program calculates pi using a "dartboard" algorithm.  See
 *   Fox et al.(1988) Solving Problems on Concurrent Processors, vol.1
 *   page 207.  All processes contribute to the calculation, with the
 *   master averaging the values for pi. This version uses mpc_reduce to
 *   collect results
 * AUTHOR: Blaise Barney. Adapted from Ros Leibensperger, Cornell Theory
 *   Center. Converted to MPI: George L. Gusciora, MHPCC (1/95)
 * LAST REVISED: 06/13/13 Blaise Barney
**********************************************************************/
#include "mpi.h"
#include <stdio.h>
#include <stdlib.h>

void srandom (unsigned seed);
double dboard (int darts);
#define DARTS 50000     /* number of throws at dartboard */
#define ROUNDS 100      /* number of times "darts" is iterated */
#define MASTER 0        /* task ID of master task */

int main (int argc, char *argv[])
{
    double	homepi,         /* value of pi calculated by current task */
    pisum,	        /* sum of tasks' pi values */
    pi,	        /* average of pi after "darts" is thrown */
    avepi;	        /* average pi value for all iterations */
    int	taskid,	        /* task ID - also used as seed number */
    numtasks,       /* number of tasks */
    rc,             /* return code */
    i;
    MPI_Status status;

/* Obtain number of tasks and task ID */
    MPI_Init(&argc,&argv);
    MPI_Comm_size(MPI_COMM_WORLD,&numtasks);
    MPI_Comm_rank(MPI_COMM_WORLD,&taskid);
    printf ("MPI task %d has started...\n", taskid);

/* Set seed for random number generator equal to task ID */
    srandom (taskid);

    avepi = 0;
    for (i = 0; i < ROUNDS; i++) {
        /* All tasks calculate pi using dartboard algorithm */
        homepi = dboard(DARTS);

        /* Use MPI_Reduce to sum values of homepi across all tasks
         * Master will store the accumulated value in pisum
         * - homepi is the send buffer
         * - pisum is the receive buffer (used by the receiving task only)
         * - the size of the message is sizeof(double)
         * - MASTER is the task that will receive the result of the reduction
         *   operation
         * - MPI_SUM is a pre-defined reduction function (double-precision
         *   floating-point vector addition).  Must be declared extern.
         * - MPI_COMM_WORLD is the group of tasks that will participate.
         */

        rc = MPI_Reduce(&homepi, &pisum, 1, MPI_DOUBLE, MPI_SUM,
                        MASTER, MPI_COMM_WORLD);

        /* Master computes average for this iteration and all iterations */
        if (taskid == MASTER) {
            pi = pisum/numtasks;
            avepi = ((avepi * i) + pi)/(i + 1);
            printf("   After %8d throws, average value of pi = %10.8f\n",
                   (DARTS * (i + 1)),avepi);
        }
    }
    if (taskid == MASTER)
        printf ("\nReal value of PI: 3.1415926535897 \n");

    MPI_Finalize();
    return 0;
}



/**************************************************************************
* subroutine dboard
* DESCRIPTION:
*   Used in pi calculation example codes.
*   See mpi_pi_send.c and mpi_pi_reduce.c
*   Throw darts at board.  Done by generating random numbers
*   between 0 and 1 and converting them to values for x and y
*   coordinates and then testing to see if they "land" in
*   the circle."  If so, score is incremented.  After throwing the
*   specified number of darts, pi is calculated.  The computed value
*   of pi is returned as the value of this function, dboard.
*
*   Explanation of constants and variables used in this function:
*   darts       = number of throws at dartboard
*   score       = number of darts that hit circle
*   n           = index variable
*   r           = random number scaled between 0 and 1
*   x_coord     = x coordinate, between -1 and 1
*   x_sqr       = square of x coordinate
*   y_coord     = y coordinate, between -1 and 1
*   y_sqr       = square of y coordinate
*   pi          = computed value of pi
****************************************************************************/

double dboard(int darts)
{
#define sqr(x)	((x)*(x))
    long random(void);
    double x_coord, y_coord, pi, r;
    int score, n;
    unsigned int cconst;  /* must be 4-bytes in size */
/*************************************************************************
 * The cconst variable must be 4 bytes. We check this and bail if it is
 * not the right size
 ************************************************************************/
    if (sizeof(cconst) != 4) {
        printf("Wrong data size for cconst variable in dboard routine!\n");
        printf("See comments in source file. Quitting.\n");
        exit(1);
    }
    /* 2 bit shifted to MAX_RAND later used to scale random number between 0 and 1 */
    cconst = 2 << (31 - 1);
    score = 0;

    /* "throw darts at board" */
    for (n = 1; n <= darts; n++)  {
        /* generate random numbers for x and y coordinates */
        r = (double)random()/cconst;
        x_coord = (2.0 * r) - 1.0;
        r = (double)random()/cconst;
        y_coord = (2.0 * r) - 1.0;

        /* if dart lands in circle, increment score */
        if ((sqr(x_coord) + sqr(y_coord)) <= 1.0)
            score++;
    }

/* calculate pi */
    pi = 4.0 * (double)score/(double)darts;
    return(pi);
}

