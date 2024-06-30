#include <iostream>
#include <string>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;

void catalog(string path) {
    for (const auto& entry : fs::directory_iterator(path)) {
        if (fs::is_directory(entry)) {
            cout << "Каталог: " << entry.path() << endl;
            catalog(entry.path()); // Рекурсивный вызов для обработки подкаталогов
        }
        else if (fs::is_regular_file(entry)) {
            cout << "Файл: " << entry.path() << endl;
        }
    }
}

int main() {
    string path;

    cout << "Введите путь к корневому каталогу: ";
    cin >> path;

    cout << "Обход содержимого каталога..." << endl;
    catalog(path);

    return 0;
}


