#include <iostream>
#include <string>
#define NEWLINE std::cout << std::endl;

constexpr double MAXMARK = 100.0;
constexpr double SUCCESSFULLMARK = 75.0;
constexpr unsigned MARKSCOUNT = 4;

struct Student
{
    std::string name;
    unsigned marks[MARKSCOUNT];
};

float averageMark(Student student);
void sortStudentsByAverageMark(Student students[], int n);
Student* bestStudent(Student students[], int n);
int countSuccessfulStudents(Student students[], int n);
double calculationInPercentages(const double maxPercentage, const double percentageRatio);


int main() {

    Student students[] = {
        { "Bob", { 55, 50, 55, 60 } },
        { "Terry", { 90, 95, 80, 85 } },
        { "Jack", { 85, 80, 90, 95 } },
        { "Jerry", { 75, 70, 75, 85 } },
        { "Ralph", { 65, 60, 65, 70 } },
    };


    int amountOfStudents = sizeof(students) / sizeof(students[0]);

    for (int i = 0; i < amountOfStudents; i++) {
        std::cout << "Name " << students[i].name << ", average mark " << averageMark(students[i]) << std::endl;
    }

    NEWLINE;
    sortStudentsByAverageMark(students, amountOfStudents);
    for (int i = 0; i < amountOfStudents; i++) {
        std::cout << "Name " << students[i].name << ", average mark " << averageMark(students[i]) << std::endl;
    }

    NEWLINE;
    std::cout << "Pointer to the best student: " << bestStudent(students, amountOfStudents) << std::endl;

    NEWLINE;
    std::cout << "The students whose average grade is more than 75%: " << countSuccessfulStudents(students, amountOfStudents) << std::endl;


    return 0;
}


float averageMark(Student student) {
    float sum = 0;
    for (int i = 0; i < MARKSCOUNT; i++) {
        sum += student.marks[i];
    }
    return sum / MARKSCOUNT;
}

void sortStudentsByAverageMark(Student students[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (averageMark(students[j]) > averageMark(students[j + 1])) {
                std::swap(students[j], students[j + 1]);
            }
        }
    }
}

Student* bestStudent(Student students[], int n) {
    Student* successful = &students[0];
    for (int i = 1; i < n; i++) {
        if (averageMark(*successful) < averageMark(students[i])) {
            successful = &students[i];
        }
    }
    return successful;
}

int countSuccessfulStudents(Student students[], int n) {
    double percentages = calculationInPercentages(MAXMARK, SUCCESSFULLMARK);
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (averageMark(students[i]) > percentages) {
            count++;
        }
    }
    return count;
}

double calculationInPercentages(const double maxPercentage, const double percentageRatio) {
    return maxPercentage * percentageRatio / 100;
}