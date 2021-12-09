#include <iostream>

using namespace std;

class Shape
{

public: 
   
	float hr,lr,ht,lt,n;


  Shape()
  {
    cout<<"Voulez-vous calculer l'aire du Triangle ou du Rectangle ?! "<<endl;
    cout<<"Taper 1 pour le rectangle !!"<<endl;
    cout<<"Taper 2 pour le triangle !!"<<endl;
    cin>>n;
  }
  void calculer(){
  	if (n==1){
  	cout<<"Donnez les dimensions du rectangle stp :"<<endl;
  	cout<<"l'hauteur :";
  	cin>>hr;
  	cout<<endl<<"largeur :";
  	cin>>lr;
  	cout << "L'aire du rectangle est: " <<hr * lr << endl;
  }
  else if(n==2){
  	cout<<"Donnez les dimensions du triangle :"<<endl;
  	cout<<"l'hauteur :";
  	cin>>ht;
  	cout<<endl<<"largeur :";
  	cin>>lt;
  	cout << "L'aire du triangle est: " <<(ht * lt)/2<< endl;
  }
  }
};


int main (){

  Shape a;
  a.calculer();

  return 0;
}
