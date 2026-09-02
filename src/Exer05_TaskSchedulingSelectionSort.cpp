#include <iostream>
#include <vector>
#include <utility>

using namespace std;

typedef long long ll;

class Solution {
public:
    pair<vector<int>, ll> minTotalCompletionTime(vector<int>& durations) {
        int n = durations.size();

        for (int i = 0; i < n - 1; i++) {
            int menorIndice = i;
            for (int j = i + 1; j < n; j++) {
                if (durations[j] < durations[menorIndice]) {
                    menorIndice = j;
                }
            }

            if (menorIndice != i) {
                int temp = durations[i];
                durations[i] = durations[menorIndice];
                durations[menorIndice] = temp;
            }
        }

        ll tempoConclusaoAtual = 0;
        ll tempoTotal = 0;

        for (int i = 0; i < n; i++) {
            tempoConclusaoAtual += durations[i];
            tempoTotal += tempoConclusaoAtual;
        }

        return {durations, tempoTotal};
    }
};

int main() {
    Solution sol;

    vector<int> tarefas1 = {5, 2, 8};
    auto resultado1 = sol.minTotalCompletionTime(tarefas1);

    for (int i = 0; i < (int)resultado1.first.size(); i++) {
        cout << resultado1.first[i] << (i + 1 < (int)resultado1.first.size() ? " " : "");
    }
    cout << endl;
    cout << resultado1.second << endl;

    cout << endl;

    vector<int> tarefas2 = {4, 1, 3, 2};
    auto resultado2 = sol.minTotalCompletionTime(tarefas2);

    for (int i = 0; i < (int)resultado2.first.size(); i++) {
        cout << resultado2.first[i] << (i + 1 < (int)resultado2.first.size() ? " " : "");
    }
    cout << endl;
    cout << resultado2.second << endl;

    return 0;
}
