/*
 * CreateSet.h
 *
 *  Created on: Aug 5, 2015
 *      Author: Andreas
 */

#ifndef CREATESET_H_
#define CREATESET_H_
#include <string>
#include <vector>
namespace andreasvh {

class CreateSet {
public:
	CreateSet();
	~CreateSet();

	vector<std::string> create(int amount);

	int getRandom(int max);
};

} /* namespace andreasvh */

#endif /* CREATESET_H_ */
