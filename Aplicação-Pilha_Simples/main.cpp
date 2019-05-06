#include <iostream>
#include "Pilha.h"
//EXEMPLO DE UTILIZAÇÃO DA CLASSE PILHA
//converte de decimal para binário

//PARA COMPILAR no bash, navegue até a pasta com os arquivos:
//g++ main.cpp Pilha.cpp -o pilhaSimples
//.\pilhaSimples.exe

using namespace std;

int main(void)
{
	Pilha p(32);
	unsigned n;

	cout<<"Digite um numero positivo? ";
	cin>>n;
	do
	{
		p.insere(n%2);
		n /= 2;
	}while(n!=0);

	cout<< "Binario: ";

	while(!p.vazia())
		cout<<p.remove();
	cout<<endl;

	return 0;
}
