#include <iostream>
#include <string>
using namespace std;

int main() {

    bool maps[3][3][3] = {
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

    char user_map[3][3] = {
        {'O', 'O', 'O'},
        {'O', 'O', 'O'},
        {'O', 'O', 'O'}
    };

    int row;
    int column;
    int hits = 0;
    int turns = 0;
    int choose_map;

    //Ask user to select a map

    cout << "Please select a map (1/2/3) : ";
    cin >> choose_map;
    choose_map--;

    //Game mechanic

    while (hits < 3)  {

        //Print user's map
        cout << "\n";

        for (int i = 0; i < 3; i++) {
            for (int ii = 0; ii < 3; ii++) {
                cout << user_map[i][ii] << " ";
            }
        cout << '\n';
        }

        //Ask user to select target

        cout << '\n' << "Select a row :";
        cin >> row;

        cout << "Select a column :";
        cin >> column;

        //Subtract input

        row--;
        column--;

        //Hit Checker

        if (user_map[row][column] == 'X') {
            cout << "You already bomabaded this area, please try another one.\n";
        } else if (user_map[row][column] == 'M') {
            cout << "You already bomabaded this area, please try another one.\n";
        } else {
            if (maps[choose_map][row][column] == true) {
                user_map[row][column] = 'X';
                hits++;
                cout << "Hit! " << 3 - hits << " left.\n";
            } else {
                user_map[row][column] = 'M';
                cout << "Miss! " << 3 - hits << " left.\n";
            }
            turns++;
        }

    }

    cout << "\nYou win!\n" << "You used " << turns << " turns to complete the game!\n";

    return 0;
}
