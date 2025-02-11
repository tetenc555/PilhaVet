#ifndef PILHA_H__
#define PILHA_H__
#include <iostream>
using namespace std;

class Pilha{
    public:
        Pilha (int tam);
        ~Pilha();
        int getTop();
        void empilha(int val);
        void desempilha();
        bool vazia();
        bool cheia();
    private:
        int max;
        int top;
        int *vet;
};

#endif