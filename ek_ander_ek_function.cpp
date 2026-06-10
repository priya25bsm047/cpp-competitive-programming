#include<iostream>
using namespace std;
void usa(){
    cout<<"I am in USA";
}
void india(){
    cout<<"I am in India"<<endl;
    usa();
}
int main(){
    cout<<"hi"<<endl;
    india();
}