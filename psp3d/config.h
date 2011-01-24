/*
 * config.h
 *
  *
 * Copyright (C) 2010 Andr� Borrmann
 *
 * This program is free software;
 * you can redistribute it and/or modify it under the terms of the
 * GNU General Public License as published by the Free Software Foundation;
 * either version 3 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 * You should have received a copy of the GNU General Public License along with this program;
 * if not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef CONFIG_H_
#define CONFIG_H_

typedef struct {
	unsigned int color1;
	unsigned int color2;
	unsigned int clearScreen;
	unsigned int rotateIdentity;
	unsigned int needStage1;
	unsigned int activationBtn;
	unsigned int addViewMtx;
	unsigned int keepPixelmaskOrigin;
	unsigned int lateHook;
	float rotationDistance;
	float rotationAngle;
	//char rotationAxis;
}configData;

extern int readConfigFile(const char* gameTitle);

#endif /* CONFIG_H_ */
