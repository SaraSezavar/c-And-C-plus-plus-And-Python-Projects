#include <stdio.h>
#include <math.h>

int main(){
    int a,b;
    printf("enter the number a:");
      scanf("%d",&a);
    printf("enter the number b:");
      scanf("%d",&b);

      a+=b;
      b=a-b;
      a-=b;

      printf("this is the a number : %d", a);
      printf("this is the b number : %d", b);



    return 0;
}
