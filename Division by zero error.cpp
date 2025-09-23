// EXPERIMENT-16
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3


#include <iostream>
using namespace std;

int main() {
    float n1 , n2 , ans;
    cout<<"Enter the value of number 1 & 2: ";
    cin>>n1>>n2;
    try{
        if(n2==0){
            throw n2;
        }
        else{
            ans=n1/n2;
            cout<<"Answer = "<<ans<<endl;
        }
    }
    catch(float num){
        cout<<"\nERROR: Division by "<<num<<endl;
    }

    return 0;
}

/*Output:

Enter the value of number 1 & 2: 5 0

ERROR: Division by 0

Enter the value of number 1 & 2: 10 5
Answer = 2

*/
