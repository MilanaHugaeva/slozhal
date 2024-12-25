#include <iostream>
#include <vector>
#include <algorithm> // ��� std::swap


long long comparisonCount = 0; // ������� ���������

std::vector<int> BubleSort(std::vector<int> array) {
    size_t n = array.size();

    for (size_t i = 0; i < n - 1; ++i) {
        for (size_t j = 0; j < n - i - 1; ++j) {
            comparisonCount++; // ����������� ������� ������ ���, ����� ���������� ���������
            if (array[j] > array[j + 1]) {
                std::swap(array[j], array[j + 1]); // ���������� std::swap ��� ������
            }
        }
    }
    return array;
}

int main() {
    std::vector<int> array;
    for (size_t i = 0; i < 10000; ++i) {
        array.push_back(rand() % 9999 + 0);
    }

    std::vector<int> sortedArray = BubleSort(array);


    // ����� ���������� ���������
    std::cout << "Sravneniy: " << comparisonCount << std::endl; 

    return 0;
}
