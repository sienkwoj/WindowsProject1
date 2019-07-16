#pragma once

// Regu³y gry wed³ug Conwaya
//   Martwa komórka, która ma dok³adnie 3 ¿ywych s¹siadów, staje siê ¿ywa w nastêpnej jednostce czasu(rodzi siê)
//   ¯ywa komórka z 2 albo 3 ¿ywymi s¹siadami pozostaje nadal ¿ywa; przy innej liczbie s¹siadów umiera(z „samotnoœci” albo „zat³oczenia”)
class Komorka
{
public: bool	StanPoprzedni = false;
public: bool	StanBiezacy = false;
public: bool	StanNastepny = false;
public: int		ZywiSasiedzi = 0;

public: void	zmienStan(void);

public:
	Komorka();
	Komorka(bool);
	virtual ~Komorka();
};

