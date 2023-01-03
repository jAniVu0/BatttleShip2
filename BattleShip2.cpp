#include <iostream>
#include <string>
using namespace std;

bool systemMap[3][3][3] = {
    {
        {0, 1, 0},
        {1, 0, 0},
        {0, 0, 1}
    },
    {
        {1, 0, 0},
        {0, 1, 0},
        {1, 0, 0}
    },
    {
        {0, 0, 1},
        {1, 0, 1},
        {0, 0, 0}
    }
};

char userMap[3][3] = {
    {'O', 'O', 'O'},
    {'O', 'O', 'O'},
    {'O', 'O', 'O'}
};

int mapInputSelection() {
    int chooseMap;
    cout << "Please select a map (1/2/3) : ";
    cin >> chooseMap;
    return chooseMap--;
}

void printUserMap() {
    cout << "\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << userMap[i][j] << " ";
        }
        cout << '\n';
    }
}

int rowInputSelection() {
    int row;
    cout << "\nSelect a row :";
    cin >> row;
    return row--;
}

int columnInputSelection() {
    int column;
    cout << "Select a column :";
    cin >> column;
    return column--;
}

int gameMechanism(int chooseMap, int row, int column) {
    char hit = 'X';
    char miss = 'M';

    bool userMapHitCondition = (userMap[row][column]) == hit;
    bool userMapMissCondition = userMap[row][column] == miss;

    if (userMapHitCondition || userMapMissCondition) {
        cout << "You already bomabaded this area, please try another one.\n";
    } else {
        bool hitCondition = systemMap[chooseMap][row][column] == true;
        if (hitCondition) {
            hits++;
            userMap[row][column] = hit;
            cout << "Hit! " << 3 - hits << " left.\n";
        } else {
            userMap[row][column] = miss;
            cout << "Miss! " << 3 - hits << " left.\n";
        }
        turns++;
    }
}

int hits = 0;
int turns = 0;

int main() {

    int chooseMap = mapInputSelection();
    printUserMap();

    while (hits < 3)  {
        int row = rowInputSelection();
        int column = columnInputSelection();
        gameMechanism(chooseMap, row, column);
    }

    cout << "\nYou win!\n" 
         << "You used " << turns << " turns to complete the game!\n";

    return 0;
}
