#include <iostream>
using namespace std;
class Gato{
public:
Gato(int edadInicial,int pesoInicial);


~Gato();
int ObtenerEdad()const;
int ObtenerPeso()const;
void AsignarEdad(int edad);
void AsignarPeso(int peso);
void Maullar();
private:
int suEdad;
int suPeso;
};
//Constructor de Gato
Gato::Gato(int edadInicial,int pesoInicial){
suEdad = edadInicial;
cout << "Se ha creado un objeto Gato de edad " << edadInicial << endl;

suPeso = pesoInicial;
cout << "Se ha creado un objeto Gato de peso " << pesoInicial << endl;

}
Gato::~Gato(){
cout << "El objeto Gato se destruira en 3, 2, 1 .... ya fue...." << endl;
}
// ObtenerEdad, metodo de acceso publico
// regresa el valor de su miembro suEdad

int Gato::ObtenerEdad()const{
return suEdad;
}
int Gato::ObtenerPeso()const{
return suPeso;
}
// Definicion de AsignarEdad, metodo de
// acceso publico
void Gato::AsignarEdad(int edad){
// asignar a la variable miembro su Edad el
// valor pasado por el parametro edad
suEdad = edad;

}

void Gato::AsignarPeso(int peso){
    suPeso = peso;
}
// definicion del metodo Maullar
// regresa: void
// parametros: ninguno
// accion: imprime "miauu"
void Gato::Maullar(){
cout << "Miau" << endl;
}
// crear un gato, asignar un valor asu edad, hacer que
// maulle, que nos diga su edad, y que vuelva a maullar.
int main(){

Gato Pelusa(5,10);

Pelusa.Maullar();
cout << "Pelusa es un gato que tiene";
cout << Pelusa.ObtenerEdad() << "anios de edad" << endl;
cout << "y que pesa ";

cout << Pelusa.ObtenerPeso() << " KG" << endl;


Pelusa.Maullar();

Pelusa.AsignarEdad(7);
Pelusa.AsignarPeso(20);
cout << "Ahora pelusa tiene " ;
cout << Pelusa.ObtenerEdad() << " anios de edad" << endl;
cout << "Ahora pelusa tiene " ;
cout << Pelusa.ObtenerPeso() << " KG de peso" << endl;
return 0;
}
