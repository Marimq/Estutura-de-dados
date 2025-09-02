#include <stdlib.h> 
#include <stdio.h> 
#include "lista.h" 
Lista* cria_lista(void){
    Lista* l =(Lista*)malloc(sizeof(Lista)); 
    if(l != NULL){
         l->qtd = 0; 
         return l; 
    } return NULL; 
} 
void lista_libera(Lista* l) {
     free(l); 
} 
int buscar_elem(const Lista* l, int elem){
     if(l == NULL){ 
        return -1; 
    } 
    for(int i = 0; i < l->qtd; i++){
         if(l->dados[i] == elem){
             return i; 
        } 
    } return -1;
} 
 int busca_binario(const Lista* l, int elem){
    if(l == NULL || l->qtd == 0){
         return -1; 
    } int inicio = 0, fim = l->qtd - 1; 
    while(inicio <= fim){
         int meio = (inicio + fim) / 2; 
         if(l->dados[meio] == elem){
             return meio; 
        }else if(l->dados[meio] < elem){
             inicio = meio + 1; 
        }else{
             fim = meio - 1; 
            } 
    } 
    return -1;
} 
int insere_final_unico(Lista* lista, int elem){
     if(lista == NULL || lista->qtd == MAX){
         return 0; 
    } 
    if(buscar_elem(lista, elem) != -1){
         return 0; 
    }
    lista->dados[lista->qtd] = elem; 
    lista->qtd++; 
    return 1; 
} 
int insere_ordenado_unico(Lista* lista, int elem){
     if(lista == NULL || lista->qtd == MAX){
         return 0; 
    } 
    if(busca_binario(lista, elem) != -1){
         return 0; 
    } 
    int i = lista->qtd - 1;
    while(i >= 0 && lista->dados[i] > elem){
         lista->dados[i + 1] = lista->dados[i]; i--; 
    } 
    lista->dados[i + 1] = elem;
    lista->qtd++;
    return 1; 
} 
void imprime_lista(const Lista* l){
    if(l == NULL || l->qtd == 0){
         printf("Lista vazia\n"); 
         return; 
    } 
    for(int i = 0; i < l->qtd; i++){
        printf("%d ", l->dados[i]); 
    } 
    printf("\n"); 
}