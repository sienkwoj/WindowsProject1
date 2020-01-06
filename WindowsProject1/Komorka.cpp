#include "Komorka.h"
// Test gita


Komorka::Komorka()
{
	StanPoprzedni = false;
	StanBiezacy = false;
	StanNastepny = false;
	ZywiSasiedzi = 0;
}

Komorka::Komorka(bool StanNarodzin)
{
	StanPoprzedni = false;
	StanBiezacy = StanNarodzin;
	StanNastepny = false;
	ZywiSasiedzi = 0;
}


Komorka::~Komorka()
{
}

void Komorka::zmienStan(void)
{
	StanPoprzedni = StanBiezacy;
	StanBiezacy = not StanBiezacy;
}
