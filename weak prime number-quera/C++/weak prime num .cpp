#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char** argv) {
    int number;
    cout<<"weak prime number is not like a prime, it have 3 divisor plus 1 & itself "<<endl;
    cout<<" enter the number to find that is weak prime number or not:"<<endl;
    cin>>number;



    int root=number/2;
    int i=2;
    int divCount=0;
      while (i<=root){
         if(number%i==0){
              divCount++;
         }
         i++;
      }

    if (divCount==3){
       cout<<"this is a weak prime number"<<endl;
    }  else {
       cout<<"this is not a weak prime number"<<endl;
    }

 return 0;
}
