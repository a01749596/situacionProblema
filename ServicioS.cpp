#include "ServicioS.h"
#include "Video.h"
#include "Peliculas.h" 
#include "Episodio.h"
#include "Serie.h"
#include <iostream>
#include <fstream> 
#include <string> 
#include <sstream>
#include <vector> 
vector<string> separar(string linea); 

ServicioS::ServicioS()
{
}

void ServicioS::abrirArchivo()
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
        }else{
            Serie *serie = new Episodio(datos[0], datos[1], stof(datos[2]), datos[3], stof(datos[4]), datos[5], datos[6], datos[7], datos[8], datos[9]); 
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

void ServicioS::videosGenero(string genero)
{
    for(int i=0; i<pelicula.size(); i++)
    {
        if(pelicula[i]->getGen() == genero)
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
    cout << "3) Buscar por genero" << endl; 

    cin >> opcion; 
    if(opcion == 1)
    {
        ServicioS::abrirArchivo();
        cout << "Se cargo el archivo"; 
    } else if(opcion == 2)
    {
        ServicioS::abrirArchivo();
        float calificacion;
        cout << "Ingrese la calificacion: "; 
        cin >> calificacion; 
        ServicioS::videosCalif(calificacion); 
    } else if(opcion == 3)
    {
        string genero;
        cout << "Genero que desea: "; 
        cin >> genero;
        ServicioS::videosGenero(genero); 
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
            tokens.push_back(dato); // GUARDA en el vector
        }
    }
    return tokens;
}
