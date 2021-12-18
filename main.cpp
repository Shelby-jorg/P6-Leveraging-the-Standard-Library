#include <iostream>
#include <random>
#include <algorithm>
#include <numeric>
#include <string>
#include "Utility.h"
#include "Car.h"

bool anyPrime(const std::vector<int>& values);

template <typename T>
class Tag {
public:
    Tag(bool isTagged, T value) : _tagged{ isTagged }, _value{ value } {}

    bool isTagged() const { return _tagged; }
    T item() const { return _value; }

private:
    bool _tagged;
    T _value;
};

template <typename T>
std::ostream& operator<<(std::ostream& out, const Tag<T>& tag) {
    out << "TAG: tagged(" << (tag.isTagged() ? "true" : "false") << "), item(" << tag.item() << ")";
    return out;
}


int main() {
    // Below is the first problem, where the cars are sorted by price, lowest to highest
    auto cars = randomCars();
    std::cout << "Initial: " << cars << "\n";

    std::sort(cars.begin(), cars.end(), std::greater<Car>());
    std::cout << "Reversed: " << cars << "\n";

    // Below is problem 2, where the ints are sorted into a bitonic sequence
    auto integers = randomIntegers();
    std::cout << "Initial: " << integers << "\n";

    // This vector will be half sorted in increasing order, then reversed so and half sorted in increasing order
    int middle = integers.size() / 2;
    std::partial_sort(integers.begin(), integers.begin() + middle, integers.end());
    std::reverse(integers.begin(), integers.end());
    std::partial_sort(integers.begin(), integers.begin() + middle, integers.end());
    std::cout << "Bitonic: " << integers << "\n";

    // Below is problem 3
    auto cars = randomCars();
    std::cout << "Cars: " << cars << "\n";

    int sum = (std::accumulate(cars.begin(), cars.end(), 0)) / cars.size();
    std::cout << "The average price is: $" << sum << "\n";

    std::sort(cars.begin(), cars.end());
    std::cout << "The range is: $" << cars[0].price() << " - " << cars[cars.size() - 1].price() << "\n";

    // Below is problem 4
    auto integers = randomIntegers();
    std::cout << "Integers: " << integers << "\n";
    std::cout << "Are there any primes? " << (anyPrime(integers) ? "yes" : "no") << "\n";

    // Below is problem 5
    auto cars = randomCars();
    std::cout << "Cars: " << cars << "\n";

    std::vector<Tag<Car>> taggedCars;
    // TODO: populate 'taggedCars' with elements of type Tag<Car> where the tag is set to true
    //  only if the price < 10,000 or if the vin starts with a letter in A...F

    // TODO: arrange `taggedCars` so that the elements tagged `true` are at the beginning
    //  and `false` elements are at the ened
    std::cout << "Tagged Cars: " << taggedCars << "\n";
}

bool anyPrime(const std::vector<int>& values) {
    std::for_each(values.begin(), values.end(), isPrime);
}

bool isPrime(int num) {
    if (num == 0 || num == 1) {
        return false;
    }
    else {
        for (int i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                return false;
            }
        }
    }
    return true;
}