#include "Episodio.h"
#include <iostream> 
#include <fstream>
using namespace std; 
#include <sstream>
#include <string> 
#include <vector>

Episodio::Episodio() 
{
    ifstream DatosEpisodio;
    DatosEpisodio.open("./DatosPeliculas.csv");

    string linea; 
    string ID;
    string nomb; 
    string temp; 
    string numE; 

    while (getline(DatosEpisodio, linea))
    {
        stringstream token(linea);
        getline(token, ID, ',');
        getline(token, nomb, ',');
        getline(token, temp, ',');
        getline(token, numE, ',');

        Video episodio(ID, nomb, temp, numE);

        ep.push_back(episodio); 

    }
}

Video Episodio::getId()
{
    return ep[0];
}

Video Episodio::getNom()
{
    return ep[1];
}

Video Episodio::getTem()
{
    return ep[8];
}

Video Episodio::getNumE()
{
    return ep[9]; 
}

string Episodio::cambiaCalif()
{
    string califNueva = "ola"; 
    return califNueva;
}
