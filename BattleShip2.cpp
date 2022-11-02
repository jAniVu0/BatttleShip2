#include <iostream>
#include <string>
using namespace std;

bool maps[3][3][3] = {
    {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    },
    {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    },
    {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    }
};

string user_map[3][3] = {
    {"0", "0", "0"},
    {"0", "0", "0"},
    {"0", "0", "0"}
};

int row;
int column;
int hits;
int choose_map;


void print_map(int choose_map = 0){
    for (int i; i < 3; i++) {
        for (int ii; ii < 3; ii++) {
            cout << maps[choose_map][i][ii];
        }
    }
}


int main() {

    cout << "Please select your map :";
    cin >> choose_map;

    while (hits < 3)
    {
        cout << "\nPlease select a row :";
        cin >> row;

        cout << "\nPlease select a column :";
        cin >> column;

        
    }
    



    return 0;
}
