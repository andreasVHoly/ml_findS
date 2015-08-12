#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>


int main(int argc, char * argv[])
{
    using namespace std;


    //we set the amount of training examples
    int setAmount = atoi(argv[2]);
    //we set the size of each training example
    int setSize = atoi(argv[3]);
    string fileName = argv[1];
    string sets[setAmount][setSize];

    string line;
    ifstream file(fileName.c_str());

    //we check to see if the file is open
    if(file.is_open()){
        //we read data while we have data
        int j = 0;
        while(getline(file,line)){

            if (line[0] == '#'){
                //comment line
                continue;
            }
            else{
                istringstream ss1(line);
                string value;
                int i = 0;
                while (getline(ss1,value,',')){
                    sets[j][i] = value;
                    i++;
                }
                j++;
            }



        }
    }
    //we encountered an erro
    else{
        cout << "Error reading file" << endl;
        return 1;
    }




    //we set up a default hypothesis
    string h[6] = {"","","","","",""};



    //we loop through each of the training examples
    for (int i = 0; i < setAmount; i++){
        //we check if it is a positive example
        if (sets[i][setSize-1] == "Yes"){
            //we loop through each training set
            for (int j = 0; j < setSize-1; j++){
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
        for (int i = 0; i < setSize-1; i++){
            cout << h[i] << ",";
        }
        cout << ")" << endl;
    }

    //we display the end result
    cout << "End Result: (";
    for (int i = 0; i < setSize-1; i++){
        cout << h[i] << ",";
    }
    cout << ")" << endl;
    return 0;
}

