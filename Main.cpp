#include <iostream>
using namespace std;

int main() {
    float RoomL = 28.5f;
    int RoomW = 22;
    int Windows = 4;
    int HasProjector = 1;

    cout << "Room Length: " << RoomL << " Feet" << endl;
    cout << "Memory Address: " << &RoomL << endl;
    cout << "Size: " << sizeof(RoomL) << endl;

    cout << "Room Width: " << RoomW << " Feet" << endl;
    cout << "Memory Address: " << &RoomW << endl;
    cout << "Size: " << sizeof(RoomW) << endl;

    cout << "Number of Windows: " << Windows << endl;
    cout << "Memory Address: " << &Windows << endl;
    cout << "Size: " << sizeof(Windows) << endl;

    cout << "Has Projector: " << HasProjector << endl;
    cout << "Memory Address: " << &HasProjector << endl;
    cout << "Size: " << sizeof(HasProjector) << endl;

    cout << "Area = " << RoomL * RoomW << " Feet Squared" << endl;
    cout << "perimeter = " << 2 * (RoomL + RoomW) << endl;

    int a = 12;
    int b = 5;
    int c = 2;

    // Prediction: 22

    cout << a + b * c << endl;

    // Prediction: 34

    cout << (a+b) * c << endl;

    // Prediction: 4

    cout << a / b * c << endl;

    // Prediction: 1

    cout << a / (b * c) << endl;

    int total = 17;
    int count = 4;

    double average1 = total / count;
    double average2 = static_cast<double>(total) / count;

    cout << "average1 = " << average1 << endl;
    cout << "average2 = " << average2 << endl;

    //the difference is because it's changing a variable from an integer before the process takes place
}