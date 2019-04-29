#include "pilha.h"
#include <iostream>

using namespace std;

void Pilha::push(int elemento)
{
    if(this->cheia()) cout<<"PILHA ESTA CHEIA"<<endl;

    else
    {
        this->topo++;
        this->elementos[this->topo]=elemento;
    }
}
int Pilha::pop()
{
    if(this->vazia()) cout<<"PILHA ESTA VAZIA"<<endl;

    else
    {
        int elemento= this-> elementos[this->topo];
        this->topo--;
        return elemento;
    }
}
bool Pilha::vazia()
{
    if(this->topo==-1) return true;
    return false;
}
bool Pilha::cheia()
{
    if(this->topo==tam-1) return true;
    return false;
}
int Pilha::verTopo()
{
    return this->elementos[this->topo];
}
int Pilha::tamanho()
{
    return this->topo+1;
}
void Pilha::inicializar()
{
    this->topo=-1;
}
void Pilha::exibir()
{
    for (int i=tam; i>-1; i--)
    {
        if (i==topo)cout<<"ELEMENTO NUMERO: "<<i<<" TOPO -->  "<<this->elementos[i]<<endl;
        if (i>topo) cout<<"ELEMENTO NUMERO: "<<i<<" \t--> ---"<<endl;
        if (i<topo) cout<<"ELEMENTO NUMERO: "<<i<<" \t-->  "<<this->elementos[i]<<endl;
    }
}
