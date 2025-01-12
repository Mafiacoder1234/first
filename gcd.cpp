#include <iostream>
using namespace std;

//log(max(a,b))
int gcd(int a,int b){
    if(a==0){
        return b;
    }
    return gcd(b%a,a);
}
int main(){
    int a,b;
    cout<<"Enter the numbers: "<<endl;
    cin>>a>>b;
    int ans=gcd(a,b);
    cout<<ans<<endl;
    return 0;
}
