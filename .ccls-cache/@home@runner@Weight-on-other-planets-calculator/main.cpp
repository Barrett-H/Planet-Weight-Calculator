#include <iostream>

int main() {
  int weight;
  int weight2;
  int planet;
  
  std::cout << "What is your weight on Earth?\n";
  std::cin >> weight;
  
  std::cout << "What planet? (1-7)\n";
  std::cin >> planet;
  
  if (planet == 1) {
    weight2 = weight * 0.38;
    std::cout << "Your weight on Mercury is " << weight2 << "\n";
  } else if (planet == 2) {
    weight2 = weight * 0.91;
    std::cout << "Your weight on Venus is " << weight2 << "\n";
  } else if (planet == 3) {
    weight2 = weight * 0.38;
    std::cout << "Your weight on Mars is " << weight2 << "\n";
  } else if (planet == 4) {
    weight2 = weight * 2.34;
    std::cout << "Your weight on Jupiter is " << weight2 << "\n";
  } else if (planet == 5) {
    weight2 = weight * 1.06;
    std::cout << "Your weight on Saturn is " << weight2 << "\n";
  } else if (planet == 6) {
    weight2 = weight * 0.92;
    std::cout << "Your weight on Uranus is " << weight2 << "\n";
  } else {
    weight2 = weight * 1.19;
    std::cout << "Your weight on Neptune is " << weight2 << "\n";
  }
  std::cout << "You can use './main' to run this again.\n";
}