#ifndef LOGICA_H
#define LOGICA_H

#include <string>

struct Rotor {
    std::string wiring;
    char notch;
    int position;
};

extern Rotor rotor1, rotor2, rotor3;

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