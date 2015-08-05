/*
 * CreateSet.cpp
 *
 *  Created on: Aug 5, 2015
 *      Author: Andreas
 */

#include "CreateSet.h"
#include <stdlib.h>

namespace andreasvh {

	vector<std::string> CreateSet::create(int amount){
		using namespace std;
		vector<string> set;


		//sky
		int skyVal = getRandom(2);
		if (skyVal == 0){
			set[0] = "Sunny";
		}
		else {
			set[0] = "Rainy";
		}

		//air temp
		int airTempVal = getRandom(2);
		if (airTempVal == 0){
			set[1] = "Warm";
		}
		else {
			set[1] = "Cold";
		}

		//humidity
		int humVal = getRandom(2);
		if (humVal == 0){
			set[2] = "Normal";
		}
		else {
			set[2] = "High";
		}

		//wind
		int humVal = getRandom(2);
		if (humVal == 0){
			set[3] = "Strong";
		}
		else {
			set[3] = "Mild";
		}

		//water
		int humVal = getRandom(2);
		if (humVal == 0){
			set[4] = "Warm";
		}
		else {
			set[4] = "Cool";
		}

		//forecast
		int humVal = getRandom(2);
		if (humVal == 0){
			set[5] = "Same";
		}
		else {
			set[5] = "Change";
		}

		//enjoysport
		int humVal = getRandom(2);
		if (humVal == 0){
			set[6] = "Yes";
		}
		else {
			set[6] = "No";
		}





	}

	int CreateSet::getRandom(int max){
		return rand() % max;
	}

} /* namespace andreasvh */
