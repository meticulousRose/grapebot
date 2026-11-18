#pragma once

namespace grape::ticks {

bool install();
bool patched();
void setCount(int ticks);

// Feeds the patched delta-accounting block: [0] keeps the warp the vanilla
// code expected, [1] is the timestep the accounting should quantize to
// (1/240 vanilla, 1/tps with the mod's TPS). No-op unless the macOS patch
// is installed.
void setTickRate(double tps, double warp);

}
