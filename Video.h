/*
Autor: Paola Varela Hernández 
Definición de la clase video 
*/

#include <string>
#include <vector>
using namespace std; 
#ifndef VIDEO_H
#define VIDEO_H

class Video
{
private: 
    //Atributos de la clase 
    //Identificación de todos los datos 
    string Id; 
    string nom; 
    int dur;
    string gen;
    float calif; 
    string fechaEs;
public: 
    //Constructor de la clase
    Video(string IdP, string nomP, int durP, string genP, float califP, string fechaEsP);
    //Método virtual puro para establecer la calificación del video 
    virtual void setCalif(float calificacion) = 0;
    //Métodos para obtener los atributos del video
    string getId();
    string getNom(); 
    int getDur();
    string getGen();
    float getCalif();
    string getFechaEs();
    //Método virtual para obtener los datos del video 
    virtual void getDatos(); 
}; 

#endif 