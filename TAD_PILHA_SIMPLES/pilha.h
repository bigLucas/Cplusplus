#ifndef _PILHA_H_
#define _PILHA_H_
#define tam 7

//Implementa��o de uma pilha simples, altere a defini��o tam
//para o seu tamanho de pilha necess�rio

struct Pilha
{
    //variaveis
    int topo;
    int elementos[tam];

    //fun��es
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
