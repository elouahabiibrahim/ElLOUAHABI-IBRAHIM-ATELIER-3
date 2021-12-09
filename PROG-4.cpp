#include <iostream>
using namespace std;
class  Mere{
public:
void display(){
    std::cout << "Bonjour moi c'est la classe Mere" <<std::endl;
}
};
class Fille
{
public:
void display(){
    std::cout << "Bonjour moi c'est la classe Fille" <<std::endl;
}
};

int main()
{
Fille f;
f.display();
return 0;
}