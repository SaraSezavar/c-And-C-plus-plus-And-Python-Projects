#include <stdio.h>
#include <conio.h>

//obey the function

int main(){
    int number;
    printf("how many collegian you have ?");
    scanf("%d",&number);

    int idList[8][number];
    int count[8];
    int k=0;
    while(k<8){
        count[k]=0;
        k++;
    }
    printf("this is the code for each field of study: \n 0-electricity 1-computer engineering 2-computer science 3-mechanic \n 4-architecture 5-chemistry 6-physic 7-Aerospace \n");

    int i=1;
      while(i<=number){
            int code;
            printf("enter field o study code:");
            scanf("%d", &code);
            int id;
            printf("enter collegian id:");
            scanf("%d", &id);

            count[code]+=1;
            idList[code][count[code]]=id;
            i++;
      }

      printf("collegian list: ");
      i=1;
      while(i<=8){
        printf("\n \t field of study %d : ",i);
        int j=1;
          while(j<=count[i]){
             printf("\t  %d",idList[i][j]);
             j++;
        }
        i++;
      }





    return 0;
}
