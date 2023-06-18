/*
Autor: Paola Varela Hernández 
Definición de la clase Peliculas 
*/

#include "Video.h"
#include <vector> 
#include <string> 
using namespace std; 
#ifndef PELICULAS_H
#define PELICULAS_H

class Peliculas : public Video //la clase hereda de video
{
public:
    // Constructor de la clase Peliculas que inicializa los atributos de la clase base (Video)
    Peliculas(string IdP, string nomP, float durP, string genP, float califP, string fechaEsP);
    // Método para obtener los datos de la película, incluyendo los datos de la clase base (Video)
    void getDatos(); 
    // Método para establecer la calificación de la película, redefinido de la clase base (Video)
    void setCalif(float calificacion); 
}; 

#endif 
