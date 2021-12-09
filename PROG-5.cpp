#include<iostream>
using namespace std;
class Animal{
    private:
    int Age;
    string Nom;
    public:
    Animal(int Age , string Nom){
        this->Age=Age;
        this->Nom=Nom;
    }
    void set_value();

};

class Zebra{
    protected:
          int Age;
    private:
          string Nom;
    public:
    Zebra(int Age , string Nom){
        this->Age=Age;
        this->Nom=Nom;
    }
    void show1(){
        cout<<"Age = "<<Age<<" ,  Nom = "<<Nom<<endl;
    }
};

class Dolphin{
    protected:
          int Age;
    private:
          string Nom;
    public:
    Dolphin(int Age , string Nom){
        this->Age=Age;
        this->Nom=Nom; 
    }
    void show2(){
        cout<<"Age = "<<Age<<" ,  Nom = "<<Nom<<endl;
    }
};


int main(){
     Zebra z(30,"lion");
     Dolphin d(60,"l'ane");
     z.show1();
     d.show2();

    return 0;
}
