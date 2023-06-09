#include <iostream>
using namespace std;

// Class to store contact
// details
class node {
	string name;
	long int tel;
	int id;

public:
	node()
	{
		tel = 0;
		id = 0;
	}
	friend class hashing;
};

class hashing {

	node data[100];
	string n;
	long int t;
	int i, index;

public:
	hashing()
	{
		i = 0;
		t = 0;
	}

	// This method takes details
	// from the user like ID,
	// Name and Telephone number
	// and create new record in
	// the hashtable.
	void create_record(int size)
	{
	
		cout << "\nEnter id :";
		cin>>i;
		cout<<"\nur id "<<i;
		cout << "\nEnter name :";
		cin>>n;
		cout<<"\nur name "<<n;
		cout
			<< "\nEnter telephone :";
        cin>>t;
        cout<<"\nur tell is "<<t;
		index = i % size;

		for (int j = 0; j < size; j++) {
			if (data[index].id == 0) {
				data[index].id = i;
				data[index].name = n;
				data[index].tel = t;
				break;
			}
			else
				index
					= (index + 1) % size;
		}
	}
};


int main()
{
	
	int size;
	
	hashing s;
	size = 20;

	// Creating a record in
	// directory
	cout << "\n1.CREATE record ";
	s.create_record(size);

	// Display available
	// record details
	return 0;
}
