#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cout<<"Enter a Character: ";
    cin>>str;
    if(str=="a" || str=="e" || str=="i" || str=="u" || str=="A" || str=="E" || str=="I" || str=="O" || str=="U"){
        cout<<"The Given Character: "<<str<<" Is a Vowel";
    }
    else{
        cout<<"The Given Character: "<<str<<" Is a Consonant";
    }
    return 0;
}