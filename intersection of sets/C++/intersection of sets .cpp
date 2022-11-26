#include <iostream>
using namespace std;


int main(){
    int aset, bset,cset;
    cout<<"hello, in this program we want to calculate the intersection of two sets, so start"<<endl;
    cout<<" how many numbers are belong the A set?"<<endl;
      cin>>aset;
    cout<<" how many numbers are belong the B set?"<<endl;
      cin>>bset;
    int A[aset];
    int B[bset];

       if (aset>=bset){
           cset=bset;
        }else {cset=aset;}
    int C[cset];

    int i=0;
    while(i<aset){
        cout<<"enter the"<<i<<"member of A set: "<<endl;
        cin>>A[i];
        i++;
    }
    int j=0;
    while(j<bset){
        cout<<"enter the"<<j<<"member of B set: "<<endl;
        cin>>B[j];
        j++;
    }

    int aCount=0;
    int cCount=0;

      while(aCount<aset){
        int bCount =0;
        int sw=1;
        while (sw==1 && bCount<bset){
            if(B[bCount]==A[aCount]){
                    cCount++;
                    C[cCount]=A[aCount];
                    sw=0;
            }
            bCount++;
        }
        aCount++;
      }


    cout<<"this is the intersection of two sets:"<<endl;
      i=1;
      while(i<=cCount){
        cout<<"\t"<<C[i]<<endl;
        i++;
      }


    return 0;
}
