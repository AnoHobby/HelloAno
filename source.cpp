﻿import <cstdio>;
int main() {
	for (auto i = 0;
		putchar(
			[](this auto self, bool msb, auto... bits) {
				if constexpr (sizeof...(bits))return (msb << sizeof...(bits)) + self(bits...);
				else return msb;
			}(i == 4, (3 > i) * i, !((i + 1) % 4), (i != 4) * i, i & (5 > i)) + i * 2 + 97
				) - 115
		; ++i);
	return 0;
}
