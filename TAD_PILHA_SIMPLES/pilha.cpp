#include "pilha.h"
#include <iostream>

using namespace std;

void Pilha::inicializar()
{
    this->topo=-1;
}

void Pilha::push(int elemento)
{
    if(this->cheia()) 
    	{
    		cout<<"PILHA ESTA CHEIA"<<endl;
    		pause();
    	}

    else
    {
        this->topo++;
        this->elementos[this->topo]=elemento;
    }
}

int Pilha::pop()
{
    if(this->vazia()) 
    {
    	cout<<"PILHA ESTA VAZIA"<<endl;
    	pause();
    }

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

void Pilha::exibir()
{
    for (int i=tam-1; i>-1; i--)
    {
        if (i==topo)cout<<"ELEMENTO NUMERO: "<<i<<" TOPO -->  "<<this->elementos[i]<<endl;
        if (i>topo) cout<<"ELEMENTO NUMERO: "<<i<<" \t--> ---"<<endl;
        if (i<topo) cout<<"ELEMENTO NUMERO: "<<i<<" \t-->  "<<this->elementos[i]<<endl;
    }
}

//ESSA FUNÇAO DEFINE QUAL SISTEMA ESTA SENDO UTILIZADO,
//PARA SETAR O PAUSE
//SUPORTA WIN32/64 OU LINUX
void Pilha::pause()
{
    cout<<"\nPRESSIONE ENTER PARA CONTINUAR"<<endl;
    #ifdef linux || LINUX || Linux || UNIX
    //CODIGO PARA LINUX
    cin.ignore().get();
    #elif defined WIN32 || Win32 || win32 || WIN64 || Win64 || win64
    //CODIGO PARA WINDOWS
    system ("pause");
    #else
    cout<<"\nDESCULPA SISTEMA NÃO RECONHECIDO"<<endl;
    #endif
}
