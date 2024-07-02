#include <iostream>
#include "declaraciones_funciones.h"
#include <cstdlib>
#include <ctime>

using namespace std;


int main(){
int opc ;
string Jugador1 ;
string Jugador2;
string Num_Naipe, Figura , Num_Naipe2 , Figura2 ;
const int CantidadCartas = 8;
int Cartas[CantidadCartas];
const int CantidadCartas2 = 5;
int Cartas2[CantidadCartas2];

srand(time(0));

MostraMenu();
cout<< endl;
SeleccionarOpcion(opc);
DeclaracionDeNombres(Jugador1,Jugador2);
cout << " CARTAS DE :" <<  Jugador1 << endl ;
CargarManoUno(Cartas,CantidadCartas);
//cout << " CARTAS DE :" <<  Jugador2 << endl ;
//CargarCodNaipe2(Cartas2,CantidadCartas2,Num_Naipe2 , Figura2);




    return 0;
}
