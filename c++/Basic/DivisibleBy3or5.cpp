#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter No: ";
    cin>>x;
    if(x%3==0 && x%5==0){
        cout<<"Divisible by 3 or 5";
    }
    else {
        cout<<"Nott Divisible by 3 or 5";
    }
}