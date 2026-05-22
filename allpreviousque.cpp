



#include<iostream>
using namespace std;
int main(){
    int x=5;
    cout<<x<<endl;
    x+=3;
    cout<<x<<endl;
    x*=4;
    cout<<x<<endl;
}



#include<iostream>
using namespace std;
int main(){
    float x=3, y = 4;
    cout<<y/x;
}


#include<iostream>
using namespace std;
int main(){
    int x = 4;
    cout<<x<<endl;
    x++;
    cout<<x<<endl;
    x--;
    cout<<x<<endl;
    ++x;
    cout<<x<<endl;
}

 
#include<iostream>
using namespace std;
int main(){
    float x = 3.1;
    float area = 3.14*x*x;
    cout<<"Area of the circle is:  "<<area;
}

#include<iostream>
using namespace std;
int main(){
    float x;
    cin>>x;
    cout<<x*x<<endl;
}


#include<iostream>
using namespace std;
int main(){
    float x;
    cout<<"Input a number:  ";
    cin>>x;
    cout<<"square of above given number is: ";
    cout<<x*x<<endl;
}


#include<iostream>
using namespace std;
int main(){
   float x ;
   cin>>x;
   float y ;
   cin>>y;
   cout<<"sum of the given numbers: "<<x+y;
}


#include<iostream>
using namespace std;
int main(){
   int x = 11, y = 5;
   cout<<x%y;
}


#include<iostream>
using namespace std;
int main(){
   int x;
   cin>>x;
   float y = (float)x; //typecasting
   cout<<y/2;
}




#include<iostream>
using namespace std;
int main(){
   int x;
   cin>>x;
   cout<<x*3/4;
}



#include<iostream>
using namespace std;
int main(){
    char x ;
    cin>>x;
    cout<<( int )x;
}
 


#include<iostream>
using namespace std;
int main(){
    int x ;
    cin>>x;
    char y = (char)x;
    cout<<y;
}


#include<iostream>
using namespace std;
int main(){
    cout<<5/2<<endl;
    cout<<5.0/2<<endl;
    cout<<5/2.0<<endl;
    cout<<5.0/2.0<<endl;
}


#include<iostream>
using namespace std;
int main(){
    cout<<7/22*(3.14+2)*3/5;
}



if else statement

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:  ";
    cin>>n;
    if(n%2==0){
      cout<<"even number"; 
    }
    else{
      cout<<"odd number";
    }
}



#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n%5==0){
        cout<<"YES, number is divisible by 5";
    }
    else{
        cout<<"NO number is not divisble by 5";
    }
}



#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n>=0){
        cout<<n;
    }
    else{
        cout<<-n;
    }
}

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<0)  n = -n;
        cout<<n;
    
}



#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"Cost price is: ";
    cin>>cp;
    int sp;
    cout<<"selling price is: ";
    cin>>sp;
    if(sp>cp){
        cout<<"seller made a profit of "<<sp-cp;
    }
    else if(sp==cp){
        cout<<"seller made no profit or loss";
    }
    else{
        cout<<"seller made  a loss of "<<cp-sp;
    }
}



#include<iostream>
using namespace std;
int main(){
    int l;
    cout<<"Enter the length of the rectangle";
    cin>>l;
    int b;
    cout<<"Enter the breadth of a rectangle";
    cin>>b;
    if(l*b>2*(l+b)){
        cout<<"area is greater than it's perimeter";
    }
    else{
        cout<<"perimeter is greater than area ";
    }
}



#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    if(n>99 && n<1000){
        cout<<"3 digit number";
    }
    else{
        cout<<"not a 3 digit number";
    }

}


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if((n%3==0 || n%5==0) && n%15!=0){
        cout<<"number is divisible by 5 or 3 but not by 15";
    }

    else{
        cout<<"number is not divisible by 15";
    }
}



#include<iostream>
using namespace std;
int main(){
    int a ,b ,c;
    cout<<"Enter the number a: ";
    cin>>a;
    cout<<"Enter the number b: ";
    cin>>b;
    cout<<"Enter the number c: ";
    cin>>c;
    if ((a+b)>c && (b+c)>a && (c+a>b)){
        cout<<"These are the sides of a triangle";
    }

    else{
        cout<<"no these are not sides of triangle";
    }
}



#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter the number a: ";
    cin>>a;
    cout<<"Enter the number b: ";
    cin>>b;
    cout<<"Enter the number c: ";
    cin>>c;
    if(a>b && a>c){
        cout<<"a is greater than b and c both";
    }
    else if(b>c && b>c){
        cout<<"b is greater than a and c both";
    }
    else{
        cout<<"c is greater than b and a both";
    }
}




#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter the number a: ";
    cin>>a;
    cout<<"Enter the number b: ";
    cin>>b;
    cout<<"Enter the number c: ";
    cin>>c;
    if(a>b){
        if(a>c){
           cout<<"a is greatest of all";
        }
        else{
            cout<<"c is greatest of all";
        }

    }
    else{
        if(b>c){
            cout<<"b is greatest of all";
        }
        else{
            cout<<"c is greatest";
        }
        

    }
}



#include<iostream>
using namespace std;
int main(){
    int r ,s ,a;
    cout<<"age of ram";
    cin>>r;
    cout<<"age of shyam";
    cin>>s;
    cout<<"age of ajay";
    cin>>a;
    if(r<s){
        if(r<a){
            cout<<"Ram is youngest of all three";
        }
        else{
            cout<<"ajay is youngest";
        }
    }

    else{ //s<r
        if(s<a){
            cout<<"shyam is youngest of all three";
        }
        else{
            cout<<"ajay is youngest of al three";
        }
    }
}



