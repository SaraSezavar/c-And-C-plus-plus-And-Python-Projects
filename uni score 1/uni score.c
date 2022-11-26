#include <stdio.h>
int main(){
    int number;
    printf("how many collegian you want to write in?");
    scanf("%d",&number);
    int maxAve1=-1, maxAve2=-1, maxAve3=-1, maxId1,maxId2,maxId3;
    char maxName1, maxName2, maxName3;
    int i =1;
    while(i<=number){
        char fullName;
        int id,lessonNum;
        printf("please write collegian name : ");
        scanf("%s",&fullName);
        printf("\nplease write collegian id list : ");
        scanf("%d",&id);
        printf("how many leeson have been passed? : ");
        scanf("%d",&lessonNum);
        int unitSum,sum;
        int j=1;
        while(j<=lessonNum){
            int score,unit;
            printf("what is the score ?");
            scanf("%d",&score);
            printf("how many units have been selected ?");
            scanf("%d",&unit);
            sum = sum +unit*score;
            unitSum=unitSum + unit;
            j+=1;
        }
        int average=sum/unitSum;
        if(average>maxAve1){
            average=maxAve1;   maxId1=id;   maxName1=fullName;
            maxAve2=maxAve1;   maxId2=maxId1;  maxName2=maxName1;
            maxAve3=maxAve2;   maxId3=maxId2;  maxName3=maxName2;
        }else if (average>maxAve2){
            average=maxAve2;   maxId2=id;   maxName2=fullName;
            maxAve3=maxAve2;   maxId3=maxId2;  maxName3=maxName2;
        }else if (average>maxAve3){
            average=maxAve3;   maxId3=id;  maxId3=fullName;
        }
        i+=1;
    }
    printf("\nfull name of first student: %c",maxName1);
    printf("\n\tId of first student: %d",maxId1);
    printf("\n\t\taverage of the first student: %d",maxAve1);

    printf("\nfull name of second student: %c",maxName2);
    printf("\n\tId of second student: %d",maxId2);
    printf("\n\t\taverage of the second student: %d",maxAve2);

    printf("\nfull name of third student: %c",maxName3);
    printf("\n\tId of third student: %d",maxId3);
    printf("\n\t\taverage of the third student: %d",maxAve3);


    return 0;
}
