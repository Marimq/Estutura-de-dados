#ifndef LISTA_H
#define LISTA_H
#define MAX 100
typedef struct{ 
    int dados[MAX]; 
    int qtd; 
}Lista; 

Lista* cria_lista();

int buscar_elem(const Lista* l, int elem);
int busca_binario(const Lista* l, int elem); 
int insere_final_unico(Lista* l, int elem); 
int insere_ordenado_unico(Lista* l, int elem); 
void imprime_lista(const Lista* l); 
void lista_libera(Lista* l); 

#endif 