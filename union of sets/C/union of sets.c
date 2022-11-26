#include <stdio.h>


int main(){
    int aset, bset;
    printf("how many numbers you have for set A :");
      scanf("%d",&aset);
    printf("how many numbers you have for set B :");
      scanf("%d",&bset);

      int A[aset];
      int B[bset];
      int cset=aset+bset;
      int C[cset];
    for(int i=0; i<aset; i++){
        printf("enter the %d member of A set:",i);
        scanf("%d",&A[i]);
    }

    for(int j=0; j<bset; j++){
        printf("enter the %d member of B set:",j);
        scanf("%d",&B[j]);
    }


    int i=0;
      while(i<aset){
        C[i]=A[i];
        i++;
      }

      int bCount=0;
      int cCount=aset;
      while(bCount<bset){
        int aCount=0;
         int sw=1;
          while(sw==1 && aCount<aset){
            if(A[aCount]==B[bCount]){
                sw=0;
              }
              aCount++;
            }
            if(sw==1){
                C[cCount]=B[bCount];
                cCount++;
            }
      bCount++;
      }


      i=0;
      while(i<cCount){
            int j=i+1;
            while(j<cCount){
                    if(C[i]==C[j]){
                        C[j]=C[cCount];
                        cCount--;
                    }else { j++;}
            }
            i++;
      }



      printf("this is the union of sets:");
      for(i=0; i<cCount; i++){
        printf("\a \n %d",C[i]);
      }

    return 0;
}
