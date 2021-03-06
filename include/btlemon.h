#ifndef BTLEMON_BTLEMON_H
#define BTLEMON_BTLEMON_H

#include <stdint.h>

typedef void (*btlemon_callback)(const uint8_t addr[6], const int8_t *rssi, const uint8_t *data, const uint8_t data_len);
void btlemon_set_callback(btlemon_callback callback);
void btlemon_stop();
int btlemon_run(int handle_signal);

#endif //BTLEMON_BTLEMON_H
