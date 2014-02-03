
template <typename K, typename V>
class Associative{
	private:
	
		typedef struct maillon maillon;
		struct maillon{
				K clf;
				V elt;
				maillon * suivant;	
		};
		
		maillon * tete;
		maillon * queue;
		int nb;
		
	public :

		AListe ()// constructeur, crée une AListe vide
		~AListe () // destructeur, libère la mémoire
		void associer(K clf,V valr) //ajoute le couple (clf,valr) ou change la valeur associée à clf s'il y en avait une
		bool estALVide() //VRAI ssi aucun couple n'est stocké
		V valeurAssociée(K clf) //donne la valeur associée à la clef clf
		void dissocier(K clf) //supprime le couple (clf,.) ; ne fait rien s'il n'y en a pas
		bool estClef(K clf) //teste l'existence d'un couple (clf,.)
		void trousseau(K* clfs, int ref N ) // mets les clefs présentes dans le tableau pointé par clfs (à déclarer à l'extérieur) et mets dans N leur nombre
		
}
Associative::AListe(){
	this->tete = NULL;
	this->queue=NULL;
	this->nb=0;
}

Associative::~AListe(){
		
}

void Associative::associer(K clf,V valr){
	maillon * courant = this->tete;
		while(courant != NULL && trouve==false){
				if(courant->clf==cle){
					trouve=true;
				}
				else{
					courant = courant->suivant;
				}
		}
		if(trouve==false){
			maillon * mama;
			mama->suivant=NULL;
			mama->clf=clf;
			mama->elt=valr;
			this->queue=mama;
			this->nb++; 
		}
		else{
			courant->elt=valr;
		}
}


bool Associative::estClef(k cle){
		
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

bool Associative::estALVide(){
		return(this->nb==0);
}

V Associative::valeurAssociée(K clf){
	while(courant != NULL && trouve==false){
				if(courant->clf==cle){
					trouve=true;
				}
				else{
					courant = courant->suivant;
				}
		}
		if(trouve==true){
			return courant->elt;
		}
}