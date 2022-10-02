#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void reverse(char ch[]){
    int s=0,e=strlen(ch)-1;
    while(s<e){
        swap(ch[s],ch[e]);
        s++;
        e--;
    }
    
}

int main(){
    char ch[20];
    cout<<"Enter a string: ";
    cin>>ch;
    reverse(ch);
    cout<<"You entered: " <<ch<<endl;
    
}