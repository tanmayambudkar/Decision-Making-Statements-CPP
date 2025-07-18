#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter a Value for A: ";
    cin>>a;
    cout<<"Enter a Value for B: ";
    cin>>b;
    cout<<"Enter a Value for C: ";
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<" "<<a<<" Is Greater than "<<b<<" & "<<c<<" ";
        }
        else{
            cout<<" "<<c<<" Is Greater than "<<a<<" & "<<b<<" ";
        }
    }
    else if(b>a){
        if(b>c){
            cout<<" "<<b<<" Is Greater than "<<a<<" & "<<c<<" ";
        }
        else{
            cout<<" "<<c<<" Is Greater than "<<a<<" & "<<b<<" ";
        }
    }
    else{
        cout<<" "<<a<<", "<<b<<" & "<<c<<" Are Equal";
    }
    return 0;
}