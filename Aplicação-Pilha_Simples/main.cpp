#include <iostream>
#include "Pilha.h"
//EXEMPLO DE UTILIZAÇÃO DA CLASSE PILHA
//converte de decimal para binário

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