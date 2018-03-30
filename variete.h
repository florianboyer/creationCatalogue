#ifndef VARIETE_H
#define VARIETE_H
#include <iostream>
#include <vector>
using namespace std;

class Variete{
private:
    int id;
    string NomVariete;
    string ImageVariete;

public:
    Variete(int unId, string unNom, string UneImage);
};

#endif // VARIETE_H
