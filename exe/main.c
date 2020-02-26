#include<stdio.h>
#include<stdlib.h>
#include "softpipeline.h"


int main ()
{
    int vec1[N] = {1,2,3,4,5,6,7,8,9,-1};
    int vec2[N] = {1,2,3,4,5,6,7,8,9,10};
    //sum(vec1,vec2);
    sumWithPipe(vec1,vec2);
    printvec(vec1);
    
    printf("heye\n");
    return  0 ; 
}