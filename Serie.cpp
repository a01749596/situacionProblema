#include "Serie.h"
#include <iostream>
using namespace std; 

Serie::Serie(string Id, string nom, string gen)
{
    this-> Id = Id; 
    this-> nom = nom; 
    this-> gen = gen; 
}

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

void Serie::nuevoEp(Episodio *episodio)
{
    episodios.push_back(episodio);
}

vector<Episodio *> Serie::getEp()
{
    return episodios;
}

void Serie::getDatos()
{
    cout << Id; 

}
