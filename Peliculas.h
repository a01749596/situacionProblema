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
    void getDatos(); 
}; 

#endif 
