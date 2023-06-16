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

Video::Video(string Id, string nom, string dur, string gen, string calif, string fecha)
{
    this->Id = Id;
    this->nom = nom;
    this->gen = gen;
    this->calif = calif;
    this->dur = dur;
    this->fecha = fecha;
}

Video::Video(string Id, string nom, string dur, string gen, string calif, string fecha, string IdEp, string nomEp, string tem, string numEp)
{
    this->Id = Id;
    this->nom = nom;
    this->gen = gen;
    this->calif = calif;
    this->dur = dur;
    this->fecha = fecha;
    this->IdEp = IdEp;
    this->nomEp = nomEp;
    this->tem = tem;
    this->numEp = numEp;
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

string Video::getIdEp()
{
    return IdEp;
}

string Video::getNomEp()
{
    return nomEp;
}

string Video::getTem()
{
    return tem;
}

string Video::getNumEp()
{
    return numEp;
}

string Video::cambiaCalif()
{
    string califNueva = "ola"; 
    return califNueva; 
}
