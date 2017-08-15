//============================================================================
// Name        : SalesSurvey.cpp
// Author      : Rishabh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "../include/SalesInfo.h"
using namespace std;

int main() {
	cout << "Welcome to the sales data" <<endl;
	cout << "The list of all the sold items is as follow: " << endl;
	SalesInfo sales;
	sales.displayData();
	return 0;
}
