//
// Created by l00454699 on 2020/10/16, 016.
//

#include "Event.h"

Event::Event(uint64_t c, int s) : clock(c), sn(s) {}

// 比较时间前后
bool Event::operator>(const Event& e) { return clock > e.clock; }

bool Event::operator<(const Event& e) { return clock < e.clock; }

void Event::execute(Simulator* simulator) {
    cout << sn << ": " << clock << endl;
    simulator->insert(this);
}
