#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number n: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        if(i%2!=0){
            for(int j=1; j<=i; j++){
                cout<<j;
            }
            cout<<endl;
        }
    
         else{
            for(int j=1; j<=i; j++){
                cout<<(char)(j+64);;
            }
            cout<<endl;
        } 
    }
}



// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number n: ";
//     cin >> n;

//     for(int i = 1; i <= n; i++) {

//         // Odd rows → numbers
//         if(i % 2 != 0) {
//             for(int j = 1; j <= i; j++) {
//                 cout << j;
//             }
//         }

//         // Even rows → alphabets
//         else {
//             for(int j = 1; j <= i; j++) {
//                 cout << (char)(j + 64);
//             }
//         }

//         cout << endl;
//     }
// }