#include <iostream>
#include "Pilha.h"
//IMPLEMENTAÇÃO BASICA PARA ESTRUTURA PILHA
//Esta classe possui as funções basicas para uma pilha

using namespace std;

//Contrutor da classe pilha, recebe um tamanho maximo para alocar
Pilha::Pilha(int n)
{
	max = n;
	top = -1;
	mem = new int[n]; //A palavra reservada new, serve para alocar espaço na memória
}

Pilha::~Pilha(void)
{
	delete[] mem;//A palavra reservada delete, serve para liberar espaço na memória
}

void Pilha::insere(int e)
{
	if(!cheia())
		mem[++top] = e;
	else
		cout<<"pilha cheia!"<<endl;
}

int Pilha::remove(void)
{
	if(!vazia())
		return mem[top--];
	else
		cout<<"pilha vazia!"<<endl;
	return 0;
}

int Pilha::topo(void)
{
	if(!vazia())
		return mem[top];
	else
		cout<<"pilha vazia!"<<endl;
	return 0;
}

bool Pilha::vazia(void)
{
	return top==-1;
}

bool Pilha::cheia(void)
{
	return top==max-1;
}