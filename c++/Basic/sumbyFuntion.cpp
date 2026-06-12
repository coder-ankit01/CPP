#include<iostream>
using namespace std;
void sum(int x,int y){
    cout<<x+y;
}
    int main(){
    int x;
    cout<<"enter first no: ";
    cin>>x;
    int y;
    cout<<"enter second no: ";
    cin>>y;
    sum(x,y);
}