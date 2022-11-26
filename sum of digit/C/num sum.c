#include <stdio.h>
int main(){
    // we recieve an number then compress it
    int num1;
    printf("enter the number:");
    scanf("%d",&num1);
    if(num1<0){
        num1*=-1;
    }

    int sum=0,remain;
    while(num1>0){
    remain= num1%10;
    num1/=10;
    sum=sum+remain;
    }

    int remain2;

    while(sum>=10){
    remain2= sum%10;
    sum/=10;
    sum=sum+remain2;
    }
    printf("your sum is:%d ",sum);


    return 0;
}
