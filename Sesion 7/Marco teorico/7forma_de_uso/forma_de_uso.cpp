#include <iostream>
#include <fstream>
using namespace std;

class DataReader {
public:
    // constructor
    DataReader(const char* filename) : file_(filename) {
        if (!file_.is_open()) {
            throw runtime_error("No se pudo abrir el archivo");
        }
    }

    // destructor
    ~DataReader() {
        file_.close();
    }

    int read_int() {
        int value;
        file_ >> value;
        return value;
    }

private:
    ifstream file_;
};

int main() {
    try {
        DataReader reader("datos.txt");
        int x = reader.read_int();
        int y = reader.read_int();
        int z = reader.read_int();
        cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    }
    catch (const exception& ex) {
        cerr << "Error: " << ex.what() << endl;
        return 1;
    }
    return 0;
}
