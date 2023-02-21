#include <iostream>
int main(){
    long long int a,b;
    long long int ans = 0;
    while (std::cin>>a>>b){
        ans = a-b;
        if(ans<0) ans=b-a;
        std::cout<<ans<<std::endl;
    }

}
