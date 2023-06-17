#include "Episodio.h"
#include <iostream>
using namespace std; 

Episodio::Episodio(string Id, string nom, float dur, string gen, float calif, string fechaEs, string IdE, string nomE, string tem, string numE) : Video(Id, nom, dur, gen, calif, fechaEs), IdE(IdE), nomE(nomE), tem(tem), numE(numE)
{
}

void Episodio::getDatos()
{
    Video::getDatos();
    cout << "ID episodio: " <<  IdE << endl
    << "Nombre episodio: " << nomE << endl 
    << "Temporada: " << tem << endl
    << "Número de episodio: " << numE << endl;
}