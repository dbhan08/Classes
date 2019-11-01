#include <iostream>
#include <cstring>
#include "music.h"

using namespace std;


music:: music(char* newTitle, char* newArtist, int newYear, char* newDuration, char* newPublisher) {

	title = newTitle;
	artist = newArtist;
	year = newYear;
	newDuration = duration;
	newPublisher = publisher;

}

int music:: getType() {

	return 2;
}


char* music::getTitle() {

	return title;
}


char* music::getArtist() {

return artist;
}



int music::getYear() { 

return year;

}



char* music::getDuration() {

	return duration;
}




char* music:: getPublisher() {

return publisher;

}




