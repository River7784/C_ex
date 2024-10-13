// SIMULATION FOR A QUEUEING SYSTEM TO EVALUATE MEAN QUEUE LENGTH  //
// AND MEAN WAITING TIME                                           //

// TLIMIT   : the time limit expressed in minutes                  //
// TIME     : the time expressed in minutes                        //
// TSTEP    : the time increment in minutes                        //
// TPUMP    : the service time that a custom has left              //
// PRARR    : the probability of a custom arriving in any minute   //
// AVEQUE   : the average queue length                             //
// TOTQUE   : the totals of queue length                           //
// TOTARR   : the totals of arrivals                               //
// AVGWT    : average of waiting time                              //

// PROGRAM  EX3-4                                                  //

 
 

#include<stdio.h>
#include<math.h>
#define SEED 154294;

float mean=5.0;

//  RANDOM NUMBER GENERATOR  //
void random2(int *np, float *up)
{
       *np = *np * 843314861 + 453816693;
       if(*np < 0){
           *np = *np +2147483647;
           *np = *np + 1;
          }
       *up = *np * 0.4656612e-9;
}


//  POISSON RANDOM VARIABLE GENERATOR  //
void poissn(int *np, int *pp)
{
       float prod,b,u;

       *pp = 0;
       b = exp(-mean);
       prod = 1;

       random2(np,&u);
       prod=prod*u;
       while (prod >= b){
           random2(np,&u);
           prod = prod * u;
           ++(*pp);
         }
}

 

 

//  MAIN PROGRAM  //
int main()
{
       int seed,nseed;
       int  p, queue=0, totque=0, arrive, tstep=1,totarr=0;
       float prarr=20.0/60.0,  tpump=0.0, time=0.0, tlimit=50, u=0, aveque=0, avgwt;
       FILE *output;

       seed=SEED;
       nseed=SEED;
       avgwt = 0.0;

       // 파일 경로를 확인하고 에러 처리를 추가
       output = fopen("/Users/yu_garam/Desktop/학교/2024하반기/과제/중간과제/시뮬레이션/ex3-4.out", "wt");
       if (output == NULL) {
           printf("Error! Check the file path.\n");
           return 1;  // 파일을 열 수 없으면 프로그램을 종료
       }

       fprintf(output,"      SIMULATION FOR A QUEUEING SYSTEM \n\n");
       fprintf(output,"THE TIME STEP            =  %d \n",tstep);
       fprintf(output,"THE TIME LIMIT           =  %3.0f \n",tlimit);
       fprintf(output,"THE ARRIVAL PROBABILITY  =  %4.2f \n",prarr);
       fprintf(output,"THE POISSON MEAN         =  %1.0f \n",mean);
       fprintf(output,"THE SEED                 =  %d \n\n",seed);
       fprintf(output,"   TIME    ARRIVAL    QUEUE     TPUMP\n");

       while (time < tlimit){
           time = time + tstep;
           arrive = 0;
           random2(&seed, &u);
           
           if (u < (prarr*tstep))
            {
               arrive = 1;
               queue = queue + arrive;
               totarr = totarr + 1.0;
            }

           if (tpump > 0.0)
            {
                tpump = tpump - tstep;
                  if (tpump < 0.0) tpump = 0.0;
            }

           if ((tpump == 0) && (queue != 0))
            {
                queue = queue - 1;
                poissn(&nseed, &p);
                tpump = p;
            }
           totque = totque + queue;
           fprintf(output,"   %3.0f        %d         %d        %2.0f \n",time,arrive,queue,tpump);
         }

       fprintf(output,"  THE SIMULATED TIME =   %5.1f \n",tlimit);
       fprintf(output,"  THE TOTAL ARRIVALS =   %d \n",totarr);
       fprintf(output,"  THE TOTAL QUEUE =  %d \n",totque);
       aveque = totque / (tlimit/tstep);
       avgwt = totque /(float)totarr;
       fprintf(output,"  MEAN QUEUE LENGTH  =   %4.2f \n",aveque);
       fprintf(output,"  MEAN WAITING TIME  =   %9.7f \n",avgwt);
       fclose(output);

    return 0;

}

