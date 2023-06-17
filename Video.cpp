/*
Autor: Paola Varela Hernández 
Implementación de métodos de la clase Video 
*/

#include "Video.h"
#include <iostream> 
#include <fstream>
using namespace std; 
#include <sstream>
#include <string> 
#include <vector>
vector<string> separar(string linea);

Video::Video()
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

        Video video(Id, nombre, duracion, genero, calificacion, fechaestreno);

        peli.push_back(video); 
        } else if (datos.size() == 10)
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

Video::Video(string Id, string nom, string dur, string gen, string calif, string fecha)
{
    this->Id = Id;
    this->nom = nom;
    this->gen = gen;
    this->calif = calif;
    this->dur = dur;
    this->fecha = fecha;
}

Video::Video(string Id, string nom, string dur, string gen, string calif, string fecha, string IdEp, string nomEp, string tem, string numEp)
{
    this->Id = Id;
    this->nom = nom;
    this->gen = gen;
    this->calif = calif;
    this->dur = dur;
    this->fecha = fecha;
    this->IdEp = IdEp;
    this->nomEp = nomEp;
    this->tem = tem;
    this->numEp = numEp;
}

string Video::getId()
{
    return Id;
}

string Video::getNom()
{
    return nom;
}

string Video::getGen()
{
    return gen;
}

string Video::getCalif()
{
    return calif;
}

string Video::getDur()
{
    return dur;
}

string Video::getFecha()
{
    return fecha;
}

string Video::getIdEp()
{
    return IdEp;
}

string Video::getNomEp()
{
    return nomEp;
}

string Video::getTem()
{
    return tem;
}

string Video::getNumEp()
{
    return numEp;
}

string Video::cambiaCalif()
{
    string califNueva = "ola"; 
    return califNueva; 
}

void Video::getListaEp()
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
        cout << "Id del episodio: " << ep[i].getIdEp() << " ";
        cout << endl; 
        cout << "Nombre del episodio: " << ep[i].getNomEp() << " ";
        cout << endl;
        cout << "Temporada: " << ep[i].getTem() << " ";
        cout << endl; 
        cout << "Numero de episodio: " << ep[i].getNumEp() << " ";
        cout << endl; 
        cout << endl; 
    }
}

void Video::getListaPeli()
{
    for(int i = 0; i<peli.size(); i++)
    {
        cout << "Id: " << peli[i].getId() << " ";
        cout << endl; 
        cout << "Nombre: " << peli[i].getNom() << " ";
        cout << endl; 
        cout << "Duracion: " << peli[i].getDur() << " "; 
        cout << endl; 
        cout << "Genero: " << peli[i].getGen() << " "; 
        cout << endl; 
        cout << "Calificacion: " << peli[i].getCalif() << " ";
        cout << endl; 
        cout << "Fecha de estreno: " << peli[i].getFecha() << " ";
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
