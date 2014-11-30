//Armure.cpp
//auteurs : Alicia Boucard, Guillaume Legru
//Implementation de la classe Armure

#include <iostream>
#include <string>
#include "Armure.hpp"

/////////////////////////////////////////////////////////
Armure::Armure() : nom_("armure en tissu"), reducDegat_(5){}

/////////////////////////////////////////////////////////
Armure::Armure(std::string nom, int reduc) : nom_(nom), reducDegat_(reduc){}

/////////////////////////////////////////////////////////
//getters
std::string Armure::getNom()
{
	return nom_;
}

/////////////////////////////////////////////////////////
int Armure::getReducDegat()
{
	return reducDegat_;
}

/////////////////////////////////////////////////////////
//setter
void Armure::setNom(std::string nom)
{
	nom_ = nom;
}

/////////////////////////////////////////////////////////
void Armure::setReducDegat(int reduc)
{
	reducDegat_ = reduc;
}
/////////////////////////////////////////////////////////
//methodes
std::string Armure::afficherArmure()
{
    std::string s("Armure " + nom_ + " (defense : " + std::to_string(reducDegat_) +")");
	return s;
}
/////////////////////////////////////////////////////////
