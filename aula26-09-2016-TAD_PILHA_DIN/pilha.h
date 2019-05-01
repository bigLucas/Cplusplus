#ifndef _PILHA_H_
#define _PILHA_H_

//Utilização de structs para implementar uma pilha com 
//alocação dinamica de memória, assim sua pilha não desperdiça
//espaço na memória.

//Um Nó dessa pilha guarda um elemento int e um ponteiro
//para o proximo Nó da pilha.
struct No
{
    int elemento;
    No * prox;
};

//Estrutura da pilha dinamica, guarda o primeiro nó, que aponta
//para o proximo nó da pilha, o primeiro nó sempre
//vai ser o topo da pilha
struct PilhaDin
{
    No * primeiro;

    void push(int elemento);
    int pop();
    void inicializar();
    void exibir();
};

#endif // _PILHA_H_
