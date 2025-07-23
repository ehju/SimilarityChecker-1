#include <string>
using std::string;

class Similarity {
public:
	int getLengthScore(const string& str1, const string& str2) {
		if (str1 == str2) return 60;
		else return 0;
	}
};