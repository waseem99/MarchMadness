#include <string>
#include <map>

using namespace std;

class Season
{
public:
	Season();
	Season(multimap<char,string> mSList);
	~Season();

	string GetSeasonsTenure(char cSeasonLabel);
	char GetcSeasonLable(string sTenure);
	void AddpSeason(pair <char, string> s);

	static multimap<char,string> mSeasonList;
	
private:

};


