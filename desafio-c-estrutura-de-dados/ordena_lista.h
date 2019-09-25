void ordenar(LISTAENC *lista) {
    if( *lista == NULL )                                // verifica se a lista esta vazia 
        printf( "\n Lista vazia!" );
    else {
        if( (*lista)->prox == NULL )                    // verifica se a lista esta vazia 
             printf( "\n Lista com apenas 1 elemento!" );
        else{
             INFORMACAO aux;                        // auxiliar para a troca de dados
             LISTAENC *ant = *lista;                        // posiciona ponteiro auxiliar para anterior no in�cio da lista
             LISTAENC *p   = ant->prox;                 //posiciona ponteiro auxiliar que ir� caminhar pela lista para comparar com ant
             while( ant->prox != NULL ){            // enquanto n�o for final de lista 
                    while( p != NULL ){             // enquanto n�o compara ant com todos posteriores
                           if( p->info.cor < ant->info.cor || p->info.tamanho < ant->info.tamanho || p->info.nome_dono < p->info.nome_dono){
                               aux      = p->info;  // faz a troca (algoritmo de ordena��o Bolha)
                               p->info  = ant->info;
                               ant->info= aux;
                           } // fim if
                           p= p->prox;
                    } // fim while
                    ant= ant->prox;                 // atualiza ponteiros
                    p= ant->prox;  
             } // fim while                    
         } // fim else
    }
}
