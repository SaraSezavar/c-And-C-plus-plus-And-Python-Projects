#include <iostream>
using namespace std;

int main(int argc, char** argv){
    int aset, bset;
    cout<<"how many numbers you have for set A :"<<endl;
      cin>>aset;
    cout<<"how many numbers you have for set B :"<<endl;
      cin>>bset;

      int A[aset];
      int B[bset];
      int cset=aset+bset;
      int C[cset];
    for(int i=0; i<aset; i++){
        cout<<"enter the "<<i<<" member of A set:"<<endl;
        cin>>A[i];
    }

    for(int j=0; j<bset; j++){
        cout<<"enter the "<<j<<" member of B set:"<<endl;
        cin>>B[j];
    }


    int i=0;
      while(i<aset){
        C[i]=A[i];
        i++;
      }

      int bCount=0;
      int cCount=aset;
      while(bCount<bset){
        int aCount=0;
         int sw=1;
          while(sw==1 && aCount<aset){
            if(A[aCount]==B[bCount]){
                sw=0;
              }
              aCount++;
            }
            if(sw==1){
                C[cCount]=B[bCount];
                cCount++;
            }
      bCount++;
      }


      i=0;
      while(i<cCount){
            int j=i+1;
            while(j<cCount){
                    if(C[i]==C[j]){
                        C[j]=C[cCount];
                        cCount--;
                    }else { j++;}
            }
            i++;
      }

      cout<<"this is the union of sets:"<<endl;
      for(i=0; i<cCount; i++){
        cout<<"\t \n"<<C[i]<<endl;
      }

    return 0;
}
