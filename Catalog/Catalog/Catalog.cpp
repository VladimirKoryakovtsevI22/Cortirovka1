#include <iostream>
#include <string>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;

void catalog(string path) {
    for (const auto& entry : fs::directory_iterator(path)) {
        if (fs::is_directory(entry)) {
            cout << "�������: " << entry.path() << endl;
            catalog(entry.path()); // ����������� ����� ��� ��������� ������������
        }
        else if (fs::is_regular_file(entry)) {
            cout << "����: " << entry.path() << endl;
        }
    }
}

int main() {
    string path;

    cout << "������� ���� � ��������� ��������: ";
    cin >> path;

    cout << "����� ����������� ��������..." << endl;
    catalog(path);

    return 0;
}


