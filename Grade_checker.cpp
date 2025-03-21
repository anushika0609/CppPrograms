#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter marks : ";
    cin>>marks;
    if(marks>=85){
        cout<<"Grade : A"<<endl;
    }
    else if(marks>=75 && marks<85){
        cout<<"Grade : B"<<endl;
    }
    else if(marks>=33 && marks<75){
        cout<<"Grade : C"<<endl;
    }
    else{
        cout<<"Fail"<<endl;
    }
}