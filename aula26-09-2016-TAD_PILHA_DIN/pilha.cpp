#include "pilha.h"
#include <iostream>
#include <cstdlib>

using namespace std;

void PilhaDin::push(int elemento)
{
    if(primeiro==NULL)
    {
        No *temp=(No*) malloc(sizeof(No));
        temp->elemento=elemento;
        temp->prox=NULL;
        primeiro=temp;
    }
    else
    {
        No *temp=(No*) malloc(sizeof(No));
        temp->elemento=elemento;
        temp->prox=primeiro;
        primeiro=temp;
    }

}
int PilhaDin::pop()
{
    int elemento=0;

    if(primeiro==NULL)cout<<"** PILHA VAZIA **"<<endl;

    else
    {
        elemento=this->primeiro->elemento;
        primeiro=primeiro->prox;
    }
    return elemento;
}
void PilhaDin::inicializar()
{
    this->primeiro=NULL;
}
void PilhaDin::exibir()
{
    if(primeiro==NULL)cout<<"** PILHA VAZIA **"<<endl;

    else
    {
        No *aux=this->primeiro;
        int i=0;
        while(aux!=NULL)
        {
            if(aux==this->primeiro) cout<<"ELEMENTO N "<<i<<" : "<<aux->elemento<<" <-- TOPO"<<endl;
            else cout<<"ELEMENTO N "<<i<<" : "<<aux->elemento<<endl;
            aux=aux->prox;
            i++;
        }
    }
}





