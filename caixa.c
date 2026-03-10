#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "header.h"
int fecharc = -1;
int iniciar(){

while(fecharc != 0){

system("clear");

tituloc();
opc();
scanf("%d", &fecharc);

if(fecharc == 0){
system("clear");
titulo();

break;
}

}

return 0;
}



