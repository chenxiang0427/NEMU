#include <utils.h>

NEMUState nemu_state = { .state = NEMU_STOP };

int is_exit_status_bad() {
  int good = (nemu_state.state == NEMU_END && nemu_state.halt_ret == 0) ||
    (nemu_state.state == NEMU_QUIT);
  Log("\nnemu_state = %d\ngood = %d/n!good = %d\n",nemu_state.state,good,!good);
  return !good;
}
