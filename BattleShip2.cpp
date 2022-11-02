#include <iostream>
#include <string>
using namespace std;

int main() {

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
    int turns;
    int choose_map;

    //Ask user to select a map//

    cout << "Please select a map (1/2/3) :";
    cin >> choose_map;
    cout << "\n";

    //Print user's map//

    for (int i = 0; i < 3; i++) {
        for (int ii = 0; ii < 3; ii++) {
            cout << user_map[i][ii] << " ";
        }
    cout << '\n';
    }

    //Game mechanic//

    while (hits < 3)  {

        //Ask user to select target//

        cout << '\n' << "Select a row :";
        cin >> row;
        cout << "\n";

        cout << "Select a column :";
        cin >> column;
        cout << "\n";

        //Check if user hit the target//

        if (maps[choose_map][row][column] = true) {
            maps[choose_map][row][column] = false;
            hits++;
            cout << "Hit! " << 3 - hits << " left.";
        } else {
            cout << "Miss! " << 3 - hits << " left.";
        }

        turns++;
    }

    cout << "You win!\n" << "You used " << turns << " to complete the game!";

    return 0;
}
