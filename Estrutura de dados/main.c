#include <stdio.h> 
#include "lista.h"
#include <stdlib.h>

int main(){
     Lista* l = cria_lista(); 
     insere_final_unico(l, 10); 
     insere_final_unico(l, 20); 
     insere_final_unico(l, 10);

     imprime_lista(l); 
     
    insere_ordenado_unico(l, 15);
    insere_ordenado_unico(l, 5);
    insere_ordenado_unico(l, 20);

    imprime_lista(l); 
    lista_libera(l);
}