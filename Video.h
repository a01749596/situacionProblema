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
    float dur;
    string gen;
    float calif; 
    string fechaEs;
protected: 
    Video(string Id, string nom, float dur, string gen, float calif, string fechaEs); 
public: 
    void setCalif(float);
    string getId();
    string getNom(); 
    float getDur();
    string getGen();
    float getCalif();
    string getFechaEs();
    virtual void getDatos(); 
}; 

#endif 