#include <vector>
#include <string>
using namespace std; 
#include "Video.h"

class Episodio : public Video
{
private: 
    vector<Video> ep; 
public:
    Episodio();
    Video getId();
    Video getNom();
    Video getTem();
    Video getNumE(); 
    string cambiaCalif(); 
}; 