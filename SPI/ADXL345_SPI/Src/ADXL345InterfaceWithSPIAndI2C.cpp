/*
 *  ADXL345InterfaceWithSPIAndI2C.cpp
 *
 *  Created on: Apr 29, 2020
 *  Author: NghiaPham
 */

#include <iostream>
#include "SPIDevice.h"

 int main() {
	 SPIDevice spi(2, 0);
	 spi.setSpeed(500000);
	 std::cout << "The device ID is: " << (int)spi.readRegister(0x00) << std::endl;
	 spi.setMode(SPIDevice::MODE3);
	 spi.writeRegister(0x2D, 0x08);
	 spi.debugDumpRegisters(0x40);
//	 ADXL345 acc1(&spi);
//	 acc1.setResolution(ADXL345::NORMAL);
//	 acc1.setRange(ADXL345::PLUSMINUS_2_G);
//	 acc1.display();
	 return 0;
}
