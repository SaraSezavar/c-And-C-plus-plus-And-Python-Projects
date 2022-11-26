#include <stdio.h>
#include <math.h>
int main(){
    int number,base;
    printf("please enter the number :");
    scanf("%d",&number);
    printf("please enter the base you want:");
    scanf("%d",&base);
    long long int result=0;
    int i=0;
    while(number>0){
        int remain=number%base;
        result = result+remain*pow(10,i);
        number/=base;
        i+=1;
    }
     printf("this is the number on base %d : %lld", base, result);



    return 0;
}
