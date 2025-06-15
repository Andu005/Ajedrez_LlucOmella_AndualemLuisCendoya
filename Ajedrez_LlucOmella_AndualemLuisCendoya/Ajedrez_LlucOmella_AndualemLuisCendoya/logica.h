#ifndef LOGICA_H //evitar inclusions multiples de l'arxiu
#define LOGICA_H

#include <string>


//estructura que representa un rotor
struct Rotor {
    std::string wiring;
    char notch;
    int position;
};

//declaració de les variables externes (entre arxius)
extern Rotor rotor1, rotor2, rotor3;

//declaració de les funcions
void loadRotors();
bool validateWiring(const std::string& wiring);
char processLetter(char letter, bool reverse = false);
void rotateRotors();
void encryptDecryptFile(bool encrypt);
void editRotor();
void showMenu();
std::string cleanMessage(const std::string& message);
void groupText(std::string& text);
std::string getMessageFromUser();

#endif