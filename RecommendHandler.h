//
// Created by Michael Mendez on 1/29/22.
//

#ifndef SWAMPHACKS2022_RECOMMENDHANDLER_H
#define SWAMPHACKS2022_RECOMMENDHANDLER_H

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class Movie {
    string posterLink, title, certificate, overview, director, star1, star2, star3, star4, gross;
    int releaseYear, runtime, metascore, votes;
    float rating;
    vector<string> genres;
};

class RecommendHandler {
    vector<Movie*> movies;
};


#endif //SWAMPHACKS2022_RECOMMENDHANDLER_H
