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
#include <mutex>


class Papst
{

private:
	Papst(std::string wunschname); // privater Konstruktor
	~Papst(); // privater Destruktor

	// statischer Pointer auf das einzige Objekt
	static Papst* papst_;

	// Attribut, um Instanzen zu unterscheiden
	std::string name;

	// Mutex für threadsicheren Zugriff
	static std::mutex mutex;

public:
	// Kopier-Operator muss gelöscht werden
	Papst(Papst const&) = delete;

	// Zuweisung-Operator muss gelöscht werden
	void operator=(Papst const&) = delete;

	// Methode, um Pointer auf das einzige Objekt zu bekommen
	static Papst* getPapst(std::string wunschname);

	// Methode, um potentiell unterschiedliche Instanzen
	//  unterscheiden zu können
	std::string getName();

};

#endif /* PAPST_H_ */
