#include "Peliculas.h"
#include "Episodio.h"
#include <iostream>
using namespace std; 

int main()
{
    Peliculas p;
    cout << "peliculas" << endl;
    cout << endl; 
    p.getLista();

    Episodio e; 
    cout << "episodios" << endl; 
    cout << endl; 
    e.getListaEp();

}