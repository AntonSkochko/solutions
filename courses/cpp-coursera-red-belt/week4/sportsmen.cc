#include <iostream>
#include <list>
#include <vector>

// У каждого спортсмена на футболке написан уникальный номер. Спортсмены по очереди выходят
// из раздевалки и должны построиться на стадионе. Тренер каждому выходящему спортсмену
// называет номер того спортсмена, перед которым нужно встать. Если спортсмена с названным
// номером на поле нет, то нужно встать в конец шеренги.
//
// В стандартном вводе сначала задано натуральное число n, не превосходящее 100000, —
// количество спортсменов. Далее идут n пар неотрицательных целых чисел, не превосходящих
// 100000. Первое число в паре — номер очередного выходящего спортсмена. Второе число в
// паре — номер того спортсмена, перед которым должен встать текущий.
//
// Напечатайте в стандартный вывод номера спортсменов в порядке построения на поле.
//
// Ограничение по времени — 0,8 с.

using std::list;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main(){
  size_t n, cur, next;
  cin >> n;
  const size_t MAX_AMMOUNT = 100000;
  list<size_t> line;
  vector<list<size_t>::iterator> line_it(MAX_AMMOUNT, line.end());
  while(n-- > 0){
    cin >> cur >> next;
    line_it[cur] = line.insert(line_it[next], cur);
  }
  for(auto& i : line){
    cout << i << " ";
  }
  cout << endl;
}

