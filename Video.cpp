#include "Video.h"
#include <iostream>
using namespace std; 
/*
Autor: Paola Varela Hernández
Implementación de métodos de la clase Video
*/
Video::Video(string Id, string nom, float dur, string gen, float calif, string fechaEs)
{
    this->Id = Id;
    this->nom = nom;
    this->dur = dur;
    this->gen = gen;
    this->calif = calif;
    this->fechaEs = fechaEs;
}

void Video::setCalif(float num)
{
    calif = num; 
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
