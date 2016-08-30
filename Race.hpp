//Description: Contains all of the info about a race. Allows user to create thier own race or add newer races added from the WOTC or the player guide.

#ifndef RACE_HPP
#define RACE_HPP

#include <vector>
#include "subRace.hpp"
using namespace std;

class Race
{
private:
	string raceName;
	SubRace subraces[2];
	int ablityScoreIncrease[6];
	bool darkVision;
	int speed;
	vector<string> languages;
	vector<string> raceAbilities;
public:
	Race(string name, SubRace subraces[2], int ablityScoreIncrease[6], bool darkVision, int speed, vector<string> languages, vector<string> raceAbilities[]);
	void setName(string name);
	string getName();
	void setSubRaces (SubRace subRace);
	SubRace getSubRaces();
	void setAblityScoreIncrease(int scoreIncrease, string abilityScore);
	int getAblityScoreIncrease(int scoreIncrease, string abilityScore);
	bool getDarkVision();
	void setDarkVision(bool darkVision);
	void setSpeed(int speed);
	int getSpeed();
	string getLanguages();
	void setLanguage(string launguage);
	string getRaceAbilities();
	void setRaceAbility(string abiltiy);

};

#endif