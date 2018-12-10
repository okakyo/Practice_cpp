#include<iostream>
#include<cstdlib>
#include<ctime>
#include"game.hpp"
using namespace std;

int main(){
	Game<StrayCat> game;
	srand((unsigned) time (NULL));
	game.Play();
	return 0;
}
