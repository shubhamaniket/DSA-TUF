#include<bits/stdc++.h>
using namespace std;

void explainPairs(){
	// Single Pair
	pair<int, int> p = {1, 3};
	cout << p.first << ", " << p.second << endl << endl;

	//Pair within Pair
	pair<int, pair<int, int>> pp = {2, {3, 4}};
	cout << pp.first << ", " << pp.second.first << ", " << pp.second.second << endl << endl;

	//Array of Pairs
	pair<int, int> parr[] = { {1,2},{3,4},{5,6} };
	for(int i=0;i<3;i++){
		cout << parr[i].first << ", " << parr[i].second << endl;
	}
}

void explainVectors(){
	 vector<int> v;

	 v.push_back(1);
	 v.emplace_back(2); //Faster than push_back()

	 vector<pair<int,int>> vec;
	 vec.push_back({3, 4});
	 vec.emplace_back(4, 5);	//emplace_back() does not need
	 //curly braces to push a pair

	 vector<int> v1(5, 20); //Creates a vector of size 5
	 //containing 20 in each index
	 vector<int> v2(v1); //Creates a copy vector based on v1

	 int n;
	 vector<int> vecTest;
	 cin >> n;
	 int val;
	 for(int i=0;i<n;i++){
	 	cin >> val;
	 	vecTest.push_back(val);
	 }

	 // cout << "Vector Begin : " << *vecTest.begin() << endl;
	 // cout << "vector End : " << *(vecTest.end()--) << endl;

	 for(auto itr=vecTest.begin(); itr!=vecTest.end();itr++){
	 	cout << *itr << " ";
	 }
	 cout << endl;

	 for(auto it : vecTest){
	 	cout << it << " ";
	 }
	 cout << endl;

	 //Erase Function
	 vecTest.erase(vecTest.begin() + 2);
	 for(auto itr: vecTest){
	 	cout << itr << " ";
	 }
	 cout << endl;

	 vecTest.erase(vecTest.begin()+1, vecTest.begin()+4);

	 for(auto itr: vecTest){
	 	cout << itr << " ";
	 }
	 cout << endl;

	 vector<int> v3(2, 100);

	 v3.insert(v3.begin(), 3, 9); // Position, occurence, value

	 vector<int> copy(2, 69);
	 v3.insert(v3.begin(), copy.begin(), copy.end());

	 for(auto itr: v3){
	 	cout << itr << " ";
	 }

	 cout << endl;
	 cout << "Size of Vector : " << v3.size() << endl;

	 //Pops out the last element of the vector
	 v3.pop_back();

	 for(auto itr: v3){
	 	cout << itr << " ";
	 }
	 cout << endl;

}

void explainList(){
	// Same as vector but also has the features of front operations
	list<int> ls;
	ls.push_back(1);
	ls.emplace_back(2);

	ls.push_front(-1);
	ls.emplace_front(-2);

	//Rest all operations similar to vector
	for(auto itr: ls){
		cout << itr << " ";
	}
	cout << endl;
}

void explainDeque(){
	//Similar to List with both front and back operations
	deque<int> dq;
	dq.push_back(1);
	dq.emplace_back(2);
	dq.push_front(3);
	dq.emplace_front(4);

	dq.pop_front();
	dq.pop_back();

	for(auto itr: dq){
		cout << itr << " ";
	}
}

void explainStack(){
	// LIFO
	stack<int> s;
	s.push(1); // {1}
	s.push(2); // {2, 1}
	s.push(3); // {3, 2, 1}
	s.push(4); // {4, 3, 2, 1}
	s.emplace(5); // {5, 4, 3, 2, 1}

	cout << s.top() << endl; // 5
	cout << s.size() << endl; // 5

	while(!s.empty()){
		cout << s.top() << " ";
		s.pop();
	}
}

void explainQueue(){
	// FIFO
	queue<int> q;
	q.push(1);
	q.push(2);

	q.pop();	//Removes the first element

	while(!q.empty()){
		cout << q.front() << " ";
		q.pop();
	}
}

