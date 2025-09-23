// EXPERIMENT-16
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3


#include <iostream>
using namespace std;

int main() {
    int age;
    cout<<"Enter your age: ";
    cin>>age;;
    try{
        if(age<18){
            throw age;
        }
        else{
            cout<<"You are eligible for voting ! "<<endl;
        }
    }
    catch(int num){
        cout<<"\nYou are not eligible for voting ! please wait "<<18-num<<" years more"<<endl;
    }

    return 0;
}

/*Output:

Enter your age: 24
You are eligible for voting ! 
---
Enter your age: 15

You are not eligible for voting ! please wait 3 years more
*/
