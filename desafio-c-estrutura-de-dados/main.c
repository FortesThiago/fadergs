#include <stdio.h>	// entrada e sa�da padr�o: printf, scanf
#include <stdlib.h>	// exit, malloc, system

/*Bibliotecas inclu�das*/
#include "modelo.h"	//modelo de dados
#include "incluir_dados.h"	//fun��o que recebe os dados do usu�rio
#include "ordena_lista.h"	//fun��o que ordena a lista

int main() {
    NODO lista; //vari�vel do tipo NODO
    
    incluir(&lista);	//passa o endere�o na mem�ria, da vari�vel lista (passa um ponteiro) para a fun��o

    return 0;
}
