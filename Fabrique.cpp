//Fabrique.cpp
//auteurs : Alicia Boucard, Guillaume Legru
//Implementation de la classe Fabrique

#include <iostream>
#include <string>
#include "Fabrique.hpp"

/////////////////////////////////////////////////////////
 //Construteur
Fabrique::Fabrique(){}

/////////////////////////////////////////////////////////
//Destructeur
Fabrique::~Fabrique(){}

/////////////////////////////////////////////////////////
 std::shared_ptr<Aventure> Fabrique::getAventure()
 {
    return av_;
 }

/////////////////////////////////////////////////////////
