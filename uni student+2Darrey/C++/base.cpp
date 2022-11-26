#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char** argv){

    int number,base;
    cout<<"please enter the number :"<<endl;
    cin>>number;
    cout<<"please enter the base  :"<<endl;
    cin>>base;
    long long int result=0;
    int i=0;
    while(number>0){
        int remain=number%base;
        result = result+remain*pow(10,i);
        number/=base;
        i+=1;
    }
    cout<<"this is the number on base"<<base<<":"<<result<<endl;




    return 0;
}
