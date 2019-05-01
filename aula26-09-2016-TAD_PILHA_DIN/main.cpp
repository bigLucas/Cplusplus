#include <iostream>
#include <cstdlib>
#include "pilha.h"

using namespace std;

//ESSA FUNÇAO DEFINE QUAL SISTEMA ESTA SENDO UTILIZADO,
//PARA SETAR CLS OU CLEAR
//SUPORTA WIN32/64 OU LINUX
void cls(void)
{
    #ifdef linux || LINUX || Linux || UNIX
    //CODIGO PARA LINUX
    system ("clear");
    #elif defined WIN32 || Win32 || win32 || WIN64 || Win64 || win64
    //CODIGO PARA WINDOWS
    system ("cls");
    #else
    cout<<"\nDESCULPA SISTEMA NÃO RECONHECIDO"<<endl;
    #endif
}

//ESSA FUNÇAO DEFINE QUAL SISTEMA ESTA SENDO UTILIZADO,
//PARA SETAR O PAUSE
//SUPORTA WIN32/64 OU LINUX
void pause(void)
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

int main()
{
    PilhaDin p1;
    p1.inicializar();
    int opcao=0;
    cls();

    //MENU BASICO, EM LINHA DE COMANDO.
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
            case 02: cout<<"NUMERO RETIRADO "<<p1.pop()<<endl; pause(); break;
            case 03: cls(); p1.exibir(); pause(); break;
            case 00: cout<<"FECHANDO O PROGRAMA"<<endl; pause(); break;
            default: cout<<"OPCAO INVALIDA, DIGITE OUTRO NUMERO"<<endl; pause(); break;
        }
        cls();
    }while(opcao!=0);

    return 0;
}
