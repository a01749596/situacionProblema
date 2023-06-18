#include "Peliculas.h"
#include <iostream> 
#include <string>

//Constructor de la clase, inicializa con los atributos de la clase video
Peliculas::Peliculas(string IdP, string nomP, float durP, string genP, float califP, string fechaEsP) : Video(IdP, nomP, durP, genP, califP, fechaEsP)
{
}

//obtenemos los datos de las peliculas
void Peliculas::getDatos()
{
    cout << "Id: "<< getId() << endl; 
    cout << "Nombre: " << getNom() << endl; 
    cout << "Duracion: " << getDur() << endl; 
    cout << "Genero: " << getGen() << endl; 
    cout << "Calificacion: " << getCalif() << endl; 
    cout << "Fecha de estreno: " << getFechaEs() << endl; 
}

//volvemos a redefinir la calificacion 
void Peliculas::setCalif(float calificacion)
{
    Video::setCalif(calificacion); 
}
