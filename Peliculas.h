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
    Video getDur();
    Video getGen();
    Video getCalif();
    Video getFecha();
    string cambiaCalif();
    void getLista (); 
};