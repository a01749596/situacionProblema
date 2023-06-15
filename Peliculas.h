#include "Video.h"
#include <vector> 
#include <string> 
using namespace std; 

class Peliculas : public Video
{
private: 
    vector<Video> peli;
public:
    Peliculas();
    Video getId();
    Video getNom(); 
    Video getGen();
    Video getCalif();
    Video getDur();
    Video getFecha();
    string cambiaCalif();
    void getLista (); 
};