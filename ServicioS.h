#ifndef SERVICIOS_H
#define SERVICIOS_H
#include <string> 
#include <vector> 
#include "Video.h"
#include "Peliculas.h"

class ServicioS
{
private: 
    vector<Peliculas> peli;
public:
    void leerPeliculas();
    void videosCalif(float);
    void getMenu(); 
}; 

#endif