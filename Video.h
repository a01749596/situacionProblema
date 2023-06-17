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
    string Id; 
    string nom; 
    string dur;
    string gen;
    string calif; 
    string fechaEs;
protected: 
    Video(string Id, string nom, string dur, string gen, string calif, string fechaEs); 
public: 
    void setCalif(float);
    string getId();
    string getNom(); 
    string getDur();
    string getGen();
    string getCalif();
    string getFechaEs();
    virtual void getDatos(); 
}; 

#endif 