#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter a Number: ";
    cin>>a;
    if(a%2==0){
        cout<<"The Number: "<<a<<" Is Even";
    }
    else{
        cout<<"The Number: "<<a<<" Is Odd";
    }
    return 0;
}