#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	string s = to_string(abs(a + b));
	if(a + b < 0) printf("-"); 
	for(int i = 0; i < s.length(); i++) {
		printf("%c", s[i]);
		if((s.length() - i - 1) % 3 == 0 && i != s.length() - 1) {
			printf(",");
		}
	}
	return 0;
}