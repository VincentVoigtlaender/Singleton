/*
 * papst.h
 *
 *  Created on: 23.07.2021
 *      Author: mrt
 */

#ifndef PAPST_H_
#define PAPST_H_

#include <string>
#include <iostream>


class Papst
{

private:
	// Attribut, um Instanzen zu unterscheiden
	std::string name;


public:
	Papst(std::string wunschname); // Konstruktor
	~Papst() {
		std::cout << "Papst Dekonstruktor" << this << std::endl;
	}

	// Methode, um Instanzen zu unterscheiden
	std::string getName();

};

#endif /* PAPST_H_ */
