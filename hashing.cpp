#include <iostream>
using namespace std;
#include <string.h>

Student studentList[] =

{
{"K1", "Gary Smith", "15.00", "GarySmith@neit.edu" },
{"K2", "Laila Kerniech", "30.00", "LailaKerniech@neit.edu" },
{"K3", "Shawn Kemp", "23.50", "ShawnKemp@neit.edu" },
{"K4", "Sarah Palin", "110.00", "SarahPalin@neit.edu"},
{"K5", "Ray Connif", "0.00", "RayConnif@neit.edu" },
{"K6", "Edmund Cortis", "50.00", "EdmundCortis@neit.edu" },
{"K7", "John Matis", "15.00", "JohnMatis@neit.edu" }
};

class Search{
public:
	int hashRoutine(string keyToSearch){
	int len = keyToSearch.length();
		for (int ndx = 0; ndx < len; ndx++){
			int decVal = keyToSearch.at(ndx);
			sum = sum + decVal;
		}
	return sum;
	}
	
	int hash(string keyToSearch){
		cout << "" << keyToSearch << "using hash method." << endl;

		int foundAtIndex = hashRoutine(keyToSearch);

		cout << "Key " << keyToSearch << " is found at index " << foundAtIndex;

		cout << " after 1 read."
	
	}
}