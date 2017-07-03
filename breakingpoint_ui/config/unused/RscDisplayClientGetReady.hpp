// Generated by unRap v1.06 by Kegetys

class RscDisplayClientGetReady : RscDisplayGetReady {
	onLoad = "[""onLoad"",_this,""RscDiary"",'GUI'] call compile preprocessfilelinenumbers ""A3\ui_f\scripts\initDisplay.sqf""";
	onUnload = "[""onUnload"",_this,""RscDiary"",'GUI'] call compile preprocessfilelinenumbers ""A3\ui_f\scripts\initDisplay.sqf""";
	color0[] = {0.4, 0.4, 0.4, 1};
	color1[] = {1, 0.6, 0, 1};
	color2[] = {0.1961, 0.1451, 0.0941, 1.0};
	
	class controls {
		class B_Cancel {};
		class B_Continue {};
		
		class PlayersTitle : RscText {
			x = -2;
			y = -2;
		};
		
		class Players : RscListBox {
			x = -2;
			y = -2;
		};
		
		class Tooltip : RscMapControlTooltip {};
		
		class CA_MouseOver : RscText {
			style = 0x00 + 0x10;
			x = -10;
			y = -10;
			shadow = false;
			idc = 1016;
			w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {0.7, 0.1, 0, 1};
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		
		class CA_MainBackground : RscText {
			idc = 1020;
			x = "safezoneXAbs";
			w = "safezoneWAbs";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0.1, 0.1, 0.1, 1};
		};
		
		class CA_MainBackgroundGradient : RscPicture {
			x = "safezoneXAbs";
			w = "safezoneWAbs";
			idc = 1200;
			text = "\A3\ui_f\data\map\diary\gradient_gs.paa";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {1, 1, 1, 0.15};
		};
		
		class CA_TopicsBackground : RscText {
			idc = 1021;
			colorbackgroundx[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			w = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "18 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0.1, 0.1, 0.1, 0.8};
		};
		
		class CA_SubTopicsBackground : RscText {
			idc = 1022;
			colorbackgroundx[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
			x = "7.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "18 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0.1, 0.1, 0.1, 0.8};
		};
		
		class CA_ContentBackgroundd : RscText {
			idc = 1023;
			colorbackgroundx[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
			x = "17.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			w = "21.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "18 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0.1, 0.1, 0.1, 0.8};
		};
		
		class CA_MissionName : RscText {
			idc = 112;
			shadow = false;
			font = "PuristaLight";
			text = $STR_DIARY_MISSION_NAME;
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			w = "16.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {1, 1, 1, 1};
			sizeEx = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		
		class ButtonBack : RscActiveText {
			idc = 2;
			style = 48;
			color[] = {1, 1, 1, 0.7};
			text = "\A3\ui_f\data\map\diary\back_gs.paa";
			x = "-0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			w = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {1, 1, 1, 0.7};
			colorActive[] = {1, 1, 1, 1};
			tooltip = $STR_DISP_CLOSE;
		};
		
		class TopRight : RscControlsGroup {
			x = "safezoneX + safezoneW - (21.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			
			class VScrollbar : VScrollbar {
				width = 0;
			};
			
			class HScrollbar : HScrollbar {
				height = 0;
			};
			idc = 2302;
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			w = "21.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			
			class controls {
				class CA_PlayerName : RscText {
					idc = 111;
					style = 1;
					font = "PuristaLight";
					text = $STR_DIARY_PLAYER_NAME;
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "11 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class ProfileBackground : RscText {
					idc = 1014;
					x = "11.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "1.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {1, 1, 1, 0.2};
				};
				
				class ProfilePicture : RscPicture {
					idc = 1203;
					text = "\A3\Ui_f\data\GUI\Cfg\Ranks\corporal_gs.paa";
					x = "11.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class Separator1 : RscPicture {
					idc = 1205;
					text = "\A3\ui_f\data\map\diary\separator_ca.paa";
					x = "12.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class ButtonPlayer : RscActiveText {
					onbuttonclick = "with uinamespace do {['ButtonPlayer',_this,''] call RscDiary_script};";
					style = 48;
					color[] = {1, 1, 1, 0.7};
					idc = 1202;
					text = "\A3\ui_f\data\igui\cfg\islandmap\iconplayer_ca.paa";
					x = "13.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "1.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorText[] = {1, 1, 1, 0.7};
					colorActive[] = {1, 1, 1, 1};
					tooltip = $STR_A3_RSCDIARY_BUTTONPLAYER_TOOLTIP;
				};
				
