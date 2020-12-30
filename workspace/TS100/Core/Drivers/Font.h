/*
 * Font.h
 *
 *  Created on: 17 Sep 2016
 *      Author: Ralim
 *
 *      ... This file contains the font...
 */

#ifndef FONT_H_
#define FONT_H_
#include "Translation.h"

#define FONT_12_WIDTH   12
// THE MAIN FONTS ARE NO LONGER HERE, MOVED TO PYTHON AUTO GEN
// THESE ARE ONLY THE SYMBOL FONTS

const uint8_t ExtraFontChars[] = {
//width = 12
//height = 16
		0x00, 0x18, 0x24, 0x24, 0x18, 0xC0, 0x40, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, // Degrees F
		0x00, 0x18, 0x24, 0x24, 0x18, 0x80, 0x40, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x08, 0x10, 0x10, 0x10, 0x00, 0x00, // Degrees C
		0x00, 0x00, 0x20, 0x30, 0x38, 0xFC, 0xFE, 0xFC, 0x38, 0x30, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00, // UP arrow

		0x00, 0xF0, 0x08, 0x0E, 0x02, 0x02, 0x02, 0x02, 0x0E, 0x08, 0xF0, 0x00, 0x00, 0x3F, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x3F, 0x00, // Battery Empty
		0x00, 0xF0, 0x08, 0x0E, 0x02, 0x02, 0x02, 0x02, 0x0E, 0x08, 0xF0, 0x00, 0x00, 0x3F, 0x40, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x40, 0x3F, 0x00, // Battery 1*/
		0x00, 0xF0, 0x08, 0x0E, 0x02, 0x02, 0x02, 0x02, 0x0E, 0x08, 0xF0, 0x00, 0x00, 0x3F, 0x40, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x40, 0x3F, 0x00, // Battery 2*/
		0x00, 0xF0, 0x08, 0x0E, 0x02, 0x02, 0x02, 0x02, 0x0E, 0x08, 0xF0, 0x00, 0x00, 0x3F, 0x40, 0x5C, 0x5C, 0x5C, 0x5C, 0x5C, 0x5C, 0x40, 0x3F, 0x00, // Battery 3*/
		0x00, 0xF0, 0x08, 0x0E, 0x02, 0x02, 0x02, 0x02, 0x0E, 0x08, 0xF0, 0x00, 0x00, 0x3F, 0x40, 0x5E, 0x5E, 0x5E, 0x5E, 0x5E, 0x5E, 0x40, 0x3F, 0x00, // Battery 4*/
		0x00, 0xF0, 0x08, 0x0E, 0x02, 0x02, 0x02, 0x02, 0x0E, 0x08, 0xF0, 0x00, 0x00, 0x3F, 0x40, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x40, 0x3F, 0x00, // Battery 5*/
		0x00, 0xF0, 0x08, 0x8E, 0x82, 0x82, 0x82, 0x82, 0x8E, 0x08, 0xF0, 0x00, 0x00, 0x3F, 0x40, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x40, 0x3F, 0x00, // Battery 6*/
		0x00, 0xF0, 0x08, 0xCE, 0xC2, 0xC2, 0xC2, 0xC2, 0xCE, 0x08, 0xF0, 0x00, 0x00, 0x3F, 0x40, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x40, 0x3F, 0x00, // Battery 7*/
		0x00, 0xF0, 0x08, 0xEE, 0xE2, 0xE2, 0xE2, 0xE2, 0xEE, 0x08, 0xF0, 0x00, 0x00, 0x3F, 0x40, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x40, 0x3F, 0x00, // Battery 8*/
		0x00, 0xF0, 0x08, 0xEE, 0xE2, 0xF2, 0xF2, 0xE2, 0xEE, 0x08, 0xF0, 0x00, 0x00, 0x3F, 0x40, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x40, 0x3F, 0x00, // Battery 9*/
		0x00, 0xF0, 0x08, 0xEE, 0xE2, 0xFA, 0xFA, 0xE2, 0xEE, 0x08, 0xF0, 0x00, 0x00, 0x3F, 0x40, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x40, 0x3F, 0x00, // Battery 10*/

		0x00, 0x00, 0x38, 0xC4, 0x00, 0x38, 0xC4, 0x00, 0x38, 0xC4, 0x00, 0x00, 0x00, 0x38, 0x3A, 0x39, 0x38, 0x3A, 0x39, 0x38, 0x3A, 0x39, 0x10, 0x10, // heating
		0x00, 0x60, 0xE0, 0xFE, 0xE0, 0xE0, 0xE0, 0xE0, 0xFE, 0xE0, 0x60, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0xFF, 0xFF, 0x03, 0x01, 0x00, 0x00, 0x00, // AC

		0xFC, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x82, 0x62, 0x1A, 0x02, 0xFC, 0x3F, 0x40, 0x42, 0x46, 0x4C, 0x58, 0x46, 0x41, 0x40, 0x40, 0x40, 0x3F, // ☑ (check box on, menu true)
		0xFC, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xFC, 0x3F, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x3F, // ☐ (check box off, menu false)

		/*
		 0x00,0x00,0x00,0x80,0x80,0xFE,0xFF,0x83,0x87,0x06,0x00,0x00,0x00,0x00,0x30,0x70,0x60,0x7F,0x3F,0x00,0x00,0x00,0x00,0x00, // Function?
		 0x00,0x70,0xFA,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xFF,0xFE,0x00,0x00,0x00,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x00,0x00, // a_
		 0x00,0x3C,0x7E,0xE7,0xC3,0xC3,0xC3,0xC3,0xE7,0x7E,0x3C,0x00,0x00,0x00,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x00,0x00, // 0_
		 0x55,0x00,0xAA,0x00,0x55,0x00,0xAA,0x00,0x55,0x00,0xAA,0x00,0x55,0x00,0xAA,0x00,0x55,0x00,0xAA,0x00,0x55,0x00,0xAA,0x00, // 25%  block
		 0xAA,0x55,0xAA,0x55,0xAA,0x55,0xAA,0x55,0xAA,0x55,0xAA,0x55,0xAA,0x55,0xAA,0x55,0xAA,0x55,0xAA,0x55,0xAA,0x55,0xAA,0x55, // 50% pipe
		 0xAA,0xFF,0x55,0xFF,0xAA,0xFF,0x55,0xFF,0xAA,0xFF,0x55,0xFF,0xAA,0xFF,0x55,0xFF,0xAA,0xFF,0x55,0xFF,0xAA,0xFF,0x55,0xFF, // 75% block
		 0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00, // | pipe
		 0x80,0x80,0x80,0x80,0x80,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00, // T pipe ,|
		 0xC0,0xC0,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x06,0x06,0xFE,0xFE,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00, // ,| double pipe
		 0x00,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00, //  || double pipe
		 0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x00,0x00,0x00,0x00,0x00,0x06,0x06,0xFE,0xFE,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00, // #NAME?//#NAME?
		 0xC0,0xC0,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x06,0x06,0x06,0x06,0x06,0x07,0x07,0x00,0x00,0x00,0x00,0x00, // ,^ double pupe
		 0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00, // #NAME?//#NAME?
		 0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01, // ,> pipe
		 0x80,0x80,0x80,0x80,0x80,0xFF,0xFF,0x80,0x80,0x80,0x80,0x80,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01, // _|_ pipe
		 0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x01,0x01,0x01,0x01,0x01,0xFF,0xFF,0x01,0x01,0x01,0x01,0x01, // ,|, pipe
		 0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x01,0x01,0x01,0x01,0x01, // |, pipe
		 0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01, // #NAME?//#NAME?
		 0x80,0x80,0x80,0x80,0x80,0xFF,0xFF,0x80,0x80,0x80,0x80,0x80,0x01,0x01,0x01,0x01,0x01,0xFF,0xFF,0x01,0x01,0x01,0x01,0x01, // #NAME?//#NAME?
		 0x00,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0xC0,0xC0,0xC0,0xC0,0xC0,0x00,0x00,0x07,0x07,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06, // ,> double pipe
		 0x00,0x00,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x00,0x00,0xFF,0xFF,0x00,0xFE,0xFE,0x06,0x06,0x06,0x06,0x06, // ^, double pipe
		 0xC0,0xC0,0xFF,0xFF,0x00,0xFF,0xFF,0xC0,0xC0,0xC0,0xC0,0xC0,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06, // _|_ double pipe
		 0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x06,0x06,0xFE,0xFE,0x00,0xFE,0xFE,0x06,0x06,0x06,0x06,0x06, // ,|, double pipe
		 0x00,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0xC0,0xC0,0xC0,0xC0,0xC0,0x00,0x00,0xFF,0xFF,0x00,0xFE,0xFE,0x06,0x06,0x06,0x06,0x06, // |, double pipe
		 0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06, // == double pipe
		 0xC0,0xC0,0xFF,0xFF,0x00,0xFF,0xFF,0xC0,0xC0,0xC0,0xC0,0xC0,0x06,0x06,0xFE,0xFE,0x00,0xFE,0xFE,0x06,0x06,0x06,0x06,0x06, // #NAME?//#NAME?
		 0x00,0x00,0x00,0x78,0xFC,0xCC,0x8C,0x0C,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0x3E,0x33,0x33,0x3F,0x1E,0x00,0x00,0x00, // Delta lowercase
		 0x00,0x00,0x00,0x00,0x00,0x7E,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 27 (')
		 0x80,0x80,0x80,0x80,0x80,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00, // ,^ pipe
		 0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x01,0x01,0x01,0x01,0x01, // | , pipe
		 0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, // solid block
		 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, // half block bottom
		 0x00,0x00,0x00,0x00,0x00,0xBF,0xBF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x3F,0x00,0x00,0x00,0x00,0x00, // 7C (|)
		 0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // top half solid block
		 0x00,0x00,0x0C,0xFC,0xFC,0x6C,0x60,0x60,0xE0,0xC0,0x00,0x00,0x00,0x00,0x30,0x3F,0x3F,0x36,0x06,0x06,0x07,0x03,0x00,0x00, // DE small
		 0x00,0x00,0x03,0xFF,0xFF,0x1B,0x18,0x18,0xF8,0xF0,0x00,0x00,0x00,0x00,0x30,0x3F,0x3F,0x36,0x06,0x06,0x07,0x03,0x00,0x00, // DE large
		 0x00,0x00,0x00,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ? (,)
		 0x00,0x00,0x00,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x06,0x06,0x06,0x06,0x06,0x00,0x00,0x00, // =
		 0x00,0x00,0x00,0x40,0x80,0x80,0xC0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // sideways comma
		 0x00,0x00,0x80,0xC0,0x80,0x00,0x00,0x80,0xC0,0x80,0x00,0x00,0x00,0x00,0x01,0x03,0x01,0x00,0x00,0x01,0x03,0x01,0x00,0x00, // ..
		 0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x01,0x00,0x00,0x00,0x00, // .
		 0x00,0x00,0x02,0x1F,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // tiny 1
		 0x00,0x00,0x00,0x00,0xF0,0xF0,0xF0,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00, // small block
		 */
		};

