#include "Brightness.h"
using namespace std;
#include<vector>
#include<iostream>

void applyBrighteness(vector<vector< Pixel >> &image, float amount){
    /*if (amount < 0.0 || amount > 1.0) {
        // Print an error message or handle the invalid amount as needed
        return;
    }*/

    // Loop through each pixel in the image and adjust the color values
   
    for (vector<Pixel>& row : image) {
        for (Pixel& pixel : row) {
            pixel.r = static_cast<int>(pixel.r + (255 - pixel.r) * amount);
            pixel.g = static_cast<int>(pixel.g + (255 - pixel.g) * amount);
            pixel.b = static_cast<int>(pixel.b + (255 - pixel.b) * amount);

            // Ensure that the values stay within the valid range of 0 to 255
            pixel.r = std::min(255, std::max(0, pixel.r));
            pixel.g = std::min(255, std::max(0, pixel.g));
            pixel.b = std::min(255, std::max(0, pixel.b));

           

            // Ensure that the values stay withina the valid range of 0 to 255
            /*pixel.r = min(255, max(0, pixel.r));
            pixel.g = min(255, max(0, pixel.g));
            pixel.b = min(255, max(0, pixel.b));*/
            //cout<<"HELLO\n";
            /*pixel.r=255;
            pixel.b=pixel.g=0;*/
        }
    }
}
