#include <stdio.h>
int sum(int a, int b); ///���ŧideclare

int main (){
    ///�Τ��e �n���ŧideclare
    int ans = sum(2,3);///�ϥΩI�s
    printf("ans: %d\n", ans);
}
int sum(int a, int b)///�w�qdefine
{
    return a+b;
}
