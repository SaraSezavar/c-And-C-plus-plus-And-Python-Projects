#include <stdio.h>



int main(){
    int number;
    printf("how many numbers do you have ?");
    scanf("%d",&number);

    int A[number];


      int i=0;
      while (i<number){
        printf("enter the number %d:",i);
        scanf("%d",&A[i]);
        i++;
      }

      i=0;
      while(i<number){
            int j=i+1;
            while(j<number){
                    if(A[i]==A[j]){
                        A[j]=A[number-1];
                        number=number-1;
                    }else { j++;}
            }
            i++;
      }

    printf("these are the result: \a");

      int p=0;
        while(p<number){
            printf("\n \t %d",A[p]);
            p++;
        }


    return 0;
}
