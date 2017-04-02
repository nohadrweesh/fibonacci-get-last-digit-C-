#include <iostream>

int get_fibonacci_last_digit_naive(int n) {
	if (n <= 1)
		return n;

	int previous = 0;
	int current = 1;

	for (int i = 0; i < n - 1; ++i) {
		int tmp_previous = previous;
		previous = current;
		current = tmp_previous + current;
	}

	return current % 10;
}

int get_fibonacci_last_digit_fast(int n) {
	if (n <= 1)
		return n;

	int previous = 0;
	int current = 1;

	for (int i = 0; i < n - 1; ++i) {
		int tmp_previous = previous;
		previous = current % 10;
		current = (tmp_previous + current) % 10;
	}

	return current;
}

int fibonacci_fast(int n) {
	// write your code here
	int f0 = 0, f1 = 1;
	if (n <= 1)
		return n;
	else{
		for (int i = 1; i < n - 1; ++i){
			int tmp = f0;
			f0 = f1;
			f1 = tmp + f1;
		}
		return f0 + f1;
	}
	return 0;
}

int main() {
	int n;
	std::cin >> n;
	int c = get_fibonacci_last_digit_fast(n);
	std::cout << c << '\n';
	/*while (true){
	std::cin >> n;
	int c = get_fibonacci_last_digit_naive(n);
	std::cout << "get_fibonacci_fast (" << n << ") = " << fibonacci_fast(n) << '\n';

	std::cout << "get_fibonacci_last_digit_naive (" << n << ") = " << c << '\n';

	std::cout << "get_fibonacci_last_digit_fast (" << n << ") = " << get_fibonacci_last_digit_fast(n) << '\n';

	}*/
	//system("pause");
}
