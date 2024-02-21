/* 
 * File:   ascii.h
 * Author: rayzo
 *
 * Created on 12 december 2023, 13:11
 */

#ifndef ASCII_H
#define	ASCII_H
const char ascii[128][5]={
{0x08,0x1C,0x3E,0x7F,0x00}, //0 <
{0x30,0x35,0x48,0x40,0x30}, //1 �
{0x45,0x29,0x11,0x21,0x7D}, //2 notx
{0x7D,0x09,0x05,0x05,0x79}, //3 big N
{0x7D,0x09,0x11,0x21,0x7D}, //4 not n
{0x38,0x44,0x44,0x38,0x44}, //5 alpha
{0x7E,0x01,0x29,0x2E,0x10}, //6 beta
{0x30,0x4A,0x4D,0x49,0x30}, //7 delta
{0x60,0x50,0x48,0x50,0x60}, //8 deltasign
{0x1E,0x04,0x04,0x38,0x40}, //9 eta
{0x3E,0x49,0x49,0x49,0x3E}, //10 lamda
{0x62,0x14,0x08,0x10,0x60}, //11 yeta
{0x40,0x3C,0x20,0x20,0x1C}, //12 magma
{0x08,0x7C,0x04,0x7C,0x02}, //13 pi
{0x38,0x44,0x44,0x3C,0x04}, //14 sigma
{0x41,0x63,0x55,0x49,0x41}, //15 cumulative
{0x10,0x08,0x78,0x08,0x04},//16 tau
{0x18,0x24,0x7E,0x24,0x18},//17 phi
{0x5E,0x61,0x01,0x61,0x5E},//18 omega
{0x78,0x14,0x15,0x14,0x78},//19 �
{0x38,0x44,0x45,0x3C,0x40},//20 �
{0x78,0x15,0x14,0x15,0x78},//21 �
{0x38,0x45,0x44,0x3D,0x40},//22 �
{0x3C,0x43,0x42,0x43,0x3C},//23 �
{0x38,0x45,0x44,0x45,0x38},//24 �
{0x3C,0x41,0x40,0x41,0x3C},//25 �
{0x38,0x42,0x40,0x42,0x38},//26 �
{0x08,0x08,0x2A,0x1C,0x08},//27 arrow 
{0x20,0x7E,0x02,0x02,0x02},//28 root
{0x12,0x19,0x15,0x12,0x00},//29 tweede2
{0x48,0x7E,0x49,0x41,0x42},//30 �
{0x01,0x12,0x7C,0x12,0x01},//31 �
{0x00,0x00,0x00,0x00,0x00},//32(space)
{0x00,0x00,0x5F,0x00,0x00},//33 !
{0x00,0x03,0x00,0x03,0x00},//34 "
{0x14,0x7F,0x14,0x7F,0x14},//35 #
{0x24,0x2A,0x7F,0x2A,0x12},//36 $
{0x23,0x13,0x08,0x64,0x62},//37 %
{0x36,0x49,0x56,0x20,0x50},//38 &
{0x00,0x0B,0x07,0x00,0x00},//39 '
{0x00,0x00,0x3E,0x41,0x00},//40 (
{0x00,0x41,0x3E,0x00,0x00},//41 )
{0x08,0x2A,0x1C,0x2A,0x08},//42 *
{0x08,0x08,0x3E,0x08,0x08},//43 +
{0x00,0x58,0x38,0x00,0x00},//44 ,
{0x08,0x08,0x08,0x08,0x08},//45 -
{0x00,0x30,0x30,0x00,0x00},//46 .
{0x20,0x10,0x08,0x04,0x02},//47 /
{0x3E,0x51,0x49,0x45,0x3E},//48 0
{0x00,0x42,0x7F,0x40,0x00},//49%d  1
{0x62,0x51,0x49,0x49,0x46},//50 2
{0x22,0x41,0x49,0x49,0x36},//51 3
{0x18,0x14,0x12,0x7F,0x10},//52 4
{0x27,0x45,0x45,0x45,0x39},//53 5
{0x3C,0x4A,0x49,0x49,0x30},//54 6
{0x01,0x71,0x09,0x05,0x03},//55 7
{0x36,0x49,0x49,0x49,0x37},//56 8
{0x06,0x49,0x49,0x29,0x1E},//57 9
{0x00,0x36,0x36,0x00,0x00},//58 :
{0x00,0x5B,0x3B,0x00,0x00},//59 ;
{0x00,0x08,0x14,0x22,0x41},//60 <
{0x14,0x14,0x14,0x14,0x14},//61 =
{0x41,0x22,0x14,0x08,0x00},//62 >
{0x02,0x01,0x51,0x09,0x06},//63 ?
{0x3E,0x41,0x5D,0x55,0x1E},//64 @
{0x7E,0x09,0x09,0x09,0x7E},//65 A
{0x7E,0x49,0x49,0x49,0x36},//66 B
{0x3E,0x41,0x41,0x41,0x22},//67 C
{0x7F,0x41,0x41,0x41,0x3E},//68 D
{0x7F,0x49,0x49,0x49,0x41},//69 E
{0x7F,0x09,0x09,0x09,0x01},//70 F
{0x3E,0x41,0x41,0x51,0x32},//71 G
{0x7F,0x08,0x08,0x08,0x7F},//72 H
{0x00,0x41,0x7F,0x41,0x00},//73 I
{0x20,0x40,0x40,0x40,0x3F},//74 J
{0x7F,0x08,0x14,0x22,0x41},//75 K
{0x7F,0x40,0x40,0x40,0x40},//76 L
{0x7F,0x02,0x0C,0x02,0x7F},//77 M
{0x7F,0x04,0x08,0x10,0x7F},//78 N
{0x3E,0x41,0x41,0x41,0x3E},//79 O
{0x7F,0x09,0x09,0x09,0x06},//80 P
{0x3E,0x41,0x51,0x21,0x5E},//81 Q
{0x7F,0x09,0x19,0x29,0x46},//82 R
{0x26,0x49,0x49,0x49,0x32},//83 S
{0x01,0x01,0x7F,0x01,0x01},//84 T
{0x3F,0x40,0x40,0x40,0x3F},//85 U
{0x07,0x18,0x60,0x18,0x07},//86 V
{0x7F,0x20,0x18,0x20,0x7F},//87 W
{0x63,0x14,0x08,0x14,0x63},//88 X
{0x03,0x04,0x78,0x04,0x03},//89 Y
{0x61,0x51,0x49,0x45,0x43},//90 Z
{0x00,0x00,0x7F,0x41,0x41},//91 [
{0x02,0x04,0x08,0x10,0x20},/*92 \ */
{0x41,0x41,0x7F,0x00,0x00},//93 ]
{0x04,0x02,0x7F,0x02,0x04},//94 -
{0x40,0x40,0x40,0x40,0x40},//95 _
{0x00,0x07,0x0B,0x00,0x00},//96 `
{0x38,0x44,0x44,0x3C,0x40},//97 a
{0x7F,0x48,0x44,0x44,0x38},//98 b
{0x38,0x44,0x44,0x44,0x44},//99 c
{0x38,0x44,0x44,0x48,0x7F},//100 d
{0x38,0x54,0x54,0x54,0x08},//101 e
{0x08,0x7E,0x09,0x02,0x00},//102 f
{0x08,0x14,0x54,0x54,0x3C},//103 g
{0x7F,0x08,0x04,0x04,0x78},//104 h
{0x00,0x44,0x7D,0x40,0x00},//105 i
{0x20,0x40,0x44,0x3D,0x00},//106 j
{0x00,0x7F,0x10,0x28,0x44},//107 k
{0x00,0x41,0x7F,0x40,0x00},//108 l
{0x78,0x04,0x18,0x04,0x78},//109 m
{0x7C,0x08,0x04,0x04,0x78},//110 n
{0x38,0x44,0x44,0x44,0x38},//111 o
{0x7C,0x14,0x24,0x24,0x18},//112 p
{0x18,0x24,0x14,0x7C,0x40},//113 q
{0x00,0x7C,0x08,0x04,0x04},//114 r
{0x48,0x54,0x54,0x54,0x20},//115 s
{0x04,0x3E,0x44,0x20,0x00},//116 t
{0x3C,0x40,0x40,0x20,0x7C},//117 u
{0x1C,0x20,0x40,0x20,0x1C},//118 v
{0x3C,0x40,0x30,0x40,0x3C},//119 w
{0x44,0x28,0x10,0x28,0x44},//120 x
{0x04,0x48,0x30,0x08,0x04},//121 y
{0x44,0x64,0x54,0x4C,0x44},//122 z
{0x00,0x08,0x36,0x41,0x00},//123 {
{0x00,0x00,0x77,0x00,0x00},//124 |
{0x00,0x41,0x36,0x08,0x00},//125 }
{0x08,0x04,0x08,0x10,0x08},//126 ~
{0x2A,0x55,0x2A,0x55,0x2A} //127
};
const int adcBounds[42] = {0  , 25 , 50 , 75 , 100, 125, 150, 175, 200, 225, 250, 
                          275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525,
                          550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800,
                          825, 850, 875, 900, 925, 950, 975, 1000,1025};

const char volumeValue[5][10]= {{'0',' '}, {'1',' '}, {'2',' '}, {3, }, {4, }, {5, }, {6, }, {7, }, {8, }, {9, },
{1, 0}, {1, 1}, {1, 2}, {1, 3}, {1, 4}, {1, 5}, {1, 6}, {1, 7}, {1, 8}, {1, 9},
{2, 0}, {2, 1}, {2, 2}, {2, 3}, {2, 4}, {2, 5}, {2, 6}, {2, 7}, {2, 8}, {2, 9},
{3, 0}, {3, 1}, {3, 2}, {3, 3}, {3, 4}, {3, 5}, {3, 6}, {3, 7}, {3, 8}, {3, 9},
{4, 0}, {4, 1}, {4, 2}, {4, 3}, {4, 4}, {4, 5}, {4, 6}, {4, 7}, {4, 8}, {4, 9}};

#endif	/* ASCII_H */

