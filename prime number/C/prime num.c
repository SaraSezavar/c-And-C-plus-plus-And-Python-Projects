#include <stdio.h>
#include <math.h>

int main(){
    int number;
    printf("enter the number to find that is prime number or not:");
    scanf("%d",&number);
    double root=floor(sqrt(number));
    int i=2;
    int primeSw=1;
      while (i<=root && primeSw==1){
         if(number%i==0){
              primeSw=0;
         }
         i+=1;
      }


    if (primeSw==1){
        printf("this is a prime number");
    }else{
        printf("this is not a prime number");
    }

 return 0;
}
