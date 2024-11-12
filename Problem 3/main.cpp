#include <bits/stdc++.h>
using namespace std;

struct student {
	long long nisn;
	string name;
	int value;
};

int main() {

	// ios_base::sync_with_stdio(false);
	// cin.tie(nullptr);

	student data[7] = {{9950310962, "Ronaldo Valentino Uneputty", 80},
						{9952382180, "Ari Lutfianto", 65},
						{9960312699, "Handi Ramadhan", 90},
						{9963959682, "Rio Alfandra", 55},
						{9965653989, "Arief Budiman", 60},
						{9970272750, "Achmad Yaumil Fadjri R.", 60},
						{9970293945, "Alivia Rahma Pramesti", 70}}; // sorted condition


	for(int i=0; i<7; i++)
	{
		if(data[i].value==60)
		{
			data[i].name = "Joko";
		}
	}

	// print the name and value of each data
	for(int i=0; i<7; i++)
	{
		cout<<data[i].name<<' '<<data[i].value<<'\n';
	}
	
}
