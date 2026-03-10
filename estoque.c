#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "header.h"

//variável principal
int est(){

int fechare = -1;


while(fechare != 0){

system("clear");

tituloe();
opce();

scanf("%d",&fechare);

if(fechare < 0 || fechare > 9){
    printf("Opcao invalida\n");

    while(getchar() != '\n');
    continue;
}

if (fechare==0){
system("clear");
titulo();
}
}

return 0;

}




