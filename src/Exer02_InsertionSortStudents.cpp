#include <iostream>
#include <vector>

using namespace std;

struct Student {
    int id;
    int grade;
};

class Solution {
public:
    vector<Student> sortStudentsByGrade(vector<Student>& students) {
        int n = students.size();

        for (int i = 1; i < n; i++) {
            Student chave = students[i];
            int j = i - 1;

            while (j >= 0 && students[j].grade > chave.grade) {
                students[j + 1] = students[j];
                j--;
            }

            students[j + 1] = chave;
        }

        return students;
    }
};

int main() {
    Solution sol;

    vector<Student> turma1 = {
        {101, 80},
        {102, 60},
        {103, 80},
        {104, 50}
    };

    sol.sortStudentsByGrade(turma1);
    for (int i = 0; i < (int)turma1.size(); i++) {
        cout << turma1[i].id << " " << turma1[i].grade << endl;
    }

    cout << endl;

    vector<Student> turma2 = {
        {10, 75},
        {20, 75},
        {30, 75}
    };

    sol.sortStudentsByGrade(turma2);
    for (int i = 0; i < (int)turma2.size(); i++) {
        cout << turma2[i].id << " " << turma2[i].grade << endl;
    }

    return 0;
}
