README for the first machine learning practical
Implemented the Find-S algorithm
VHLAND002 - Andreas von Holy

Answer to Q1:

This depends on the training example. In theory the minimum number of sets is 2, which is shown by the Example2.txt set, but can also be a infinite number of cases. It purely depends on the variety in those specific fields.


Files Submitted:

main.cpp - the program that handles file input and runs the test data through the algorithm and outputs a hypothesis
TestSet.txt - the example used in the book in order to train the algorithm and test it
Example1.txt - a test set that reaches the desired output of Q1 in one additional step to the original test set
Example2.txt - a test set that reaches the desired output in minimal iterations (2)
makefile - makefile used to compile the program


Instructions:

1. Navigate to the directory where the files are stored.
2. Place your text file with test data in the same directory.
3. Ensure that this file has the same format as the Example text files attached
4. Type "make" to build the project.
5. Type "./program <fileName> <noOfSets> <noOfParts>" where fileName is the name of the text file containing your test data (e.g. TestSet.txt), <noOfSets> is the amount of test sets in the file and <noOfParts> is the number of data fields per set.
6. The program should run and output each iteration of the algorithm and the final hypothesis.
7. Type "make clean" to clean any build files created.
