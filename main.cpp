
#include <iostream>
#include <chrono>
#include <ctime>
#include <string>


int main() {

  // chrono�ɂ���time_point�^��now��錾
  // chrono�ɂ���now�֐��ō��̎�����now�ɑ��

  std::time_t time =
    std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());

  char buff[26];
  ctime_s(buff, sizeof(buff), &time);
  std::cout << buff << std::endl;


}