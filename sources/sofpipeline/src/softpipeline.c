#include "softpipeline.h"

void sum(int vec1[N],int vec2[N])
{
  for (int i =0 ; i< N-1;i++)
  {
      vec1[i]= vec2[i]+vec2[i+1];
  }
}


void printvec(int vec[N])
{
     for (int i =0 ; i< N;i++)
  {
      printf("value[%d]: %d, ",i,vec[i]);
  }
  printf("\n"); 
}

void sumWithPipe(int vec1[N],int vec2[N])
{
    int u = vec2[0];
    int v = vec2[1];
    int s = u+v; 
    int w = vec2[2];
    for (int i =0; i <N-3 ;i++)
    {
       vec1[i] = s ;
       u = v;
       v = w;
       s = u +v ;
       w = vec2[i+3] ;
    }
    vec1[N-3]=s;
    vec1[N-2]=v+w;


}