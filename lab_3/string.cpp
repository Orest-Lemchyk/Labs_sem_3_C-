#include <iostream>
#include <cstring>

using namespace std;

int main() {
    const int SIZE = 200;
    const int MAX_WORDS = 50;

    char str[SIZE];
    int lengths[MAX_WORDS];
    int count = 0;

    cout << "enter line: ";
    cin.getline(str, SIZE);

    char* word = strtok(str, " ");
    while (word != nullptr) {
        lengths[count] = strlen(word);
        count++;
        word = strtok(nullptr, " ");
    }

    cout << "count words: " << count << endl;
    cout << "len words: ";
    for (int i = 0; i < count; i++) {
        cout << lengths[i] << " ";
    }
    cout << endl;

    return 0;
}
