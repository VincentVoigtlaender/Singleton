/*
 * main.cpp
 *
 *  Created on: 23.07.2021
 *      Author: mrt
 */

#include <thread>

#include "kardinal.h"


void thread1() {
	 std::this_thread::sleep_for(std::chrono::milliseconds(100));
	 Papst* papst1_ = Papst::getPapst("Benedikt der XVI.");
	 std::cout << "Papst aus Thread1: " << papst1_->getName() << std::endl;
}

void thread2() {
	std::this_thread::sleep_for(std::chrono::milliseconds(100));
	Papst* papst2_ = Papst::getPapst("Franziskus       ");
	std::cout << "Papst aus Thread2: " << papst2_->getName() << std::endl;
}

int main() {

	std::thread t1(thread1);
	std::thread t2(thread2);
	t1.join();
	t2.join();

	return 0;

}
