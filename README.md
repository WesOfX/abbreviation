#### Example Code
```
#include <iostream>

#include "abbr.hpp"

int main(){
	std::cout << abbr::number<int, 4>(-1000000);
	std::cout << std::endl;

	std::cout << abbr::number<int, 4>(-999999);
	std::cout << std::endl;

	std::cout << abbr::number<int, 4>(-100000);
	std::cout << std::endl;

	std::cout << abbr::number<int, 4>(-99999);
	std::cout << std::endl;

	std::cout << abbr::number<int, 4>(-10000);
	std::cout << std::endl;

	std::cout << abbr::number<int, 4>(-9999);
	std::cout << std::endl;

	std::cout << abbr::number<int, 4>(-1000);
	std::cout << std::endl;

	std::cout << abbr::number<int, 4>(-999);
	std::cout << std::endl;

	std::cout << abbr::number<int, 4>(-100);
	std::cout << std::endl;

	std::cout << abbr::number<int, 4>(-99);
	std::cout << std::endl;

	std::cout << abbr::number<int, 4>(-10);
	std::cout << std::endl;

	std::cout << abbr::number<int, 4>(-9);
	std::cout << std::endl;

	std::cout << abbr::number<int, 4>(-1);
	std::cout << std::endl;

	std::cout << abbr::number<int, 4>(0);
	std::cout << std::endl;

	std::cout << abbr::number<int, 4>(1);
	std::cout << std::endl;

	std::cout << abbr::number<int, 4>(9);
	std::cout << std::endl;

	std::cout << abbr::number<int, 4>(10);
	std::cout << std::endl;

	std::cout << abbr::number<int, 4>(99);
	std::cout << std::endl;

	std::cout << abbr::number<int, 4>(100);
	std::cout << std::endl;

	std::cout << abbr::number<int, 4>(999);
	std::cout << std::endl;

	std::cout << abbr::number<int, 4>(1000);
	std::cout << std::endl;

	std::cout << abbr::number<int, 4>(9999);
	std::cout << std::endl;

	std::cout << abbr::number<int, 4>(10000);
	std::cout << std::endl;

	std::cout << abbr::number<int, 4>(99999);
	std::cout << std::endl;

	std::cout << abbr::number<int, 4>(100000);
	std::cout << std::endl;

	std::cout << abbr::number<int, 4>(999999);
	std::cout << std::endl;

	std::cout << abbr::number<int, 4>(1000000);
	std::cout << std::endl;
}
```


#### Output
```
 Min
 Min
 Min
-99k
-10k
 -9k
 -1k
-999
-100
 -99
 -10
  -9
  -1
   0
   1
   9
  10
  99
 100
 999
1000
9999
 10K
 99K
100K
999K
 Max

```
