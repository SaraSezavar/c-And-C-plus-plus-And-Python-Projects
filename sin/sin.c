#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846
int main(){
    int accuracy,x;
    printf("how much accuracy for your answer: ");
    scanf ("%d",&accuracy);
    printf("enter the radian: ");
    scanf ("%d",&x);
    int sin=x;
    int fact =1;
    int xpower =x;
    int sign=1;
    int i=1;
    while (i<accuracy)
    {
        fact = fact*2*i*(2*i+1);
        xpower=xpower*x*x;
        sign*=-1;
        sin= sin + sign *(xpower/fact);
        i+=1;
    }

    printf("this is the result:%d \a",sin);

    return 0;
}
