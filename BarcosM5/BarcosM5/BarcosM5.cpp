// BarcosM5.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include "Header.h";
#include <iostream>
using namespace std;

string name1;
string name2;
string use;
int dace;
int daceX2;
int daceE2;
int whoIsThePlayer = 0;

Boat boat1(name1, 0, true);
Boat boat2(name2, 0, true);

void start() {
    cout << "cual es el nombre del jugador 1?" << endl;
    cin >> name1;
    system("cls");
    cout << "cual es el nombre del jugador 2?" << endl;
    cin >> name2;
}

void useBoost() {
    cout << "vamos a ver si tenemos suerte solo es 50% chaval!!!" << endl;
    int chance = rand() % 2;
    system("pause");
    if (chance == 1) {
        system("cls");
        cout << "Que pasada ha funcionado ahora la velocidad sera por dos" << endl;
        daceX2 = (rand() % 6 + 1) * 2;
        cout << "has sacado un " << daceX2 << endl;
        system("pause");
    }
    else {
        system("cls");
        cout << "tio.. la hemos cagado ahora nuestra velocidad se vera reducida" << endl;
        dace = (rand() % 6 + 1) / 2;
        cout << "has sacado un " << daceE2 << endl;
        system("pause");
    }

}

void whoIsTheWinner() {
    system("cls");
    system("color a");
    if (boat1.getPositionBoat() < boat2.getPositionBoat()) {
        cout << "el ganador ha sido el jugador " << name1;
    }
    else {
        cout << "el ganador ha sido el jugador " << name2;
    }
}


void game() {
    srand(time(NULL));
    cout << "¡Que empiece la carrera!" << endl;
    system("pause");
    for (int i = 0; i < 10; i++) {
        whoIsThePlayer++;

        if (whoIsThePlayer % 2 != 0 ) {
            system("cls");
            if (boat1.getTurbo()) {
                cout << "¿Quieres usar el turbo " << name1 << endl;
                cin >> use;
            }
            if (use == "si" && boat1.getTurbo()) {
                useBoost();
                boat1.setTurbo(false);
            }
            else {
                dace = rand() % 6 + 1;
                cout << name1 << " ha sacado un " << dace << endl;
                int currentPosition = boat1.getPositionBoat();
                int newPosition = currentPosition + dace;
                boat1.setPositionBoat(newPosition + dace);
                cout << "La posición de " << name1 << " es " << boat1.getPositionBoat() << endl;
                system("pause");
            }
        }
        else {
            system("cls");
            if (boat2.getTurbo()) {
                cout << "¿Quieres usar el turbo " << name2 << endl;
                cin >> use;
            }
            if (use == "si" && boat2.getTurbo()) {
                useBoost();
                boat2.setTurbo(false);
            }
            else {
                dace = rand() % 6 + 1;
                cout << name2 << " ha sacado un " << dace << endl;
                int currentPosition = boat2.getPositionBoat();
                int newPosition = currentPosition + dace;
                boat2.setPositionBoat(newPosition + dace);
                cout << "La posición de " << name2 << " es " << boat2.getPositionBoat() << endl;
                system("pause");
            }
        }
    };
    whoIsTheWinner();
};



int main()
{
    start();
    game();
}
