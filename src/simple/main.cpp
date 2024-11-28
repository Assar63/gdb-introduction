#include <cstdint>
#include <iostream>

uint64_t retval;

uint8_t function1(uint64_t &value1, uint32_t value2, std::string &str1) {
    value1 += str1.size();
    std::cout << value1 * value2 << std::endl;
    str1 = str1 + " " + std::to_string(value1);
    return 1;
}

int main(int argc, char *argv[]) {
    uint32_t counter = 0;
    std::string str = "Hello World";
    while (true) {
        std::cout << counter++ << std::endl;
        if (++counter == 10) {
            break;
        }
        if (counter % 2 == 0) {
            function1(retval, counter, str);
            std::cout << str << std::endl;
        }
    }
    return 0;
}
