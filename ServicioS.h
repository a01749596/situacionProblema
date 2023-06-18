/*
Autor: Paola Varela Hernández 
Definición de la clase ServicioS 
*/

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
    vector<Peliculas*> pelicula; //vector de punteros a objetos tipo Peliculas
    vector<Serie*> series; //vector de punteros a objetos de tipo serie
    vector<Episodio*> episodios; //vector de punteros a objetos de tipo episodio
public:
//constructor del archivo 
    ServicioS(); 
//Método para leer el archivo 
    void abrirArchivo();
//Método para buscar las peliculas por calificación
    void videosPeliCalif(float cali);
//Método para buscar videos por calificación
    void videosCalif(float cali); 
//Método para filtrar las series 
    void filtroSeries(string nom);
//Método para filtar los videos por genero
    void videosGenero(string genero);
//Método para sacar el promedio de las series 
    float promedioVideo(string nom);
//Método para cambiar la calificación de una pelicula 
    void califVideos(string nom, float cali); 
//despliega el menu e inicializa las opciones 
    void menu(); 
}; 

#endif