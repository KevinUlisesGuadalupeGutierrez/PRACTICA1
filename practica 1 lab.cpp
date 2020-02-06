#include<iostream>
using namespace std;
class Gato{
private:
    int suEdad;
    float suPeso;
public:
    void Edad(int edad);
    int Edad();

    void Peso(float peso);
    float peso();

    void Maullar();
};

 void Gato::Edad(int edad){
 suEdad=edad;
 }

 int Gato::Edad(){
return suEdad;
}
void Gato::Peso(float peso){
suPeso=peso;
}
float Gato::Peso(){
return suPeso;
}
void Gato::Maullar(){
count<<"Miauuuu"<<endl;
}

int main(void){
    Gato Pelusa;
    Pelusa.Edad(5);
    Pelusa.Peso(3.5);
    cout<<"El peso de pelusa es:"<<Pelusa.Edad()<< endl;
    cout<<"La edad de Pelusa es:"<<Pelusa.Peso()<<endl;
    Pelusa.Maullar();
}
