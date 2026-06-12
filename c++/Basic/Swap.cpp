#include<iostream>
using namespace std;
int main(){
    int x = 1, y = 4;
    cout<<x<<y<<endl;
    int temp = x;
           x = y;
           y = temp;
        cout<<x<<y<<endl;
    }
