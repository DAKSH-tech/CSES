#include <iostream>
using namespace std;
int main(void){
    long long n;
    cin>>n;
    while(n!=1){
        cout<<n<<" ";
        n%2==0?n/=2:n=(n*3)+1;
    }
    cout<<1<<endl;
}
