import <iostream>;
int main() {
	for (int i = 0;
		putchar(
			[](this auto self, bool lsb, auto... bits) {
				if constexpr (sizeof...(bits))return (lsb << sizeof...(bits)) + self(bits...);
				else return lsb;
			}(i == 4, (3 > i) * i, !((i + 1) % 4), (i != 4) * i, i & (5 > i)) + i * 2 + 97
				) - 115
		; ++i);
	return 0;
}