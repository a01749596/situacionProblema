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
    string Id;
    string nombre; 
    string duracion; 
    string genero; 
    string calificacion; 
    string fechaestreno;
    vector<string> datos;  
    
    while (getline(DatosPelicula, linea))
    {
        stringstream token(linea);
        
        getline(token, Id, ',');
        getline(token, nombre, ','); 
        getline(token, duracion, ',');
        getline(token, genero, ',');
        getline(token, calificacion, ',');
        getline(token, fechaestreno, ',');
        

        Peliculas peliculas(Id, nombre, duracion, genero, calificacion, fechaestreno);

        peli.push_back(peliculas); 
    }
    DatosPelicula.close(); 
}

void ServicioS::videosCalif()
{
    for(int i = 0; i < peli.size(); i++)
    {
        peli[i].getDatos(); 
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
            ServicioS::videosCalif(); 
        }else{
            cout << "Valor incorrecto" << endl; 
        }
    }
}
