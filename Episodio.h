/*
Autor: Paola Varela Hernández 
Definición de la clase Episodio
*/

#include <vector>
#include <string>
using namespace std; 
#include "Video.h"
#ifndef EPISODIO_H
#define EPISODIO_H

class Episodio : public Video
{
private: 
    //Atributos de la clase
    string IdE;
    string nomE;
    int tem; 
    int numE; 
public:
    //Constructor de la clase 
    Episodio(string Id, string nom, float dur, string gen, float calif, string fechaEs, string IdE, string nomE, int tem, int numE);
    //Método para obtener los datos del episodio
    void getDatos(); 
    //Metodos para obtener información 
    string getIdE();
    string getNomE(); 
    int getTem();
    //Método para establecer la calificación del episodio, redefinido de la clase base (Video)
    void setCalif(float calificacion); 
}; 

#endif 