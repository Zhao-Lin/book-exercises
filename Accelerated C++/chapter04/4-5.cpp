#include <algorithm>
#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector <string> strs;
	// to store the unique words that have been entered;
	vector <string> uniq;
	vector<int> wdct;

	

	typedef vector<string>::size_type st_sz;


	string x;
	while (cin >> x){
		strs.push_back(x);
	}

	for (st_sz j = 0; j != strs.size(); ++j){
		int count_temp = 1;
		// suppose uniq has the the element i
		int flag = 1;
		for (st_sz i = 0; i != uniq.size(); ++i){

			if (strs[j].compare(uniq[i])==0){
				wdct[i]++;
				flag = 0;
			}
		}
		// haven't been add to the "uniq" vector
		if (flag == 1){
			uniq.push_back(strs[j]);
			wdct.push_back(1);
		}
	}

	cout << "You entered " << strs.size() << " words." << endl;

	for (st_sz i = 0; i != uniq.size(); ++i){
		cout << uniq[i] << string(10 - uniq[i].size(), ' ') << wdct[i]<<endl;
	}
	
	system("pause");
	return 0;
}

