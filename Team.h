#include <string>
#include <map>
#include <tuple>

using namespace std;

class Team
{
public:
	Team();
	Team(multimap<unsigned int, string> mTList);
	~Team();

	unsigned int uiGetTeamID();
	string sGetTeamName();
	void AddTeam(pair<unsigned int, string> team);
	static multimap<unsigned int, string> mTeamsList;
	
private:

};


