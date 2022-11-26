#include <stdio.h>
#include <math.h>

int main(){
    int number;
    printf("high prime number is the number that is prime and ");
    printf("\n enter the number to find that is high prime number or not:");
    scanf("%d",&number);
    double root=floor(sqrt(number));
    int i=2;
    int primeSw=1;
      while (i<=root && primeSw==1){
         if(number%i==0){
              primeSw=0;
         }
         i+=1;
         }


    if (primeSw==1){
        int prime_befor=0;
        int j=1;
          while(j<number){

            double root2=floor(sqrt(j));
            int k=2;
            int primeSw2=1;
                while (k<=root2 && primeSw2==1){
                    if(j%k==0){
                        primeSw2=0;
                    }
                    k++;
                  }
             if(primeSw2==1){
                prime_befor++;
             }
             j++;
           }

             double root3=floor(sqrt(prime_befor));
             int h=2;
             int primeSw3=1;
             while (h<=root3 && primeSw3==1){
             if(prime_befor%h==0){
              primeSw3=0;
             }
             h++;
             }

             if(primeSw3==1){
                printf("this number is not only prime but also a high prime");
             }else{
                printf("this is the prime number but not a high one");
             }



    }else{
        printf("this is not neither  prime number nor high prime number");
    }

 return 0;
}
