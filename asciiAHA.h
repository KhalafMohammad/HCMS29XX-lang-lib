/* 
 * File:   asciiAHA.h
 * Author: Arabic, Hebrew and (StarWars's) Aurebech by Mohammad Khalaf
 *
 * Created on 3 February 2024, 16:56*/
#ifndef ASCIIAHA_H
#define	ASCIIAHA_H
//Arabic
const char arabic[128][5]={
        {0x08, 0x1C, 0x3E, 0x7F, 0x00},            // Code for char<
        {0x30, 0x35, 0x48, 0x40, 0x30},            // Code for char�
        {0x45, 0x29, 0x11, 0x21, 0x7D},            // Code for charnotx
        {0x7D, 0x09, 0x05, 0x05, 0x79},            // Code for charbig N
        {0x7D, 0x09, 0x11, 0x21, 0x7D},            // Code for charnot n
        {0x38, 0x44, 0x44, 0x38, 0x44},            // Code for charalpha
        {0x7E, 0x01, 0x29, 0x2E, 0x10},            // Code for charbeta
        {0x30, 0x4A, 0x4D, 0x49, 0x30},            // Code for chardelta
        {0x60, 0x50, 0x48, 0x50, 0x60},            // Code for chardeltasign
        {0x1E, 0x04, 0x04, 0x38, 0x40},            // Code for chareta
        {0x3E, 0x49, 0x49, 0x49, 0x3E},            // Code for char lamda
        {0x62, 0x14, 0x08, 0x10, 0x60},            // Code for char yeta
        {0x40, 0x3C, 0x20, 0x20, 0x1C},            // Code for char magma
        {0x08, 0x7C, 0x04, 0x7C, 0x02},            // Code for char pi
        {0x38, 0x44, 0x44, 0x3C, 0x04},            // Code for char sigma
        {0x41, 0x63, 0x55, 0x49, 0x41},            // Code for char cumulative
        {0x10, 0x08, 0x78, 0x08, 0x04},            // Code for char tau
        {0x18, 0x24, 0x7E, 0x24, 0x18},            // Code for char phi
        {0x5E, 0x61, 0x01, 0x61, 0x5E},            // Code for char omega
        {0x78, 0x14, 0x15, 0x14, 0x78},            // Code for char �
        {0x38, 0x44, 0x45, 0x3C, 0x40},            // Code for char �
        {0x78, 0x15, 0x14, 0x15, 0x78},            // Code for char �
        {0x38, 0x45, 0x44, 0x3D, 0x40},            // Code for char �
        {0x3C, 0x43, 0x42, 0x43, 0x3C},            // Code for char �
        {0x38, 0x45, 0x44, 0x45, 0x38},            // Code for char �
        {0x3C, 0x41, 0x40, 0x41, 0x3C},            // Code for char �
        {0x38, 0x42, 0x40, 0x42, 0x38},            // Code for char �
        {0x08, 0x08, 0x2A, 0x1C, 0x08},            // Code for char arrow 
        {0x20, 0x7E, 0x02, 0x02, 0x02},            // Code for char root
        {0x12, 0x19, 0x15, 0x12, 0x00},            // Code for char tweede2
        {0x48, 0x7E, 0x49, 0x41, 0x42},            // Code for char �
        {0x01, 0x12, 0x7C, 0x12, 0x01},            // Code for char �
        {0x00, 0x00, 0x00, 0x00, 0x00},            // Code for char space
        {0x00, 0x5F, 0x00, 0x00, 0x00},            // Code for char !
        {0x00, 0x03, 0x00, 0x03, 0x00},            // Code for char "
        {0x14, 0x7F, 0x14, 0x7F, 0x14},            // Code for char #
        {0x24, 0x2A, 0x7F, 0x2A, 0x12},            // Code for char $
        {0x23, 0x13, 0x08, 0x64, 0x62},            // Code for char %
        {0x36, 0x49, 0x56, 0x20, 0x50},            // Code for char &
        {0x00, 0x00, 0x0C, 0x00, 0x00},            // Code for char '
        {0x00, 0x00, 0x3E, 0x41, 0x00},            // Code for char (
        {0x00, 0x41, 0x3E, 0x00, 0x00},            // Code for char )
        {0x08, 0x2A, 0x1C, 0x2A, 0x08},            // Code for char *
        {0x08, 0x08, 0x3E, 0x08, 0x08},            // Code for char +
        {0x00, 0x00, 0x58, 0x38, 0x00},            // Code for char ,
        {0x00, 0x00, 0x10, 0x10, 0x00},            // Code for char -
        {0x00, 0x00, 0x30, 0x30, 0x00},            // Code for char .
        {0x20, 0x10, 0x08, 0x04, 0x02},            // Code for char /
        {0x00, 0x00, 0x30, 0x30, 0x00},            // Code for char 0
        {0x00, 0x00, 0x3E, 0x00, 0x00},            // Code for char 1
        {0x00, 0x7E, 0x08, 0x08, 0x06},            // Code for char 2
        {0x7E, 0x08, 0x0E, 0x08, 0x06},            // Code for char 3
        {0x00, 0x34, 0x4A, 0x4A, 0x00},            // Code for char 4
        {0x00, 0x1C, 0x22, 0x22, 0x1C},            // Code for char 5
        {0x02, 0x02, 0x02, 0x7E, 0x00},            // Code for char 6
        {0x0E, 0x38, 0x60, 0x38, 0x0E},            // Code for char 7
        {0x70, 0x1C, 0x06, 0x1C, 0x70},            // Code for char 8
        {0x06, 0x09, 0x09, 0x7E, 0x00},            // Code for char 9
        {0x00, 0x00, 0x24, 0x00, 0x00},            // Code for char :
        {0x00, 0x00, 0x64, 0x00, 0x00},            // Code for char ;
        {0x00, 0x10, 0x28, 0x44, 0x00},            // Code for char <
        {0x00, 0x14, 0x14, 0x14, 0x00},            // Code for char =
        {0x00, 0x44, 0x28, 0x10, 0x00},            // Code for char >
        {0x02, 0x01, 0x51, 0x09, 0x06},            // Code for char ?
        {0x3E, 0x41, 0x5D, 0x55, 0x1E},            // Code for char @
        {0x00, 0x01, 0x7D, 0x01, 0x00},            // Code for char ا
        {0x08, 0x10, 0x50, 0x10, 0x0C},            // Code for char ب
        {0x38, 0x20, 0x38, 0x10, 0x18},            // Code for char س
        {0x08, 0x12, 0x13, 0x12, 0x0C},            // Code for char ث
        {0x00, 0x31, 0x49, 0x5E, 0x48},            // Code for char ج
        {0x00, 0x32, 0x4B, 0x4E, 0x48},            // Code for char خ
        {0x00, 0x31, 0x49, 0x4E, 0x48},            // Code for char ح
        {0x00, 0x20, 0x24, 0x24, 0x38},            // Code for char د
        {0x70, 0x08, 0x0C, 0x0A, 0x04},            // Code for char م
        {0x00, 0x40, 0x40, 0x38, 0x00},            // Code for char ر
        {0x00, 0x40, 0x40, 0x3A, 0x00},            // Code for char ز
        {0x08, 0x10, 0x12, 0x12, 0x08},            // Code for char ت
        {0x38, 0x20, 0x3A, 0x11, 0x1A},            // Code for char ش
        {0x30, 0x40, 0x44, 0x40, 0x38},            // Code for char ن
        {0x20, 0x44, 0x4A, 0x3C, 0x00},            // Code for char و
        {0x60, 0x40, 0x48, 0x55, 0x78},            // Code for char ف
        {0x20, 0x3E, 0x28, 0x28, 0x30},            // Code for char ط
        {0x00, 0x38, 0x4C, 0x4A, 0x4A},            // Code for char ع
        {0x60, 0x40, 0x49, 0x55, 0x79},            // Code for char ق
        {0x08, 0x14, 0x50, 0x54, 0x0A},            // Code for char ي
        {0x00, 0x20, 0x25, 0x24, 0x38},            // Code for char ذ
        {0x38, 0x20, 0x3C, 0x14, 0x1C},            // Code for char ص
        {0x30, 0x40, 0x40, 0x7E, 0x00},            // Code for char ل
        {0x00, 0x1C, 0x24, 0x24, 0x18},            // Code for char ه
        {0x30, 0x48, 0x4C, 0x40, 0x7E},            // Code for char ك
        {0x00, 0x38, 0x4C, 0x4B, 0x4A},            // Code for char غ
        {0x00, 0x00, 0x7F, 0x41, 0x41},            // Code for char [
        {0x02, 0x04, 0x08, 0x10, 0x20},            /* Code for char \ */
        {0x41, 0x41, 0x7F, 0x00, 0x00},            // Code for char ]
        {0x04, 0x02, 0x7F, 0x02, 0x04},            // Code for char -
        {0x40, 0x40, 0x40, 0x40, 0x40},            // Code for char _
        {0x00, 0x07, 0x0B, 0x00, 0x00},            // Code for char `
        {0x00, 0x00, 0x00, 0x3F, 0x20},            // Code for char a 
        {0x10, 0x10, 0x4C, 0x10, 0x10},            // Code for char b
        {0x10, 0x11, 0x0D, 0x10, 0x10},            // Code for char c
        {0x10, 0x12, 0x1B, 0x12, 0x10},            // Code for char d
        {0x10, 0x14, 0x52, 0x12, 0x0C},            // Code for char e
        {0x10, 0x14, 0x13, 0x12, 0x0C},            // Code for char f
        {0x10, 0x14, 0x12, 0x12, 0x0C},            // Code for char g
        {0x00, 0x20, 0x24, 0x24, 0x38},            // Code for char h
        {0x00, 0x20, 0x25, 0x24, 0x38},            // Code for char i
        {0x00, 0x40, 0x40, 0x38, 0x10},            // Code for char j
        {0x00, 0x40, 0x40, 0x3A, 0x10},            // Code for char k
        {0x38, 0x20, 0x38, 0x20, 0x18},            // Code for char l
        {0x38, 0x22, 0x3B, 0x22, 0x18},            // Code for char m
        {0x38, 0x28, 0x24, 0x24, 0x18},            // Code for char n
        {0x38, 0x28, 0x24, 0x25, 0x18},            // Code for char o
        {0x20, 0x3E, 0x28, 0x28, 0x30},            // Code for char p
        {0x20, 0x3E, 0x28, 0x2A, 0x30},            // Code for char q
        {0x20, 0x28, 0x3C, 0x3C, 0x20},            // Code for char r
        {0x20, 0x28, 0x3C, 0x3D, 0x20},            // Code for char s
        {0x20, 0x20, 0x28, 0x35, 0x1C},            // Code for char t
        {0x20, 0x20, 0x29, 0x35, 0x1D},            // Code for char u
        {0x20, 0x2C, 0x2A, 0x11, 0x21},            // Code for char v
        {0x20, 0x20, 0x3E, 0x20, 0x20},            // Code for char w
        {0x20, 0x30, 0x28, 0x28, 0x10},            // Code for char x
        {0x20, 0x20, 0x1A, 0x20, 0x20},            // Code for char y
        {0x10, 0x50, 0x4C, 0x50, 0x10},            // Code for char {
        {0x00, 0x08, 0x36, 0x41, 0x00},            // Code for char {
        {0x00, 0x00, 0x77, 0x00, 0x00},            // Code for char |
        {0x00, 0x41, 0x36, 0x08, 0x00},            // Code for char }
        {0x08, 0x04, 0x08, 0x10, 0x08},            // Code for char ~
        {0x2A, 0x55, 0x2A, 0x55, 0x2A}             // Code for char
        };

