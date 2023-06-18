/*
Autor: Paola Varela Hernández 
Definición de la clase Serie
*/

#ifndef SERIE_H
#define SERIE_H 
#include "Episodio.h"
#include <vector> 
#include <string> 
using namespace std; 

class Serie
{
private: 
//Atributos de la clase 
    string Id;
    string nom;  
    string gen; 
//Vector de tipo episodio para integrarlos a la serie 
    vector<Episodio*> episodios;
public: 
//constructor de la clase 
    Serie(string Id, string nom, string gen); 
//gets para obtener la información 
    string getId();
    string getNom();
    string getGen();
//método para agregar un nuevo episodio a la serie
    void nuevoEp(Episodio* episodio);
//método para obtener todos los episodios de la serie
    vector<Episodio*> getEp(); 
//Método para obtener los datos de la clase, incluyendo los episodios 
    void getDatos(); 
}; 
#endif 