#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Pilha {

	int topo; /* posição elemento topo */
	int capa;
	float *pElem;

};

void criarpilha( struct Pilha *p, int c ){

   p->topo = -1;
   p->capa = c;
   p->pElem = (float*) malloc (c * sizeof(float));

}
int estavazia ( struct Pilha *p ){

   if( p-> topo == -1 )

      return 1;   // true

   else

      return 0;   // false

}

int estacheia ( struct Pilha *p ){

	if (p->topo == p->capa - 1)

		return 1;

	else

		return 0;

}

void empilhar ( struct Pilha *p, float v){

	p->topo++;
	p->pElem [p->topo] = v;

}

float desempilhar ( struct Pilha *p ){

   float aux = p->pElem [p->topo];
   p->topo--;
   return aux;

}

float retornatopo ( struct Pilha *p ){

   return p->pElem [p->topo];

}

int main(){

	struct Pilha minhapilha;
	int capacidade = 5,op;
	float valor;

	criarpilha (&minhapilha, capacidade);
	empilhar (&minhapilha,10 );
	empilhar (&minhapilha, 50);
	empilhar (&minhapilha, 30);
	empilhar (&minhapilha, 25);
	empilhar (&minhapilha, 5);
	desempilhar (&minhapilha);
	 retornatopo (&minhapilha);
	desempilhar (&minhapilha);
	 retornatopo (&minhapilha);

}
