#include <string>
using namespace std;

class Similarity {
public:
	int getLengthScore(const string& str1, const string& str2) {

		int longer = max(str1.length(), str2.length());
		int shorter = min(str1.length(), str2.length());
		if (isSameLength(longer, shorter)) return 60;
		else if (isOverTwiceSize(longer, shorter)) return 0;
		else return calculatePartialpoints(longer, shorter);
	}
private:
	int calculatePartialpoints(int longer,int shorter)
	{
		double gap;
		gap = longer - shorter;
		return (1 - (gap / shorter)) * 60;
	}
	bool isOverTwiceSize(int longer, int shorter)
	{

		if (longer >= (shorter * 2))
			return true;
		return false;

	}
	bool isSameLength(int longer, int shorter)
	{
		return longer==shorter;
	}
};
