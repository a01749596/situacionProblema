/*
Autor: Paola Varela Hernández 
Definición de la clase video 
*/

#include <string>
using namespace std; 
#ifndef VIDEO_H
#define VIDEO_H

class Video
{
private: 
    int Id; 
    string nom; 
    string gen; 
    int calif; 
    int dur;
    string fechaEstreno; 
public: 
    Video(); 
    Video(int Id, string nom, string gen, int calif, int dur, string fechaEstreno);
    int getId();
    string getNombre();
    string getGenero();
    int getCalificacion(); 
    int getDuracion(); 
    string getFechaEstreno(); 
}; 

#endif 