#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv){

     int number;
      cout<<"enter the number to tell you it is square or not:"<<endl;
     cin>>number;

    int root=number/2;
    int sq_num;
    int i=1;
    int sq_sw=1;
    while(i<=root && sq_sw==1){

        for(int j=1;j<=2;j++){
            sq_num=number/i;
            sq_num=sq_num/i;
        }
        if(sq_num==1){
            sq_sw=0;
        }
        i++;
    }

    if(sq_sw==0){
        cout<<"this is the square number"<<endl;
    }else{
        cout<<"this is not a sqare number"<<endl;
    }

    return 0;
}
