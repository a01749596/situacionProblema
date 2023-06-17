#include "Peliculas.h"
#include <iostream> 
#include <string> 

Peliculas::Peliculas(string Id, string nom, float dur, string gen, float calif, string fechaEs): Video(Id, nom, dur, gen, calif, fechaEs)
{
}

Peliculas::Peliculas(vector<string> datos) : Video(datos[0], datos[1], stof(datos[2]), datos[3], stof(datos[4]), datos[5])
{
}

void Peliculas::getDatos()
{
    cout << getId();
    cout << getNom();
    cout << getDur();
    cout << getGen();
    cout << getCalif();
    cout << getFechaEs(); 
}

void Peliculas::setCalif(float calificacion)
{
    Video::setCalif(calificacion); 
}
