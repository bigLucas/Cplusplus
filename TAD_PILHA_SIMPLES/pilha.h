#ifndef _PILHA_H_
#define _PILHA_H_
#define tam 7

//Implementação de uma pilha simples, altere a definição tam
//para o seu tamanho de pilha necessário

struct Pilha
{
    //variaveis
    int topo;
    int elementos[tam];

    //funções
    void push(int elemento);
    int pop();
    bool vazia();
    bool cheia();
    int verTopo();
    int tamanho();
    void inicializar();
    void exibir();
    void pause();
};

#endif // _PILHA_H_
