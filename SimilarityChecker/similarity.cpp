#include <string>
#include <vector>
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

class CharChecker {
public:
	int getAlphaScore(const string& str1, const string& str2) {
		vector<char> t1;
		vector<char> t2;
		for (char ch : str1)
			t1.push_back(ch);
		for (char ch : str2)
			t2.push_back(ch);

		for (int i=0; i < str1.length();i++) {
			if (t1[i] != t2[i])
				return 0;
		}

		return 40;
	}
};