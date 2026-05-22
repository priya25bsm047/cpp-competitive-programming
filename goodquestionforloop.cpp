//good question


//WAp to count digits of a given number

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int i=0;
//     while(n!=0){
//         n/=10;
//         i++;
//     }
//     cout<<i<<endl;
// }



//very important
//WAP to print sum of digits of a given number.


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int sum =0;
//     while(n!=0){
//         int ld = n%10;
//         n/=10;
//         sum+=ld;
//     }
//     cout<<sum;
// }



//WAP to print product of digits of a given number.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int pro =1;
//     while(n!=0){
//         int ld = n%10;
//         n/=10;
//         pro*=ld;
//     }
//     cout<<pro;
// }



//WAP to print sum of all the even digits of a given number


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int sum = 0;
//     while(n > 0){
//         int ld = n % 10;
//         if(ld % 2 == 0){
//             sum += ld;
//         }
//         n = n / 10;
//     }
//     cout << sum;
// }





//very good question
//WAP to print reverse of a given number

// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cout<<"Enter a number: ";
//     cin >> n;
//     int digit = 0;
//     while(n>0){
//         int ld = n%10;
//         digit=((digit*10)+ld);
//         n = n/10;
//     }
//     cout<<digit;
// }




//WAP to print the sum of a  given number and it's sum.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin >> n;
//     int digit = 0;
//     int sum = 0;
//     while(n>0){
//         int ld = n%10;
//         sum+=ld;
//         digit=((digit*10)+ld);
//         n = n/10;
//     }
//     cout<<sum<<endl;
//     cout<<digit;
// }
 



// WAP to find the factorial of a given number

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin >> n;
//     int fact = 1;
//     for(int i=1; i<=n;i++){
//         fact*=i;
//     }
//     cout<<fact;
// }





//same as above but an inportant simple one line change
//WAP to find the factorial of first n  given number

//  #include<iostream>
// using namespace std;
// int main(){
    // int n;
    // cout<<"Enter a number: ";
    // cin >> n;
//     int fact = 1;
//     for(int i=1; i<=n;i++){
//         fact*=i;
//         cout<<fact<<endl;
//     }
// }





//WAP to print 26 alphabets along with it's ASCII values

// #include<iostream>
// using namespace std;
// int main(){
    
//     for(int i= 65; i<=90; i++){
//         char(y) = (char)i;

//         cout<<y<<" "<<i<<endl;
//     }
// }





