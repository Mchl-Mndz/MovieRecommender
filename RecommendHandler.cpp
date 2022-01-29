//
// Created by Michael Mendez on 1/29/22.
//

#include "RecommendHandler.h"

using namespace std;

vector<string> LineReader(const string& line) {
    vector<string> tokens;
    bool inQuote = false;
    string token = "";

    for(int i = 0; i < line.size(); i++) {
        if(inToken && line[i] == '\"') {
            tokens.push_back(token)
            token = "";
            inQuote = false;
            continue;
        } else if(line[i] == '\"') {
            inQuote = true;
            continue;
        }

        if(!inQuote && line[i] == ',')
            tokens.push_back(token);

        token += line[i];
    }

    return tokens;
}

void ReadData(const string& fileName) {
    ifstream inputFile(fileName);
    string line;
    if(inputFile.is_open()){
        getline(inputFile, line);
        while(!inputFile.eof()){
            Movie tempMovie;
            string year;
            string run;
            string rating;
            string mscore;
            string voteNum;
            string genres;
            istringstream stream(line);
            vector<string> tokens = LineReader(line);




            /*getline(stream, tempMovie.posterLink, ',');
            getline(stream, tempMovie.title, ',');
            getline(stream, year, ',');
            tempMovie.releaseYear = stoi(year);
            getline(stream, tempMovie.certificate, ',');
            getline(stream, run, ',');
            tempMovie.runtime = stoi(run);

            getline(stream, rating, ',');
            tempMovie.rating = (float)rating;
            getline(stream, tempMovie.overview, ',');
            getline(stream, mscore, ',');
            tempMovie.metascore = stoi(mscore);
            getline(stream, tempMovie.director, ',');
            geline(stream, tempMovie.star1, ',');
            geline(stream, tempMovie.star2, ',');
            geline(stream, tempMovie.star3, ',');
            geline(stream, tempMovie.star4, ',');
            getline(stream, voteNum, ',');
            tempMovie.votes = stoi(voteNum);
            getline(stream, tempMovie.gross, ',');*/

        }
    }
    inputFile.close();
}