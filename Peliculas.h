#include "Video.h"
#include <vector> 
#include <string> 
using namespace std; 
#ifndef PELICULAS_H
#define PELICULAS_H

class Peliculas : public Video
{
public: 
    Peliculas(string Id, string nom, float dur, string gen, float calif, string fechaEs);
    Peliculas(vector<string> datos); 
    void getDatos(); 
    void setCalif(float calificacion); 
}; 

#endif 
