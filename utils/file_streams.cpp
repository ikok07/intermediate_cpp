//
// Created by Kaloyan Petkov on 28.07.24.
//

#include <iostream>
#include <fstream>

using namespace std;

//struct Movie {
//    int id;
//    string title;
//    int year;
//};

//    fstream file("file.txt", ios::in | ios::out | ios::app | ios::binary);

int input_to_text_file() {
    ofstream file;
    file.open("data.csv");
    if (!file.is_open()) return 1;

    file << "id,title,year\n";
    file << "1,Movie 1,1984\n";
    file << "2,Movie 2,1985\n";

    file.close();
    return 0;
}

int output_from_text_file() {
    ifstream file;
    file.open("data.csv");
    if (!file.is_open()) return 1;

    string str;
    getline(file, str);
    while (!file.eof()) {
        getline(file, str, ',');
        if (str == "") continue;
//        Movie movie;
//        movie.id = stoi(str);
//        getline(file, str, ',');
//        movie.title = str;
//        getline(file, str);
//        movie.year = stoi(str);
//
//        cout << movie.title << endl;
    }
    return 0;
}

int input_to_binary_file() {
    int numbers[] = {1'000'000, 2'000'000, 3'000'000};
    ofstream file("numbers.bin", ios::binary);
    if (!file.is_open()) return 1;

    file.write(reinterpret_cast<char*>(&numbers), sizeof(numbers));

    file.close();
    return 0;
}

int output_from_binary_file() {
    int numbers[3];
    ifstream file("numbers.bin", ios::binary);
    if (!file.is_open()) return 1;

    int number;
    while(file.read((char *)&number, sizeof(number))) {
        cout << number << endl;
    }
    file.close();
    return 0;
}