#include <iostream>
using namespace std;


int main(int argc, char**argv){


    int number;
    cout<<"how many numbers do you have ?"<<endl;
    cin>>number;

    int A[number];


      int i=0;
      while (i<number){
        cout<<"enter the number"<<i<<endl;
        cin>>A[i];
        i++;
      }

      i=0;
      while(i<number){
            int j=i+1;
            while(j<number){
                    if(A[i]==A[j]){
                        A[j]=A[number-1];
                        number=number-1;
                    }else { j++;}
            }
            i++;
      }

    cout<<"these are the result: \a"<<endl;

      int p=0;
        while(p<number){
            cout<<"\n \t"<<A[p]<<endl;
            p++;
        }


    return 0;
}
