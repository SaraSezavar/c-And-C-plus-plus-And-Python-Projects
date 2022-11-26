#include <stdio.h>


int main(){
    int aset, bset,cset;
    printf("hello, in this program we want to calculate the intersection of two sets, so start");
    printf("\n how many numbers are belong the A set?");
      scanf("%d",&aset);
    printf("how many numbers are belong the  B set?");
      scanf("%d",&bset);
    int A[aset];
    int B[bset];

       if (aset>=bset){
           cset=bset;
        }else {cset=aset;}
    int C[cset];

    int i=0;
    while(i<aset){
        printf("enter the %d member of A set: ",i);
        scanf("%d",&A[i]);
        i++;
    }
    int j=0;
    while(j<bset){
        printf("enter the %d member of B set: ",j);
        scanf("%d",&B[j]);
        j++;
    }

    int aCount=0;
    int cCount=0;

      while(aCount<aset){
        int bCount =0;
        int sw=1;
        while (sw==1 && bCount<bset){
            if(B[bCount]==A[aCount]){
                    cCount++;
                    C[cCount]=A[aCount];
                    sw=0;
            }
            bCount++;
        }
        aCount++;
      }


    printf("this is the intersection of two sets:");
      i=1;
      while(i<=cCount){
        printf("\n \t %d",C[i]);
        i++;
      }


    return 0;
}
