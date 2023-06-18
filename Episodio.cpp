/*
Autor: Paola Varela Hernández 
Implementación de métodos
*/

#include "Episodio.h"
#include <iostream>
using namespace std; 

// Constructor de la clase Episodio que inicializa los atributos de la clase base (Video) y los atributos propios de Episodio
Episodio::Episodio(string Id, string nom, float dur, string gen, float calif, string fechaEs, string IdE, string nomE, int tem, int numE) : Video(Id, nom, dur, gen, calif, fechaEs), IdE(IdE), nomE(nomE), tem(tem), numE(numE)
{
    this-> IdE = IdE;
    this-> nomE = nomE;
    this-> tem = tem;
    this-> numE = numE; 
}

//obtenemos los nuevos datos dentro de los episodios 
void Episodio::getDatos()
{
    Video::getDatos();
    cout << IdE;
    cout << nomE; 
    cout << tem; 
    cout << numE; 
}

//regresamos los datos 
string Episodio::getIdE()
{
    return IdE;
}

string Episodio::getNomE()
{
    return nomE;
}

int Episodio::getTem()
{
    return tem;
}

//redefinimos la calificacion obtenida en la clase base (Video)
void Episodio::setCalif(float calificacion)
{
    Video::setCalif(calificacion); 
}
