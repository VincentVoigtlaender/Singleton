/*
 * kardinal.h
 *
 *  Created on: 10.07.2021
 *      Author: mrt
 */

#ifndef KARDINAL_H_
#define KARDINAL_H_

#include "papst.h"

class Kardinal
{

public:
	Kardinal() {}; // Konstruktor
	~Kardinal() {}; // Destruktor

	void papst_waehlen(std::string wunschname);

};

#endif /* KARDINAL_H_ */
