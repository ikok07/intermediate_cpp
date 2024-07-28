//
// Created by Kaloyan Petkov on 28.07.24.
//

#include <iostream>

using namespace std;

struct ReleaseDate {
    int year = 1900;
    int month = 1;
    int day = 1;
};

struct Movie {
    string title;
    ReleaseDate release_date;
};

bool operator == (const Movie& src_movie, const Movie& tgt_movie) {
    return (src_movie.title == tgt_movie.title &&
            src_movie.release_date.year == tgt_movie.release_date.year &&
            src_movie.release_date.month == tgt_movie.release_date.month &&
            src_movie.release_date.day == tgt_movie.release_date.day
    );
}
ostream& operator << (ostream& stream, const Movie& movie) {
    stream << movie.title << endl;
    return stream;
}

Movie get_movie(const string& title, const ReleaseDate& release_date) {
    return {title, release_date};
}

void print_movie(const Movie *movie) {
    cout << movie->title << endl;
    cout << movie->release_date.day << endl;
}