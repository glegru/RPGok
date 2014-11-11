//Arme.cpp
//auteurs : Alicia Boucard, Guillaume Legru
//Implementation de la classe Arme

#include <iostream>
#include <string>
#include "Arme.hpp"

/////////////////////////////////////////////////////////
Arme::Arme() : nom_("baton de bois"), degat_(10){}

/////////////////////////////////////////////////////////
Arme::Arme(std::string nom, int dgt) : nom_(nom), degat_(dgt){}

/////////////////////////////////////////////////////////
//getters
std::string Arme::getNom()
{
	return nom_;
}

/////////////////////////////////////////////////////////
int Arme::getDegat()
{
	return degat_;
}

/////////////////////////////////////////////////////////
//setter
void Arme::setNom(std::string nom)
{
	nom_ = nom;
}

/////////////////////////////////////////////////////////
void Arme::setDegat(int dgt)
{
	degat_ = dgt;
}
/////////////////////////////////////////////////////////
//methodes
void Arme::afficherArme()
{
	std::cout << "Arme : " << nom_ << " (degat : " << degat_ << ")" << std::endl;
}

/////////////////////////////////////////////////////////