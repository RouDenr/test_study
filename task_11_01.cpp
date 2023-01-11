#include <string>
#include <iostream>


class student {
    std::string name;
    int arr[10];

    public:
    student(std::string name, const int arr[10]) {
        this->name = name;

        for (int i = 0; i < 10; ++i) {
            this->arr[i] = arr[i];
        }
    }

    void print_avg() {
        int sum = 0;

        for (int i = 0; i < 10; ++i) {
            sum += this->arr[i];
        }
        std::cout << "AVG = " << sum / 10.0 << "\n";
    }

    void print_data() {
        std::cout << "Name = " << this->name;
        std::cout << "\n[";
        for (int i = 0; i < 10; ++i) {
            std::cout << this->arr[i] << " ";
        }
        std::cout << "]\n";
    }


};

int main(int argc, char const *argv[])
{
    const int arr[10] = {4, 3, 5, 4, 4, 3, 2, 5, 4, 3};
    student test_student("Mike", arr);

    test_student.print_data();
    test_student.print_avg();

    return 0;
}


