#include <string>
using std::string;

class Similarity {
public:
	int getLengthScore(const string& a, const string& b) {
		if (a==b)
			return 60;
	}
};