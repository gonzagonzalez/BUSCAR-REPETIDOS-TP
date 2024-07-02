#include <iostream>
#include "declaraciones_funciones.h"
#include <cstdlib>


using namespace std;

void MostraMenu (){

    cout<< '\t' << "EMBAUCADO" << endl;
    cout<< "-----------------------" << endl;

    cout<< " Seleccione una opcion  :"  << endl<< endl;
    cout<<"1-""JUGAR"<< endl;
    cout<<"2-""ESTADISTICAS"<< endl;
    cout<<"3-""CREDITOS"<<endl;
    cout<<"0-""SALIR"<<endl;

}

void SeleccionarOpcion(int &Opcion){
 cout <<" " ; cin>>Opcion;
  switch(Opcion){
        case 1:{
            cout<< " QUE COMIENCE EL JUEGO"<< endl;
            break;
            }
        case 2:{
            cout<< " ESTA EN LA ZONA DE ESTADISTICAS"<< endl;
            break;
            }
        case 3:{
            cout<< "ESTA EN LA ZONA DE CREDITOS " << endl;
            break;
            }
        case 0:
            cout<< "USTED ESTA SALIENDO DEL JUEGO ";
            break;
        }
        system ("cls");
}

void DeclaracionDeNombres(string &Players1 , string &Players2){
    char Continuar;
    int Bandera = 1;

        cout<< "registrar sus nombres :" << endl<< endl;
    while(Bandera == 1){
        cout<< " ingrese nombre del jugardor 1 :"<< " " ;
        cin>> Players1;
        cout<< " ingrese nombre del jugador 2  :"<< " " ;
        cin>> Players2;
        cout<<"¿ desea confirmar los nombres ? (S/N):"  ;
        cin>>Continuar;
        if(Continuar == 's'|| Continuar == 'S'){
            Bandera = 0;
        }else{
            system("cls");
            cout<< "Por favor. Vuelva a ingresar sus nombres "<< endl << endl ;
        }
    }
    system("cls");
}

void CargarManoUno(int vec[],int Tam){
string Naipe,Palo;
bool Repeat = true;
while ( Repeat == true){
Repeat = false;

for(int x=0; x<Tam;x++){
    vec[x]= (rand ()% 20)+1;
    }
    HayRepetidos(vec,Tam);
   cout << " Mi primer vector cargado : " << endl;
    for(int x = 0;x<Tam ;x++){
    cout << vec[x] << endl;
    }
}



    //BuscarNaipe(vec,Tam,Naipe,Palo);
}

bool HayRepetidos(int vec[],int Tam){
bool Repetido ;


    for(int x=0;x<Tam;x++){
        for(int i=0;i<Tam;i++){
            if(vec[x] == vec[i+1]){

            Repetido = true;
            }
        }

    }
    Repetido = false;

return Repetido;
}




























/*void BuscarNaipe(int Cod[], int Tam, string &Naipe, string &Palo){
        for(int x=0;x<Tam;x++){

        if(Cod[x]<5){
            Palo= "CORAZONES";
        }else if(Cod[x] <10){
            Palo= "DIAMANTES";
        }else if(Cod[x] <15){
            Palo="PICAS";
        }else{
            Palo="TREBOLES";
        }
        if(Cod[x]==0 || Cod[x]== 5 || Cod[x]==10 || Cod[x]== 15){
            Naipe = "10";
        }
        if(Cod[x]==1 || Cod[x]== 6 || Cod[x]==11 || Cod[x]== 16){
            Naipe= "J";
        }
        if(Cod[x]==2|| Cod[x]== 7 || Cod[x]==12 || Cod[x]== 17){
            Naipe="Q";
        }
        if(Cod[x]==3 || Cod[x]== 8|| Cod[x]==13 || Cod[x]== 18){
            Naipe="K";
        }
        if(Cod[x]==4 || Cod[x]== 9 || Cod[x]==14 || Cod[x]== 19){
            Naipe = "A";
        }

            cout<< '\t' << '\t' << Naipe << " " << Palo << endl;
        }


}*/
























































































