void explainPriorityQueue(){
	// Max element stays at the top = Max Heap
	priority_queue<int> pq;

	pq.push(5);
	pq.push(2);
	pq.push(8);
	pq.emplace(10);

	cout << "Size of PQ : " << pq.size() << endl;

	cout << "Top Element : " << pq.top() << endl;

	pq.pop();

	while(!pq.empty()){
		cout << pq.top() << " ";
		pq.pop();
	}

	cout << endl;

	// Min. Heap = Smaller element stays at the top
	priority_queue<int, vector<int>, greater<int>> pq1;
	pq1.push(4);
	pq1.push(3);
	pq1.push(8);
	pq1.push(7);

	while(!pq1.empty()){
		cout << pq1.top() << " ";
		pq1.pop();
	}

}

void explainSet(){
	// Returns sorted and unique
	set<int> st;
	st.insert(1);
	st.insert(3);
	st.insert(2);
	st.emplace(9);
	st.insert(2);

	cout << "Is Set Empty : " << st.empty() << endl;
	cout << "Set Size : " << st.size() << endl;

	auto itr1 = st.find(2);
	auto itr2 = st.find(9);

	st.erase(itr1, itr2);

	cout << "Count of 2 : " << st.count(2) << endl;

	for(auto it : st){
		cout << it << " ";
	}
}

void explainMultiSet(){
	// Same as set but can store duplicate elements as well
	multiset<int> ms;
	ms.insert(1);
	ms.insert(4);
	ms.insert(3);
	ms.insert(3);
	ms.insert(9);
	ms.insert(8);
	ms.emplace(9);

	cout << "Count of 3 : " << ms.count(3) << endl;

	//Erase All occurences of 3
	ms.erase(3);

	//Erases first occurence of 9
	ms.erase(ms.find(9));

	for(auto it : ms){
		cout << it << " ";
	}
}

void explainunorderedSet(){
	// Can have any order, unique elements present
	unordered_set<int> us;
	us.insert(3);
	us.insert(1);
	us.insert(9);
	us.insert(3);
	us.insert(5);
	us.insert(10);

	for(auto it : us){
		cout << it << " ";
	}
}

void explainMap(){
	// Stores in Key Value Pair in sorted ordered of key
	map<int,int> mp;
	mp.insert({1,2});
	mp.emplace(2, 3);
	mp.emplace(3,1);

	cout << mp[3] << endl;	//Prints the value related to that key

	// auto itr = mp.find(2);
	// cout << *(itr).second << endl;

	for(auto it : mp){
		cout << it.first << " " << it.second << endl;
	}
}

bool comp(pair<int,int> p1, pair<int,int> p2){
	if(p1.second < p2.second){
		return true;
	}
	else if(p1.second == p2.second){
		if(p1.first > p2.first){
			return true;
		}
	}
	return false;
}

void explainAlgoFunctions(){
	vector<int> v;
	v.push_back(2);
	v.push_back(9);
	v.push_back(1);
	v.push_back(7);
	v.push_back(6);

	// Sorts in ascending order
	sort(v.begin(), v.end());

	// Sorts in descending order
	sort(v.begin(), v.end(), greater<int>());

	// Reverse a vector
	reverse(v.begin(), v.end());

	for(auto itr : v){
		cout << itr << " ";
	}
	cout << endl << endl;

	vector<pair<int,int>> p = { {1,2}, {4,5} , {1,4}, {9,2} };

	//sort it according to second element
	//if second element is same
	//then sort it according to first element but in descending

	//Sorts in accordance to first element only
	// sort(p.begin(), p.end());

	sort(p.begin(), p.end(), comp);

	for(int i=0;i<p.size();i++){
		cout << p[i].first << " " << p[i].second << endl;
	}

	cout << endl;

	int num = 6;
	cout << __builtin_popcount(num) << endl; // Gives no. of 1 bit in binary
	//representation of 6

	long long n = 31412312301293;
	cout << __builtin_popcountll(n) << endl;

	// Prints all permutations of a string
	string s = "123";
	// To print all permutations, better to sort it first
	sort(s.begin(),s.end());

	do{
		cout << s << endl;
	}while(next_permutation(s.begin(), s.end()));

	cout << endl;

	//Max Element in the array
	cout << *max_element(v.begin(), v.end());

	//Min Element in the array
	cout << *min_element(v.begin(), v.end());
}

int main(){
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

	// explainPairs();
	// explainVectors();
	// explainList();
	// explainDeque();
	// explainStack();
	// explainQueue();
	// explainPriorityQueue();
	// explainSet();
	// explainMultiSet();
	// explainunorderedSet();
	// explainMap();
	explainAlgoFunctions();
	return 0;
}