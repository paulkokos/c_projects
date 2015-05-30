#include <stdio.h>
//#include<string.h>
int main(){
    char *p;
    p="arnaki arpro kai paxi";
    while (*p!='\0'){
        if (*p==' ')
            putchar('\n');
            else
            putchar(*p);
        p++;
    }
    return 0;
}