#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the marks of the student: ";
    cin>>m;
    if(m>40 && m<100){
        if(m<=60){
            cout<<"average";
        }
        else if(m<=80){
            cout<<"good";
        }
        else{
            cout<<"very good";
        }
    }
    else{
        cout<<"fail";
    }
}



#include<iostream>
using namespace std;
int main(){
    int x, y;
    cout<<"Enter the number x: ";
    cin>>x;
    cout<<"Enter the number y: ";
    cin>>y;
    if(x>=0){
        if(y>0){
            cout<<"1st quadrant";
        }
        else{
            cout<<"4th quadrant";
        }
    }
    else{
        if(y>0){
            cout<<"2nd quadrant";
        }
        else{
            cout<<"3rd quadrant";
        }
    }
}




#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number a: ";
    cin>>a;
    (a%2==0) ? cout<<"even" : cout<<"odd";
}


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    (n%2==0) ? cout<<"even" : cout<<"odd";

}




#include<iostream>
using namespace std;
int main(){
    int n1 , n2;
    cout<<"Enter the number n1: ";
    cin>>n1;
    cout<<"Enter the number n2: ";
    cin>>n2;
    char ch;
    cout<<"Enter the operator used: ";
    cin>>ch;
    switch(ch){
        case '+':
           cout<<"sum of the digits"<<n1+n2<<endl;
           break;
        case '-':
            cout<<"subtraction"<<n1-n2;
            break;
        }
    }
    




#include<iostream>
using namespace std;
int main(){
    int x = 3, y, z;
    y = x = 10;
    z = x<10;
    cout<<x<<" "<<y<<" "<<z;
}




#include<iostream>
using namespace std;
int main(){
    for(int i=10;i<=100;i++){
        cout<<i<<" ";
    }
}



#include<iostream>
using namespace std;
int main(){
    cout<<"odd numbers are: ";
    for(int i=0;i<=100;i++){
        if(i%2==1) 
             cout<<i<<" ";
    }
}



#include<iostream>
using namespace std;
int main(){
    cout<<"odd numbers are: ";
    for(int i=1;i<=100;i=i+1){
        if(i%2==0){
            cout<<i<<" ";
        }
    }
}





#include<iostream>
using namespace std;
int main(){
    cout<<"table of 19: ";
    for(int i=19;i<=190;i=i+19){
       
         cout<<i<<endl;
        
    }
}




#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number n: ";
    cin>>n;
    cout<<"Table of number n is: ";
    for(int i=n; i<=(n*10); i = i+n){
        cout<<i<<endl;
    }
}
     



#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number n: ";
    cin>>n;
    cout<<"arithematic progression is: ";
    for(int i=(1);i<=(2*n-1);i=i+2){
       
         cout<<i<<" ";
        
    }
}




#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number n: ";
    cin>>n;
    cout<<"arithematic progression is: ";
    for(int i=(4);i<=(3*n+1);i=i+3){
       
         cout<<i<<" ";
        
    }
}







#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int a = 4;
    for(int i=1; i<=n; i++){
        cout<<a<<" ";
        a+=3;
    }
}




#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int a = 1;
    for(int i=1; i<=n; i++){
        cout<<a<<" ";
        a+=2;
        
    
    }
}




#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int a =1;
    for(int i=1; i<=n; i++){
        cout<<a<<" ";
        a= a*2;
    }
}




#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int a = 3;
    for(int i=1; i<=n; i++){
        cout<<a<<" ";
        a=a*4;
        
    
    }
}


code to find highest factor of a number

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int f =1;
    
    for(int i=1; i<n; i++){
        if(n%i==0) f = i;
    }
    cout<<f;

}





reverse loop

to check the condition of highest factor

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number n: ";
    cin>>n;
    for(int i=(n/2); i>=i; i--){
        if(n%i==0){
            cout<<i<<" ";
            break;
        }
    }
}








prime and composite number


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    for(int i=2; i<=(n/2); i++) {
        if(n%i==0){
            cout<<"composite number";
            break;
        }
        else{
            cout<<"prime number";
            break;
        }
    }

}





#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        if(i!=3 && i!=8) cout<<i<<" ";
    }

}



continue function


#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=20;i++){
        if(i==2 || i==8) continue;
         cout<<i<<" ";
    }
}




#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=100;i++){
        if(i%2==0) continue;
         cout<<i<<" ";
    }
}




while loop

#include<iostream>
using namespace std;
int main(){
    int i = 1;
    while(i<=10){
        cout<<i<<endl;
        i++;
    }
}


do while loop

#include<iostream>
using namespace std;
int main(){
    int i =1;
    do{
        cout<<i<<" ";
        i++;
    }while(i<=20);
}


#include<iostream>
using namespace std;
int main(){
    cout<<"shaurya i love you";
}



infinite loop

#include<iostream>
using namespace std;
int main(){
    int i;
    while(i=10){
        cout<<i<<endl;
        i++;
    }
}




important que


#include<iostream>
using namespace std;
int main(){
    int x=4,y=0;
    while(x>=0){
        x--;
        y++;
        if(x==y){
            continue;
        }
        else{
            cout<<x<<" "<<y<<endl;
        }
    }
}




que using operators
WAP to count digits of a given number.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int count = 0;
    while(n!=0){
        n = n/10;
       
        count++; 
    }
    cout<<count;
}
    



