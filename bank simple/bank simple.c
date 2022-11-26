#include <stdio.h>
#include <math.h>

int main(){
    int number;
       printf("how many users do you want to write in?");
        scanf("%d",&number);
    int i=1;
    while (i<=number)
    {
        long long int cardSerial,cardBalance;
        int cardLog;
           printf(" please write your serial number(12 integer):");
            scanf("%lld",&cardSerial);
           printf("please write your balance(rial measurement):");
            scanf("%lld",&cardBalance);
           printf("how many logarithm you have?:");
            scanf("%d",&cardLog);
        int j=1;
        while (j<=cardLog)
        {
            int code;
               printf("1=removal , 2= settle >>> please enter the code:");
               scanf("%d",&code);
            long long int sum;
            printf("please write the sum :");
               scanf("%lld",&sum);
            while (code==1,sum>cardBalance){
               printf("sorry, you haven't enough money,your balance is:%d",cardBalance);
                printf("\n please write the sum again :");
                 scanf("%lld",&sum);
            }


            if(code==1){
               cardBalance=cardBalance-sum;
            }else if(code==2)
            {
                cardBalance=cardBalance+sum;
            }else{
                printf("please enter the correct code");
                j-=1;
            }
            j+=1;
        }

        printf("this is the serial:%lld \n this is the total balance:%lld \n",cardSerial, cardBalance);

    }


 return 0;
}
