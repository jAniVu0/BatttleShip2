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

    choose_map--;

    //Game mechanic//

    while (hits < 3)  {

        //Print user's map//

        for (int i = 0; i < 3; i++) {
            for (int ii = 0; ii < 3; ii++) {
                cout << user_map[i][ii] << " ";
            }
        cout << '\n';
        }

        //Ask user to select target//

        cout << '\n' << "Select a row :";
        cin >> row;
        cout << "\n";

        cout << "Select a column :";
        cin >> column;
        cout << "\n";

        ///Subtract input///

        row--;
        column--;

        //Check if user hit the target//

        char hit = 'X';
        char miss = 'O';

        if (user_map[choose_map][row][column] == hit || miss) {
            cout << "You've already bombarded this area, please try again.\n";
        } else {
            if (maps[choose_map][row][column] == true) {
                maps[choose_map][row][column] = false;
                user_map[choose_map][row][column] = hit;
                hits++;
                cout << "Hit! " << 3 - hits << " left.\n";
            } else {
                user_map[choose_map][row][column] = miss;
                cout << "Miss! " << 3 - hits << " left.\n";
            }
            turns++;
        }

    }

    cout << "You win!\n" << "You used " << turns << " to complete the game!\n";

    return 0;
}
