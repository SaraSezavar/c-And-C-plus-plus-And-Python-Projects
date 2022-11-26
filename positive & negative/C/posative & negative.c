#include <stdio.h>


int main(){
    int n;
    printf("how many numbers you want to separate: ");
    scanf("%d",&n);
    int positive[n];
    int negative[n];

    int number;
    int posCount=0;
    int negCount=0;
    int i=0;
      while(i<n){
          printf("enter the %d number:",i);
          scanf("%d",&number);
          if(number>=0){
            positive[posCount]=number;
            posCount++;
          }else{
            negative[negCount]=number;
            negCount++;
          }
          i++;
      }

      printf("\t list of positive numbers:");
        for(int j=0; j<posCount; j++){
            printf(" \n \t \t %d",positive[j]);
        }
      printf("\n \t list of negative numbers:");
        for(int k=0; k<negCount; k++){
              printf("\n \t \t%d",negative[k]);
        }

    return 0;
}
