#pragma once

namespace grape::ticks {

bool install();
bool patched();
void setCount(int ticks);





void setTickRate(double tps, double warp);

}
