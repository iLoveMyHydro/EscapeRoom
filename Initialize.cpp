#include "Initialize.h"
#include <iostream>
#include <cstdlib>;

using namespace std;
int GetRoomValueX(void);
int GetRoomValueY(void);
void CreateRoom(int x, int y);
void MyPause(void);

const int maxX = 20; // Maximaler Wert für X
const int maxY = 20; // Maximaler Wert für Y

int main()
{
    int x = GetRoomValueX();
    int y = GetRoomValueY();
    CreateRoom(x, y);
}

int GetRoomValueX()
{
    int x = 0;

    do
    {
        std::cout << "Gib den X Wert des Raumes an: ";
        std::cin >> x;

        if (x == 0)
        {
            std::cout << "Der Wert darf nicht 0 sein! Gib eine neue Zahl ein\n";
            MyPause();
            system("cls");
        }
        else if (x < 5)
        {
            std::cout << "Der Wert darf nicht kleiner als 5 sein! Gib eine neue Zahl ein\n";
            MyPause();
            system("cls");
        }
        else if (x > maxX)
        {
            std::cout << "Der Wert darf nicht groesser als " << maxX << " sein! Gib eine neue Zahl ein\n";
            MyPause();
            system("cls");
        }
    } while (x == 0 || x < 5 || x > maxX);

    return x;
}

int GetRoomValueY()
{
    int y = 0;

    do
    {
        std::cout << "Gib den Y Wert des Raumes an: ";
        std::cin >> y;

        if (y == 0)
        {
            std::cout << "Der Wert darf nicht 0 sein! Gib eine neue Zahl ein\n";
            MyPause();
            system("cls");
        }
        else if (y < 5)
        {
            std::cout << "Der Wert darf nicht kleiner als 5 sein! Gib eine neue Zahl ein\n";
            MyPause();
            system("cls");
        }
        else if (y > maxY)
        {
            std::cout << "Der Wert darf nicht groesser als " << maxY << " sein! Gib eine neue Zahl ein\n";
            MyPause();
            system("cls");
        }
    } while (y == 0 || y < 5 || y > maxY);

    return y;
}

void CreateRoom(int x, int y)
{
    char room[maxX][maxY]; 

    system("cls");

    for (int j = 0; j < y; j++) 
    {
        for (int i = 0; i < x; i++) 
        {
            if (i == 0 || i == x - 1 || j == 0 || j == y - 1) 
            {
                room[i][j] = '#';
            }
            else
            {
                room[i][j] = ' ';
            }
            std::cout << room[i][j]; 
        }
        std::cout << std::endl;
    }
}

void MyPause()
{
    std::cin.ignore();
    std::cin.get();
}