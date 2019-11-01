
// Games.h

#ifndef Games_H
#define Games_H


#include <iostream>
#include <cstring>
#include "Media.h"

class Games : public Media {

	public:
	Games(char* title, int year, float rating, char* publisher);
	
	virtual int  getType();
	char* getTitle();
	int getYear();
	float getRating();
	char* getPublisher();
	

	private:
	char* title;
	int year;
	float rating;
	char* publisher;


};

#endif
