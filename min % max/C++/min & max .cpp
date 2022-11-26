#include <iostream>
using namespace std;

int main(int argc, char** argv){
    int num_times,number;
    cout<<"how many numbers do you want to compare: "<<endl;
    cin>>num_times;
    cout<<"enter the first number :"<<endl;
    cin>>number;
    int max = number;
    int min = number;
    int i=2;
    while (i<=num_times)
    {
        cout<<"enter the number "<<i<<" to compare:"<<endl;
        cin>>number;
        if(number>max){
            max = number;
        }else if(number<min)
        {
            min = number;
        }

        i+=1;
    }

        cout<<"this is the max: "<<max<<endl;
        cout<<"this is the min "<<min<<endl;

    return 0;
}