const uint8_t FontSymbols[] = { 0x00, 0x00, 0x00, 0xFC, 0xF8, 0xF0, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x0F, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00,
		0x00, // Right block
		0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xF0, 0xF8, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0F, 0x1F, 0x00, 0x00,
		0x00, // left block
		0x00, 0x00, 0x00, 0x10, 0x18, 0x1C, 0xFE, 0x1C, 0x18, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x0C, 0x1C, 0x3F, 0x1C, 0x0C, 0x04, 0x00,
		0x00, // UD arrow
		0x00, 0x00, 0x00, 0xFE, 0xFE, 0x00, 0x00, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x37, 0x37, 0x00, 0x00, 0x37, 0x37, 0x00, 0x00,
		0x00, // !!
		0x00, 0x38, 0x7C, 0xC6, 0x82, 0xFE, 0xFE, 0x02, 0xFE, 0xFE, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x00, 0x3F, 0x3F, 0x00,
		0x00, // paragraph
		0x00, 0x00, 0xDC, 0xFE, 0x22, 0x22, 0x22, 0x22, 0xE6, 0xC4, 0x00, 0x00, 0x00, 0x00, 0x08, 0x19, 0x11, 0x11, 0x11, 0x11, 0x1F, 0x0E, 0x00,
		0x00, // section
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38,
		0x00, // cursor
		0x00, 0x00, 0x00, 0x08, 0x0C, 0x0E, 0xFF, 0x0E, 0x0C, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x4C, 0x5C, 0x7F, 0x5C, 0x4C, 0x44, 0x00,
		0x00, // UD arrow
		0x00, 0x00, 0x00, 0x10, 0x18, 0x1C, 0xFE, 0x1C, 0x18, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00,
		0x00, // UP arrow
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x0C, 0x1C, 0x3F, 0x1C, 0x0C, 0x04, 0x00,
		0x00, // Down arrow
		0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0xF0, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x03, 0x01, 0x00,
		0x00, // right arrow
		0x00, 0x00, 0x80, 0xC0, 0xE0, 0xF0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, // left arrow
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xF0, 0x80, 0x80, 0x80,
		0xF0, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x01, 0x03, 0x07, 0x00, 0x00, 0x00, 0x07, 0x03, 0x01, 0x00, // LR arrow
		0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x04, 0x06, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x06, 0x04, // UP block
		0x00, 0x20, 0x60, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x60, 0x20, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00  // Down block
		};

