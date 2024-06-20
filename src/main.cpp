#include <string>
#include <fstream>

using namespace std;

const int bits{4};
const int nbMemoire{1000};

//Mémoire intel 4004 : execution
int memoire[nbMemoire][bits]
{

};

//Registre intel 4004
const int nbRegistre{16};

bool registre[nbRegistre][bits]
{
    {0,0,0,0}, // Registre 0
    {0,0,0,0}, // Registre 1
    {0,0,0,0}, // Registre 2
    {0,0,0,0}, // Registre 3
    {0,0,0,0}, // Registre 4
    {0,0,0,0}, // Registre 5
    {0,0,0,0}, // Registre 6
    {0,0,0,0}, // Registre 7
    {0,0,0,0}, // Registre 8
    {0,0,0,0}, // Registre 9
    {0,0,0,0}, // Registre 10
    {0,0,0,0}, // Registre 11
    {0,0,0,0}, // Registre 12
    {0,0,0,0}, // Registre 13
    {0,0,0,0}, // Registre 14
    {0,0,0,0}  // Registre 15
};

	
//Stocke les registre d'adressage pour navigué dans l'execution des instructions du fichier : utilisé pour revenir à l'adresse avant 
const int nbStack{4};
bool stack[nbStack][bits]
{
    {0,0,0,0}, //PC : programme counter : ligne execution fichier
    {0,0,0,0}, // Level 1 : stocke le registre d'adressage d'execution 
    {0,0,0,0}, // Level 2 : stocke le registre d'adressage d'execution peut être utilisé pour les instructions jmp
    {0,0,0,0}  // Level 3
};

//Recois les resultats des registres pour l'executer dans l'alu
bool accumulator[bits]{0,0,0,0};

//Bit carry utiliser s'il à un débordement
bool carry{0};



//lire le contenu du fichier binaire executable du intel 4004
void lireFichierExecutable()
{

}

//Utiliser pour gerer les adresses du code
void decodeur()
{

}

//Instruction de l'intel 4004

int main()
{

}
