#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter Three Digit No: ";
    cin>>x;
    if(x>99 && x<1000){
        cout<<"3 Digit number";
    }
    else {
        cout<<"not a 3 digit number";
    }
}