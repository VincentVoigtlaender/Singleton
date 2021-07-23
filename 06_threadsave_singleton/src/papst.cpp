/*
 * papst.cpp
 *
 *  Created on: 23.07.2021
 *      Author: mrt
 */

#include "papst.h"

// Loesung 1: eager loading
//Papst* Papst::papst_ = new Papst("Standardpapst");

// Loesung 2: lazy loading mit mutual exclusion
Papst* Papst::papst_ = nullptr;
std::mutex Papst::mutex;


// privater Konstruktor
Papst::Papst(std::string wunschname) {
	name = wunschname;
}

// Kontrolliert Erstellung und Zugriff auf einzige Instanz
Papst* Papst::getPapst(std::string wunschname){

	mutex.lock();

	// falls noch kein Papst existiert, wird er erzeugt
	if(!papst_) {
		std::cout << "Ein neuer Papst wurde gewählt!: ";
		papst_ = new Papst(wunschname);
	} else {
		std::cout << "Es ist bereits ein Papst im Amt: ";
	}

	mutex.unlock();
	return papst_;

}

std::string Papst::getName() {
	return name;
}
