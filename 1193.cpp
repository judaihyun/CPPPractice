#include <iostream>
using namespace std;
#define A 0
#define B 1


int main() {
	int x;
	int arr[2] = { 1, 1  };
	int result[2] = { 0, };

	cin >> x;
	//x = 6;

	int count = 0;
	int i = 1;
	int j = 1;
	int group = 0;
	bool switches = true;

	while (i <= x) {
		group = 0;
		//cout << "i : " << i << endl;
		//cout << "---------------------------" << endl;

		if (switches == true) {    //  1, 3, 5
			arr[A] = i;
			arr[B] = 1;
			switches = false;
		}
		else if (switches == false) {  // 2,4,6
			arr[A] = 1;
			arr[B] = i;
			switches = true;
		}

		while (group < j) {
			if (count >= x ) {
				break;
			}
			result[A] = arr[A];
			result[B] = arr[B];
			if (switches == true) {
				arr[A] += 1;
				arr[B] -= 1;
			}
			else {
				arr[A] -= 1;
				arr[B] += 1;
			}
			count++;
		group++;
		}
	i++;
	j++;

	}


	cout << result[A] << "/" << result[B] << endl;


	return 0;
}








/*
#include <iostream>
using namespace std;

int main(){

	int x;
	cin >> x;
	int i;

	for (i = 1; x > 0; i++){
		x = x - i;
	}
	if (i%2 == 1){

		cout << i + x-1 << "/" << 1 - x << endl;

	}else if (i % 2 == 0){
		cout << 1-x << "/" << i+x-1 << endl;
	}

}

ÃâÃ³: http://copycode.tistory.com/136#comment14346730 [ITstory]

*/