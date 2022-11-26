#include <iostream>

using namespace std;

//this program will separate the digit of the number & then addition together
int main(int argc,char**argv){
    int num;
    cout<<"please write an number :"<<endl;
    cin>>num;
    if(num<0){
        num*=-1;
    }
    int sum=0,remain;
    while(num>0){
    remain= num%10;
    num/=10;
    sum=sum+remain;
    }

    int remain2;
    while(sum>=10){
    remain2= sum%10;
    sum/=10;
    sum=sum+remain2;
    }

    cout<<"\n this is the sum of your number: \a"<<sum<<endl;
    
    
    return 0;
}
