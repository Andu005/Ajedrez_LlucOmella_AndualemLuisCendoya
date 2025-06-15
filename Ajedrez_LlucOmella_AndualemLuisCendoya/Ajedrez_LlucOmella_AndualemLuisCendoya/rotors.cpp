#include "logica.h"
#include "const.h" //capcaleras
#include <iostream>
#include <fstream>
#include <cctype> //llibreries per gestionar fitxers i caracters

void loadRotors() { //funcio per carregar un rotor
    auto loadRotor = [](const std::string& filename, Rotor& rotor) {
        std::ifstream file(filename);
        if (file.is_open()) {
            getline(file, rotor.wiring);
            std::string notchLine;
            if (getline(file, notchLine) && !notchLine.empty()) {
                rotor.notch = toupper(notchLine[0]);
            }
            rotor.position = 0;
            file.close();
        }
        };

    loadRotor(ROTOR1_FILE, rotor1);  // Carreguem rotor 1,2 i 3
    loadRotor(ROTOR2_FILE, rotor2);
    loadRotor(ROTOR3_FILE, rotor3);
}

//validacio del rotor: carcters, rpeticio de lletras...
bool validateWiring(const std::string& wiring) {
    if (wiring.length() != 26) return false;

    bool letters[26] = { false };
    for (char c : wiring) {
        c = toupper(c);
        if (!isalpha(c)) return false;
        int index = c - 'A';
        if (letters[index]) return false;
        letters[index] = true;
    }
    return true;
}

// rotar (gira) els rotors
void rotateRotors() {
    rotor1.position = (rotor1.position + 1) % 26;

    if (rotor1.wiring[rotor1.position] == rotor1.notch) {
        rotor2.position = (rotor2.position + 1) % 26;

        if (rotor2.wiring[rotor2.position] == rotor2.notch) {
            rotor3.position = (rotor3.position + 1) % 26;
        }
    }
}
