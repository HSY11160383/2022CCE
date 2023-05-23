#include <stdio.h>
int main(){
	int N,M,ans;
	scanf("%d %d",&N,&M);
	if(N%M == 0){
		ans=N/M;
		printf("%d",ans);
	}
	else printf("%d",N/M+1);
}
