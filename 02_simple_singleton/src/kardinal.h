/*
 * kardinal.h
 *
 *  Created on: 23.07.2021
 *      Author: mrt
 */

#ifndef KARDINAL_H_
#define KARDINAL_H_

#include "papst.h"


class Kardinal
{
private:
	Papst* meinPapst_;

public:
	Kardinal(); // Konstruktor
	~Kardinal(); // Destruktor

	void papst_waehlen(std::string wunschname);
	Papst* getPapst_();

};

#endif /* KARDINAL_H_ */
