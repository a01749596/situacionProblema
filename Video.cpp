/*
Autor: Paola Varela Hernández 
Implementación de métodos de la clase Video 
*/

#include "Video.h"
#include <iostream>
using namespace std;

Video::Video()
{
}

Video::Video(string Id, string nom, string gen, string calif, string dur, string fecha)
{
    this->Id = Id;
    this->nom = nom;
    this->gen = gen;
    this->calif = calif;
    this->dur = dur;
    this->fecha = fecha;
}

string Video::getId()
{
    return Id;
}

string Video::getNom()
{
    return nom;
}

string Video::getGen()
{
    return gen;
}

string Video::getCalif()
{
    return calif;
}

string Video::getDur()
{
    return dur;
}

string Video::getFecha()
{
    return fecha;
}

string Video::cambiaCalif()
{
    string califNueva = "ola"; 
    return califNueva; 
}
