#include <stdio.h>
int main(){
    int num1;
    printf("enter the number that you want a reverse it:");
    scanf("%d",&num1);
    if(num1<0){
        num1*=-1;
    }

    int reverse=0,remain;
    while(num1>0){
    remain= num1%10;
    num1/=10;
    reverse=reverse*10+remain;
    }
    printf("your reverse number is:%d ",reverse);


    return 0;
}
