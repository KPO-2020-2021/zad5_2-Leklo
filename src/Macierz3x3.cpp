#include "Macierz3x3.hh"

/*
 *  Tutaj nalezy zdefiniowac odpowiednie metody
 *  klasy Macierz3x3, ktore zawieraja wiecej kodu
 *  niz dwie linijki.
 *  Mniejsze metody mozna definiwac w ciele klasy.
 */

Macierz3x3 mac_obr_x(double angle)
{
    double rad = angle * M_PI / 180;
    Macierz3x3 ROTATION;
    ROTATION(0, 0) = 1;
    ROTATION(0, 1) = 0;
    ROTATION(0, 2) = 0;

    ROTATION(1, 0) = 0;
    ROTATION(1, 1) = cos(rad);
    ROTATION(1, 2) = -sin(rad);

    ROTATION(2, 0) = 0;
    ROTATION(2, 1) = sin(rad);
    ROTATION(2, 2) = cos(rad);
    return ROTATION;
}
Macierz3x3 mac_obr_y(double angle)
{
    double rad = angle * M_PI / 180;
    Macierz3x3 ROTATION;
    ROTATION(0, 0) = cos(rad);;
    ROTATION(0, 1) = 0;
    ROTATION(0, 2) = sin(rad);

    ROTATION(1, 0) = 0;
    ROTATION(1, 1) = 1;
    ROTATION(1, 2) = 0;

    ROTATION(2, 0) = -sin(rad);
    ROTATION(2, 1) = 0;
    ROTATION(2, 2) = cos(rad);
    return ROTATION;
}
Macierz3x3 mac_obr_z(double angle)
{
    double rad = angle * M_PI / 180;
    Macierz3x3 ROTATION;
    ROTATION(0, 0) = cos(rad);;
    ROTATION(0, 1) = -sin(rad);
    ROTATION(0, 2) = 0;

    ROTATION(1, 0) = sin(rad);
    ROTATION(1, 1) = cos(rad);
    ROTATION(1, 2) = 0;

    ROTATION(2, 0) = 0;
    ROTATION(2, 1) = 0;
    ROTATION(2, 2) = 1;
    return ROTATION;
}