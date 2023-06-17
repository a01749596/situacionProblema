#include "ServicioS.h"
#include <iostream>
#include <string>
#include <sstream> 
#include <fstream> 

void ServicioS::leerPeliculas()
{
    ifstream DatosPelicula;
    DatosPelicula.open("./DatosPeliculas.csv");
    string linea; 
    vector<string> datos;  

    while (getline(DatosPelicula, linea))
    {
        stringstream token(linea);
        string Id;
        string nombre; 
        string duracion; 
        string genero; 
        string calificacion; 
        string fechaestreno;
        getline(token, Id, ',');
        getline(token, nombre, ','); 
        getline(token, duracion, ',');
        getline(token, genero, ',');
        getline(token, calificacion, ',');
        getline(token, fechaestreno, ',');

        Peliculas peliculas(Id, nombre, std::stof(duracion), genero, std::stof(calificacion), fechaestreno);

        peli.push_back(peliculas); 
    }
    DatosPelicula.close(); 
}

void ServicioS::videosCalif(float calif)
{
    for(int i = 0; i < peli.size(); i++)
    {
        if(peli[i].getCalif() >= calif)
        {
            cout << "Id: " << peli[i].getId() << endl;
            cout << "Nombre: " << peli[i].getNom() << endl;
            cout << "Duracion: " << peli[i].getDur() << endl;
            cout << "Genero: " << peli[i].getGen() << endl;
            cout << "Calificacion: " << peli[i].getCalif() << endl;
            cout << "Fecha de estreno: " << peli[i].getFechaEs() << endl;
            cout << endl;
        }
    }
}


void ServicioS::getMenu()
{
    int opcion;
    while(true)
    { 
        cout << "Selecciona una opcion" << endl;
        cin >> opcion; 

        if(opcion == 1)
        {
            float calif;
            cout << "Ingrese la califiacion: ";
            cin >> calif; 
            ServicioS::videosCalif(calif); 
        }else{
            cout << "Valor incorrecto" << endl; 
        }
    }
}
