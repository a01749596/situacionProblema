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
protected: 
    string Id;
    string nom; 
    string gen;
    string calif;
    string dur;
    string fecha;
public:
    Video();
    Video(string Id, string nom, string gen, string calif, string dur, string fecha); 
    string getId();
    string getNom();
    string getGen();
    string getCalif();
    string getDur();
    string getFecha();
    string cambiaCalif();

}; 

#endif 