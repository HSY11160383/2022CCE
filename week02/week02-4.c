#include <iostream>
using namespace std;
int main(){
    long long int a,b;
    long long int ans = 0;
    while (cin>>a>>b){
        ans = a-b;
        if(ans<0) ans=b-a;
        cout<<ans<<endl;
    }

}
