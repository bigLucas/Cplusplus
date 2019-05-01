#include "pilha.h"
#include <iostream>
#include <cstdlib>

using namespace std;

//Inicializa a struct PilhaDin, assume que ela está vazia
//e seta o primeiro como null
void PilhaDin::inicializar()
{
    this->primeiro=NULL;
}

//INSERE NOVO ELEMENTO NA PILHA
void PilhaDin::push(int elemento)
{
    if(primeiro==NULL)
    {
        //Cria um ponteiro que aponta para um espaço alocado
        //na memoria que tem o tamanho da struct No
        No *temp=(No*) malloc(sizeof(No));
        //Grava o elemento no espaço alocado
        temp->elemento=elemento;
        //Grava o prox NULL, pois é o primeiro elemento da pilha
        temp->prox=NULL;
        //Marca o elemento recem adicionado como topo da pilha
        primeiro=temp;
    }
    else
    {
        //Cria um ponteiro que aponta para um espaço alocado
        //na memoria que tem o tamanho da struct No
        No *temp=(No*) malloc(sizeof(No));
        //Grava o elemento no espaço alocado
        temp->elemento=elemento;
        //Grava o prox como o endereço do primeiro elemento
        temp->prox=primeiro;
        //Transforma esse espaço na memória como o topo da pilha
        primeiro=temp;
    }

}

int PilhaDin::pop()
{
    int elemento=0;

    if(primeiro==NULL)cout<<"** PILHA VAZIA **"<<endl;

    else
    {
        //Uma pilha sempre retira o elemento do topo
        elemento=this->primeiro->elemento;
        //Atribui como topo o elemento que o topo apontava 
        primeiro=primeiro->prox;
    }
    return elemento;
}

void PilhaDin::exibir()
{
    if(primeiro==NULL)cout<<"** PILHA VAZIA **"<<endl;

    else
    {
        No *aux=this->primeiro;
        int i=0;
        cout<<"ORDEM DA PILHA :\n"<<endl;
        while(aux!=NULL)
        {
            if(aux==this->primeiro) cout<<"ELEMENTO N "<<i<<" : "<<aux->elemento<<" <-- TOPO DA PILHA"<<endl;
            else cout<<"ELEMENTO N "<<i<<" : "<<aux->elemento<<endl;
            aux=aux->prox;
            i++;
        }
    }
}





