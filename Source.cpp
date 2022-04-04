#include <iostream>

bool chek(int x) {
	return (x % 2 == 0);

}

int main(){
	int x;
	std::cin >> x;
	if (chek(x) == 1 && x!=2)std::cout << "YES";
	else std::cout << "NO";
	std::cout << "i am test"<<'\n';
	std::cout << "i am test!!!!!!!!" << '\n';
}


