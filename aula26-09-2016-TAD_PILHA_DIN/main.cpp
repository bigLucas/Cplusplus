#include <iostream>
#include <cstdlib>
#include "pilha.h"

using namespace std;

int main()
{
    PilhaDin p1;
    p1.inicializar();
    int opcao=0;

    do
    {
        cout<<"IMPLEMENTACAO PILHA DINAMICA"<<endl<<endl;
        cout<<"DIGITE O NUMERO CORRESPONDENTE A OPCAO DESEJADA"<<endl;
        cout<<"01--> ADCIONAR NUMERO"<<endl;
        cout<<"02--> RETIRAR NUMERO"<<endl;
        cout<<"03--> EXIBIR PILHA"<<endl;
        cout<<"00--> SAIR DO PROGRAMA"<<endl<<endl;

        cin>>opcao;
        switch(opcao)
        {
            case 01: cout<<"DIGITE O NUMERO "; cin>>opcao; p1.push(opcao); break;
            case 02: cout<<"NUMERO RETIRADO "<<p1.pop()<<endl; system("pause"); break;
            case 03: p1.exibir();  system("pause");break;
            case 00: cout<<"FECHANDO O PROGRAMA"<<endl; system("pause"); break;
            default: cout<<"OPCAO INVALIDA, DIGITE OUTRO NUMERO"<<endl; system("pause"); break;
        }
        system("cls");
    }while(opcao!=0);

    return 0;
}
