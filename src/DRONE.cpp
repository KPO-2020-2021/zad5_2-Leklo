
#include "DRONE.hh"

DRONE::DRONE(int id, PzG::LaczeDoGNUPlota &Lacze, Wektor3D cord) : Lacze(Lacze)
{
    angle=0;
    this->id = id;
    orginal.set_name("../datasets/korpus" + std::to_string(id) + ".dat");

    for (int i = 0; i < 4; i++)
        org_wir[i].set_name("../datasets/wirnik" + std::to_string(i) + std::to_string(id) + ".dat");

    Lacze.DodajNazwePliku(orginal.get_name().c_str());
    for (int i = 0; i < 4; i++)
        Lacze.DodajNazwePliku(org_wir[i].get_name().c_str());
    kopia = orginal;

    kopia.move(cord);
    for (int i = 0; i < 4; i++)
        kopia_wir[i] = org_wir[i];

    for (int i = 0; i < 4; i++)
        kopia_wir[i].move(orginal[i * 2] + cord);

    this->path = this->path + cord;
}

void DRONE::up(double path)
{
    Wektor3D path_o;
    path_o[2] = path;

    this->path = this->path + path_o;
    kopia.translacja(obr);
    kopia.move(this->path);
}

void DRONE::move(double path)
{
    Wektor3D path_o;
    path_o[0] = path * cos(angle * M_PI / 180);
    path_o[1] = path * sin(angle * M_PI / 180);
    this->path = this->path + path_o;
    kopia.translacja(obr);
    kopia.move(this->path);
}

void DRONE::rotate(double angle)
{
    this->angle += angle;
    Macierz3x3 nowa;
    obr = nowa * mac_obr_z(this->angle);
    kopia.translacja(obr);
    kopia.move(this->path);
}
void DRONE::rotater()
{
    static int angle = 0;
    angle += 3;
    if (angle == 360)
        angle = 0;

    Macierz3x3 nowa,nowa2;
   
    for (int i = 0; i < 4; i++)
    {
        if((i+1)%2==0)
        {
             nowa = nowa * mac_obr_z(angle);
        kopia_wir[i].translacja(nowa);
        }
        else
        {
             nowa2 = nowa2 * mac_obr_z(-angle);
           kopia_wir[i].translacja(nowa2);
        }
    }

    for (int i = 0; i < 4; i++)
    {
        kopia_wir[i].move(kopia[i * 2]);
    }
}

void DRONE::zapisz()
{
    kopia.zapisz();
    for (int i = 0; i < 4; i++)
        kopia_wir[i].zapisz();
}

