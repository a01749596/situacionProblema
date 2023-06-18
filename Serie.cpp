#include "Serie.h"
#include <iostream>
using namespace std; 

/*
Autor: Paola Varela Hernández 
Implementación de métodos 
*/

//inicializa los atributos con los parámetros asignados
Serie::Serie(string Id, string nom, string gen)
{
    this-> Id = Id; 
    this-> nom = nom; 
    this-> gen = gen; 
}

//obtenemos la informacion de la serie 
string Serie::getId()
{
    return Id;
}

string Serie::getNom()
{
    return nom;
}

string Serie::getGen()
{
    return gen;
}

//recibe un puntero a un objeto de tipo episodio, lo agrega al vector episodios de la serie 
void Serie::nuevoEp(Episodio *episodio)
{
    episodios.push_back(episodio);
}

//regresa el vector de episodios de la serie
vector<Episodio *> Serie::getEp()
{
    return episodios;
}

//muestra los datos 
void Serie::getDatos()
{
    cout << Id; 
    cout << nom; 
    cout << gen; 
}
