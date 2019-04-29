#ifndef _PILHA_H_
#define _PILHA_H_
#define tam 7

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
};

#endif // _PILHA_H_
