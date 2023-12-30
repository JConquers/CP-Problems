#include "Rotation.h"
#include <vector>
using namespace std;

void rotateImage(vector<vector<Pixel>>& image, int val) {
    if (val == 0 || val == 1 || val == 2 || val == 3) {
        int rows = image.size();
        int columns=image[0].size();
        int n=max(rows, columns);

        // Create a temporary copy of the image
        vector<vector<Pixel>> rotatedImage(n, vector<Pixel>(n));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (val == 0) {
                    rotatedImage[i][j] = image[i][j];  // 0-degree rotation (no change)
                } else if (val == 1) {
                    rotatedImage[i][j] = image[n - j - 1][i];  // 90-degree rotation
                } else if (val == 2) {
                    rotatedImage[i][j] = image[n - i - 1][n - j - 1];  // 180-degree rotation
                } else if (val == 3) {
                    rotatedImage[i][j] = image[j][n - i - 1];  // 270-degree rotation
                }
            }
        }

        // Copy the rotated image back to the original image
        image = rotatedImage;
    }
}