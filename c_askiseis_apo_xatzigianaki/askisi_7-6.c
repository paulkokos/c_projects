/*
na grafei programma to opoio na apofasizei an to etos einai
disekto i oxi
kritiria:
tha zitaei na pliktrologithei to etos
tha emfanizei to tetos "disekto" an einai, kai "kanoniko" ama
den einai
disekto einai to etos poy dieritai akrivos me to 4.omos ta etoi poy dieroyntai
akrivos me to 100 den einai. ektos kai ama dieroyntai akrivos me to 400.
*/#include <stdio.h>
int main(void){
    int etos,disekto1,disekto2,disekto3;
    printf("Δωσε ετος: ");
    scanf("%d",&etos);
    disekto1=etos%4;
    disekto2=etos%100;
    disekto3=etos%400;
    //`printf("%d\n%d\n%d\n",disekto1,disekto2,disekto3);
    if (disekto1==0 && disekto2!=0 || disekto3==0){
    printf("to etos einai disekto");
    }else { printf("to etos den einai disekto");}

    return 0;
}
