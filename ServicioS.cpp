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

/*
Autor: Paola Varela Hernández 
Implementación de la clase ServicioS 
Nota: Algunas partes de episodios y series están comentadas para que no arroje error al correr
*/

//constructor de la clase 
ServicioS::ServicioS()
{
}

//Abrimos el archivo de tipo .csv 
void ServicioS::abrirArchivo()
{
    ifstream entrada; //leemos el archivo de entrada
    entrada.open("DatosPeliculas.csv"); //abrimos el archivo de entrada 
    string linea; 
    int numeroLinea = 1;  //contador de números de linea
    int saltoLinea = 1; //variable para saltar la primera linea del archivo, ya que esta no contiene ni pelicula ni serie 

    while(getline(entrada, linea))
    {
        if(saltoLinea > 1) //verificamos que se salte la primera linea
        {
        vector<string> datos = separar(linea); //separamos la linea en datos utilizando la funcion separar
        if(datos.size() == 6) //si el numero de datos es de 6, quiere decir que es una pelicula 
        {
            //creamos un nuevo objeto peliculas utiliznado los datos obtenidos 
            Peliculas *peliculas = new Peliculas(datos[0], datos[1], stof(datos[2]), datos[3], stof(datos[4]), datos[5]);
            pelicula.push_back(peliculas); //agrega la pelicula al vector de peliculas 
    } /*else if(datos.size() == 10){ //si el numero de datos es 10, quiere decir que es una serie 
        Episodio *episodio = new Episodio(datos[0], datos[1], stof(datos[2]), datos[3], stof(datos[4]), datos[5], datos[6], datos[7], stoi(datos[8]), stoi(datos[9]));
        episodios.push_back(episodio); //agrega el episodio al vector de episodios

        //crea un nuevo objeto serie utilizando los datos de episodio 
        Serie *Serie_1 = new Serie(datos[0], datos[1], datos[3]);
        Serie_1->nuevoEp(episodio); //agrega el episodio a la serie 
        series.push_back(Serie_1); //agrega la serie al vector de series 
    }*/
    entrada.close(); //cierra el archivo de entrada 
    }
    }
}

//busca las peliculas con una calificacion mayor a la ingresada 
void ServicioS::videosPeliCalif(float cali)
{
    for (int i=0; i<pelicula.size(); i++)
    {
        if(pelicula[i]->getCalif() >= cali) //verifica si la calificacion de la pelicula es mayor o igual a la calificacion ingresada 
        {
            pelicula[i]->getDatos(); //imprime los datos de la película 
        }
    }
}

//busca los videos con la califiacion ingresada 
void ServicioS::videosCalif(float cali)
{
    for(int i=0; i<pelicula.size(); i++)
    {
        if(pelicula[i]->getCalif() >= cali) //verifica si la calificacion de la pelicula es mayor o igual a la calificacion ingresada
        {
            pelicula[i]->getDatos(); //imprime los datos de película 
        }
    }
    /*for(int i=0; i<pelicula.size(); i++)
    {
        for(int j=0; j<series[i]->episodios.size(); j++) //entramos a la serie para despues acceder al episodio 
        {
            if(series[i]).episodios[j].getCalif() >= cali) //verifica si la calificacion de la serie es mayor o igual a la calificacion ingresada
            {
                series[i].episodios[j].getDatos(); //imprime los datos de serie que contiene el episodio 
            }
        }
    }*/ 
}

//filtra las series por nombre 
/*void ServicioS::filtroSeries(string nom)
{
    for(int i=0; i<series.size(); i++) //accedemos al vector de series
    {
        if(series[i]->getNom() == nom) //obtenemos el nombre de la serie
        {
            series[i]->getDatos(); //imprimimos los datos de la serie deseada 
        }
    }
}*/

//filtra los videos por genero 
void ServicioS::videosGenero(string genero)
{
    for(int i=0; i<pelicula.size(); i++) //accedemos al vector pelicula
    {
        if(pelicula[i]->getGen() == genero) //obtenemos el genero de peliculas
        {
            pelicula[i]->getDatos(); //imprimimos el genero deseado 
        }
    }
}

