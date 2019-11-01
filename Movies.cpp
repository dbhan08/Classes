#include <iostream>
#include <cstring>
#include "Movies.h"

using namespace std;

Movie:: Movie(char* newTitle, char* newDirector, int newYear, float newRating,
 char* newDuration) {

title = newTitle;
director = newDirector;
year = newYear;
rating = newRating;
duration = newDuration;


}

int getType() {
	return 2;

}


char* Movie::getTitle() {
	return title;

}


char* Movie::getDirector() {
	return director;


}

int Movie::getYear() {
return year;

}


float Movie::getRating() {
return rating;

}


char* Movie::getDuration() {
return duration;

}
