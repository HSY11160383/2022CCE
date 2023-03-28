#include <stdio.h>
int main()
{
    FILE * fout = fopen("file.txt", "w");

    fprintf(fout,"Hello World\n");
    printf("檔案出現了喔請檢察檔案總管");


}