const uint8_t WarningBlock24[] = {
		//width = 24
		//height = 16
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x30, 0x0C, 0x02, 0xF1, 0xF1, 0xF1, 0x02, 0x0C, 0x30, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xB0, 0x8C, 0x83, 0x80,
		0x80, 0x80, 0x80, 0xB3, 0xB3, 0xB3, 0x80, 0x80, 0x80, 0x80, 0x83, 0x8C, 0xB0, 0xC0, 0x00, 0x00 };

const uint8_t idleScreenBG[] = {
		//width = 84
		//height = 16
		0x00, 0xE0, 0x18, 0x04, 0x02, 0x02, 0x01, 0x41, 0x61, 0x61, 0x61, 0xE1, 0xC1, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0xC1, 0xE1, 0x61, 0x61,
		0x61, 0x41, 0x01, 0x01, 0x02, 0x02, 0x04, 0x18, 0xE0, 0x00, 0x00, 0xE0, 0x18, 0x04, 0x02, 0x02, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
		0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x99, 0x65, 0x01, 0x01, 0x81, 0x41, 0x01, 0x02, 0x02, 0x04, 0x18, 0xE0, 0x00, 0x07, 0x18, 0x20, 0x40, 0x40, 0x80, 0x82, 0x86, 0x86, 0x86, 0x87,
		0x83, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x83, 0x87, 0x86, 0x86, 0x86, 0x82, 0x80, 0x80, 0x40, 0x40, 0x20, 0x18, 0x07, 0x00, 0x00, 0x07,
		0x18, 0x20, 0x40, 0x40, 0x80, 0x82, 0x87, 0x85, 0x85, 0x85, 0x85, 0x87, 0x87, 0x85, 0x87, 0x85, 0x87, 0x87, 0x82, 0x82, 0x82, 0x80, 0x82, 0x80, 0x82, 0x82, 0x82, 0x92, 0x8A, 0x84, 0x82, 0x81,
		0x80, 0x80, 0x80, 0x40, 0x40, 0x20, 0x18, 0x07 };

