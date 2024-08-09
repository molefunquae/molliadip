#include <iostream>

void pressKey(char c) {
    if (c == 'q') {
        std::cout << "Quit application\n";
        // Code to quit the application
    } else if (c == 'n') {
        std::cout << "Next item\n";
        // Code to go to the next item
    } else if (c == 'p') {
        std::cout << "Previous item\n";
        // Code to go to the previous item
    } else {
        std::cout << "Unhandled key: " << c << '\n';
    }
}

int main() {
    // Example usage
    pressKey('n'); // Should output "Next item"
    pressKey('q'); // Should output "Quit application"
    pressKey('x'); // Should output "Unhandled key: x"

    return 0;
}
