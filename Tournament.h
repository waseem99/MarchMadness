#include <string>
#include <map>

using namespace std;

class Season
{
public:
	Season();
	Season(map<char,string> mSList);
	~Season();

	string GetSeasonsTenure(char cSeasonLabel);
	char GetcSeasonLable(string sTenure);
	void AddpSeason(pair <char, string> s);

	static map<char,string> mSeasonList;
	
private:

};


