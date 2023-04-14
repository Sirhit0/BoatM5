#include "Header.h"

// Constructor
Boat::Boat(string pName, int pPositionBoat, bool pTurbo) {
    name = pName;
    positionBoat = pPositionBoat;
    turbo = pTurbo;
}

// Getters
string Boat::getName() {
    return name;
}

int Boat::getPositionBoat() {
    return positionBoat;
}

bool Boat::getTurbo() {
    return turbo;
}

// Setters
void Boat::setName(string pName) {
    name = pName;
}

void Boat::setPositionBoat(int pPositionBoat) {
    positionBoat = pPositionBoat;
}

void Boat::setTurbo(bool pTurbo) {
    turbo = pTurbo;
}
