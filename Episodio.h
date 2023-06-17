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
    string tem; 
    string numE; 
public:
    Episodio(string Id, string nom, string dur, string gen, string calif, string getFechaEs, string IdE, string nomE, string tem, string numE);
    void getDatos(); 
}; 

#endif 