const uint8_t disconnectedTipIcon[] = {		//
				//41 x 16
				0xE0, 0x18, 0x04, 0x02, 0x02, 0x01, 0x09, 0x11, 0x21, 0x41, 0x81, 0x81, 0x41, 0x21, 0x11, 0x09, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xF9, 0x09, 0xF9, 0x01, 0xF9, 0x09, 0xF9,
				0x01, 0x01, 0xF9, 0x09, 0xF9, 0x01, 0x02, 0x02, 0x04, 0x18, 0xE0,
				//
				0x07, 0x18, 0x20, 0x40, 0x40, 0x80, 0x90, 0x88, 0x84, 0x82, 0x81, 0x81, 0x82, 0x84, 0x88, 0x90, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xBB, 0xAA, 0xBB, 0x80, 0xBB, 0xAA, 0xBB,
				0x80, 0x80, 0xBB, 0xAA, 0xBB, 0x80, 0x40, 0x40, 0x20, 0x18, 0x07
		//
		};

/*
 * 16x16 icons
 * */
const uint8_t SettingsMenuIcons[] = {

// Soldering
//width = 16
//height = 16
		0x00, 0x02, 0x04, 0x08, 0x12, 0x24, 0xC4, 0x42, 0x82, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x07, 0x0A, 0x14, 0x28, 0x50, 0x60, 0x00,

		//Sleep
		//width = 16
		//height = 16
		0x00, 0xC6, 0xE6, 0xF6, 0xBE, 0x9E, 0x8E, 0x86, 0x00, 0x00, 0x40, 0x40, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x01, 0x01, 0x01, 0x45, 0x65, 0x75, 0x5D, 0x4C, 0x00, 0x06, 0x07, 0x07, 0x05, 0x04, 0x00,

		//Menu
		//width = 16
		//height = 16
		0x00, 0x80, 0x06, 0x86, 0x46, 0x06, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0x00, 0x00, 0x61, 0x60, 0x00, 0x00, 0x61, 0x61, 0x61, 0x61, 0x61, 0x61, 0x61, 0x61, 0x61, 0x00,

		//Wrench
		///width = 16
		//height = 16
		0x00, 0x18, 0x30, 0x32, 0x7E, 0x7C, 0xF0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x0F, 0x3E, 0x7E, 0x4C, 0x0C, 0x18, 0x00,
#ifdef NOTUSED
	//Calibration (Not used, kept for future menu layouts)
		//width = 16
		//height = 16
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE8, 0x70,
	0x7A, 0x5E, 0x8E, 0x1C, 0x30, 0x00, 0x00, 0x10, 0x38, 0x1C,
	0x0E, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00,
	#endif
		};

#endif /* FONT_H_ */
