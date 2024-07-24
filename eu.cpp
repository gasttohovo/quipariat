#include <vector>
#include <tuple>

// Function to convert integer RGB values (0-255) to normalized float values (0.0-1.0)
std::tuple<float, float, float> convertToMSLColor(int red, int green, int blue) {
    const float maxColorValue = 255.0f;

    // Normalize the RGB values to the range [0.0, 1.0]
    float normalizedRed = static_cast<float>(red) / maxColorValue;
    float normalizedGreen = static_cast<float>(green) / maxColorValue;
    float normalizedBlue = static_cast<float>(blue) / maxColorValue;

    return std::make_tuple(normalizedRed, normalizedGreen, normalizedBlue);
}

int main() {
    // Example usage
    int red = 128;
    int green = 64;
    int blue = 255;

    auto [normRed, normGreen, normBlue] = convertToMSLColor(red, green, blue);

    // Print normalized values
    printf("Normalized RGB: (%f, %f, %f)\n", normRed, normGreen, normBlue);

    return 0;
}
