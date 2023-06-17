#ifndef SERVICIOS_H
#define SERVICIOS_H
#include <string> 
#include <vector> 
#include "Video.h"
#include "Peliculas.h"
#include "Episodio.h"
#include "Serie.h"

class ServicioS
{
private: 
    vector<Peliculas*> pelicula;
    vector<Serie*> series; 
public:
    ServicioS(); 
    void abrirArchivo();
    void videosCalif(float calificacion);
    void videosGenero(string);
    void menu(); 
}; 

#endif