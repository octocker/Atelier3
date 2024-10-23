#include <iostream>
#include <string>

using namespace std;

class Car {
    string Brand;
    string Model;
    int Year;
    float Kilometers;
    float Speed;

public:
    Car() 
        : Brand("Inconnu"), Model("Inconnu"), Year(0), Kilometers(0.0), Speed(0.0) {}


    Car(string marq, string mod, int an, float kilo, float vit) 
        : Brand(marq), Model(mod), Year(an), Kilometers(kilo), Speed(vit) {}


    void accelerer(float valeur) {
        Speed += valeur;
    }


    void freiner(float valeur) {
        if (Speed - valeur < 0)
            Speed = 0;
        else
            Speed -= valeur;
    }


    void afficherInfo() const {
        cout << "Brand: " << Brand << "\n"
             << "Model: " << Model << "\n"
             << "Year: " << Year << "\n"
             << "Kilometers: " << Kilometers << " km\n"
             << "Speed: " << Speed << " km/h\n";
    }

    void avancer(float distance) {
        Kilometers += distance;
    }


    ~Car() {
        cout << "The Car " << Brand << " is destroyed" << endl;
    }
};


int main() {

    Car maCar("Toyota", "Corolla", 2022, 15000, 120);

    maCar.afficherInfo();

    maCar.accelerer(30);
    cout << "\nAprès accélération : " << endl;
    maCar.afficherInfo();

    maCar.freiner(50);
    cout << "\nAprès freinage : " << endl;
    maCar.afficherInfo();

    maCar.avancer(200);
    cout << "\nAprès avoir avancé : " << endl;
    maCar.afficherInfo();

    return 0;
}

