#include "Video.h"
#include <vector> 
#include <string> 
using namespace std; 
#ifndef PELICULAS_H
#define PELICULAS_H

class Peliculas : public Video
{
public: 
    Peliculas(string Id, string nom, string dur, string gen, string calif, string fechaEs);
    void getDatos(); 
}; 

#endif 
