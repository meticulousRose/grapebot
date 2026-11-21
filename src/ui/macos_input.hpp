#pragma once

namespace grape::ui {



bool macosInputInit();


void macosInputShutdown();



void macosInputNewFrame();




using MacOSKeyHandler = void (*)(int key, bool pressed, bool ctrl, bool shift,
                                 bool alt);
void macosInputSetKeyHandler(MacOSKeyHandler handler);

void macSaveWindowFrame();
void macRestoreWindowFrame();



void macosInputMouseDebug(float* out);

}
