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
    if (this->vazia())
        return NULL;
    return vet[top];
} 

void Pilha::empilha(int val)
{
    if (top==max-1)
        return;
    vet[top++]=val;
}
        
void Pilha::desempilha()
{
    if (this->vazia())
        return;
    top--;
}

bool Pilha::vazia()
{
    return (top==-1);
}

#include "pilha.h"