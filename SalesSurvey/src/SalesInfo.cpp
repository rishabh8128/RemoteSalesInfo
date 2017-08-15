/*
 * SalesInfo.cpp
 *
 *  Created on: Aug 15, 2017
 *      Author: rishabh
 */

#include "../include/SalesInfo.h"

SalesInfo::SalesInfo() {
	// TODO Auto-generated constructor stub

}

SalesInfo::~SalesInfo() {
	// TODO Auto-generated destructor stub
}
int datavalue[] = {1 , 30 , 48, 50, 60};
void SalesInfo::displayData(){
	cout << "--------------------------------------------" <<endl;
	for(int i : datavalue){
		cout<< "Value: " << i <<endl;
	}

}
