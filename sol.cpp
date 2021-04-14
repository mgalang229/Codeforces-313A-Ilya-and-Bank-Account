#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	// store the last digit
	int last_digit = n % 10;
	// store the number without the last digit
	int remove_last_digit = n / 10;
	// store the number without the second last digit and add back the last digit
	int remove_second_last_digit = (n / 100) * 10 + last_digit;
	if (n >= 0) {
		// if n >= 0, then print n itself
		cout << n;
	} else if (remove_last_digit > remove_second_last_digit) {
		// check if the removing the last digit is greater than removing the second last digit
		cout << remove_last_digit;
	} else {
		// otherwise, choose the newly formed number where the second last digit was removed
		cout << remove_second_last_digit;
	}
	cout << '\n';
	return 0;
}
