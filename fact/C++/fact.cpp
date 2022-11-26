#include <iostream>
using namespace std;

int main(int argc, char** argv){
    int num;
    cout<<"please enter the number to evalute its Factorial : "<<endl;
    cin>>num;
    int i=1;
    int fact=1;
    while (i<=num)
    {
        fact*=i;
        i+=1;
    }

   cout<<"here is the result:"<<fact<<endl;

    return 0;   
}