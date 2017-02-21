/*
   Copyright 2014 Hosang Yoon

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

#ifndef CONSTANTS_H
#define CONSTANTS_H

//#define FLAG_DEBUG
//#define DEBUG_NET
//#define DEBUG_LIB_AI

#ifdef Q_OS_WIN
    #include <Windows.h>
    #define SLEEP_MS(X)             Sleep(X)
    #define FONT_CHINESE            "Kaiti"
    #define FONT_JAPANESE           QGuiApplication::font().family()
#endif
#ifdef Q_OS_OSX
    #include <unistd.h>
    #define SLEEP_MS(X)             usleep((X) * 1000)
    #define FONT_CHINESE            "Kaiti TC"
    #define FONT_JAPANESE           "MS Gothic"
#endif

#define MASK_HAI_NUMBER             0x003F
#define FLAG_HAI_NOT_TSUMOHAI       0x0040
#define FLAG_HAI_RICHIHAI           0x0040
#define FLAG_HAI_AKADORA            0x0080
#define FLAG_HAI_TRANSPARENT        0x0100
#define FLAG_HAI_TSUMOGIRI          0x0200
#define FLAG_HAI_LAST_DAHAI         0x0400

#define MASK_TE_NNAKI               0x00000007
#define FLAG_TE_NOT_MENZEN          0x00000008
///////	Reserved for naki kinds     0x0000FFF0
#define FLAG_TE_RICHI               0x00010000
#define FLAG_TE_DOUBLERICHI         0x00020000
#define FLAG_TE_FURITEN             0x00040000
#define FLAG_TE_DAIICHITSUMO        0x00080000
#define FLAG_TE_IPPATSU             0x00100000
#define FLAG_TE_AGARIHOUKI          0x00200000

#define IND_TSUMOHAI            	13
#define IND_NAKISTATE               14
#define IND_YAKUFLAGS           	15
#define IND_YAKUMANFLAGS        	16
#define IND_TESIZE              	17
#define IND_NSHANTEN            	34
#define IND_MACHISIZE           	35
#define IND_NKAWA               	23
#define IND_KAWASIZE        		24
#define IND_HAIRISIZE           	20
#define IND_NHAIRI              	321
#define IND_NYAMA               	144

#define NAKI_NO_NAKI            	0
#define NAKI_PON                	1
#define NAKI_CHI        			2
#define NAKI_ANKAN          		3
#define NAKI_DAIMINKAN      		4
#define NAKI_KAKAN          		5

#define FORM_TANKI          		0
#define FORM_KANCHAN        		1
#define FORM_RYANMEN        		2
#define FORM_TOITSU     			3
#define FORM_KOTSU      			4
#define FORM_SHUNTSU    			5

#define ENDFLAG_HOWANPAIPINCHU      0
#define ENDFLAG_NAGASHIMANGAN       1
#define ENDFLAG_TSUMOHO             2
#define ENDFLAG_RONHO             	3
#define ENDFLAG_KYUSHUKYUHAI    	4
#define ENDFLAG_SUKAIKAN        	5
#define ENDFLAG_SUFONRENTA      	6
#define ENDFLAG_SUCHARICHI          7
#define ENDFLAG_SANCHAHO        	8

#define RULE_USE_AKADORA        	0x01
#define RULE_ATAMAHANE          	0x02

#define AGARI_KUIRON        		0
#define AGARI_TSUMO         		2
#define AGARI_MENZENRON         	10

#define OBJ_HAI                 	0
#define OBJ_BUTTON                  1
#define IND_OBJSIZE         		2
#define IND_HAIPOSSIZE          	160
#define IND_HAIBUTTONSIZE           20
#define IND_ACTIONBUTTONSIZE        5

#define HAI_1M                  	0
#define HAI_2M      				1
#define HAI_3M      				2
#define HAI_4M      				3
#define HAI_5M      				4
#define HAI_6M      				5
#define HAI_7M      				6
#define HAI_8M      				7
#define HAI_9M      				8
#define HAI_1P      				9
#define HAI_2P      				10
#define HAI_3P      				11
#define HAI_4P      				12
#define HAI_5P      				13
#define HAI_6P      				14
#define HAI_7P      				15
#define HAI_8P      				16
#define HAI_9P      				17
#define HAI_1S      				18
#define HAI_2S      				19
#define HAI_3S      				20
#define HAI_4S      				21
#define HAI_5S      				22
#define HAI_6S      				23
#define HAI_7S      				24
#define HAI_8S      				25
#define HAI_9S      				26
#define HAI_TON     				27
#define HAI_NAN     				28
#define HAI_SHA     				29
#define HAI_PE      				30
#define HAI_HAKU        			31
#define HAI_HATSU       			32
#define HAI_CHUN        			33
////// for textures only ///////
#define HAI_A5M             		34
#define HAI_A5P             		35
#define HAI_A5S             		36
#define TEXTURE_BOTTOMBOARD         0x31
#define TEXTURE_SUMMARYBOARD        0x32
#define TEXTURE_STATUSBOARD         0x33
#define BUTTON_TSUMO                0x34
#define BUTTON_KYUSHUKYUHAI         0x35
#define BUTTON_KAN                  0x36
#define BUTTON_RICHI                0x37
#define BUTTON_RON                  0x38
#define BUTTON_PON                  0x39
#define BUTTON_CHI                  0x3A
#define BUTTON_PASS                 0x3B
#define HAI_SIDE                    0x3C
#define HAI_BACKSIDE                0x3D
#define HAI_SKIP                    0x3E
////////////////////////////////
#define HAI_EMPTY                   0x3F

#define ORIENT_FLAT_UP              0
#define ORIENT_FLAT_SIDE            1
#define ORIENT_FLAT_FLIP            2
#define ORIENT_STAND_UP             3
#define ORIENT_STAND_SIDE           4
#define ORIENT_STAND_TILTED         5

#define FLAG_YAKU_TANYAO            0x00000001
#define FLAG_YAKU_PINFU             0x00000002
#define FLAG_YAKU_IPEKO             0x00000004
#define FLAG_YAKU_HAKU              0x00000008
#define FLAG_YAKU_HATSU             0x00000010
#define FLAG_YAKU_CHUN              0x00000020
#define FLAG_YAKU_CHANFONPAI        0x00000040
#define FLAG_YAKU_MENFONPAI         0x00000080
#define FLAG_YAKU_SANSHOKU          0x00000100
#define FLAG_YAKU_ITTSU             0x00000200
#define FLAG_YAKU_CHANTA            0x00000400
#define FLAG_YAKU_CHITOI            0x00000800
#define FLAG_YAKU_TOITOI            0x00001000
#define FLAG_YAKU_SANANKO           0x00002000
#define FLAG_YAKU_HONROTO           0x00004000
#define FLAG_YAKU_SANDOKO           0x00008000
#define FLAG_YAKU_SANKANTSU         0x00010000
#define FLAG_YAKU_SHOUSANGEN        0x00020000
#define FLAG_YAKU_HONITSU           0x00040000
#define FLAG_YAKU_JUNCHAN           0x00080000
#define FLAG_YAKU_RYANPEKO          0x00100000
#define FLAG_YAKU_CHINITSU          0x00200000
#define FLAG_YAKU_RICHI             0x00400000
#define FLAG_YAKU_IPPATSU           0x00800000
#define FLAG_YAKU_MENZENTSUMO       0x01000000
#define FLAG_YAKU_RINSHAN           0x02000000
#define FLAG_YAKU_CHANKAN           0x04000000
#define FLAG_YAKU_HAITEI            0x08000000
#define FLAG_YAKU_HOUTEI            0x10000000
#define FLAG_YAKU_DOUBLERICHI       0x20000000

#define FLAG_YAKUMAN_KOKUSHI        0x00000001
#define FLAG_YAKUMAN_SUANKO         0x00000002
#define FLAG_YAKUMAN_DAISANGEN      0x00000004
#define FLAG_YAKUMAN_TSUISO         0x00000008
#define FLAG_YAKUMAN_SHOUSUSHI      0x00000010
#define FLAG_YAKUMAN_DAISUSHI       0x00000020
#define FLAG_YAKUMAN_RYUISO         0x00000040
#define FLAG_YAKUMAN_CHINROTO       0x00000080
#define FLAG_YAKUMAN_SUKANTSU       0x00000100
#define FLAG_YAKUMAN_CHURENPOTO     0x00000200
#define FLAG_YAKUMAN_TENHO          0x00000400
#define FLAG_YAKUMAN_CHIHO          0x00000800
#define MASK_YAUMAN_PAOTURNDIFF     0x30000000
#define FLAG_YAKUMAN_PAO            0x80000000

#define ACTION_REGISTER             -1
#define ACTION_TSUMOHO              0
#define ACTION_KYUSHUKYUHAI         1
#define ACTION_ANKAN                2
#define ACTION_KAKAN                3
#define ACTION_RICHI                4
#define ACTION_DAHAI                5
#define ACTION_RONHO                6
#define ACTION_DAIMINKAN            7
#define ACTION_PON                  8
#define ACTION_CHI                  9
#define ACTION_PASS                 10

#define IND_ACTIONAVAILSIZE         (10 + 1)
#define IND_ANKANINDSSIZE           (3 * 4 + 1)
#define IND_KAKANINDSSIZE           (3 * 1 + 1)
#define IND_RICHIINDSSIZE           (14 * 1 + 1)
#define IND_DAHAIINDSSIZE           (14 * 1 + 1)
#define IND_PONINDSSIZE             (2 * 2 + 1)
#define IND_CHIINDSSIZE             (5 * 2 + 1)

#define IND_SOUNDFXSIZE             7
#define SOUND_TSUMO                 0
#define SOUND_AGARI                 1
#define SOUND_DAHAI                 2
#define SOUND_NAKI                  3
#define SOUND_ASK                   4
#define SOUND_RICHI                 5
#define SOUND_SHUFFLE               6

#define NET_DEFAULT_PORT            50201
#define QDATASTREAM_VERSION         QDataStream::Qt_5_2

#define NET_STATE_NONE              0
#define NET_STATE_SERVER            1
#define NET_STATE_CLIENT            2

#define NET_FORMAT_TEXT             0x25747874
#define NET_FORMAT_NAME             0x256E616D
#define NET_FORMAT_SCREEN_STATE     0x25737461
#define NET_FORMAT_SFX              0x25736678
#define NET_FORMAT_ASK_ACTION       0x25616374
#define NET_FORMAT_ACTION_ANSWER    0x25616E73
#define NET_FORMAT_END_KYOKU_BOARD  0x25656B62
#define NET_COMMAND_BEGIN_CLIENT    0x2562676E
#define NET_COMMAND_END_CLIENT      0x25656E64

//      PLAYER_NET_0/1/2            0/1/2       (tcp socket number)
#define PLAYER_MANUAL               3
#define PLAYER_NATIVE_AI            4
#define PLAYER_LIB_AI               5

#endif
