/* 
 * File:   utility.h
 * Author: wingning
 *
 * to be included in MusicLibrary.h or whatever file that uses the overloaded << for Song Class
 */

#ifndef UTILITY_H
#define	UTILITY_H

#include <iostream>
#include "Song.h"
using namespace std;

ostream & operator <<(ostream& out, const Song& s);

#endif	/* UTILITY_H */