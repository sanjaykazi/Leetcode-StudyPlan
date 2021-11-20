class Solution {
	inline bool testAndSetBit(unsigned int *intArr, unsigned int offset) {
		unsigned int byteOff = offset >> 5;
		unsigned int bitOff = offset & ((1 << 5) - 1);

		unsigned int bit = intArr[byteOff] & (1 << bitOff);
		if (bit) {
			return true;
		} else {
			intArr[byteOff] |= 1 << bitOff;
			return false;
		}
	}
public:
	vector<string> findRepeatedDnaSequences(string s) {
		vector<string> result;
		if (s.length() < 11) {
			return result;
		}

		static const int intArrSize = 1 << (2 * 10 - 5);
		unsigned int dataArr[intArrSize] = {0};
		unsigned int recordArr[intArrSize] = {0};

		const char *str = s.c_str();
		int size = s.length();
		static const unsigned int mask = ((1 << 20) - 1);

		unsigned int data = 0;
		for (int i = 0; i < 10; ++i) {
			unsigned int twobits = (str[i] >> 1) & 0x3;
			twobits <<= ((9 - i) << 1);
			data |= twobits;
		}
		testAndSetBit(dataArr, data);

		char dna[11] = { 0 };
		for (int i = 10; i < size; ++i) {
			unsigned int twobits = (str[i] >> 1) & 0x3;

			data = ((data << 2) | twobits) & mask;
			bool hasSet = testAndSetBit(dataArr, data);
			if (!hasSet) {
				continue;
			}

			hasSet = testAndSetBit(recordArr, data);
			if (hasSet) {
				continue;
			}
			memcpy(dna, str + i - 9, 10);
			result.push_back(dna);
		}

		return result;
	}
};
