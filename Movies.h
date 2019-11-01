#include <iostream>
#include <cstring>
#include "Media.h"


class Movie : public Media {

public:
Movie(char* title, char* director, int year, float rating, char* duration);
char* getTitle();
char* getDirector();
int getYear();
float getRating();
char* getDuration();



private:
char* title;
char* director;
int year;
float rating;
char* duration;




}; 
