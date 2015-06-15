#include <stdio.h>
int main(void){
    int a=0;
    char ch;
    do
    {
        ch=getchar();
        if (ch=='\n')
        a++;
    }while (ch!=EOF);
    printf("Edoses %d grammes",a);
    return 0;
}
