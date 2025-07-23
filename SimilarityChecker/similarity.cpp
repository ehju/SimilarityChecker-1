#include <string>
using std::string;

class Similarity {
public:
	int getLengthScore(const string& str1, const string& str2) {
		if (str1.length() == str2.length()) return 60;
		if (str1.length() >= str2.length()) {
			if (str1.length() >= (str2.length() * 2))
				return 0;
			else
				return -1;
		}
		else {
			if (str2.length() >= (str1.length() * 2))
				return 0;
			else
				return -1;
		}
		return -1;
	}
};