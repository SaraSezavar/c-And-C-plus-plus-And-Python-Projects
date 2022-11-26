#include <stdio.h>

int main(){
    int number;
    printf("weak prime number is not like a prime, it have 3 divisor plus 1 & itself ");
    printf("\n enter the number to find that is weak prime number or not:");
    scanf("%d",&number);



    int root=number/2;
    int i=2;
    int divCount=0;
      while (i<=root){
         if(number%i==0){
              divCount++;
         }
         i++;
      }

    if (divCount==3){
       printf("this is a weak prime number");
    }  else {
       printf("this is not a weak prime number");
    }





 return 0;
}