				class ButtonTextures : RscActiveText {
					onbuttonclick = "with uinamespace do {['ButtonTextures',_this,''] call RscDiary_script};";
					style = 48;
					color[] = {1, 1, 1, 0.7};
					idc = 1201;
					text = "\A3\ui_f\data\map\diary\textures_ca.paa";
					x = "15 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorText[] = {1, 1, 1, 0.7};
					colorActive[] = {1, 1, 1, 1};
					tooltip = $STR_A3_RSCDIARY_BUTTONTEXTURES_TOOLTIP;
				};
				
				class Separator2 : RscPicture {
					idc = 1204;
					text = "\A3\ui_f\data\map\diary\separator_ca.paa";
					x = "16.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class Clock : RscText {
					idc = 101;
					style = 0;
					shadow = false;
					font = "PuristaLight";
					x = "16.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "-0.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorText[] = {1, 1, 1, 0.7};
					sizeEx = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		
		class ButtonTexturesReal : RscText {
			idc = 107;
			x = -1;
			y = -1;
			w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		
		class DiaryList : RscListBox {
			idc = 1001;
			default = 1;
			h = "safezoneH - 7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			w = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			colorBackground[] = {0, 0, 0, 0};
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		
		class CA_DiaryIndex : RscListBox {
			idc = 1002;
			h = "safezoneH - 7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			x = "7.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			colorBackground[] = {0, 0, 0, 0};
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		
		class CA_DiaryGroup : RscControlsGroup {
			idc = 1013;
			h = "safezoneH - 7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			x = "17.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			w = "21.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			
			class controls {
				class CA_Diary : RscHTML {
					idc = 1003;
					cycleLinks = 0;
					cycleAllLinks = 0;
					
					class H1 {
						font = "PuristaMedium";
						fontBold = "PuristaSemibold";
						sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
					};
					
					class P {
						font = "PuristaMedium";
						fontBold = "PuristaSemibold";
						sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					};
					shadow = false;
					h = 100;
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "20.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				};
			};
		};
		
		class GPS : RscControlsGroup {
			idc = 106;
			x = -1;
			y = -1;
			w = 0;
			h = 0;
			
			class controls {
				class GPSSquare : RscText {
					idc = 75;
					style = 1;
					font = "PuristaSemibold";
					shadow = 2;
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class GPSAlt : RscText {
					idc = 77;
					style = 1;
					font = "PuristaSemibold";
					shadow = 2;
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class GPS_ALTMeasurement : RscText {
					shadow = 2;
					font = "PuristaSemibold";
					idc = 1008;
					x = "2.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class GPSHeading : RscText {
					idc = 78;
					style = 1;
					font = "PuristaSemibold";
					shadow = 2;
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class GPS_HeadingMeasurement : RscText {
					shadow = 2;
					font = "PuristaSemibold";
					idc = 1015;
					x = "2.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		
		class Copyright : RscText {
			style = 1;
			shadow = 2;
			font = "PuristaSemibold";
			x = "safezoneX + safezoneW - (12 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "safezoneY + safezoneH - (1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 1005;
			w = "11.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx = "0.6*0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		
		class WalkieTalkie : RscControlsGroup {
			idc = 103;
			x = -1;
			y = -1;
			w = 0;
			h = 0;
			
			class controls {
				class RadioAlpha : RscActiveText {
					idc = 63;
					x = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class RadioBravo : RadioAlpha {
					idc = 64;
					x = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class RadioCharlie : RadioAlpha {
					idc = 65;
					x = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class RadioDelta : RadioAlpha {
					idc = 66;
					x = "5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class RadioEcho : RadioAlpha {
					idc = 67;
					x = "6.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class RadioFoxtrot : RadioAlpha {
					idc = 68;
					x = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class RadioGolf : RadioAlpha {
					idc = 69;
					x = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class RadioHotel : RadioAlpha {
					idc = 70;
					x = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class RadioIndia : RadioAlpha {
					idc = 71;
					x = "5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class RadioJuliet : RadioAlpha {
					idc = 72;
					x = "6.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		
		class FadeEffect : RscText {
			idc = 1099;
			x = "safezoneXAbs";
			y = "safezoneY";
			w = "safezoneWAbs";
			h = "safezoneH";
			colorBackground[] = {0, 0, 0, 1};
		};
		
		class ButtonContinue : RscButtonMenuOK {
			shortcuts[] = {0x00050000 + 8, 0x00050000 + 0, 28, 57, 156};
			text = $STR_DISP_CONTINUE;
			x = "SafezoneX + SafezoneW - (11 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		
		class ButtonCancel : RscButtonMenuCancel {
			x = "SafezoneX + (1 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};