
#include <stdio.h>
#include <tchar.h>

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Vector2D
{
	
};

class Looter
{
public:
	int x;
	int y;
	vector<int> pos;

	int vx;
	int vy;

	int x_b;
	int y_b;

	int target_x = 0;
	int target_y = 0;
	int target_dist = 0;
	int target_type = -1;
	int target_id = -1;

	int target_t = 0;
};

class Reaper : public Looter
{
public:
	const float MASS = 0.5f;
	const float FRICTION = 0.2f;

	int closest_water_x = 0;
	int closest_water_y = 0;
	int closest_water_dist_sqr = -1;
	int closest_water_id = -1;

	int rich_water_x_b = 0;
	int rich_water_y_b = 0;
	int rich_water_value = 0;
	int rich_water_dist_sqr = -1;
	int rich_water_id = -1;

	int tar_x = -1;
	int tar_y = -1;

};

int main()
{

    // game loop
    while (1) {
        int myScore;
        cin >> myScore; cin.ignore();
        int enemyScore1;
        cin >> enemyScore1; cin.ignore();
        int enemyScore2;
        cin >> enemyScore2; cin.ignore();
        int myRage;
        cin >> myRage; cin.ignore();
        int enemyRage1;
        cin >> enemyRage1; cin.ignore();
        int enemyRage2;
        cin >> enemyRage2; cin.ignore();
        int unitCount;
        cin >> unitCount; cin.ignore();
        for (int i = 0; i < unitCount; i++) {
            int unitId;
            int unitType;
            int player;
            float mass;
            int radius;
            int x;
            int y;
            int vx;
            int vy;
            int extra;
            int extra2;
            cin >> unitId >> unitType >> player >> mass >> radius >> x >> y >> vx >> vy >> extra >> extra2; cin.ignore();
        }

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;

        cout << "WAIT" << endl;
        cout << "WAIT" << endl;
        cout << "WAIT" << endl;
    }
}

