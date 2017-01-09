#include <stdio.h>
#include <stdlib.h>
int main(){
    char *p;
    char letter;
    int i=0;
    printf("dose gramma elegxoy");
    scanf("%c",&letter);
    p="arnaki aspro kai paxy ths manas to kamari";
    while (*p!='\0'){
        if (*p==letter) i++;

        p++;
        printf(p);
        printf("%d\n",i);
    }
    return 0;
}
