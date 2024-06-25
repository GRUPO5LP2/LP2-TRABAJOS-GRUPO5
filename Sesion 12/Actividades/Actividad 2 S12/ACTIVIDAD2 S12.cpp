#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
#include <cctype>

using namespace std;

void printList(const list<string>& words) {
    for (const auto& word : words) {
        cout << word << " ";
    }
    cout << endl;
}

int main() {
    list<string> words;
    string input;

    cout << "Ingrese palabras (ingrese 'fin' para terminar):" << endl;
    while (true) {
        cin >> input;
        if (input == "fin") {
            break;
        }
        words.push_back(input);
    }

    cout << "Lista original: ";
    printList(words);

    words.sort();
    cout << "Lista ordenada alfabeticamente: ";
    printList(words);

    cout << "Ingrese la palabra a contar: ";
    string word_to_count;
    cin >> word_to_count;

    int count = std::count(words.begin(), words.end(), word_to_count);
    cout << "La palabra '" << word_to_count << "' aparece " << count << " veces en la lista." << endl;

    transform(words.begin(), words.end(), words.begin(), [](string& word) {
        transform(word.begin(), word.end(), word.begin(), ::toupper);
        return word;
    });

    cout << "Lista en mayúsculas: ";
    printList(words);

    return 0;
}
