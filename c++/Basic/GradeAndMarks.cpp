#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter Marks: ";
    cin>>x;
    if(x>90){
        cout<<"Excellent";
    }
    else if(x>70){
        cout<<"Good";
    }
    else if(x>33){
        cout<<"Average";
    }
    else {
        cout<<"Fail";
    }
}
    