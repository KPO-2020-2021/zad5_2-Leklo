#include "BLOCK.hh"

Wektor3D &BLOCK::operator[](int index)
{
    return vertex[index];
}
Wektor3D BLOCK::operator[](int index) const
{
    return vertex[index];
}

void BLOCK::set_name(std::string name)
{
    this->name = name;
}

void BLOCK::set_center(Wektor3D center)
{
    this->center = center;
}

Wektor3D BLOCK::get_center() const
{
    return center;
}

std::string BLOCK::get_name() const
{
    return name;
}

void BLOCK::move(Wektor3D przes)
{
    for (int i = 0; i < (int)vertex.size(); i++)
    {
        vertex[i] = vertex[i] + przes;
    }
    center = center + przes;
}

void BLOCK::translacja(Macierz3x3 obr)
{
    for (int i = 0; i < (int)vertex.size(); i++)
    {
        vertex[i] = (obr * vertex[i]);
    }
    center=obr*center;
}

void BLOCK::zapisz()
{
    std::fstream plik;
    double tab[] = {0, 0, (*dim)[2] / 2};
    Wektor3D move_sr(tab);

    plik.open(name, std::ios::out);

    for (int i = 0; i < (int)vertex.size(); i += 2)
    {
        plik << center + move_sr << std::endl;
        for (int j = 0; j < 2; j++)
        {
            plik << vertex[j + i] << std::endl;
        }
        plik << center - move_sr << std::endl
             << std::endl;
    }

    plik << center + move_sr << std::endl;
    for (int j = 0; j < 2; j++)
    {
        plik << vertex[j] << std::endl;
    }
    plik << center - move_sr << std::endl
         << std::endl;
    plik.close();
}