/*
 * sct.h
 *
 *  Created on: Oct 9, 2024
 *      Author: 240209
 */

#ifndef SRC_SCT_H_
#define SRC_SCT_H_

void sct_init();
void sct_led(uint32_t value);
void sct_value(uint16_t value, uint8_t led);

#endif /* SRC_SCT_H_ */