void incluir(NODO *lista){	//recebe um ponteiro (endere�o na mem�ria) como par�metro
	lista->p = 0;	//inicializa a lista
	
	do {	//solicita informa��es do usu�rio at� que ele digite 0 na quantidade
		fflush(stdin);	//limpa o buffer
		scanf("%d", &lista->p);	//recebe a quantidade de registros
		
		int i;	//variavel pra iniciar o for
		for(i = 0; i < lista->p; i++){	//solicita informa��es do usu�rio at� que atinja o n�mero de registros
			fflush(stdin);	//limpa o buffer
			scanf("%[^\n]s", lista->info[i].nome_dono);	//recebe nome do dono da camiseta com espa�os e guarda na lista
			
			fflush(stdin);	//limpa o buffer
			scanf("%s %s", lista->info[i].cor, lista->info[i].tamanho);	//l� a cor e o tamanho da camiseta, estes estando separados por espa�o
		}
		ordena(lista);	//vai ordenar a lista
	} while(lista->p > 0 && lista->p <= 60); //executa as instru��es acima enquanto satisfazer a condi��o de n�mero de registros ser maior que 0 e menor ou igual a 60 
}