//Hebrew

const char hebrew[128][5]= {
        {0x08, 0x1C, 0x3E, 0x7F, 0x00},            //0 <
        {0x30, 0x35, 0x48, 0x40, 0x30},            //1 �
        {0x45, 0x29, 0x11, 0x21, 0x7D},            //2 notx
        {0x7D, 0x09, 0x05, 0x05, 0x79},            //3 big N
        {0x7D, 0x09, 0x11, 0x21, 0x7D},            //4 not n
        {0x38, 0x44, 0x44, 0x38, 0x44},            //5 alpha
        {0x7E, 0x01, 0x29, 0x2E, 0x10},            //6 beta
        {0x30, 0x4A, 0x4D, 0x49, 0x30},            //7 delta
        {0x60, 0x50, 0x48, 0x50, 0x60},            //8 deltasign
        {0x1E, 0x04, 0x04, 0x38, 0x40},            //9 eta
        {0x3E, 0x49, 0x49, 0x49, 0x3E},            //10 lamda
        {0x62, 0x14, 0x08, 0x10, 0x60},            //11 yeta
        {0x40, 0x3C, 0x20, 0x20, 0x1C},            //12 magma
        {0x08, 0x7C, 0x04, 0x7C, 0x02},            //13 pi
        {0x38, 0x44, 0x44, 0x3C, 0x04},            //14 sigma
        {0x41, 0x63, 0x55, 0x49, 0x41},            //15 cumulative
        {0x10, 0x08, 0x78, 0x08, 0x04},            //16 tau
        {0x18, 0x24, 0x7E, 0x24, 0x18},            //17 phi
        {0x5E, 0x61, 0x01, 0x61, 0x5E},            //18 omega
        {0x78, 0x14, 0x15, 0x14, 0x78},            //19 �
        {0x38, 0x44, 0x45, 0x3C, 0x40},            //20 �
        {0x78, 0x15, 0x14, 0x15, 0x78},            //21 �
        {0x38, 0x45, 0x44, 0x3D, 0x40},            //22 �
        {0x3C, 0x43, 0x42, 0x43, 0x3C},            //23 �
        {0x38, 0x45, 0x44, 0x45, 0x38},            //24 �
        {0x3C, 0x41, 0x40, 0x41, 0x3C},            //25 �
        {0x38, 0x42, 0x40, 0x42, 0x38},            //26 �
        {0x08, 0x08, 0x2A, 0x1C, 0x08},            //27 arrow 
        {0x20, 0x7E, 0x02, 0x02, 0x02},            //28 root
        {0x12, 0x19, 0x15, 0x12, 0x00},            //29 tweede2
        {0x48, 0x7E, 0x49, 0x41, 0x42},            //30 �
        {0x01, 0x12, 0x7C, 0x12, 0x01},            //31 �
        {0x00, 0x00, 0x00, 0x00, 0x00},            //32(space)
        {0x00, 0x00, 0x5F, 0x00, 0x00},            //33 !
        {0x00, 0x03, 0x00, 0x03, 0x00},            //34 "
        {0x14, 0x7F, 0x14, 0x7F, 0x14},            //35 #
        {0x24, 0x2A, 0x7F, 0x2A, 0x12},            //36 $
        {0x23, 0x13, 0x08, 0x64, 0x62},            //37 %
        {0x36, 0x49, 0x56, 0x20, 0x50},            //38 &
        {0x00, 0x0B, 0x07, 0x00, 0x00},            //39 '
        {0x00, 0x00, 0x3E, 0x41, 0x00},            //40 (
        {0x00, 0x41, 0x3E, 0x00, 0x00},            //41 )
        {0x08, 0x2A, 0x1C, 0x2A, 0x08},            //42 *
        {0x08, 0x08, 0x3E, 0x08, 0x08},            //43 +
        {0x00, 0x58, 0x38, 0x00, 0x00},            //44 ,
        {0x08, 0x08, 0x08, 0x08, 0x08},            //45 -
        {0x00, 0x30, 0x30, 0x00, 0x00},            //46 .
        {0x20, 0x10, 0x08, 0x04, 0x02},            //47 /
        {0x3E, 0x51, 0x49, 0x45, 0x3E},            //48 0
        {0x00, 0x42, 0x7F, 0x40, 0x00},            //49%d  1
        {0x62, 0x51, 0x49, 0x49, 0x46},            //50 2
        {0x22, 0x41, 0x49, 0x49, 0x36},            //51 3
        {0x18, 0x14, 0x12, 0x7F, 0x10},            //52 4
        {0x27, 0x45, 0x45, 0x45, 0x39},            //53 5
        {0x3C, 0x4A, 0x49, 0x49, 0x30},            //54 6
        {0x01, 0x71, 0x09, 0x05, 0x03},            //55 7
        {0x36, 0x49, 0x49, 0x49, 0x37},            //56 8
        {0x06, 0x49, 0x49, 0x29, 0x1E},            //57 9
        {0x00, 0x36, 0x36, 0x00, 0x00},            //58 :
        {0x00, 0x5B, 0x3B, 0x00, 0x00},            //59 ;
        {0x00, 0x08, 0x14, 0x22, 0x41},            //60 <
        {0x14, 0x14, 0x14, 0x14, 0x14},            //61 =
        {0x41, 0x22, 0x14, 0x08, 0x00},            //62 >
        {0x02, 0x01, 0x51, 0x09, 0x06},            //63 ?
        {0x3E, 0x41, 0x5D, 0x55, 0x1E},            //64 @
        {0x32, 0x14, 0x08, 0x14, 0x26}, // Code for char A
        {0x22, 0x22, 0x22, 0x3C, 0x20}, // Code for char B
        {0x00, 0x22, 0x12, 0x3C, 0x00}, // Code for char C
        {0x02, 0x02, 0x02, 0x3E, 0x02}, // Code for char D
        {0x3A, 0x02, 0x02, 0x02, 0x3C}, // Code for char E
        {0x00, 0x02, 0x02, 0x3C, 0x00}, // Code for char F
        {0x00, 0x02, 0x3E, 0x02, 0x00}, // Code for char G
        {0x22, 0x24, 0x28, 0x38, 0x26}, // Code for char V
        {0x1E, 0x60, 0x42, 0x42, 0x3C}, // Code for char I
        {0x00, 0x00, 0x02, 0x0E, 0x00}, // Code for char J
        {0x00, 0x22, 0x22, 0x22, 0x3C}, // Code for char K
        {0x00, 0x22, 0x22, 0x3C, 0x00}, // Code for char P
        {0x02, 0x3C, 0x02, 0x22, 0x3C}, // Code for char N
        {0x00, 0x07, 0x44, 0x24, 0x1C}, // Code for char M
        {0x2C, 0x2A, 0x22, 0x22, 0x3C}, // Code for char T
        {0x7A, 0x02, 0x22, 0x1C, 0x00}, // Code for char X
        {0x00, 0x02, 0x02, 0x7C, 0x00}, // Code for char Q
        {0x02, 0x0E, 0x32, 0x22, 0x1C}, // Code for char R
        {0x22, 0x24, 0x28, 0x28, 0x1E}, // Code for char S
        {0x00, 0x00, 0x00, 0x00, 0x00},            //32(space)//before was {0x02, 0x3E, 0x22, 0x22, 0x3C}, // Code for char O
        {0x00, 0x00, 0x00, 0x00, 0x00},            //32(space)//before was {0x00, 0x0C, 0x0A, 0x02, 0x7C}, // Code for char U
        {0x02, 0x3E, 0x02, 0x02, 0x3C}, // Code for char H
        {0x02, 0x04, 0x08, 0x78, 0x06}, // Code for char W
        {0x00, 0x02, 0x02, 0x7E, 0x00}, // Code for char L
        {0x02, 0x02, 0x02, 0x3C, 0x00}, // Code for char Y
        {0x3E, 0x28, 0x2E, 0x20, 0x1E}, // Code for char Z
        {0x00, 0x00, 0x7F, 0x41, 0x41},            //91 [
        {0x02, 0x04, 0x08, 0x10, 0x20},            /*92 \ */
        {0x41, 0x41, 0x7F, 0x00, 0x00},            //93 ]
        {0x04, 0x02, 0x7F, 0x02, 0x04},            //94 -
        {0x40, 0x40, 0x40, 0x40, 0x40},            //95 _
        {0x00, 0x07, 0x0B, 0x00, 0x00},            //96 `
        {0x38, 0x44, 0x44, 0x3C, 0x40},            //97 a
        {0x7F, 0x48, 0x44, 0x44, 0x38},            //98 b
        {0x38, 0x44, 0x44, 0x44, 0x44},            //99 c
        {0x38, 0x44, 0x44, 0x48, 0x7F},            //100 d
        {0x38, 0x54, 0x54, 0x54, 0x08},            //101 e
        {0x08, 0x7E, 0x09, 0x02, 0x00},            //102 f
        {0x08, 0x14, 0x54, 0x54, 0x3C},            //103 g
        {0x7F, 0x08, 0x04, 0x04, 0x78},            //104 h
        {0x00, 0x44, 0x7D, 0x40, 0x00},            //105 i
        {0x20, 0x40, 0x44, 0x3D, 0x00},            //106 j
        {0x00, 0x7F, 0x10, 0x28, 0x44},            //107 k
        {0x00, 0x41, 0x7F, 0x40, 0x00},            //108 l
        {0x78, 0x04, 0x18, 0x04, 0x78},            //109 m
        {0x7C, 0x08, 0x04, 0x04, 0x78},            //110 n
        {0x38, 0x44, 0x44, 0x44, 0x38},            //111 o
        {0x7C, 0x14, 0x24, 0x24, 0x18},            //112 p
        {0x18, 0x24, 0x14, 0x7C, 0x40},            //113 q
        {0x00, 0x7C, 0x08, 0x04, 0x04},            //114 r
        {0x48, 0x54, 0x54, 0x54, 0x20},            //115 s
        {0x04, 0x3E, 0x44, 0x20, 0x00},            //116 t
        {0x3C, 0x40, 0x40, 0x20, 0x7C},            //117 u
        {0x1C, 0x20, 0x40, 0x20, 0x1C},            //118 v
        {0x3C, 0x40, 0x30, 0x40, 0x3C},            //119 w
        {0x44, 0x28, 0x10, 0x28, 0x44},            //120 x
        {0x04, 0x48, 0x30, 0x08, 0x04},            //121 y
        {0x44, 0x64, 0x54, 0x4C, 0x44},            //122 z
        {0x00, 0x08, 0x36, 0x41, 0x00},            //123 {
        {0x00, 0x00, 0x77, 0x00, 0x00},            //124 |
        {0x00, 0x41, 0x36, 0x08, 0x00},            //125 }
        {0x08, 0x04, 0x08, 0x10, 0x08},            //126 ~
        {0x2A, 0x55, 0x2A, 0x55, 0x2A}             //127
        };




