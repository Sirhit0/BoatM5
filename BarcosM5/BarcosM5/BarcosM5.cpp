// BarcosM5.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include "Header.h";
#include <iostream>
using namespace std;

string name;
string arrayNames[];

void start() {
    int boatCount;
    cout << ("cuantos barcos van a jugar?");
    cin >> boatCount;
    for (int i = 0; i < boatCount; i++) {
        cout << "Cual es tu nombre: ";
        cin >> name;
        arrayNames[i] = name;

        
    }
}

int main()
{
    void start();
}
