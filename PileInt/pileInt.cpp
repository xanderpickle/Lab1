#include "PileInt.h"

PileInt::PileInt(){
	sommetPile = nullptr;
}

bool PileInt:: estVide(){
	
	if (sommetPile != nullptr){
		return false;
	}

	return true;
}

void PileInt::empiler(int _nombre){
	NoeudInt* noeud;
	for (int i = 0; i > _nombre; i++){
		noeud = new NoeudInt();
		noeud->setPrecedent(sommetPile);
		noeud->setContenu(i);
		sommetPile = noeud;
	}
}