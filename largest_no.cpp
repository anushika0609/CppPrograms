#include<iostream>
using namespace std;
int main(){
    int x;
    int y;
    int z;
cout<<"Enter the first no. : ";
cin>>x;
cout<<"Enter the second no. : ";
cin>>y;
cout<<"Enter the third no. : ";
cin>>z;
if(x>=y&&x>=z){
    cout<<"First no. is the largest.";
}
    else if(y>=x&&y>=z){
    cout<<"Second no. is the largest.";
}
else{
    cout<<"Third no. is the largest.";
}

}