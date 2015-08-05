#include <iostream>
#include "finds.h"
#include "trainingset.h"
#include <vector>
#include <string>
using namespace std;

int main()
{
	using namespace vhland002;
	using namespace std;
	TrainingSet vars();


//	TrainingSet h(TrainingSet::Sky::Sunny, TrainingSet::AirTemp::Warm,
//			TrainingSet::Humidity::Normal, TrainingSet::Wind::Strong,
//			TrainingSet::Water::W, TrainingSet::Forecast::Same, TrainingSet::EnjoySport::Yes);

	string sets[4][7] = {
			{"Sunny", "Warm", "Normal", "Strong", "Warm", "Same", "Yes"},
			{"Sunny", "Warm", "High", "Strong", "Warm", "Same", "Yes"},
			{"Rainy", "Cold", "High", "Strong", "Warm", "Change", "No"},
			{"Sunny", "Warm", "High", "Strong", "Cool", "Change", "Yes"}
	};
	string h[6] = {"","","","","",""};


	int setAmount = 4;
	int setSize = 6;
	for (int i = 0; i < setAmount; i++){
		if (sets[i][6] == "Yes"){
			//cout << "set is positive" << endl;
			for (int j = 0; j < setSize; j++){


				if(h[j] != sets[i][j]){
					if (h[j] == ""){
						h[j] = sets[i][j];
					}
					else if (h[j] != "?"){
						h[j] = "?";
					}
				}
			}
		}
		else{
			//cout << "set is negative" << endl;
		}
		for (int i = 0; i < setSize; i++){
			cout << h[i] << ",";
		}
		cout << endl;
	}
	cout << "End Result: (";
	for (int i = 0; i < setSize; i++){
		cout << h[i] << ",";
	}
	cout << ")";
    return 0;
}

