/*
* This file is part of QBriscola
* Copyright (C) 2008  Betti Sorbelli Francesco - Ciotti Roberto
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*
* Contact e-mail: Betti Sorbelli Francesco <montoya83@gmail.com>
*                 Ciotti Roberto <ciotti.roberto@gmail.com>
*
*/

#ifndef GIOCATORE_H_
#define GIOCATORE_H_

#include "carta.h"

class Giocatore
{
private:
	Carta** carte;
	Carta *giocata;
	int punti;

public:
	Giocatore(Carta*, Carta*, Carta*);
	~Giocatore();

	Carta* getCarta(int);
	void giocaCarta(int);
	void settaCartaNull(int);
	void aggiungiCarta(int, Carta*);
	Carta* getGiocata();
	void settaNullGiocata();
	int getPunti();
	void aumentaPunti(int);
};

#endif
