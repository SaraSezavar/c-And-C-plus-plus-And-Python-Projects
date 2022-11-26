#include <stdio.h>

int main(){
    int number;
    printf("how many numbers do you have ?");
    scanf("%d",&number);

    int A[number];
    int B[number];

      int a;
      int i=0;
      while (i<number){
        printf("enter the number %d:",i);
        scanf("%d",&a);
        A[i]=a;
        i++;
      }

    B[0]=A[0];
    int k=0; i=1;
      while (i<=number){
          int j=0;
          while (A[i]!=B[j] && j<=k){
              j+=1;
          }
          if (j>k){
              k+=1;  B[k]=A[i];
          }
          i++;
      }

        int p=0;
        while(p<k){
            printf("\n %d",B[p]);
            p++;
        }


    return 0;
}
