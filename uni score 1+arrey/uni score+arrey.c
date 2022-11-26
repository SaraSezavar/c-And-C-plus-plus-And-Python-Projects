#include <stdio.h>
int main(){

    int number;
    printf("how many collegian you want to write in?");
    scanf("%d",&number);
    //these are array
    char nameList[number];
    int idList[number];
    int averagelist[number];

    int i=0;

    int sum=0;
    while (i<number){
    printf("what is the collegian %d name?",i);
    scanf("%s",&nameList[i]);


    printf("what is the collegian %d id?",i);
    scanf("%d",&idList[i]);


    printf("what is the collegian %d average?",i);
    scanf("%d",&averagelist[i]);
    sum=sum +averagelist[i];
    i++;
    }

    float totalAve;
    totalAve=sum/number;

    i=0;
    while( i<number){
        if(averagelist[i]>totalAve){
            printf("\n name: %c \n id: %d \n average: %d",nameList[i],idList[i],averagelist[i]);
        }
        i++;
    }
    return 0;
}
