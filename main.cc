#include <iostream>
using namespace std;

int main() {

    // Image details

    int width = 256;
    int height = 256;

    // Now render

    cout << "P3\n" << width << ' ' << height << "\n255\n";

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            auto r = double(j) / (width - 1);
            auto g = double(i) / (height - 1);
            auto b = 0.0;

            int ir = int(255 * r);
            int ig = int(255 * g);
            int ib = int(255 * b);

            cout << ir << ' ' << ig << ' ' << ib << '\n';
        }
    }
}