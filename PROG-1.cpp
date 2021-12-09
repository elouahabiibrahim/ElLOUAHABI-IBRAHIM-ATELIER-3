#include <iostream>
using namespace std;

class Myclass{
		public://accees specifique
	string nom;//attribut
	Myclass();//constructeur par defaut
	~Myclass();//destructeur par utilisateur
	//fonction definie a l'interieure de note classe
	void print(){
		cout<<"entrez votre nom : "<<endl;
		cin>> nom ;
		cout<<"votre nom est : "<<nom<<endl;
	};
};

	Myclass::Myclass(){
};
 
    Myclass::~Myclass(){
	};
int main(){
	Myclass etu;	
	
	etu.print();
	return 0;
};


