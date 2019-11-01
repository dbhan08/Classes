


#include <iostream>
#include <cstring>
#include "Media.h"
class music : public Media {

	public:
music(char* title, char* artist, int year, char* duration, char* publisher);

virtual int getType();
char* getTitle();
char* getArtist();
int getYear();
char* getDuration();
char* getPublisher();


private:

char* title;
char* artist;
int year;
char* duration;
char* publisher;


};
