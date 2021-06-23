#ifndef WEKTOR_HH
#define WEKTOR_HH

#include <iostream>
#include <cmath>
using namespace std;

template <int DIMENSION>
class Wektor
{
    static int wszystkie;
    static int aktualne;
    double _wsp[DIMENSION];

public:
    Wektor();
    Wektor(Wektor<DIMENSION> &wek)
    {
        for (int i = 0; i < DIMENSION; i++)
            _wsp[i] = wek._wsp[i];

        aktualne++;
    }
    constexpr Wektor(const Wektor &other)
    {
        for (int i = 0; i < DIMENSION; i++)
            _wsp[i] = other._wsp[i];
        aktualne++;
    }
    Wektor &operator=(const Wektor &other)
    {
        for (int i = 0; i < DIMENSION; i++)
            _wsp[i] = other._wsp[i];
        return *this;
    }

    Wektor &operator=(const float &other)
    {
        for (int i = 0; i < DIMENSION; i++)
            _wsp[i] = other;
        return *this;
    }
    ~Wektor();
    Wektor(double _wsp[DIMENSION]);
    double operator[](int index) const;
    double &operator[](int index);
    Wektor<DIMENSION> operator+(Wektor<DIMENSION> &arg);
    Wektor<DIMENSION> operator-(Wektor<DIMENSION> &arg);
    void informacje();
};

template <int DIMENSION>
int Wektor<DIMENSION>::wszystkie = 0;

template <int DIMENSION>
int Wektor<DIMENSION>::aktualne = 0;

template <int DIMENSION>
void Wektor<DIMENSION>::informacje()
{
    cout << "akturalne obiekty: " << aktualne << endl;
    cout << "wszystkie obiekty: " << wszystkie << endl;
}

template <int DIMENSION>
Wektor<DIMENSION>::Wektor()
{
    for (int i = 0; i < DIMENSION; i++)
        _wsp[i] = 0;
    aktualne++;
    wszystkie++;
}

template <int DIMENSION>
Wektor<DIMENSION>::Wektor(double _wsp[DIMENSION])
{
    for (int i = 0; i < DIMENSION; i++)
        this->_wsp[i] = _wsp[i];
    aktualne++;
    wszystkie++;
}

template <int DIMENSION>
Wektor<DIMENSION>::~Wektor()
{
    aktualne--;
}

template <int DIMENSION>
double Wektor<DIMENSION>::operator[](int index) const
{
    if (index > DIMENSION || index < 0)
    {
        std::cerr << "Indeks poza skala" << std::endl;
        exit(1);
    }
    return _wsp[index];
}

template <int DIMENSION>
double &Wektor<DIMENSION>::operator[](int index)
{
    if (index > DIMENSION || index < 0)
    {
        std::cerr << "Indeks poza skala" << std::endl;
        exit(1);
    }
    return _wsp[index];
}

template <int DIMENSION>
Wektor<DIMENSION> Wektor<DIMENSION>::operator+(Wektor<DIMENSION> &arg)
{
    Wektor<DIMENSION> Wynik;
    for (int i = 0; i < DIMENSION; i++)
    {
        Wynik[i] = _wsp[i] + arg[i];
    }
    return Wynik;
}

template <int DIMENSION>
Wektor<DIMENSION> Wektor<DIMENSION>::operator-(Wektor<DIMENSION> &arg)
{
    Wektor<DIMENSION> Wynik;
    for (int i = 0; i < DIMENSION; i++)
    {
        Wynik[i] = _wsp[i] - arg[i];
    }
    return Wynik;
}

template <int DIMENSION>
std::istream &operator>>(std::istream &Strm, Wektor<DIMENSION> &Wek)
{
    for (int i = 0; i < DIMENSION; i++)
    {
        Strm >> Wek[i];
    }
    return Strm;
    return Strm;
}

template <int DIMENSION>
inline std::ostream &operator<<(std::ostream &Strm, const Wektor<DIMENSION> &Wek)
{
    for (int i = 0; i < DIMENSION; i++)
    {
        Strm << Wek[i] << " ";
    }
    return Strm;
}

#endif
