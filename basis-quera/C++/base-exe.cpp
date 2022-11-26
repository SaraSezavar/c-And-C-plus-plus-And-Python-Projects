#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv){
    long int number2;

    cout<<"enter the number to generate it on base 2 & 8:"<<endl;
    cin>>number2;
    long int number8=number2;

    long long int result2=0, result8=0;

    int i=0;
    while(number2>0){
        int remain2=number2%2;
        result2=remain2*pow(10,i)+result2;
        number2/=2;
        i++;
    }

    int j=0;
    while(number8>0){
        int remain8=number8%8;
        result8=remain8*pow(10,j)+result8;
        number8/=8;
        j++;
    }

    cout<<"this is the result on base 2= \a"<<result2<<endl;
    cout<<"\n this is the result on base 8="<<result8<<endl;



    return 0;
}
