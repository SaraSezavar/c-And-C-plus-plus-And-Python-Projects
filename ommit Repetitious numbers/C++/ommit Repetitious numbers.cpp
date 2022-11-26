#include <iostream>
using namespace std;


int main(int argc, char**argv){
    int number;
    cout<<"how many number you want to enter?"<<endl;
	cin>>number;

    int A[number];
    int B[number];

      int a;
      int i=0;
      while (i<number){
        cout<<"enter the number"<<i<<":"<<endl;
        cin>>a;
        A[i]=a;
        i++;
      }



    return 0;
}
