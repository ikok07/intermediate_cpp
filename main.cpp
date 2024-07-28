#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

string to_fixed_string(double val, int precision) {
    stringstream stream;
    stream << fixed << setprecision(precision) << val;
    return stream.str();
}

struct Mov {
    string title;
    int year;
};

Mov parse_movie_str(const string& movie_str) {
    stringstream stream;
    stream.str(movie_str);
    string title;
    string year_str;
    getline(stream, title, ',');
    getline(stream, year_str);
    return {title, stoi(year_str)};
}

int main() {
    Mov movie = parse_movie_str("Terminator 1,1984");
    cout << movie.title << endl;
    cout << movie.year << endl;
    return 0;
}

