#ifndef _PILHA_H_
#define _PILHA_H_

struct No
{
    int elemento;
    No * prox;
};

struct PilhaDin
{
    No * primeiro;

    void push(int elemento);
    int pop();
    void inicializar();
    void exibir();
};

#endif // _PILHA_H_
