#include <iostream>
// media.h

#ifndef MEDIA_H
#define MEDIA_H
using namespace std;

class Media {


public:
Media();

char* getTitle();
virtual int getType();
int getYear();

private:

	int year;
	char* title;



};

#endif
