#include "Peliculas.h"
#include <iostream> 
#include <string> 

Peliculas::Peliculas(string Id, string nom, string dur, string gen, string calif, string fechaEs): Video(Id, nom, dur, gen, calif, fechaEs)
{
}

void Peliculas::getDatos()
{
    Video::getDatos(); 
}
