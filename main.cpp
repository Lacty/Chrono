
#include <iostream>
#include <chrono>
#include <ctime>
#include <string>


int main() {

  // chronoにあるtime_point型でnowを宣言
  // chronoにあるnow関数で今の時刻をnowに代入

  std::time_t time =
    std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());

  char buff[26];
  ctime_s(buff, sizeof(buff), &time);
  std::cout << buff << std::endl;


}