//Aurebech(StarWars)


const unsigned short aurebech[128][5] = {
        {0x08, 0x1C, 0x3E, 0x7F, 0x00},            // Code for char <
        {0x30, 0x35, 0x48, 0x40, 0x30},            // Code for char �
        {0x45, 0x29, 0x11, 0x21, 0x7D},            // Code for char notx
        {0x7D, 0x09, 0x05, 0x05, 0x79},            // Code for char big N
        {0x7D, 0x09, 0x11, 0x21, 0x7D},            // Code for char not n
        {0x38, 0x44, 0x44, 0x38, 0x44},            // Code for char alpha
        {0x7E, 0x01, 0x29, 0x2E, 0x10},            // Code for char beta
        {0x30, 0x4A, 0x4D, 0x49, 0x30},            // Code for char delta
        {0x60, 0x50, 0x48, 0x50, 0x60},            // Code for char deltasign
        {0x1E, 0x04, 0x04, 0x38, 0x40},            // Code for char eta
        {0x3E, 0x49, 0x49, 0x49, 0x3E},            // Code for char  lamda
        {0x62, 0x14, 0x08, 0x10, 0x60},            // Code for char  yeta
        {0x40, 0x3C, 0x20, 0x20, 0x1C},            // Code for char  magma
        {0x08, 0x7C, 0x04, 0x7C, 0x02},            // Code for char  pi
        {0x38, 0x44, 0x44, 0x3C, 0x04},            // Code for char  sigma
        {0x41, 0x63, 0x55, 0x49, 0x41},            // Code for char  cumulative
        {0x10, 0x08, 0x78, 0x08, 0x04},            // Code for char  tau
        {0x18, 0x24, 0x7E, 0x24, 0x18},            // Code for char  phi
        {0x5E, 0x61, 0x01, 0x61, 0x5E},            // Code for char  omega
        {0x78, 0x14, 0x15, 0x14, 0x78},            // Code for char  �
        {0x38, 0x44, 0x45, 0x3C, 0x40},            // Code for char  �
        {0x78, 0x15, 0x14, 0x15, 0x78},            // Code for char  �
        {0x38, 0x45, 0x44, 0x3D, 0x40},            // Code for char  �
        {0x3C, 0x43, 0x42, 0x43, 0x3C},            // Code for char  �
        {0x38, 0x45, 0x44, 0x45, 0x38},            // Code for char  �
        {0x3C, 0x41, 0x40, 0x41, 0x3C},            // Code for char  �
        {0x38, 0x42, 0x40, 0x42, 0x38},            // Code for char  �
        {0x08, 0x08, 0x2A, 0x1C, 0x08},            // Code for char  arrow 
        {0x20, 0x7E, 0x02, 0x02, 0x02},            // Code for char  root
        {0x12, 0x19, 0x15, 0x12, 0x00},            // Code for char  tweede2
        {0x48, 0x7E, 0x49, 0x41, 0x42},            // Code for char  �
        {0x01, 0x12, 0x7C, 0x12, 0x01},            // Code for char  �
        {0x00, 0x00, 0x00, 0x00, 0x00},            // Code for char (space)
        {0x08, 0x24, 0x12, 0x08, 0x00},            // Code for char !
        {0x00, 0x04, 0x08, 0x04, 0x00},            // Code for char "
        {0x14, 0x34, 0x36, 0x16, 0x14},            // Code for char #
        {0x07, 0x02, 0x67, 0x12, 0x0E},            // Code for char $
        {0x06, 0x36, 0x08, 0x36, 0x30},            // Code for char %
        {0x14, 0x22, 0x2A, 0x2A, 0x3E},            // Code for char &
        {0x00, 0x1C, 0x04, 0x00, 0x00},            // Code for char '
        {0x00, 0x08, 0x3E, 0x00, 0x00},            // Code for char (
        {0x00, 0x00, 0x3E, 0x08, 0x00},            // Code for char )
        {0x1C, 0x08, 0x3E, 0x08, 0x1C},            // Code for char *
        {0x3E, 0x2A, 0x22, 0x3E, 0x00},            // Code for char +
        {0x00, 0x00, 0x0E, 0x00, 0x00},            // Code for char ,
        {0x00, 0x04, 0x04, 0x04, 0x00},            // Code for char -
        {0x00, 0x18, 0x00, 0x18, 0x00},            // Code for char .
        {0x00, 0x30, 0x08, 0x06, 0x00},            // Code for char /
        {0x3E, 0x22, 0x2A, 0x22, 0x3E},            // Code for char 0
        {0x22, 0x22, 0x3E, 0x20, 0x20},            // Code for char 1
        {0x2A, 0x2A, 0x2A, 0x2A, 0x2E},            // Code for char 2
        {0x2A, 0x2A, 0x2A, 0x22, 0x3E},            // Code for char 3
        {0x0E, 0x08, 0x08, 0x08, 0x3E},            // Code for char 4
        {0x2E, 0x2A, 0x2A, 0x2A, 0x2A},            // Code for char 5
        {0x3A, 0x2A, 0x2A, 0x2A, 0x3A},            // Code for char 6
        {0x02, 0x02, 0x02, 0x02, 0x3E},            // Code for char 7
        {0x3E, 0x2A, 0x2A, 0x2A, 0x3E},            // Code for char 8
        {0x2E, 0x2A, 0x2A, 0x2A, 0x2E},            // Code for char 9
        {0x00, 0x24, 0x24, 0x38, 0x00},            // Code for char :
        {0x00, 0x00, 0x7F, 0x00, 0x00},            // Code for char ;
        {0x08, 0x08, 0x1C, 0x00, 0x00},            // Code for char <
        {0x3C, 0x24, 0x00, 0x24, 0x3C},            // Code for char =
        {0x00, 0x1C, 0x08, 0x08, 0x00},            // Code for char >
        {0x06, 0x02, 0x22, 0x1C, 0x00},            // Code for char ?
        {0x3E, 0x08, 0x2A, 0x22, 0x3E},            // Code for char @
        {0x36, 0x14, 0x14, 0x14, 0x22},            // Code for char A
        {0x14, 0x22, 0x2A, 0x22, 0x14},            // Code for char B
        {0x0E, 0x00, 0x1C, 0x00, 0x38},            // Code for char C
        {0x2A, 0x1A, 0x0A, 0x06, 0x02},            // Code for char D
        {0x1E, 0x20, 0x1E, 0x02, 0x3E},            // Code for char E
        {0x38, 0x28, 0x3E, 0x28, 0x24},            // Code for char F
        {0x3E, 0x20, 0x26, 0x12, 0x0E},            // Code for char G
        {0x22, 0x2A, 0x2A, 0x2A, 0x22},            // Code for char H
        {0x00, 0x08, 0x04, 0x3E, 0x00},            // Code for char I
        {0x28, 0x28, 0x28, 0x24, 0x3E},            // Code for char J
        {0x22, 0x22, 0x22, 0x22, 0x3E},            // Code for char K
        {0x00, 0x08, 0x10, 0x3E, 0x00},            // Code for char L
        {0x38, 0x24, 0x22, 0x22, 0x00},            // Code for char M
        {0x1C, 0x22, 0x18, 0x06, 0x38},            // Code for char N
        {0x38, 0x26, 0x22, 0x26, 0x38},            // Code for char O
        {0x1C, 0x22, 0x26, 0x20, 0x3E},            // Code for char P
        {0x3E, 0x22, 0x22, 0x02, 0x0E},            // Code for char Q
        {0x22, 0x12, 0x0A, 0x06, 0x02},            // Code for char R
        {0x12, 0x24, 0x08, 0x10, 0x3E},            // Code for char S
        {0x08, 0x12, 0x3E, 0x10, 0x08},            // Code for char T
        {0x3E, 0x20, 0x28, 0x24, 0x3E},            // Code for char U
        {0x02, 0x04, 0x38, 0x04, 0x02},            // Code for char V
        {0x3E, 0x22, 0x22, 0x22, 0x3E},            // Code for char W
        {0x30, 0x2C, 0x22, 0x2C, 0x30},            // Code for char X
        {0x0E, 0x12, 0x26, 0x10, 0x0E},            // Code for char Y
        {0x30, 0x24, 0x24, 0x24, 0x3E},            // Code for char Z
        {0x00, 0x14, 0x77, 0x00, 0x00},            // Code for char [
        {0x00, 0x06, 0x08, 0x30, 0x00},            // Code for char BackSlash
        {0x00, 0x00, 0x77, 0x14, 0x00},            // Code for char ]
        {0x00, 0x08, 0x0C, 0x08, 0x00},            // Code for char ^
        {0x00, 0x20, 0x20, 0x20, 0x00},            // Code for char _
        {0x00, 0x0C, 0x14, 0x00, 0x00},            // Code for char `
        {0x00, 0x34, 0x10, 0x10, 0x24},            // Code for char a
        {0x18, 0x24, 0x2C, 0x24, 0x18},            // Code for char b
        {0x1C, 0x00, 0x18, 0x00, 0x38},            // Code for char c
        {0x14, 0x14, 0x34, 0x0C, 0x04},            // Code for char d
        {0x1C, 0x20, 0x1C, 0x04, 0x3C},            // Code for char e
        {0x38, 0x28, 0x3C, 0x28, 0x28},            // Code for char f
        {0x3C, 0x20, 0x2C, 0x14, 0x0C},            // Code for char g
        {0x24, 0x2C, 0x2C, 0x2C, 0x24},            // Code for char h
        {0x00, 0x08, 0x04, 0x3C, 0x00},            // Code for char i
        {0x28, 0x28, 0x28, 0x24, 0x3C},            // Code for char j
        {0x00, 0x24, 0x24, 0x24, 0x3C},            // Code for char k
        {0x00, 0x10, 0x20, 0x3C, 0x00},            // Code for char l
        {0x30, 0x28, 0x24, 0x24, 0x00},            // Code for char m
        {0x18, 0x24, 0x10, 0x0C, 0x30},            // Code for char n
        {0x30, 0x2C, 0x24, 0x2C, 0x30},            // Code for char o
        {0x18, 0x24, 0x2C, 0x20, 0x3C},            // Code for char p
        {0x3C, 0x24, 0x24, 0x04, 0x0C},            // Code for char q
        {0x04, 0x24, 0x14, 0x0C, 0x04},            // Code for char r
        {0x24, 0x08, 0x10, 0x3C, 0x00},            // Code for char s
        {0x10, 0x20, 0x3C, 0x20, 0x10},            // Code for char t
        {0x3C, 0x20, 0x28, 0x24, 0x3C},            // Code for char u
        {0x04, 0x08, 0x30, 0x08, 0x04},            // Code for char v
        {0x3C, 0x24, 0x24, 0x24, 0x3C},            // Code for char w
        {0x30, 0x28, 0x24, 0x28, 0x30},            // Code for char x
        {0x0C, 0x14, 0x20, 0x10, 0x0C},            // Code for char y
        {0x20, 0x28, 0x28, 0x28, 0x3C},            // Code for char z
        {0x00, 0x14, 0x7F, 0x00, 0x00},            // Code for char {
        {0x30, 0x08, 0x07, 0x08, 0x30},            // Code for char |
        {0x00, 0x00, 0x7F, 0x14, 0x00},            // Code for char }
        {0x08, 0x08, 0x00, 0x08, 0x08},            // Code for char ~
        {0x2A, 0x55, 0x2A, 0x55, 0x2A}             // Code for char 
        };
#endif	/* ASCIIAHA_H */