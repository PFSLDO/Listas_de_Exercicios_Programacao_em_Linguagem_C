//Object IDs
enum IDS{PLAYER, BULLET, ENEMY};

//Our Player
struct SpaceShip
{
	int ID;
	int x;
	int y;
	int lives;
	int speed;
	int boundx;
	int boundy;
	int score;
};

struct Bullet
{
	int ID;
	int x;
	int y;
	bool live;
	int speed;
};