#include <iostream>
#include "pilha.h"
using namespace std;

Pilha::Pilha(int tam)
{
    max=tam;
    top=-1; // melhor valor p verificacao se esta vazio e sempre estarmos no toporeal, e nao um a afrente.
    vet = new int [max];
}

Pilha::~Pilha()
{
    delete [] vet;
}

int Pilha::getTop()
{

}

void Pilha::empilha(int val)
{

}
        
int Pilha::desempilha()
{

}

bool Pilha::vazia()
{

}

#include "pilha.h"