//promediamos las series 
/*float ServicioS::promedioVideo(string nom)
{
    //iniciamos con la calificacion en 0
    float totalCal = 0.0;
    //iniciamos con los episodios en 0
    int totalEp = 0;
    
    for(int i=0; i<series.size(); i++)
    {
        if(serie[i]->getNom() == nom) //obtenemos el nombre de la serie
        {
            for(episodio[j]->getEp()) //obtenemos numero de episodio 
            {
                sumCalif += episodio->getCalif(); //sumamos la calificacion de los episodios de la serie 
                totalEp++;
            }
        }

    }
    if(totalEp > 0) //si el total de episodios es mayor a 0 
    {
        return sumaCalif / totalEp; //obtenemos el promedio 
    }else 
    {
        return 0; 
    }
}*/

//cambiamos la calificación de las peliculas 
void ServicioS::califVideos(string nom, float cali)
{
    for(int i=0; i<pelicula.size(); i++) 
    {
        if(pelicula[i]->getNom() == nom) //obtenemos el nombre de la película que deseamos cambiar
        {
            cout << "La calificacion de la pelicula" << pelicula[i]->getNom() << "es de:" << pelicula[i]->getCalif() << endl; //obtenemos el nombre y la calificación anterior
            pelicula[i]->setCalif(cali); //establecemos una nueva calificación a la película
            cout << "Se actualizo la calificacion: " << pelicula[i]->getCalif() << endl;  //actualizamos la califiación a la ingresada
        }
    }
}

void ServicioS::menu()
{
    //desplegamos el menú de opciones 
    int opcion; 
    cout << "Servicio de Streaming" << endl;
    cout << endl; 
    cout << "      Menu     " << endl;
    cout << "================="<<endl;
    cout << "Elija una opcion" << endl; 
    cout << "1) Cargar archivo" << endl; 
    cout << "2) Mostrar videos por genero" << endl;
    cout << "3) Mostrar videos por calificacion" << endl; 
    cout << "4) Mostrar episodios de una serie" << endl; 
    cout << "5) Bucar peliculas por calificacion" << endl;
    cout << "6) Califica un video" << endl;
    cout << "7) Promedio de una serie" << endl; 
    cout << "8) Salir" << endl; 

    cin >> opcion; 
    if(opcion == 1)
    {
        //iniciamos la opción 1 con los parámetros deseados 
        ServicioS::abrirArchivo();
        cout << "Se cargo el archivo"; 
    } else if(opcion == 2)
    {
        //iniciamos la opción 2 con los parámetros deseados 
        /*ServicioS::abrirArchivo();
        string genero;
        cout << "Genero que desea: "; 
        cin >> genero;
        ServicioS::videosGenero(genero); */
        
    }else if(opcion == 3)
    {
        //iniciamos la opción 3 con los parámetros deseados 
        ServicioS::abrirArchivo();
        float cali;
        cout << "Ingrese la calificacion: "; 
        cin >> cali; 
        ServicioS::videosCalif(cali); 
    }else if(opcion == 4)
    {
        //iniciamos la opción 4 con los parámetros deseados 
        /*ServicioS::abrirArchivo();
        string nom1; 
        cout <<"Ingresa la serie que quieres: ";
        cin>>nom1;
        ServicioS::filtroSeries(nom1);*/
    }else if(opcion == 5)
    {
        //iniciamos la opción 5 con los parámetros deseados 
        ServicioS::abrirArchivo();
        float cali2;
        cout << "Ingrese la calificacion: "; 
        cin >> cali2; 
        ServicioS::videosPeliCalif(cali2); 
    }else if(opcion == 6)
    {
        //iniciamos la opción 6 con los parámetros deseados 
        ServicioS::abrirArchivo();
        float cali2;
        string nom2; 
        cout<<"Ingresa el nombre del video: ";
        cin >> nom2;
        cout<<"Ingresa la calificacion: ";
        cin >> cali2;
        ServicioS::califVideos(nom2, cali2);
    }else if(opcion == 7)
    {
        //iniciamos la opción 7 con los parámetros deseados 
       /* ServicioS::abrirArchivo();
        string nom3;
        cout << "Ingresa la serie que quieres promediar: "; 
        cin >> nom3; 
        ServicioS::promedioVideo(nom3);*/ 
    }else if(opcion == 8)
    {
        //salimos del servicio 
        cout << "Saliste del servicio correctamente" << endl;
    }else
    {
        //nos indica error si ponemos un dato que no corresponde 
        cout << "Error. Esa opcion no se encuentra en el menu" << endl; 
        cout << endl; 
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
