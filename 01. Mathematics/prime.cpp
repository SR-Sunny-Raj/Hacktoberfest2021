#include<iostream>
using namespace std;

int main(){
    int num;
    int count=0;
    cout<<"Enter the number";
    cin>>num;
    for(int i=2;i<num;i++){
        if(num%i==0){
            count = count+1;
        }
        else{
            continue;
        }
    }
    if(count>0){
        cout<<"Not A Prime Number";
    }
    else{
        cout<<"Prime Number";
    }
    return 0;
}
