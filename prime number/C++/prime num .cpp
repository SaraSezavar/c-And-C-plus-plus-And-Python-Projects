#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char** argv) {
    int number;
    cout<<"enter the number to find that is prime number or not:"<<endl;
    cin>>number;
    float root=floor(sqrt(number));
    int i=2;
    int primeSw=1;
      while (i<=root && primeSw==1){
         if(number%i==0){
              primeSw=0;
         }
         i+=1;
      }


    if (primeSw==1){
        cout<<"this is a prime number"<<endl;
    }else{
        cout<<"this is not a prime number"<<endl;
    }

 return 0;
}
