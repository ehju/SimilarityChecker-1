#include <string>
using std::string;

class Similarity {
public:
	int getLengthScore(const string& str1, const string& str2) {
		if (isSameLength(str1, str2)) return 60;
		if (isOverTwiceSize(str1, str2))
			return 0;
		return -1;
	}
	bool isOverTwiceSize(const std::string& str1, const std::string& str2)
	{
		if (str1.length() >= str2.length()) {
			if (str1.length() >= (str2.length() * 2))
				return true;
		}
		else {
			if (str2.length() >= (str1.length() * 2))
				return true;
		}
		return false;
	}
	bool isSameLength(const std::string& str1, const std::string& str2)
	{
		return str1.length() == str2.length();
	}
};
