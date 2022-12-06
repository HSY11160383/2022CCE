#include <stdio.h>
int sum(int a, int b); ///先宣告declare

int main (){
    ///用之前 要先宣告declare
    int ans = sum(2,3);///使用呼叫
    printf("ans: %d\n", ans);
}
int sum(int a, int b)///定義define
{
    return a+b;
}