void DRONE::circle(double r)
{
   double  a=(r*2)/sqrt(4+2*sqrt(2));
         set_path(r,0);
        Lacze.DodajNazwePliku("../datasets/path.dat");
        for (int i = 0; i < 100; i++)
        {
            kopia = orginal;
            for (int j = 0; j < 4; j++)
                kopia_wir[j] = org_wir[j];
            up(1);
            rotater();
            zapisz();
            Lacze.Rysuj();
            usleep(TIME);
        }
                for (int i = 0; i < r; i++)
        {
            kopia = orginal;
            for (int j = 0; j < 4; j++)
                kopia_wir[j] = org_wir[j];
            move(1);
            rotater();
            zapisz();
            Lacze.Rysuj();
            usleep(TIME);
        }
  set_path(a,112);
        for (int i = 0; i < 112; i++)
            {
                kopia = orginal;
                for (int i = 0; i < 4; i++)
                    kopia_wir[i] = org_wir[i];
                rotate(1);
                rotater();
                zapisz();
                Lacze.Rysuj();
                usleep(TIME);
            }
                for (int i = 0; i < a; i++)
        {
            kopia = orginal;
            for (int j = 0; j < 4; j++)
                kopia_wir[j] = org_wir[j];
            move(1);
            rotater();
            zapisz();
            Lacze.Rysuj();
            usleep(TIME);
        }

    for(int i=0; i<7; i++)
    {
        set_path(a,45);
        for (int i = 0; i < 45; i++)
            {
                kopia = orginal;
                for (int i = 0; i < 4; i++)
                    kopia_wir[i] = org_wir[i];
                rotate(1);
                rotater();
                zapisz();
                Lacze.Rysuj();
                usleep(TIME);
            }
                for (int i = 0; i < a; i++)
        {
            kopia = orginal;
            for (int j = 0; j < 4; j++)
                kopia_wir[j] = org_wir[j];
            move(1);
            rotater();
            zapisz();
            Lacze.Rysuj();
            usleep(TIME);
        }
  
    }

        for (int i = 0; i < 113; i++)
            {
                kopia = orginal;
                for (int i = 0; i < 4; i++)
                    kopia_wir[i] = org_wir[i];
                rotate(1);
                rotater();
                zapisz();
                Lacze.Rysuj();
                usleep(TIME);
            }
                for (int i = 0; i < r; i++)
        {
            kopia = orginal;
            for (int j = 0; j < 4; j++)
                kopia_wir[j] = org_wir[j];
            move(1);
            rotater();
            zapisz();
            Lacze.Rysuj();
            usleep(TIME);
        }
            for (int i = 0; i < 100; i++)
        {
            kopia = orginal;
            for (int j = 0; j < 4; j++)
                kopia_wir[j] = org_wir[j];
            up(-1);
            rotater();
            zapisz();
            Lacze.Rysuj();
            usleep(TIME);
        }
    Lacze.UsunNazwePliku("../datasets/path.dat");

}
void DRONE::control()
{
    double path;
    double angle;
    char opcja;

    zapisz();
    cout << "Options p - path length o - rotation with a certain angle k - circle with a certain range :";
    cin >> opcja;
    switch (opcja)
    {
    case 'p':

    
        angle = 0;
        cout << "Input the lenght of the path:";
        cin >> path;
           set_path(path,angle);
        Lacze.DodajNazwePliku("../datasets/path.dat");
        for (int i = 0; i < 100; i++)
        {
            kopia = orginal;
            for (int j = 0; j < 4; j++)
                kopia_wir[j] = org_wir[j];
            up(1);
            rotater();
            zapisz();
            Lacze.Rysuj();
            usleep(TIME);
        }
     
    if (angle > 0)
        {
            for (int i = 0; i < angle; i++)
            {
                kopia = orginal;
                for (int i = 0; i < 4; i++)
                    kopia_wir[i] = org_wir[i];
                rotate(1);
                rotater();
                zapisz();
                Lacze.Rysuj();
                usleep(TIME);
            }
        }
        else
        {
            for (int i = 0; i > angle; i--)
            {
                kopia = orginal;
                rotate(-1);
                rotater();
                zapisz();
                Lacze.Rysuj();
                usleep(TIME);
            }
        }
        for (int i = 0; i < path; i++)
        {
            kopia = orginal;
            for (int j = 0; j < 4; j++)
                kopia_wir[j] = org_wir[j];
            move(1);
            rotater();
            zapisz();
            Lacze.Rysuj();
            usleep(TIME);
        }

        for (int i = 0; i < 100; i++)
        {
            kopia = orginal;
            for (int j = 0; j < 4; j++)
                kopia_wir[j] = org_wir[j];
            up(-1);
            rotater();
            zapisz();
            Lacze.Rysuj();
            usleep(TIME);
        }
        Lacze.UsunNazwePliku("../datasets/path.dat");
    
        break;
    case 'o':
        cout << "Input the angle :";
        cin >> angle;
        path = 0;
           set_path(path,angle);
        Lacze.DodajNazwePliku("../datasets/path.dat");
        for (int i = 0; i < 100; i++)
        {
            kopia = orginal;
            for (int j = 0; j < 4; j++)
                kopia_wir[j] = org_wir[j];
            up(1);
            rotater();
            zapisz();
            Lacze.Rysuj();
            usleep(TIME);
        }
     
    if (angle > 0)
        {
            for (int i = 0; i < angle; i++)
            {
                kopia = orginal;
                for (int i = 0; i < 4; i++)
                    kopia_wir[i] = org_wir[i];
                rotate(1);
                rotater();
                zapisz();
                Lacze.Rysuj();
                usleep(TIME);
            }
        }
        else
        {
            for (int i = 0; i > angle; i--)
            {
                kopia = orginal;
                rotate(-1);
                rotater();
                zapisz();
                Lacze.Rysuj();
                usleep(TIME);
            }
        }
        for (int i = 0; i < path; i++)
        {
            kopia = orginal;
            for (int j = 0; j < 4; j++)
                kopia_wir[j] = org_wir[j];
            move(1);
            rotater();
            zapisz();
            Lacze.Rysuj();
            usleep(TIME);
        }

        for (int i = 0; i < 100; i++)
        {
            kopia = orginal;
            for (int j = 0; j < 4; j++)
                kopia_wir[j] = org_wir[j];
            up(-1);
            rotater();
            zapisz();
            Lacze.Rysuj();
            usleep(TIME);
        }
        Lacze.UsunNazwePliku("../datasets/path.dat");
    

        break;
    case 'k':
        int i;
        cout<<"Input the desired range of a circle:";
        cin >> i;
        Lacze.DodajNazwePliku("../datasets/path.dat");
        circle(i);
        Lacze.UsunNazwePliku("../datasets/path.dat");
        break;
    default:
        break;
    }
}

void DRONE::set_path(double path,double angle)
{
    Wektor3D nastepny = kopia.get_center();
    nastepny[2] = 0;
    pathing.push_back(nastepny);
    nastepny[2] = 100;
    pathing.push_back(nastepny);
    nastepny[0] += path * cos((this->angle+angle) * M_PI / 180);
    nastepny[1] += path * sin((this->angle+angle) * M_PI / 180);
    pathing.push_back(nastepny);
    nastepny[2] = 0;
    pathing.push_back(nastepny);

    std::fstream plik;

    plik.open("../datasets/path.dat", std::ios::out);
    for (int i = 0; i < (int)pathing.size(); i++)
    {

        plik << pathing[i] << std::endl;
    }
    plik.close();
}


  void DRONE::usun()
  {
    Lacze.UsunNazwePliku(orginal.get_name().c_str());
    for (int i = 0; i < 4; i++)
        Lacze.UsunNazwePliku(org_wir[i].get_name().c_str());
  }