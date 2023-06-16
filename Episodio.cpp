#include "Episodio.h"
#include <iostream> 
#include <fstream>
using namespace std; 
#include <sstream>
#include <string> 
#include <vector>
vector<string> separar(string linea);

Episodio::Episodio() 
{
    ifstream DatosPelicula;
    DatosPelicula.open("./DatosPeliculas.csv");

    string linea; 
    string Id;
    string nombre; 
    string duracion; 
    string genero; 
    string calificacion; 
    string fechaestreno; 
    string IdEpisodio; 
    string nomEpisodio; 
    string temporada; 
    string numEpisodio; 

    while (getline(DatosPelicula, linea))
    {
        stringstream token(linea);
        vector<string> datos = separar(linea);
        if (datos.size()==6)
        {
        getline(token, Id, ',');
        getline(token, nombre, ','); 
        getline(token, duracion, ',');
        getline(token, genero, ',');
        getline(token, calificacion, ',');
        getline(token, fechaestreno, ',');
        getline(token, IdEpisodio, ',');
        getline(token, temporada, ',');
        getline(token, numEpisodio, ',');

        Video video(Id, nombre, duracion, genero, calificacion, fechaestreno, IdEpisodio, nomEpisodio, temporada, numEpisodio);

        ep.push_back(video); 
        }

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

void Episodio::getListaEp()
{
    for(int i = 0; i<ep.size(); i++)
    {
        cout << "Id: " << ep[i].getId() << " ";
        cout << endl; 
        cout << "Nombre: " << ep[i].getNom() << " ";
        cout << endl; 
        cout << "Duracion: " << ep[i].getDur() << " "; 
        cout << endl; 
        cout << "Genero: " << ep[i].getGen() << " "; 
        cout << endl; 
        cout << "Calificacion: " << ep[i].getCalif() << " ";
        cout << endl; 
        cout << "Fecha de estreno: " << ep[i].getFecha() << " ";
        cout << endl; 
        cout << endl; 
    }
}

vector<string> separar(string linea)
{
    vector<string> tokens; 

    stringstream entrada(linea); 
    string dato;                 
    int numeroTokens = 0;
    while (getline(entrada, dato, ','))
    {
        if (dato != "")
        {
            tokens.push_back(dato); 
            numeroTokens++;
        }
    }
    return tokens;
}
