#include <iostream>
#include <string>
using namespace std;

class Vector2D{
    public:
        Vector2D(float x, float y){
            this->x = x;
            this->y = y;
        }

        float getX(){
            return x;
        }

        float getY(){
            return y;
        }

        void setX(float x){
            this->x = x;
        }

        void setY(float y){
            this->y = y;
        }

        void mostrar_datos_vector(){
            cout << "(" << x << ", " << y << ")" << endl;
        }

        Vector2D operator+(Vector2D v){
            return Vector2D(x + v.getX(), y + v.getY());
        }

        Vector2D operator-(Vector2D v){
            return Vector2D(x - v.getX(), y - v.getY());
        }

    private:
        float x, y;
};
int main(){
    Vector2D v1(1, 2);
    Vector2D v2(3, 4);
    Vector2D v3 = v1 + v2;
    Vector2D v4 = v1 - v2;

    v1.mostrar_datos_vector();
    v2.mostrar_datos_vector();
    v3.mostrar_datos_vector();
    v4.mostrar_datos_vector();

    return 0;
}