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
    void abrirPeliculas();
    void abrirSeries(); 
    void videosPeliCalif(float cal);
    void videosCalif(float cal); 
    void filtroSeries(string nom);
    void videosGenero(string gen);
    float promedioVideo(string nom);
    void califVideos(); 
    void menu(); 
}; 

#endif