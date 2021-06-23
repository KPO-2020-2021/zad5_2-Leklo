#include "STAGE.hh"
STAGE::STAGE()
{

  Lacze.ZmienTrybRys(PzG::TR_3D);
  nr_elem = 0;
  nr_drona=0;
  Lacze.UstawZakresY(-300, 300);
  Lacze.UstawZakresX(-300, 300);
  Lacze.UstawZakresZ(-300, 300);

  double tab_wym[3] = {600, 600, 0};
  Wektor3D wym_dna(tab_wym);
  dno = new PLANE(wym_dna, 20);
  Wektor3D srod;
  for(int i=0; i<4; i++)
  {
  srod[0] = rand() % 400 - 200;
  srod[1] = rand() % 400 - 200;
  srod[2] = 50;
  int nr_p=rand()%3;
  if(nr_p==0)
  Lista_elementow.push_front(std::make_shared<HILL>(srod, 100, 50, 100, "../datasets/Element" + std::to_string(nr_elem) + ".dat"));
  else if(nr_p==1)
  Lista_elementow.push_front(std::make_shared<PLATEAU>(srod, 100, 50, 100, "../datasets/Element" + std::to_string(nr_elem) + ".dat"));
  else if(nr_p==2)
  Lista_elementow.push_front(std::make_shared<RIDGE>(srod, 100, 50, 100, "../datasets/Element" + std::to_string(nr_elem) + ".dat"));
  nr_elem++;
  }
  for (std::list<std::shared_ptr<BLOCK>>::const_iterator a = Lista_elementow.begin(); a != Lista_elementow.end(); a++)
  {
    Lacze.DodajNazwePliku((*a)->get_name().c_str());
    (*a)->zapisz();
  }

  Lacze.DodajNazwePliku(dno->get_name().c_str());
  dno->zapisz();
  for (int i = 0; i < N; i++)
  {
    double cord[3] = {(double)(rand() % 440 - 220), (double)(rand() % 440 - 220), 25};
    Lista_Dronow.push_front(std::make_shared<DRONE>(i, Lacze, Wektor3D(cord))) ;
    (*Lista_Dronow.begin())->zapisz();
    nr_drona++;
  }

  Lacze.Rysuj();
}
void STAGE::rysuj()
{

  Lacze.Rysuj();
}
bool STAGE::interfejs()
{
  cout << "INPUT 1 FOR THE LIST OF DRONES 2 TO CREATE A NEW OBJECT 3 TO REMOVE AN OBJECT 4 TO REMOVE A DRONE" << endl;
  int opcja;
  cin >> opcja;
  switch (opcja)
  {
  case 1:
  {
    cout << "podaj nr " << endl;
    for(int i=0; i<(int)Lista_Dronow.size(); i++)
    {
      cout<<i <<" ";
    }
    cout<<":"<<endl;
    int nr;
    cin >> nr;
    std::list<std::shared_ptr<DRONE>>::const_iterator a;
    a=Lista_Dronow.begin();
    for(int i=0; i<nr; i++)
    {
      a++;
    }
    
    (*a)->control();
  }
  break;
  case 2:
  {
    cout << "Choose between 1. HILL 2. PLATEAU 3. RIDGE 4.DRONE" << endl;

    int nr;
    cin >> nr;
    Wektor3D srod;

    srod[0] = rand() % 400 - 200;
    srod[1] = rand() % 400 - 200;
    srod[2] = 50;

if( nr!=4)
{
    if (nr == 1)
    {

      Lista_elementow.push_front(std::make_shared<HILL>(srod, 100, 50, 100, "../datasets/Element" + std::to_string(nr_elem) + ".dat"));
    }
    if (nr == 2)
    {

      Lista_elementow.push_front(std::make_shared<PLATEAU>(srod, 100, 50, 100, "../datasets/Element" + std::to_string(nr_elem) + ".dat"));
    }
    if (nr == 3)
    {

      Lista_elementow.push_front(std::make_shared<RIDGE>(srod, 100, 50, 100, "../datasets/Element" + std::to_string(nr_elem) + ".dat"));
    }
    nr_elem++;
    (*Lista_elementow.begin())->zapisz();
    Lacze.DodajNazwePliku((*Lista_elementow.begin())->get_name().c_str());
}
else
{
  double cord[3] = {(double)(rand() % 440 - 220), (double)(rand() % 440 - 220), 25};
  Lista_Dronow.push_front(std::make_shared<DRONE>(nr_drona, Lacze, Wektor3D(cord)));
  (*Lista_Dronow.begin())->zapisz();
}
  }
  break;
  case 3:
  {
    int i = 0;
    for (std::list<std::shared_ptr<BLOCK>>::const_iterator a = Lista_elementow.begin(); a != Lista_elementow.end(); a++)
    {
      cout << i << ": " << (*a)->get_name() << endl;
      i++;
    }
    cout << "Input the obcjets Number" << endl;

    int nr;
    cin >> nr;
    std::list<std::shared_ptr<BLOCK>>::const_iterator a = Lista_elementow.begin();

    for (int j = 0; j < nr; j++)
    {

      a++;
    }
    
    Lacze.UsunNazwePliku((*a)->get_name());
    Lista_elementow.erase(a);
  }
  break;

    case 4:
  {
    int i = 0;
    for (std::list<std::shared_ptr<DRONE>>::const_iterator a = Lista_Dronow.begin(); a != Lista_Dronow.end(); a++)
    {
      cout << i << ": " << (*a)->get_id() << endl;
      i++;
    }
    cout << "Input the Objects Number" << endl;

    int nr;
    cin >> nr;
    std::list<std::shared_ptr<DRONE>>::const_iterator a = Lista_Dronow.begin();

    for (int j = 0; j < nr; j++)
    {

      a++;
    }
    
   (*a)->usun();
    Lista_Dronow.erase(a);
  }
  break;

  default:
    break;
  }

  return true;
}

STAGE::~STAGE()
{
  free(dno);

}