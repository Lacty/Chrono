
#include <iostream>
#include <chrono>
#include <ctime>
#include <string>


int main() {

  // chrono‚É‚ ‚étime_pointŒ^‚Ånow‚ğéŒ¾
  // chrono‚É‚ ‚énowŠÖ”‚Å¡‚Ì‚ğnow‚É‘ã“ü

  std::time_t time =
    std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());

  char buff[26];
  ctime_s(buff, sizeof(buff), &time);
  std::cout << buff << std::endl;


}