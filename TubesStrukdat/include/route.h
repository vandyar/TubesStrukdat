#ifndef ROUTE_H_INCLUDED
#define ROUTE_H_INCLUDED
#include <iostream>
#include <string>

using namespace std;

struct Rute;

struct Halte {
    string NamaHalte;
    Rute* FirstRute;   
    Halte* next;       
};

struct Rute {
    int id;
    Rute* next;        
};

typedef Halte* adrHalte;
typedef Rute* adrRute;
adrHalte newHalte(string name);
adrRute newRute(int id);
void insertHalte(adrHalte &head, string name);
void insertRute(adrRute &head, int id);
void insertRelation(adrHalte headHalte, adrRute headRute, string halteName, int ruteID);
void deleteHalte(adrHalte &head, string name);
void deleteRute(adrRute &head, int id);
void deleteRelation(adrHalte head, string halteName, int ruteID);
adrHalte findHalte(adrHalte head, string name);
adrRute findRute(adrRute head, int id);
bool findRelation(adrHalte head, string halteName, int ruteID);
void printAll(adrHalte headHalte);                 
void showAllHalte(adrHalte headHalte);           
void showAllRute(adrRute headRute);               
void showRuteFromHalte(adrHalte headHalte, string halteName); 
void showHalteWithRute(adrHalte headHalte);       
void showRuteWithHalte(adrHalte headHalte, adrRute headRute); 
void showHalteByRute(adrHalte headHalte, int ruteID);         
int countRelationPerHalte(adrHalte headHalte, string halteName);
int countRelationPerRute(adrHalte headHalte, int ruteID);       
int countRuteWithoutRelation(adrHalte headHalte, adrRute headRute);
void editRelation(adrHalte headHalte, string halteName, int oldRuteID, int newRuteID); 

#endif

