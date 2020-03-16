#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main()
    
     {
        float x,sinx,sinvalue;
        printf("ENTER the valuesnof x  (in degrees):");
        scanf("%f", &x);
        x = x * (3.142/180.0);
        sinvalue = sin(x);
        printf("%f",sinvalue);
     }
