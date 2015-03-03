#include "Team.h"

multimap<unsigned int, string> Team::mTeamsList {};

Team::Team()
{

}

Team::Team(multimap<unsigned int, string> mTList){
	Team::mTeamsList = mTList;
}

Team::~Team()
{
}

unsigned int uiGetTeamID(string sTName){
	int key = 0;
	for (auto &i : Team::mTeamsList) {
		if (i.second == sTName) {
			key = i.first;
			break; 
		}
	}
	return key;	
}

string sGetTeamName(unsigned int uiTID){
	return Team::mTeamsList.find(uiTID)->second;	
}

void AddTeam(pair<unsigned int, string> team){
	Team::mTeamsList.insert(team);
}

