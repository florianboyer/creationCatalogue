#ifndef LOT_H
#define LOT_H
#include <iostream>
#include <vector>
using namespace std;

class lot
{
private:
    int idLot;
    //nom variete a recuperer
    int prix;
    int quantite;
    string dlc;


public:
    lot(int unId, int unPrix, int uneQuantite, string uneDate);
};

#endif // LOT_H
