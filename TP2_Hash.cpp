template <typename K,typename V>
class Hashage{
	private:
	
		V * Tableau;
		int taille;
		
	public :
		Hashage(int taille)
		int hash(K clf)
		void associer(K clf,V valr) //ajoute le couple (clf,valr) ou change la valeur associée à clf s'il y en avait une
		bool estALVide() //VRAI ssi aucun couple n'est stocké
		V valeurAssociée(K clf) //donne la valeur associée à la clef clf
		void dissocier(K clf) //supprime le couple (clf,.) ; ne fait rien s'il n'y en a pas
		bool estClef(K clf) //teste l'existence d'un couple (clf,.)
		void trousseau(K* clfs, int ref N ) // mets les clefs présentes dans le tableau pointé par clfs (à déclarer à l'extérieur) et mets dans N leur nombre
		
}

Hashage::Hashage(int taille){
	this->Tableau= new V[taille];
	this->taille=taille;
	}
int Hashage::hash(K clf, V valr){
	if(clf.name()==string)
    int i = 0, nombreHache = 0;
    for (i = 0 ; valr[i] != '\0' ; i++)
    {
        nombreHache += chaine[i];
    }
    nombreHache %= this->taille;
    return nombreHache;

}
void Hashage::associer(K clf,V valr){
	if(clf>)
	this->Tableau
}

bool Hashage::estALVide(){
		return(this->nb==0);
}

V Hashage::valeurAssociée(K clf){
	
}

void Hashage::dissocier(K clf){
		if(this->nb >= 1){
			courant=this->tete;
			if(courant->clf == clf){
				this->tete=courant->suivant;
				delete(courant);
			}
			else{
					trouve=false;
					while(courant->suivant != NULL && trouve ==false){
						if(courant->suivant->clf==clf){
							trouve=true;
						}
						else{
							courant=courant->suivant;
						}
					}
					if(trouve==true){
							maillon * tmp = courant->suivant->suivant;
							delete(courant->suivant);
							courant->suivant=tmp;
					}
			}
		}
}


bool Hashage::estClef(k cle){
		
		if(this->nb==0){
			return false;
		}
		else{
				bool trouve=false;
				maillon * courant = this->tete;
				while(courant != NULL && trouve==false){
						if(courant->clf==cle){
							trouve=true;
						}
					courant = courant->suivant;
				}
				return trouve;
		}
}

void Hashage::trousseau(K* clfs, int ref N ){
		if(this->nb!=0){
				maillon * courant=this->tete;
				N=0;
				
				while(courant != NULL){
					clfs[N] = courant->clf;
					N = N + 1
					courant=courant->suivant;
				}
				
		}
		else{
				N=0;
		}
}
