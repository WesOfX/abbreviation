#pragma once

#include <array>

namespace abbr{
template<typename T, std::size_t character_limit>
struct number{
	number(T num): num(num){
		static_assert(character_limit == 4, "abbr::number can only abbreviate numbers to 4 characters.");
	}

	T num;

	friend std::istream& operator>>(std::istream& is, number& rhs){
		// TODO

		return is;
	}

	friend std::ostream& operator<<(std::ostream& os, const number& rhs){
		// The string to upload
		std::array<char, character_limit> string;

		if(rhs.num < -99999){
			string[0] = ' ';
			string[1] = 'M';
			string[2] = 'i';
			string[3] = 'n';
		}
		else if(rhs.num < -9999){
			string[0] = '-';
			string[1] = (char)((-rhs.num / 10000) % 10 + '0');
			string[2] = (char)((-rhs.num / 1000) % 10 + '0');
			string[3] = 'k';
		}
		else if(rhs.num < -999){
			string[0] = ' ';
			string[1] = '-';
			string[2] = (char)((-rhs.num / 1000) % 10 + '0');
			string[3] = 'k';
		}
		else if(rhs.num < -99){
			string[0] = '-';
			string[1] = (char)((-rhs.num / 100) % 10 + '0');
			string[2] = (char)((-rhs.num / 10) % 10 + '0');
			string[3] = (char)(-rhs.num % 10 + '0');
		}
		else if(rhs.num < -9){
			string[0] = ' ';
			string[1] = '-';
			string[2] = (char)((-rhs.num / 10) % 10 + '0');
			string[3] = (char)(-rhs.num % 10 + '0');
		}
		else if(rhs.num < 0){
			string[0] = ' ';
			string[1] = ' ';
			string[2] = '-';
			string[3] = (char)(-rhs.num % 10 + '0');
		}
		else if(rhs.num < 10){
			string[0] = ' ';
			string[1] = ' ';
			string[2] = ' ';
			string[3] = (char)(rhs.num % 10 + '0');
		}
		else if(rhs.num < 100){
			string[0] = ' ';
			string[1] = ' ';
			string[2] = (char)((rhs.num / 10) % 10 + '0');
			string[3] = (char)(rhs.num % 10 + '0');
		}
		else if(rhs.num < 1000){
			string[0] = ' ';
			string[1] = (char)((rhs.num / 100) % 10 + '0');
			string[2] = (char)((rhs.num / 10) % 10 + '0');
			string[3] = (char)(rhs.num % 10 + '0');
		}
		else if(rhs.num < 10000){
			string[0] = (char)(rhs.num / 1000 + '0');
			string[1] = (char)((rhs.num / 100) % 10 + '0');
			string[2] = (char)((rhs.num / 10) % 10 + '0');
			string[3] = (char)(rhs.num % 10 + '0');
		}
		else if(rhs.num < 100000){
			string[0] = ' ';
			string[1] = (char)((rhs.num / 10000) % 10 + '0');
			string[2] = (char)((rhs.num / 1000) % 10 + '0');
			string[3] = 'K';
		}
		else if(rhs.num < 1000000){
			string[0] = (char)(rhs.num / 100000 + '0');
			string[1] = (char)((rhs.num / 10000) % 10 + '0');
			string[2] = (char)((rhs.num / 1000) % 10 + '0');
			string[3] = 'K';
		}
		else{
			string[0] = ' ';
			string[1] = 'M';
			string[2] = 'a';
			string[3] = 'x';
		}

		// Upload all the characters of the string
		for(auto& i: string) os << i;

		return os;
	}
};
};
