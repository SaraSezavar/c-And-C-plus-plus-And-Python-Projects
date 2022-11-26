#include <stdio.h>
int main(){
    int num_times,number;
    printf("how many numbers do you want to compare: ");
    scanf("%d",&num_times);
    printf("enter the first number :");
    scanf("%d",&number);
    int max = number;
    int min = number;
    int i=2;
    while (i<=num_times)
    {
        printf("enter the %d number to compare:",i);
        scanf("%d",&number);
        if(number>max){
            max = number;
        }else if(number<min)
        {
            min = number;
        }
        
        i+=1;
    }

    printf("this is the max:%d\n",max);
    printf("this is the min:%d\a",min);
    
    return 0;
}
