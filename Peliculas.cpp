#include "Peliculas.h"
#include <iostream> 
#include <fstream>
using namespace std; 
#include <sstream>
#include <string> 
#include <vector>

Peliculas::Peliculas()
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

    while (getline(DatosPelicula, linea))
    {
        stringstream token(linea);
        getline(token, Id, ',');
        getline(token, nombre, ',');
        getline(token, duracion, ',');
        getline(token, genero, ',');
        getline(token, calificacion, ',');
        getline(token, fechaestreno, ',');

        Video video(Id, nombre, duracion, genero, calificacion, fechaestreno);

        peli.push_back(video); 

    }
}


Video Peliculas::getId()
{
    return peli[0];
}

Video Peliculas::getNom()
{
    return peli[1];
}

Video Peliculas::getGen()
{
    return peli[3];
}

Video Peliculas::getCalif()
{
    return peli[4];
}

Video Peliculas::getDur()
{
    return peli[2];
}

Video Peliculas::getFecha()
{
    return peli[5];
}

string Peliculas::cambiaCalif()
{
    string califNueva = "ola"; 
    return califNueva;
}

void Peliculas::getLista()
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
    }
}


