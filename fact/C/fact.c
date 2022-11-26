#include <stdio.h>
int main(){
    int num;
    printf("please enter the number to evalute its Factorial : ");
    scanf("%d",&num);
    int i=1;
    int fact=1;
    while (i<=num)
    {
        fact*=i;
        i+=1;
    }

    printf("here is the result:%d",fact);

    return 0;   
}