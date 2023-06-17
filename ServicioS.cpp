#include "ServicioS.h"
#include "Video.h"
#include "Peliculas.h"
#include <iostream>
#include <fstream> 
#include <string> 
#include <sstream>
#include <vector> 
vector<string> separar(string linea); 

ServicioS::ServicioS()
{
}

void ServicioS::abrirPeliculas()
{
    ifstream entrada; 
    entrada.open("DatosPeliculas.csv");
    string linea; 
    int numeroLinea = 1; 

    while(getline(entrada, linea))
    {
        vector<string> datos = separar(linea); 
        if(datos.size() == 6)
        {
            Peliculas *peliculas = new Peliculas(datos[0], datos[1], stof(datos[2]), datos[3], stof(datos[4]), datos[5]);
            pelicula.push_back(peliculas); 
        }
        cout << endl; 
    }
    entrada.close(); 
}

void ServicioS::videosCalif(float calificacion)
{
    for(int i=0; i < pelicula.size(); i++)
    {
        if (pelicula[i]->getCalif() >= calificacion)
        {
            pelicula[i]->getDatos(); 
        }
    }
}

void ServicioS::menu()
{
    int opcion; 
    cout << "Servicio de Streaming" << endl;
    cout << endl; 
    cout << "      Menu     " << endl;
    cout << "================="<<endl;
    cout << "Elija una opcion" << endl; 
    cout << "1) Cargar archivo" << endl; 
    cout << "2) Buscar por Calificacion" << endl;

    cin >> opcion; 
    if(opcion == 1)
    {
        ServicioS::abrirPeliculas();
        cout << "Se cargo el archivo" << endl; 
    } else if(opcion == 2)
    {
        ServicioS::abrirPeliculas();
        float calificacion;
        cout << "Ingrese la calificacion: " << endl; 
        cin >> calificacion; 
        ServicioS::videosCalif(calificacion); 
    }
}

vector<string> separar(string linea)
{
    vector<string> tokens; // Componentes de la línea
    stringstream entrada(linea); // flujo de datos a partir de una cadena
    string dato; // token individual

    int numeroTokens = 0;
    while (getline(entrada, dato, ',')) // dependiendo de cuantos tokens click derecho formatear documento
    {
        if (dato != "" && dato != "\n" && dato != "\r")
        {
            // cout << dato << endl;
            tokens.push_back(dato); // GUARDA en el vector
            //cout << numeroTokens++ << endl;
        }
    }
    // cout << "tokens: " << numeroTokens << endl << endl;
    return tokens;
}
