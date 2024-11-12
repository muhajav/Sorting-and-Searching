#include <bits/stdc++.h>
using namespace std;

struct student {
	long long nisn;
	string name;
	int value;
};

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	student data[7] = {{9950310962, "Ronaldo Valentino Uneputty", 80},
						{9952382180, "Ari Lutfianto", 65},
						{9960312699, "Handi Ramadhan", 90},
						{9963959682, "Rio Alfandra", 55},
						{9965653989, "Arief Budiman", 60},
						{9970272750, "Achmad Yaumil Fadjri R.", 60},
						{9970293945, "Alivia Rahma Pramesti", 70}}; // sorted condition

	int l=0;
	int r=6;
	bool found=0;
	int ans=0;
	while(!found&&l<=r)
	{
		int mid=(l+r)/2;
		if(data[mid].nisn>9950310962)
		{
			r = mid-1;
		} else if(data[mid].nisn<9950310962)
		{
			l = mid+1;
		} else {
			found=1;
			ans = data[mid].value;
		}
	}

	if(found)
	{
		cout<<"found"<<'\n';
		cout<<"Value of 9950310962 : "<<ans<<'\n';
	} else {
		cout<<"Not found"<<'\n';
	}
	
}
