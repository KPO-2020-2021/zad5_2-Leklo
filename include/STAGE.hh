#ifndef STAGE_HH
#define STAGE_HH
#include <iostream>
#include <iomanip>
#include <memory>
#include <fstream>
#include <list>
#include "PLATEAU.hh"
#include "HILL.hh"
#include "RIDGE.hh"
#include "PRISM.hh"
#include "lacze_do_gnuplota.hh"
#include "DRONE.hh"
#include "PLANE.hh"

#define N 2

class STAGE
{
    std::list<std::shared_ptr<BLOCK>> Lista_elementow;
    PzG::LaczeDoGNUPlota Lacze;
    std::list<std::shared_ptr<DRONE>> Lista_Dronow; /// element fazy3
    int nr_elem;
    int nr_drona;
    PLANE *dno;

public:
    STAGE();
    void rysuj();
    bool interfejs();
    ~STAGE();
};

#endif
