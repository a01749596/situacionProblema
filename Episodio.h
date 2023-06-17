#include <vector>
#include <string>
using namespace std; 
#include "Video.h"
#ifndef EPISODIO_H
#define EPISODIO_H

class Episodio : public Video
{
private: 
    string IdE;
    string nomE;
    int tem; 
    int numE; 
public:
    Episodio(string Id, string nom, float dur, string gen, float calif, string getFechaEs, string IdE, string nomE, int tem, int numE);
    void getDatos(); 
    string getIdE();
    string getNomE(); 
    int getTem();
    void setCalif(float calificacion); 
}; 

#endif 