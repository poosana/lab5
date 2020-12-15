#include<iostream>
using namespace std;

int main(){
    int n;
    int even=0,odd=0;
   
    while(n != 0){
    cout << "Enter an integer: ";
    cin>>n;
    if(n%2 == 0 && n!= 0){
        even++;
    }
    if(n%2 != 0 && n != 0){
        odd++;
        }
    }
    cout << "#Even numbers = "<<even<<endl;

    cout << "#Odd numbers = "<<odd<<endl;
    return 0;
}
