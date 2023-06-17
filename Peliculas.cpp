#include "Peliculas.h"
#include <iostream> 
#include <string> 

Peliculas::Peliculas(string Id, string nom, float dur, string gen, float calif, string fechaEs): Video(Id, nom, dur, gen, calif, fechaEs)
{
}

void Peliculas::getDatos()
{
    Video::getDatos(); 
}
