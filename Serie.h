#ifndef SERIE_H
#define SERIE_H 
#include "Episodio.h"
#include <vector> 
#include <string> 
using namespace std; 

class Serie
{
private: 
    string Id;
    string nom;  
    string gen; 
    vector<Episodio*> episodios;
public: 
    Serie(string Id, string nom, string gen); 
    string getId();
    string getNom();
    string getGen();
    void nuevoEp(Episodio* episodio);
    vector<Episodio*> getEp(); 
}; 
#endif 