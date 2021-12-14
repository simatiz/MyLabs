#include <iostream>
#include <string>
#include <stdio.h>
#include <cstring>
using namespace std;

bool whether_is_contained(string, string*, int);
int define_index(string*, int, string);
string* array_of_words(string, int*, int&, char = ' ');
string create_string(string*, int);
void output_repetition(string*, int*, int);

int main() {
    int size, real_size;
    string character_str, new_character_str;
    real_size = 0;

    cout << "Enter a string: ";
    getline(cin, character_str);

    size = character_str.length() / 2 + 1;

    int* repetition_array = new int[size];
    string* words = array_of_words(character_str, repetition_array, real_size);
    int* repetitions = new int[real_size];

    for (int i = 0; i < real_size; ++i) {
        repetitions[i] = repetition_array[i];
    }

    output_repetition(words, repetitions, real_size);

    new_character_str = create_string(words, real_size);

    cout << "String without duplicates: " << new_character_str;

    delete[] repetition_array;
    delete[] words;
    delete[] repetitions;
    return 0;
}

bool whether_is_contained(string item, string* array, int size) {
    int i = 0;
    bool flag = false;
    while (i < size && !flag) {
        if (array[i] == item) {
            flag = true;
        }
        i++;
    }
    return flag;
}

int define_index(string* array, int size, string item) {
    int index = 0, i = 0;
    bool flag = false;
    while (i < size && !flag) {
        if (array[i] == item) {
            index = i;
            flag = true;
        }
        i++;
    }
    return index;
}

string* array_of_words(string character_str, int* repetition_array, int& real_size, char nth) {
    int size, index;
    size = character_str.length() / 2 + 1;
    string* word_array = new string[size];
    string word = "";

    for (int i = 0; i < character_str.length(); i++) {
        if (character_str[i] != nth) {
            word += character_str[i];
        }
        else {
            if (!whether_is_contained(word, word_array, size) && word != "") {
                word_array[real_size] = word;
                repetition_array[real_size] = 1;
                real_size++;
            }
            else if (whether_is_contained(word, word_array, size) && word != "") {
                index = define_index(word_array, size, word);
                repetition_array[index] += 1;
            }
            word = "";
        }
    }
    if (!whether_is_contained(word, word_array, size) && word != "") {
        word_array[real_size] = word;
        repetition_array[real_size] = 1;
    }
    else if (whether_is_contained(word, word_array, size) && word != "") {
        index = define_index(word_array, size, word);
        repetition_array[index] += 1;
    }
    real_size++;

    string* words = new string[real_size];

    for (int i = 0; i < real_size; i++) {
        words[i] = word_array[i];
    }

    delete[] word_array;
    return words;
}

string create_string(string* array, int size) {
    string character_str = "";

    for (int i = 0; i < size; i++) {
        if (i != size - 1) {
            character_str += array[i] + ' ';
        }
        else {
            character_str += array[i];
        }
    }
    return character_str;
}

void output_repetition(string* word_array, int* repetition_array, int size) {
    for (int i = 0; i < size; i++) {
        if (repetition_array[i] < 1) {
            break;
        }
        else {
            cout << "Word: " << word_array[i] << endl;
            cout << "Number of repetitions: " << repetition_array[i] << endl;
        }
    }
}