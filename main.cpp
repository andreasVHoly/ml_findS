#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>


int main(/*int argc, char argv[]*/)
{
    using namespace std;

    //string fileName = argv[1];
    vector<string[7]> sets;
//    string sets[4][7] = {
//            {"Sunny", "Warm", "Normal", "Strong", "Warm", "Same", "Yes"},
//            {"Sunny", "Warm", "High", "Strong", "Warm", "Same", "Yes"},
//            {"Rainy", "Cold", "High", "Strong", "Warm", "Change", "No"},
//            {"Sunny", "Warm", "High", "Strong", "Cool", "Change", "Yes"}
//    };


    //we set the amount of training examples
    int setAmount = 0;
    //we set the size of each training example
    int setSize = 0;

    string line;
    //ifstream file(fileName.c_str());
    ifstream file("TestSet.txt");

    //we check to see if the file is open
    if(file.is_open()){
        //we read data while we have data
        while(getline(file,line)){
            istringstream ss(line);
            if (line[0] == '#'){
                //comment line
                continue;
            }
            else if(line[0] == '!'){
                string out;
                getline(ss,out, ' ');
                getline(ss,out, ' ');
                setAmount = atoi(out.c_str());
                getline(ss,out, ' ');
                setSize = atoi(out.c_str());
                cout << "set amount " << setAmount << endl;
                cout <<  "set size " << setSize << endl;

            }
            else{
                string value;
                string set[7];
                int i = 0;
                while (getline(ss,value,',')){
                    set[i] = value;
                    i++;
                }
                sets.push_back(set);
            }


        }
    }
    //we encountered an erro
    else{
        cout << "Error reading file" << endl;
        return 1;
    }

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 7; j++){
            cout << sets[i][j] << endl;
        }
    }


    return 0;
    //we set up a default hypothesis
    string h[6] = {"","","","","",""};




    //we loop through each of the training examples
    for (int i = 0; i < setAmount; i++){
        //we check if it is a positive example
        if (sets[i][6] == "Yes"){
            //we loop through each training set
            for (int j = 0; j < setSize; j++){
                //if the value in the training set and the hypothesis differ
                if(h[j] != sets[i][j]){
                    //if the hypothesis has no value yet, we add this new value
                    if (h[j] == ""){
                        h[j] = sets[i][j];
                    }
                    //if the hypothesis does have a value we assign a multi value sign (?)
                    else if (h[j] != "?"){
                        h[j] = "?";
                    }
                }
            }
        }
        cout << "Iteration " << i << ": (";
        for (int i = 0; i < setSize; i++){
            cout << h[i] << ",";
        }
        cout << ")" << endl;
    }

    //we display the end result
    cout << "End Result: (";
    for (int i = 0; i < setSize; i++){
        cout << h[i] << ",";
    }
    cout << ")";
    return 0;
}

