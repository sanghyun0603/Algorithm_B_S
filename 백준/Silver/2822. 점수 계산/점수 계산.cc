#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int scores[8] = {};
	vector<int> score;

	for (int i = 0; i < 8; i++) {
		cin >> scores[i];
		score.push_back(scores[i]);
	}

	sort(scores, scores + 8, greater<int>());

	int final_score = 0;
	int index[5] = { 0, };

	for (int i = 0; i < 5; i++) {
		final_score += scores[i]; 
		int indexq = find(score.begin(), score.end(), scores[i]) - score.begin();
		index[i] = indexq + 1;
	}
	cout << final_score << endl;
	sort(index, index + 5);
	for (int i = 0; i < 5; i++) {
		cout << index[i] << " ";
	}

	return 0;
}