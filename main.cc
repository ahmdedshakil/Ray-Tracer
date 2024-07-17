#include "color.h"
#include "vec3.h"
#include <iostream>
using namespace std;

int main() {

    // Image details

    int width = 256;
    int height = 256;

    // Now render

    cout << "P3\n" << width << ' ' << height << "\n255\n";

    for (int i = 0; i < height; i++) {
        clog << "\rLines of output remaining: " << (height - i) << ' ' << flush;
        for (int j = 0; j < width; j++) {
            auto pixel_color = color(double(j)/(width-1), double(i)/(height-1), 0);
            write_color(cout, pixel_color);
        }
    }

    clog << "\rDone.                 \n";
}

// This project is based on the guide: https://raytracing.github.io/books/RayTracingInOneWeekend.html