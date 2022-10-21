// Generated by tools/x11_key_map.py
// Please do not edit this file manually.
// Edit the script instead.
#include <macro/keyboard.h>

#include "../platform.h"

#include <stdexcept>

namespace Macro {
namespace Keyboard {

int MapToOSKey(Key key) {
    // clang-format off
    switch (key) {
        case Key::BACKSPACE: return XK_BackSpace;
        case Key::TAB: return XK_Tab;
        case Key::CLEAR: return XK_Clear;
        case Key::ENTER: return XK_Return;
        case Key::PAUSE: return XK_Pause;
        case Key::CAPS_LOCK: return XK_Caps_Lock;
        case Key::ESCAPE: return XK_Escape;
        case Key::SPACE: return XK_space;
        case Key::PAGE_UP: return XK_Page_Up;
        case Key::PAGE_DOWN: return XK_Page_Down;
        case Key::END: return XK_End;
        case Key::HOME: return XK_Home;
        case Key::LEFT_ARROW: return XK_Left;
        case Key::UP_ARROW: return XK_Up;
        case Key::RIGHT_ARROW: return XK_Right;
        case Key::DOWN_ARROW: return XK_Down;
        case Key::SELECT: return XK_Select;
        case Key::EXECUTE: return XK_Execute;
        case Key::PRINT_SCREEN: return XK_Print;
        case Key::INSERT: return XK_Insert;
        case Key::DELETE: return XK_Delete;
        case Key::HELP: return XK_Help;
        case Key::ZERO: return XK_0;
        case Key::ONE: return XK_1;
        case Key::TWO: return XK_2;
        case Key::THREE: return XK_3;
        case Key::FOUR: return XK_4;
        case Key::FIVE: return XK_5;
        case Key::SIX: return XK_6;
        case Key::SEVEN: return XK_7;
        case Key::EIGHT: return XK_8;
        case Key::NINE: return XK_9;
        case Key::A: return XK_A;
        case Key::B: return XK_B;
        case Key::C: return XK_C;
        case Key::D: return XK_D;
        case Key::E: return XK_E;
        case Key::F: return XK_F;
        case Key::G: return XK_G;
        case Key::H: return XK_H;
        case Key::I: return XK_I;
        case Key::J: return XK_J;
        case Key::K: return XK_K;
        case Key::L: return XK_L;
        case Key::M: return XK_M;
        case Key::N: return XK_N;
        case Key::O: return XK_O;
        case Key::P: return XK_P;
        case Key::Q: return XK_Q;
        case Key::R: return XK_R;
        case Key::S: return XK_S;
        case Key::T: return XK_T;
        case Key::U: return XK_U;
        case Key::V: return XK_V;
        case Key::W: return XK_W;
        case Key::X: return XK_X;
        case Key::Y: return XK_Y;
        case Key::Z: return XK_Z;
        case Key::NUMPAD0: return XK_KP_0;
        case Key::NUMPAD1: return XK_KP_1;
        case Key::NUMPAD2: return XK_KP_2;
        case Key::NUMPAD3: return XK_KP_3;
        case Key::NUMPAD4: return XK_KP_4;
        case Key::NUMPAD5: return XK_KP_5;
        case Key::NUMPAD6: return XK_KP_6;
        case Key::NUMPAD7: return XK_KP_7;
        case Key::NUMPAD8: return XK_KP_8;
        case Key::NUMPAD9: return XK_KP_9;
        case Key::MULTIPLY: return XK_KP_Multiply;
        case Key::ADD: return XK_KP_Add;
        case Key::SEPARATOR: return XK_KP_Separator;
        case Key::SUBTRACT: return XK_KP_Subtract;
        case Key::DECIMAL: return XK_KP_Decimal;
        case Key::DIVIDE: return XK_KP_Divide;
        case Key::F1: return XK_F1;
        case Key::F2: return XK_F2;
        case Key::F3: return XK_F3;
        case Key::F4: return XK_F4;
        case Key::F5: return XK_F5;
        case Key::F6: return XK_F6;
        case Key::F7: return XK_F7;
        case Key::F8: return XK_F8;
        case Key::F9: return XK_F9;
        case Key::F10: return XK_F10;
        case Key::F11: return XK_F11;
        case Key::F12: return XK_F12;
        case Key::NUM_LOCK: return XK_Num_Lock;
        case Key::SCROLL_LOCK: return XK_Scroll_Lock;
        case Key::LSHIFT: return XK_Shift_L;
        case Key::RSHIFT: return XK_Shift_R;
        case Key::LCTRL: return XK_Control_L;
        case Key::RCTRL: return XK_Control_R;
        case Key::LALT: return XK_Alt_L;
        case Key::RALT: return XK_Alt_R;
        case Key::LSUPER: return XK_Super_L;
        case Key::RSUPER: return XK_Super_R;
        case Key::MENU: return XK_Menu;
        case Key::COLON: return XK_colon;
        case Key::PLUS: return XK_plus;
        case Key::COMMA: return XK_comma;
        case Key::MINUS: return XK_minus;
        case Key::PERIOD: return XK_period;
        case Key::SLASH: return XK_slash;
        case Key::TILDE: return XK_asciitilde;
        case Key::LEFT_BRACKET: return XK_bracketleft;
        case Key::BACKSLASH: return XK_backslash;
        case Key::RIGHT_BRACKET: return XK_bracketright;
        case Key::QUOTE: return XK_apostrophe;
        default:
            throw std::runtime_error("Unrecognized key (MapToOSKey): " + std::to_string(key));
    }
    // clang-format on
}

Key MapFromOSKey(int osKey) {
    // clang-format off
    switch (osKey) {
        case XK_BackSpace: return Key::BACKSPACE;
        case XK_Tab: return Key::TAB;
        case XK_Clear: return Key::CLEAR;
        case XK_Return: return Key::ENTER;
        case XK_Pause: return Key::PAUSE;
        case XK_Caps_Lock: return Key::CAPS_LOCK;
        case XK_Escape: return Key::ESCAPE;
        case XK_space: return Key::SPACE;
        case XK_Page_Up: return Key::PAGE_UP;
        case XK_Page_Down: return Key::PAGE_DOWN;
        case XK_End: return Key::END;
        case XK_Home: return Key::HOME;
        case XK_Left: return Key::LEFT_ARROW;
        case XK_Up: return Key::UP_ARROW;
        case XK_Right: return Key::RIGHT_ARROW;
        case XK_Down: return Key::DOWN_ARROW;
        case XK_Select: return Key::SELECT;
        case XK_Execute: return Key::EXECUTE;
        case XK_Print: return Key::PRINT_SCREEN;
        case XK_Insert: return Key::INSERT;
        case XK_Delete: return Key::DELETE;
        case XK_Help: return Key::HELP;
        case XK_0: return Key::ZERO;
        case XK_1: return Key::ONE;
        case XK_2: return Key::TWO;
        case XK_3: return Key::THREE;
        case XK_4: return Key::FOUR;
        case XK_5: return Key::FIVE;
        case XK_6: return Key::SIX;
        case XK_7: return Key::SEVEN;
        case XK_8: return Key::EIGHT;
        case XK_9: return Key::NINE;
        case XK_A: return Key::A;
        case XK_B: return Key::B;
        case XK_C: return Key::C;
        case XK_D: return Key::D;
        case XK_E: return Key::E;
        case XK_F: return Key::F;
        case XK_G: return Key::G;
        case XK_H: return Key::H;
        case XK_I: return Key::I;
        case XK_J: return Key::J;
        case XK_K: return Key::K;
        case XK_L: return Key::L;
        case XK_M: return Key::M;
        case XK_N: return Key::N;
        case XK_O: return Key::O;
        case XK_P: return Key::P;
        case XK_Q: return Key::Q;
        case XK_R: return Key::R;
        case XK_S: return Key::S;
        case XK_T: return Key::T;
        case XK_U: return Key::U;
        case XK_V: return Key::V;
        case XK_W: return Key::W;
        case XK_X: return Key::X;
        case XK_Y: return Key::Y;
        case XK_Z: return Key::Z;
        case XK_KP_0: return Key::NUMPAD0;
        case XK_KP_1: return Key::NUMPAD1;
        case XK_KP_2: return Key::NUMPAD2;
        case XK_KP_3: return Key::NUMPAD3;
        case XK_KP_4: return Key::NUMPAD4;
        case XK_KP_5: return Key::NUMPAD5;
        case XK_KP_6: return Key::NUMPAD6;
        case XK_KP_7: return Key::NUMPAD7;
        case XK_KP_8: return Key::NUMPAD8;
        case XK_KP_9: return Key::NUMPAD9;
        case XK_KP_Multiply: return Key::MULTIPLY;
        case XK_KP_Add: return Key::ADD;
        case XK_KP_Separator: return Key::SEPARATOR;
        case XK_KP_Subtract: return Key::SUBTRACT;
        case XK_KP_Decimal: return Key::DECIMAL;
        case XK_KP_Divide: return Key::DIVIDE;
        case XK_F1: return Key::F1;
        case XK_F2: return Key::F2;
        case XK_F3: return Key::F3;
        case XK_F4: return Key::F4;
        case XK_F5: return Key::F5;
        case XK_F6: return Key::F6;
        case XK_F7: return Key::F7;
        case XK_F8: return Key::F8;
        case XK_F9: return Key::F9;
        case XK_F10: return Key::F10;
        case XK_F11: return Key::F11;
        case XK_F12: return Key::F12;
        case XK_Num_Lock: return Key::NUM_LOCK;
        case XK_Scroll_Lock: return Key::SCROLL_LOCK;
        case XK_Shift_L: return Key::LSHIFT;
        case XK_Shift_R: return Key::RSHIFT;
        case XK_Control_L: return Key::LCTRL;
        case XK_Control_R: return Key::RCTRL;
        case XK_Alt_L: return Key::LALT;
        case XK_Alt_R: return Key::RALT;
        case XK_Super_L: return Key::LSUPER;
        case XK_Super_R: return Key::RSUPER;
        case XK_Menu: return Key::MENU;
        case XK_colon: return Key::COLON;
        case XK_plus: return Key::PLUS;
        case XK_comma: return Key::COMMA;
        case XK_minus: return Key::MINUS;
        case XK_period: return Key::PERIOD;
        case XK_slash: return Key::SLASH;
        case XK_asciitilde: return Key::TILDE;
        case XK_bracketleft: return Key::LEFT_BRACKET;
        case XK_backslash: return Key::BACKSLASH;
        case XK_bracketright: return Key::RIGHT_BRACKET;
        case XK_apostrophe: return Key::QUOTE;
        default:
            throw std::runtime_error("Unrecognized key (MapFromOSKey): " + std::to_string(osKey));
    }
    // clang-format on
}

}  // namespace Keyboard
}  // namespace Macro