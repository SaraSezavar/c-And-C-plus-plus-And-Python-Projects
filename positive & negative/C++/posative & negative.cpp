#include <iostream>
using namespace std;

int main(int argc, char** argv){
    int n;
    cout<<"how many numbers you want to separate: "<<endl;
    cin>>n;
    int positive[n];
    int negative[n];

    int number;
    int posCount=0;
    int negCount=0;
    int i=0;
      while(i<n){
          cout<<"enter the "<<i<<" number:"<<endl;
          cin>>number;
          if(number>=0){
            positive[posCount]=number;
            posCount++;
          }else{
            negative[negCount]=number;
            negCount++;
          }
          i++;
      }

      cout<<"\t list of positive numbers:"<<endl;
        for(int j=0; j<posCount; j++){
            cout<<" \n \t \t"<<positive[j]<<endl;
        }
      cout<<"\t list of negative numbers:"<<endl;
        for(int k=0; k<negCount; k++){
              cout<<" \n \t \t"<<negative[k]<<endl;
        }

    return 0;
}
