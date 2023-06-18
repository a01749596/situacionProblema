#include "Video.h"
#include <iostream>
using namespace std; 
/*
Autor: Paola Varela Hernández
Implementación de métodos de la clase Video
*/

//constructor de la clase, inicializamos los atributos
Video::Video(string IdP, string nomP, int durP, string genP, float califP, string fechaEsP)
{
    this->Id = IdP;
    this->nom = nomP;
    this->dur = durP;
    this->gen = genP;
    this->calif = califP;
    this->fechaEs = fechaEsP;
}

//Verifica que la calificacion este en un rango del 0 al 7 para despues asignarla a cada video 
void Video::setCalif(float calificacion)
{
    int califM = 7; 
    if (calificacion >=0 && calificacion <= califM)
    {
        calif = calificacion;
    }else{
        cout << "La calificación es inválida"; 
    }
}

//utilizamos los gets para obtener los valores de los atributos 
string Video::getId()
{
    return Id;
}

string Video::getNom()
{
    return nom;
}

int Video::getDur()
{
    return dur;
}

string Video::getGen()
{
    return gen;
}

float Video::getCalif()
{
    return calif;
}

string Video::getFechaEs()
{
    return fechaEs;
}

//muestra los videos que obtuvimos 
void Video::getDatos()
{
    cout << Id; 
    cout << nom;
    cout << dur;
    cout << gen;
    cout << calif; 
    cout << fechaEs; 
}
