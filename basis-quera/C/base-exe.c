#include <stdio.h>
#include <math.h>

int main(){
    long int number2;

    printf("enter the number to generate it on base 2 & 8:");
    scanf("%ld",&number2);
    long int number8=number2;

    long long int result2=0, result8=0;

    int i=0;
    while(number2>0){
        int remain2=number2%2;
        result2=remain2*pow(10,i)+result2;
        number2/=2;
        i++;
    }

    int j=0;
    while(number8>0){
        int remain8=number8%8;
        result8=remain8*pow(10,j)+result8;
        number8/=8;
        j++;
    }

    printf("this is the result on base 2= %lld \a",result2);
    printf("\n this is the result on base 8= %lld",result8);



    return 0;
}
