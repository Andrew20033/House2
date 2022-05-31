#include "House.h"

House::House()
{
	adres = "";
}

House::House(string adres)
{
	SetAdres(adres);
}


string House::GetAdres(string adres)
{
	return this->adres;
}

void House::SetAdres(string adres)
{
	this->adres = adres;
}