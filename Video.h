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
    string IdEp; 
    string nomEp;
    string tem;
    string numEp;
public:
    Video();
    Video(string Id, string nom, string dur, string gen, string calif, string fecha); 
    Video(string Id, string nom, string dur, string gen, string calif, string fecha, string IdEp, string nomEp, string tem, string numEp); 
    string getId();
    string getNom();
    string getGen();
    string getCalif();
    string getDur();
    string getFecha();
    string getIdEp();
    string getNomEp();
    string getTem();
    string getNumEp();
    string cambiaCalif();

}; 

#endif 