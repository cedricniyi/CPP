// iostream (c'est un header) contient des fonctions pour des opération I/O
#include <iostream>

// C'est ici que le programme commence
int main()
{

    // standard caracter output
    std::cout << "Hello Cédric, that you're first programme." << '\n';
    // "std::endl" permet de flush le bffer de sortie
    std::cout << "It's a simple programme" << std::endl;

    /*
        Si on arrive à cette ligne de code et que le prog renvoie bien
        0, tout c'est bien passé. Si return 1, un problème à eu lieu
    */
    return 0;
}
