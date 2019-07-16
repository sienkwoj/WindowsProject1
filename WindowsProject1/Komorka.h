#pragma once

// Regu�y gry wed�ug Conwaya
//   Martwa kom�rka, kt�ra ma dok�adnie 3 �ywych s�siad�w, staje si� �ywa w nast�pnej jednostce czasu(rodzi si�)
//   �ywa kom�rka z 2 albo 3 �ywymi s�siadami pozostaje nadal �ywa; przy innej liczbie s�siad�w umiera(z �samotno�ci� albo �zat�oczenia�)
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

