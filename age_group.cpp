#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter Age : ";
    cin>>age;
    if(age<12){
        cout<<"Age category : Child";
    }
    else if(age>=12&&age<=18){
        cout<<"Age category : Teenager";
    }
    else{
        cout<<"Age category : Adult";
    }
    return 0;

}
