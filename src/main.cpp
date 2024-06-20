#include "../include/main.h"
#include "../include/assemblageCode.h"
#include "../include/stockage.h"



void binaireToDecimal()
{

}
//lire le contenu du fichier intel 4004
void lireFichier()
{

}

//Utiliser pour gerer les adresses du code
void decodeur()
{

}

//Conversion exadecimal en binaire
void convertHexToBin()
{

}


int gestionDesChoix()
{
    cout << "1) Assembler votre fichier"<<endl;
    cout << "2) Lancer votre programme sur l'intel 4004"<<endl;
    cout << "3) exit"<<endl;

    cout << "Votre choix: " << endl;
    int choix{0};
    cin>> choix;
    return choix;

}

//Emplacement d'execution des instructions
void loopExecution(bool& execution)
{
    lireFichier();
    //Boucle d'execution du code
    while(execution)
    {
        
        
    }
}
int main()
{
    int choix{gestionDesChoix()};
    bool execution{true};
    if(choix == 1)
    {
        cout<< "Entrer le nom de votre fichier: ";
    }
    else if( choix == 2)
    {
        cout << "Entrer le nom de votre fichier: ";
        loopExecution(execution);
    }
    else if(choix == 3)
    {
        execution = false;
    }

    //Conversion du binaire en decimale pour l'utiliser dans l'index i : utilisé pour gérer les cas d'instruction JUN

    //Conversion de l'exadecimal ce trouvent dans le fichier en binaire : utiliser pour faire les opérations des instructions logique du CPU

    //Gestionnaire de la fréquence d'execution du code

   
}
