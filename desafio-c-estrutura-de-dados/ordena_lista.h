void ordena(NODO *lista){	//recebe um ponteiro (endere�o na mem�ria) como par�metro
	int i;	//variavel pra iniciar o for
    for (i = 0; i < lista->p; i++){
    	printf("cor %s, tamanho %s, nome %s\n", lista->info[i].cor, lista->info[i].tamanho, lista->info[i].nome_dono);
	}
	printf("\n");
}
