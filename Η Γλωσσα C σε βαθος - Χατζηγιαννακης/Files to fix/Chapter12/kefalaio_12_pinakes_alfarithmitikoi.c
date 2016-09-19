#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
//#include <string>
int main(){
    char lex[30],ans[30];



    strcpy(lex,"POLITIKOI");
    strcat(lex," ");
    strcat(lex,"TEXNOLOGIA");
    puts(lex);
    printf("MHKOS=%d",strlen(lex));
    printf("dose ena tmima toy panepistimioy egaioy");
    gets(ans);
    if (strcmp(lex,ans)==0)
        printf("eisai miso dikos mas\n");
        else{
            printf("atyxises\n");
            puts(strcpy(lex,"TELOS"));
    }
    return 0;

    return 0;
}
