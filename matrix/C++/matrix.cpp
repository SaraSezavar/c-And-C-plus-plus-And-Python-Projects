#include <iostream>
using namespace std;

int main(int argc, char** argv){

    cout<<"in this program we want to calculate multiplication of matrix"<<endl;

    int row1,column1;
    cout<<"\n enter the row of matrix 1:"<<endl;
    cin>>row1;
    cout<<" enter the column of matrix 1:"<<endl;
    cin>>column1;
    int row2,column2;
    cout<<"\n enter the row of matrix 2:"<<endl;
    cin>>row2;
    cout<<" enter the column of matrix 2:"<<endl;
    cin>>column2;

    if(column1!=row2){
        cout<<"these matrix are incalculably"<<endl;
        return 0;
    }

    int A[row1][column1];
    int B[row2][column2];
    int C[row1][column2];
    //call matrix1
    int i=1;
    while(i<=row1){
        int j=1;
        while(j<=column1){
            cout<<"enter the member a"<<i<<j<<": "<<endl;
            int k=j-1, h=i-1;
            cin>>A[h][k];
            j++;
        }
        i++;
    }

    i=1;
    while(i<=row2){
        int j=1;
        while(j<=column2){
            cout<<"enter the member b"<<i<<j<<": "<<endl;
            int k=j-1, h=i-1;
            cin>>B[h][k];
            j++;
        }
        i++;
    }


    int g=0;
    while(g<row1){
          int a=0;
          while(a<column2){
                int b=0;
                int sum=0;
              while(b<column1){
                sum+=A[g][b]*B[b][a];
                b++;
              }
              C[g][a]=sum;
              a++;
          }
          g++;
    }

    cout<<"this is the matrix C: \n"<<endl;
    int e=0;
    while(e<row1){
        int f=0;
        while(f<column2){
            cout<<"\t"<<C[e][f]<<endl;
            f++;
        }
        e++;
        cout<<"\n"<<endl;
    }


    return 0;
}
