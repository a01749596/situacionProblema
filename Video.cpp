#include "Video.h"
#include <iostream>
using namespace std; 
/*
Autor: Paola Varela Hernández
Implementación de métodos de la clase Video
*/
Video::Video()
{
}

Video::Video(string, string, float, string, float, string)
{
    this->Id = Id;
    this->nom = nom;
    this->dur = dur;
    this->gen = gen;
    this->calif = calif;
    this->fechaEs = fechaEs;
}

void Video::setCalif(float calificacion)
{
    int califM = 7; 
    if (calificacion >=0 && calificacion <= califM)
    {
        calif = calificacion;
    }
}

string Video::getId()
{
    return Id;
}

string Video::getNom()
{
    return nom;
}

float Video::getDur()
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

void Video::getDatos()
{
    cout << "Id: " << Id << "nombre: " << nom << "Duracion: " << dur << "genero: " << gen << "calificacion: " << calif << "fecha de estreno: " << fechaEs << endl; 
}
