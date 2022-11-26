#include <stdio.h>

int main(){
    int number;
      printf("enter the number to tell you it is square or not:");
      scanf("%d",&number);

    int root=number/2;
    int sq_num;
    int i=1;
    int sq_sw=1;
    while(i<=root && sq_sw==1){

        for(int j=1;j<=2;j++){
            sq_num=number/i;
            sq_num=sq_num/i;
        }
        if(sq_num==1){
            sq_sw=0;
        }
        i++;
    }

    if(sq_sw==0){
        printf("this is the square number");
    }else{
        printf("this is not a sqare number");
    }


    return 0;
}
