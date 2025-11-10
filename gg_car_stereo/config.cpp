class CfgPatches
{
	class gg_car_stereo
	{
		name="LUCID - Car Stereo";
		units[]={};
		weapons[]={};
		requiredVersion=2.0799999;
		requiredAddons[]=
		{
			"gg_fonts"
		};
		author="$STR_GG_Main_Author";
		authors[]={};
		url="$STR_GG_Main_URL";
		version=1.17;
		versionStr="1.17.1.26";
		versionAr[]={1,17,1,26};
	};
};
class Extended_PreStart_EventHandlers
{
	class gg_car_stereo
	{
		init="call compileScript ['\x\gg\addons\car_stereo\XEH_preStart.sqf']";
	};
};
class Extended_PreInit_EventHandlers
{
	class gg_car_stereo
	{
		init="call compileScript ['\x\gg\addons\car_stereo\XEH_preInit.sqf']";
	};
};
class Extended_PostInit_EventHandlers
{
	class gg_car_stereo
	{
		init="call compileScript ['\x\gg\addons\car_stereo\XEH_postInit.sqf']";
	};
};
class CfgSounds
{
	class gg_car_stereo_beep
	{
		name="gg_car_stereo_beep";
		sound[]=
		{
			"\x\gg\addons\car_stereo\sounds\beep.ogg",
			0.30000001,
			1
		};
		titles[]={};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class ACE_SelfActions
		{
			class gg_car_stereo
			{
				displayName="$STR_gg_car_stereo_DisplayName";
				condition="call gg_car_stereo_fnc_canOpen";
				statement="call gg_car_stereo_fnc_open";
				icon="\x\gg\addons\car_stereo\ui\icon_stereo_ca.paa";
			};
		};
	};
	class Tank;
    class Tank_F: Tank
	{
		class ACE_SelfActions
		{
			class gg_car_stereo
			{
				displayName="$STR_gg_car_stereo_DisplayName";
				condition="call gg_car_stereo_fnc_canOpen";
				statement="call gg_car_stereo_fnc_open";
				icon="\x\gg\addons\car_stereo\ui\icon_stereo_ca.paa";
			};
		};
	};
	class Air;
	class Helicopter: Air
	{
		class ACE_SelfActions
		{
			class gg_car_stereo
			{
				displayName="$STR_gg_car_stereo_DisplayName";
				condition="call gg_car_stereo_fnc_canOpen";
				statement="call gg_car_stereo_fnc_open";
				icon="\x\gg\addons\car_stereo\ui\icon_stereo_ca.paa";
			};
		};
	};
	class Plane: Air
	{
		class ACE_SelfActions
		{
			class gg_car_stereo
			{
				displayName="$STR_gg_car_stereo_DisplayName";
				condition="call gg_car_stereo_fnc_canOpen";
				statement="call gg_car_stereo_fnc_open";
				icon="\x\gg\addons\car_stereo\ui\icon_stereo_ca.paa";
			};
		};
	};
	class Ship; 
    class Ship_F: Ship
	{
		class ACE_SelfActions
		{
			class gg_car_stereo
			{
				displayName="$STR_gg_car_stereo_DisplayName";
				condition="call gg_car_stereo_fnc_canOpen";
				statement="call gg_car_stereo_fnc_open";
				icon="\x\gg\addons\car_stereo\ui\icon_stereo_ca.paa";
			};
		};
	};
	
};
class CfgWeapons
{
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class gg_car_stereo_BaseCD: ACE_ItemCore
	{
		author="$STR_GG_Main_Author";
		displayName="";
		descriptionShort="";
		picture="\x\gg\addons\car_stereo\ui\cd_ca.paa";
		scope=1;
		gg_car_stereo_cd=1;
		gg_car_stereo_tracks[]={};
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=1;
		};
	};
};
class ctrlStatic;
class ctrlButton;
class ctrlXListbox;
class ctrlButtonPicture;
class ctrlStaticPictureKeepAspect;
class ctrlControlsGroupNoScrollbars;
class gg_car_stereo_button: ctrlButton
{
	colorBackground[]={0,0,0,0};
	colorBackgroundActive[]={0,0,0,0};
	colorBackgroundDisabled[]={0,0,0,0};
	colorFocused[]={0,0,0,0};
	tooltipColorBox[]={0,0,0,0};
	tooltipColorText[]={1,1,1,1};
	tooltipColorShade[]={0.5,0.5,0.5,0.25};
	soundPush[]=
	{
		"",
		0,
		1
	};
	soundClick[]=
	{
		"",
		0,
		1
	};
	soundEnter[]=
	{
		"",
		0,
		1
	};
	soundEscape[]=
	{
		"",
		0,
		1
	};
};
class gg_car_stereo_dialog
{
	idd=-1;
	movingEnable=1;
	enableSimulation=1;
	onLoad="call gg_car_stereo_fnc_handleLoad";
	class controls
	{
		class Container: ctrlControlsGroupNoScrollbars
		{
			x="0.5 - ((40) * (((safezoneW / safezoneH) min 1.2) / 40)) / 2";
			y="0.5 - ((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) / 2";
			w="((40) * (((safezoneW / safezoneH) min 1.2) / 40))";
			h="((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			class controls
			{
				class Body: ctrlStaticPictureKeepAspect
				{
					idc=100;
					x=0;
					y=0;
					w="((40) * (((safezoneW / safezoneH) min 1.2) / 40))";
					h="((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				};
				class BodyGlow: Body
				{
					idc=101;
				};
				class Eject: gg_car_stereo_button
				{
					idc=102;
					onButtonClick="call gg_car_stereo_fnc_handleEject";
					tooltip="$STR_gg_car_stereo_Eject";
					x="((203) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40)))";
					y="((290) / 1024 * ((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
					w="((96) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40)))";
					h="((91) / 1024 * ((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
				};
				class Insert: gg_car_stereo_button
				{
					idc=103;
					onButtonClick="call gg_car_stereo_fnc_handleInsert";
					tooltip="$STR_gg_car_stereo_Insert";
					x="((358) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40)))";
					y="((310) / 1024 * ((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
					w="((1266) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40)))";
					h="((75) / 1024 * ((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
				};
				class SrcOff: gg_car_stereo_button
				{
					idc=104;
					onButtonClick="call gg_car_stereo_fnc_handleSource";
					tooltip="$STR_gg_car_stereo_SrcOff";
					x="((184) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40)))";
					y="((403) / 1024 * ((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
					w="((87) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40)))";
					h="((94) / 1024 * ((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
				};
				class BassBoost: gg_car_stereo_button
				{
					idc=105;
					onButtonClick="call gg_car_stereo_fnc_handleBassBoost";
					tooltip="$STR_gg_car_stereo_BassBoost";
					x="((290) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40)))";
					y="((470) / 1024 * ((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
					w="((144) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40)))";
					h="((104) / 1024 * ((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
				};
				class VolumeUp: gg_car_stereo_button
				{
					idc=106;
					onButtonClick="call gg_car_stereo_fnc_handleVolume";
					tooltip="$STR_gg_car_stereo_VolumeUp";
					x="((582) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40)))";
					y="((391) / 1024 * ((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
					w="((105) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40)))";
					h="((258) / 1024 * ((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
				};
				class VolumeDown: gg_car_stereo_button
				{
					idc=107;
					onButtonClick="call gg_car_stereo_fnc_handleVolume";
					tooltip="$STR_gg_car_stereo_VolumeDown";
					x="((444) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40)))";
					y="((391) / 1024 * ((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
					w="((105) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40)))";
					h="((258) / 1024 * ((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
				};
				class Rewind: gg_car_stereo_button
				{
					idc=108;
					onButtonClick="call gg_car_stereo_fnc_handleSeek";
					tooltip="$STR_gg_car_stereo_PreviousRewind";
					x="((742) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40)))";
					y="((668) / 1024 * ((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
					w="((117) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40)))";
					h="((30) / 1024 * ((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
				};
				class FastForward: gg_car_stereo_button
				{
					idc=109;
					onButtonClick="call gg_car_stereo_fnc_handleSeek";
					tooltip="$STR_gg_car_stereo_NextFastForward";
					x="((862) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40)))";
					y="((668) / 1024 * ((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
					w="((117) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40)))";
					h="((30) / 1024 * ((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
				};
				class PlayPause: gg_car_stereo_button
				{
					idc=110;
					onButtonClick="call gg_car_stereo_fnc_handlePlayPause";
					tooltip="$STR_gg_car_stereo_PlayPause";
					x="((1337) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40)))";
					y="((668) / 1024 * ((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
					w="((87) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40)))";
					h="((30) / 1024 * ((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
				};
				class RandomMode: gg_car_stereo_button
				{
					idc=111;
					onButtonClick="call gg_car_stereo_fnc_handlePlayMode";
					tooltip="$STR_gg_car_stereo_RandomMode";
					x="((1454) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40)))";
					y="((668) / 1024 * ((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
					w="((89) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40)))";
					h="((30) / 1024 * ((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
				};
				class RepeatMode: gg_car_stereo_button
				{
					idc=112;
					onButtonClick="call gg_car_stereo_fnc_handlePlayMode";
					tooltip="$STR_gg_car_stereo_RepeatMode";
					x="((1558) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40)))";
					y="((668) / 1024 * ((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
					w="((89) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40)))";
					h="((30) / 1024 * ((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
				};
				class CDGroup: ctrlControlsGroupNoScrollbars
				{
					idc=113;
					x="((600) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40)))";
					y="((320) / 1024 * ((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
					w="((820) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40)))";
					h="((50) / 1024 * ((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
					class controls
					{
						class CDList: ctrlXListbox
						{
							idc=114;
							x=0;
							y=0;
							w="((700) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40)))";
							h="((50) / 1024 * ((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
							colorActive[]={1,1,1,1};
							colorSelect[]={1,1,1,1};
						};
						class CDNone: ctrlStatic
						{
							idc=115;
							style="0x02 + 0xC0";
							text="$STR_gg_car_stereo_NoCDInventory";
							x=0;
							y=0;
							w="((700) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40)))";
							h="((50) / 1024 * ((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
						};
						class CDConfirm: ctrlButtonPicture
						{
							idc=116;
							onButtonClick="call gg_car_stereo_fnc_handleCDConfirm";
							text="\x\gg\addons\car_stereo\ui\icon_insert_ca.paa";
							tooltip="$STR_gg_car_stereo_Insert";
							x="((710) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40)))";
							y=0;
							w="((50) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40)))";
							h="((50) / 1024 * ((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
							tooltipColorBox[]={0,0,0,0};
							tooltipColorText[]={1,1,1,1};
							tooltipColorShade[]={0.5,0.5,0.5,0.25};
							soundPush[]=
							{
								"",
								0,
								1
							};
							soundClick[]=
							{
								"",
								0,
								1
							};
							soundEnter[]=
							{
								"",
								0,
								1
							};
							soundEscape[]=
							{
								"",
								0,
								1
							};
						};
						class CDCancel: CDConfirm
						{
							idc=117;
							onButtonClick="call gg_car_stereo_fnc_handleCDCancel";
							text="\a3\3den\data\displays\display3den\search_end_ca.paa";
							tooltip="$STR_Disp_Cancel";
							x="((770) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40)))";
							colorBackground[]={0,0,0,0};
							colorBackgroundActive[]={0.85000002,0,0,1};
							colorFocused[]={0.85000002,0,0,1};
						};
					};
				};
				class Screen: ctrlControlsGroupNoScrollbars
				{
					idc=118;
					x="((830) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40)))";
					y="((439) / 1024 * ((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
					w="((805) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40)))";
					h="((148) / 1024 * ((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
					class controls
					{
						class Main: ctrlStatic
						{
							idc=119;
							style=0;
							font="gg_fonts_VCROSDMono";
							colorText[]={0.80000001,0.80000001,0.80000001,1};
							shadow=0;
							x="((0) * ((805) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40))))";
							y="((0.2) * ((148) / 1024 * ((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))))";
							w="((1) * ((805) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40))))";
							h="((0.6) * ((148) / 1024 * ((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))))";
							sizeEx="((0.6) * ((148) / 1024 * ((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))))";
						};
						class Time: Main
						{
							idc=120;
							style=1;
							x="((0.6) * ((805) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40))))";
							y="((0.05) * ((148) / 1024 * ((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))))";
							w="((0.4) * ((805) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40))))";
							h="((0.15) * ((148) / 1024 * ((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))))";
							sizeEx="((0.15) * ((148) / 1024 * ((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))))";
						};
						class Playing: ctrlStaticPictureKeepAspect
						{
							idc=121;
							x="((0.01) * ((805) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40))))";
							y="((0.85) * ((148) / 1024 * ((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))) - pixelH";
							w="((0.15 * (148 / 805)) * ((805) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40))))";
							h="((0.15) * ((148) / 1024 * ((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))))";
						};
						class TrackTime: Main
						{
							idc=122;
							x="((0.01 + 0.15 * (148 / 805)) * ((805) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40))))";
							y="((0.85) * ((148) / 1024 * ((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))))";
							w="((0.5) * ((805) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40))))";
							h="((0.15) * ((148) / 1024 * ((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))))";
							sizeEx="((0.15) * ((148) / 1024 * ((40 * (1024 / 2048)) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))))";
						};
						class Bass: TrackTime
						{
							idc=123;
							style=1;
							w="((0.1) * ((805) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40))))";
						};
						class Volume: TrackTime
						{
							idc=124;
						};
						class Mode: Volume
						{
							idc=125;
							style=1;
							x="((0.9) * ((805) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40))))";
							w="((0.1) * ((805) / 2048 * ((40) * (((safezoneW / safezoneH) min 1.2) / 40))))";
						};
					};
				};
			};
		};
	};
};
