#ifndef SERVICIOS_H
#define SERVICIOS_H
#include <string> 
#include <vector> 
#include "Video.h"
#include "Peliculas.h"

class ServicioS
{
private: 
    vector<Peliculas*> pelicula;
public:
    ServicioS(); 
    void abrirPeliculas();
    void videosCalif(float calificacion);
    void menu(); 
}; 

#endif