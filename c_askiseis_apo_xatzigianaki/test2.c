#include <stdio.h>
int main(){
    int posotita;
    float synolo;
    char gramma;
    printf("dose grama gia na prosdioriseis to eidos toy grammatosimoy");
    scanf("%c",&gramma);
    printf("dose posotita grammatosimon");
    scanf("%d",&posotita);
    if (gramma=='E'){
        synolo=0.23*posotita;
    }
    if (gramma=='A'){
        synolo=0.70*posotita;
    }
    if(gramma=='T'){
        synolo=0.15*posotita;
    }
    printf("to synoliko poso einai %f",synolo);
}
