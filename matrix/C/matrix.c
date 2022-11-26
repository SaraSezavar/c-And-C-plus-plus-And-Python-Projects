gh#include <stdio.h>


int main(){
    printf("in this program we want to calculate multiplication of matrix");

    int row1,column1;
    printf("\n enter the row of matrix 1:");
    scanf("%d",&row1);
    printf(" enter the column of matrix 1:");
    scanf("%d",&column1);
    int row2,column2;
    printf("\n enter the row of matrix 2:");
    scanf("%d",&row2);
    printf(" enter the column of matrix 2:");
    scanf("%d",&column2);

    if(column1!=row2){
        printf("these matrix are incalculably");
        return 0;
    }

    int A[row1][column1];
    int B[row2][column2];
    int C[row1][column2];
    //call matrix1
    int i=1;
    while(i<=row1){
        int j=1;
        while(j<=column1){
            printf("enter the member a%d%d: ",i,j);
            int k=j-1, h=i-1;
            scanf("%d", &A[h][k]);
            j++;
        }
        i++;
    }

    i=1;
    while(i<=row2){
        int j=1;
        while(j<=column2){
            printf("enter the member b%d%d: ",i,j);
            int k=j-1, h=i-1;
            scanf("%d", &B[h][k]);
            j++;
        }
        i++;
    }


    int g=0;
    while(g<row1){
          int a=0;
          while(a<column2){
                int b=0;
                int sum=0;
              while(b<column1){
                sum+=A[g][b]*B[b][a];
                b++;
              }
              C[g][a]=sum;
              a++;
          }
          g++;
    }

    printf("this is the matrix C: \n");
    int e=0;
    while(e<row1){
        int f=0;
        while(f<column2){
            printf("\t %d",C[e][f]);
            f++;
        }
        e++;
        printf("\n");
    }


    return 0;
}
