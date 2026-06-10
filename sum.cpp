#include<iostream>
using namespace std;
int sum(int n, int m){
    return n+m;



}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int m;
    cout<<"Enter a number : ";
    cin>>m;
    cout<<sum(n,m);
}