#include <iostream>
#include <set>
#include <vector>

//У вас есть два массива A и B. Написать функцию, которая максимально быстро найдёт пересечение этих массивов.
std::vector<int> findIntersection(std::vector<int> A, std::vector<int> B)
{
	std::vector<int> result;
    result.clear();
	if (A.empty() || B.empty())
		return result;

    auto sizeA = A.size();
	std::set<int> setOfA(A.begin(), A.end());

    auto sizeB = B.size();
    std::set<int> setOfB(B.begin(), B.end());

    if(sizeA > sizeB)
    {
        for (unsigned int i = 0; i < sizeB; i++) {
            if (setOfA.find(B[i]) != setOfA.end()) {
                std::cout << " Found: " << B[i] << std::endl;
                result.push_back(B[i]);
            }
        }
    }
    else
    {
        for (unsigned int i = 0; i < sizeA; i++) {
            if (setOfB.find(A[i]) != setOfB.end()) {
                std::cout << " Found: " << A[i] << std::endl;
                result.push_back(A[i]);
            }
        }
    }

	return result;
}

int main()
{
    std::vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<int> B = {10, 21, 31, 41, 51, 61, 71, 81, 91, 101};

    std::vector<int> C = findIntersection(A, B);

    return 0;
}
