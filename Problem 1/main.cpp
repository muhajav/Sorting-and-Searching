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

	student data[7] = {{9960312699, "Handi Ramadhan", 90},
						{9963959682, "Rio Alfandra", 55},
						{9950310962, "Ronaldo Valentino Uneputty", 80},
						{9970272750, "Achmad Yaumil Fadjri R.", 60},
						{9970293945, "Alivia Rahma Pramesti", 70},
						{9952382180, "Ari Lutfianto", 65},
						{9965653989, "Arief Budiman", 60}};

	// NISN sorting (descending)
	// insertion sort
	int dataSize = sizeof(data)/sizeof(data[0]);
	for(int i=1; i<dataSize; i++)
	{
		int j=i-1;
		long long temp=data[i].nisn;
		string temp2=data[i].name;
		int temp3=data[i].value;
		while(data[j].nisn<temp&&j>=0)
		{
			data[j+1].nisn=data[j].nisn;
			data[j+1].name=data[j].name;
			data[j+1].value=data[j].value;
			j--;
		}
		data[j+1].nisn=temp;
		data[j+1].name=temp2;
		data[j+1].value=temp3;
	}

	cout<<"NISN insertion method"<<'\n';
	for(int i=0; i<dataSize; i++)
	{
		cout<<data[i].nisn<<' '<<data[i].name<<' '<<data[i].value<<'\n';
	}

	cout<<'\n';

	// selection sort (descending)
	for (int i=0; i<dataSize; i++)
	{
		//find the minimum element among element-i to element-(N - 1)
		long long min=data[i].nisn;
		string min2=data[i].name;
		int min3=data[i].value;
		int indMin=i;
		for(int j=i+1; j<dataSize; j++)
		{
			if(data[j].nisn>min)
			{
				min=data[j].nisn;
				min2=data[j].name;
				min3=data[j].value;
				indMin=j;
			}
		}
	    //swap the minimum element with element-i
	    long long tmp=data[i].nisn;
	    string tmp2=data[i].name;
	    int tmp3=data[i].value;
	    data[i].nisn=min;
	    data[i].name=min2;
	    data[i].value=min3;

	    data[indMin].nisn=tmp;
	    data[indMin].name=tmp2;
	    data[indMin].value=tmp3;
	}

	cout<<"NISN selection method"<<'\n';
	for(int i=0; i<dataSize; i++)
	{
		cout<<data[i].nisn<<' '<<data[i].name<<' '<<data[i].value<<'\n';
	}

	cout<<'\n';

	// bubble sort (descending)
	for(int i=0; i<dataSize-1; i++)
	{
		for(int j=0; j<dataSize-1; j++)
		{
			if(data[j].nisn<data[j+1].nisn)
			{
				long long temp=data[j].nisn;
				string temp2=data[j].name;
				int temp3=data[j].value;
				data[j].nisn=data[j+1].nisn;
				data[j].name=data[j+1].name;
				data[j].value=data[j+1].value;
				data[j+1].nisn=temp;
				data[j+1].name=temp2;
				data[j+1].value=temp3;
			}
		}
	}

	cout<<"NISN Bubble method"<<'\n';
	for(int i=0; i<dataSize; i++)
	{
		cout<<data[i].nisn<<' '<<data[i].name<<' '<<data[i].value<<'\n';
	}

	cout<<'\n';
	cout<<'\n';

	// VALUE SORTING
	// insertion sort (descending)
	for(int i=1; i<dataSize; i++)
	{
		int j=i-1;
		long long temp=data[i].nisn;
		string temp2=data[i].name;
		int temp3=data[i].value;
		while(data[j].value<temp3&&j>=0)
		{
			data[j+1].nisn=data[j].nisn;
			data[j+1].name=data[j].name;
			data[j+1].value=data[j].value;
			j--;
		}
		data[j+1].nisn=temp;
		data[j+1].name=temp2;
		data[j+1].value=temp3;
	}

	cout<<"Value insertion method"<<'\n';
	for(int i=0; i<dataSize; i++)
	{
		cout<<data[i].nisn<<' '<<data[i].name<<' '<<data[i].value<<'\n';
	}

	cout<<'\n';

	// selection sort (descending)
	for (int i=0; i<dataSize; i++)
	{
		//find the minimum element among element-i to element-(N - 1)
		long long min=data[i].nisn;
		string min2=data[i].name;
		int min3=data[i].value;
		int indMin=i;
		for(int j=i+1; j<dataSize; j++)
		{
			if(data[j].value>min3)
			{
				min=data[j].nisn;
				min2=data[j].name;
				min3=data[j].value;
				indMin=j;
			}
		}
	    //swap the minimum element with element-i
	    long long tmp=data[i].nisn;
	    string tmp2=data[i].name;
	    int tmp3=data[i].value;
	    data[i].nisn=min;
	    data[i].name=min2;
	    data[i].value=min3;

	    data[indMin].nisn=tmp;
	    data[indMin].name=tmp2;
	    data[indMin].value=tmp3;
	}

	cout<<"Value selection method"<<'\n';
	for(int i=0; i<dataSize; i++)
	{
		cout<<data[i].nisn<<' '<<data[i].name<<' '<<data[i].value<<'\n';
	}

	cout<<'\n';

	// bubble sort (descending)
	for(int i=0; i<dataSize-1; i++)
	{
		for(int j=0; j<dataSize-1; j++)
		{
			if(data[j].value<data[j+1].value)
			{
				long long temp=data[j].nisn;
				string temp2=data[j].name;
				int temp3=data[j].value;
				data[j].nisn=data[j+1].nisn;
				data[j].name=data[j+1].name;
				data[j].value=data[j+1].value;
				data[j+1].nisn=temp;
				data[j+1].name=temp2;
				data[j+1].value=temp3;
			}
		}
	}

	cout<<"Value Bubble method"<<'\n';
	for(int i=0; i<dataSize; i++)
	{
		cout<<data[i].nisn<<' '<<data[i].name<<' '<<data[i].value<<'\n';
	}

	return 0;
}
