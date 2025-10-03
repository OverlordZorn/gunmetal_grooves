#include "script_macros.hpp"

class CfgPatches
{
	class gg_compact_discs
	{
		name="LUCID - Compact Discs";
		units[]=
		{
			"gg_compact_discs_90sRap",
			"gg_compact_discs_AssortedBangers",
			"gg_compact_discs_SadBoiHours",
			"gg_compact_discs_GhostTwoMixtape",
			"gg_compact_discs_GhostThreeMixtape",
			"gg_compact_discs_ALittleTrollin"
		};
		weapons[]=
		{
			"gg_compact_discs_90sRap",
			"gg_compact_discs_AssortedBangers",
			"gg_compact_discs_SadBoiHours",
			"gg_compact_discs_GhostTwoMixtape",
			"gg_compact_discs_GhostThreeMixtape",
			"gg_compact_discs_ALittleTrollin",
			"gg_compact_discs_TibbsTastefulTracks"
		};
		requiredVersion=2.0799999;
		requiredAddons[]=
		{
			"gg_car_stereo",
			"gg_music"
		};
		author="$STR_GG_Main_Author";
		authors[]={};
		url="$STR_GG_Main_URL";
		version=1.17;
		versionStr="1.17.1.26";
		versionAr[]={1,17,1,26};
	};
};
class CfgSounds
{
	CREATE_SOUND_VOLUMES(AmbitionzAzARidah, "\x\gg\addons\gg_music\90sRap\AmbitionzAzARidah.ogg")
	CREATE_SOUND_VOLUMES(DiamondsAndWood, "\x\gg\addons\gg_music\90sRap\DiamondsAndWood.ogg")
	CREATE_SOUND_VOLUMES(GinAndJuice, "\x\gg\addons\gg_music\90sRap\GinAndJuice.ogg")
	CREATE_SOUND_VOLUMES(HailMary, "\x\gg\addons\gg_music\90sRap\HailMary.ogg")
	CREATE_SOUND_VOLUMES(IGot5OnIt, "\x\gg\addons\gg_music\90sRap\IGot5OnIt.ogg")
	CREATE_SOUND_VOLUMES(ISmellSmoke, "\x\gg\addons\gg_music\90sRap\ISmellSmoke.ogg")
	CREATE_SOUND_VOLUMES(ItWasAGoodDay, "\x\gg\addons\gg_music\90sRap\ItWasAGoodDay.ogg")
	CREATE_SOUND_VOLUMES(Murder, "\x\gg\addons\gg_music\90sRap\Murder.ogg")
	CREATE_SOUND_VOLUMES(MyMindPlayinTricksOnMe, "\x\gg\addons\gg_music\90sRap\MyMindPlayinTricksOnMe.ogg")
	CREATE_SOUND_VOLUMES(NoMoPlay, "\x\gg\addons\gg_music\90sRap\NoMoPlay.ogg")
	CREATE_SOUND_VOLUMES(NotoriousThugs, "\x\gg\addons\gg_music\90sRap\NotoriousThugs.ogg")
	CREATE_SOUND_VOLUMES(NuthinButAGThang, "\x\gg\addons\gg_music\90sRap\NuthinButAGThang.ogg")
	CREATE_SOUND_VOLUMES(Regulate, "\x\gg\addons\gg_music\90sRap\Regulate.ogg")
	CREATE_SOUND_VOLUMES(SippinOnSomeSyrup, "\x\gg\addons\gg_music\90sRap\SippinOnSomeSyrup.ogg")
	CREATE_SOUND_VOLUMES(StillSmokin, "\x\gg\addons\gg_music\90sRap\StillSmokin.ogg")
	CREATE_SOUND_VOLUMES(TheManRightChea, "\x\gg\addons\gg_music\90sRap\TheManRightChea.ogg")
	CREATE_SOUND_VOLUMES(ThugLuv, "\x\gg\addons\gg_music\90sRap\ThugLuv.ogg")
	CREATE_SOUND_VOLUMES(ThuggishRuggishBone, "\x\gg\addons\gg_music\90sRap\ThuggishRuggishBone.ogg")
	CREATE_SOUND_VOLUMES(WhoDatTalkingDown, "\x\gg\addons\gg_music\90sRap\WhoDatTalkingDown.ogg")
	CREATE_SOUND_VOLUMES(WhoRunIt, "\x\gg\addons\gg_music\90sRap\WhoRunIt.ogg")
	CREATE_SOUND_VOLUMES(Rasputin, "\x\gg\addons\gg_music\AssortedBangers\Rasputin.ogg")
	CREATE_SOUND_VOLUMES(TheLadyDontMind, "\x\gg\addons\gg_music\AssortedBangers\TheLadyDontMind.ogg")
	CREATE_SOUND_VOLUMES(PaleShelter, "\x\gg\addons\gg_music\AssortedBangers\PaleShelter.ogg")
	CREATE_SOUND_VOLUMES(Maneater, "\x\gg\addons\gg_music\AssortedBangers\Maneater.ogg")
	CREATE_SOUND_VOLUMES(IRanSoFarAway, "\x\gg\addons\gg_music\AssortedBangers\IRanSoFarAway.ogg")
	CREATE_SOUND_VOLUMES(SweetDreamsAreMadeOfThis, "\x\gg\addons\gg_music\AssortedBangers\SweetDreamsAreMadeOfThis.ogg")
	CREATE_SOUND_VOLUMES(BlueMonday, "\x\gg\addons\gg_music\AssortedBangers\BlueMonday.ogg")
	CREATE_SOUND_VOLUMES(LifeDuringWartime, "\x\gg\addons\gg_music\AssortedBangers\LifeDuringWartime.ogg")
	CREATE_SOUND_VOLUMES(OutOfTouch, "\x\gg\addons\gg_music\AssortedBangers\OutOfTouch.ogg")
	CREATE_SOUND_VOLUMES(SmalltownBoy, "\x\gg\addons\gg_music\AssortedBangers\SmalltownBoy.ogg")
	CREATE_SOUND_VOLUMES(OverAndOver, "\x\gg\addons\gg_music\AssortedBangers\OverAndOver.ogg")
	CREATE_SOUND_VOLUMES(PsychoKiller, "\x\gg\addons\gg_music\AssortedBangers\PsychoKiller.ogg")
	CREATE_SOUND_VOLUMES(LittleDarkAge, "\x\gg\addons\gg_music\AssortedBangers\LittleDarkAge.ogg")
	CREATE_SOUND_VOLUMES(Nightcall, "\x\gg\addons\gg_music\AssortedBangers\Nightcall.ogg")
	CREATE_SOUND_VOLUMES(TheManWhoSoldTheWorld, "\x\gg\addons\gg_music\AssortedBangers\TheManWhoSoldTheWorld.ogg")
	CREATE_SOUND_VOLUMES(BlindingLights, "\x\gg\addons\gg_music\AssortedBangers\BlindingLights.ogg")
	CREATE_SOUND_VOLUMES(Edgerunner, "\x\gg\addons\gg_music\AssortedBangers\Edgerunner.ogg")
	CREATE_SOUND_VOLUMES(InTheAirTonight, "\x\gg\addons\gg_music\AssortedBangers\InTheAirTonight.ogg")
	CREATE_SOUND_VOLUMES(MessageInABottle, "\x\gg\addons\gg_music\AssortedBangers\MessageInABottle.ogg")
	CREATE_SOUND_VOLUMES(YourLove, "\x\gg\addons\gg_music\AssortedBangers\YourLove.ogg")
	CREATE_SOUND_VOLUMES(Dreams, "\x\gg\addons\gg_music\AssortedBangers\Dreams.ogg")
	CREATE_SOUND_VOLUMES(TunnelOfLove, "\x\gg\addons\gg_music\AssortedBangers\TunnelOfLove.ogg")
	CREATE_SOUND_VOLUMES(DancingInTheDark, "\x\gg\addons\gg_music\AssortedBangers\DancingInTheDark.ogg")
	CREATE_SOUND_VOLUMES(PapaWasARollingStone, "\x\gg\addons\gg_music\AssortedBangers\PapaWasARollingStone.ogg")
	CREATE_SOUND_VOLUMES(DoItAgain, "\x\gg\addons\gg_music\AssortedBangers\DoItAgain.ogg")
	CREATE_SOUND_VOLUMES(BennysHere, "\x\gg\addons\gg_music\AssortedBangers\BennysHere.ogg")
	CREATE_SOUND_VOLUMES(Showdown, "\x\gg\addons\gg_music\AssortedBangers\Showdown.ogg")
	CREATE_SOUND_VOLUMES(Destination, "\x\gg\addons\gg_music\AssortedBangers\Destination.ogg")
	CREATE_SOUND_VOLUMES(BabyImYours, "\x\gg\addons\gg_music\AssortedBangers\BabyImYours.ogg")
	CREATE_SOUND_VOLUMES(GetLucky, "\x\gg\addons\gg_music\AssortedBangers\GetLucky.ogg")
	CREATE_SOUND_VOLUMES(IHeardItThroughTheGrapevine, "\x\gg\addons\gg_music\AssortedBangers\IHeardItThroughTheGrapevine.ogg")
	CREATE_SOUND_VOLUMES(SisterGoldenHair, "\x\gg\addons\gg_music\AssortedBangers\SisterGoldenHair.ogg")
	CREATE_SOUND_VOLUMES(Layla, "\x\gg\addons\gg_music\AssortedBangers\Layla.ogg")
	CREATE_SOUND_VOLUMES(Psycho, "\x\gg\addons\gg_music\AssortedBangers\Psycho.ogg")
	CREATE_SOUND_VOLUMES(Mykonos, "\x\gg\addons\gg_music\AssortedBangers\Mykonos.ogg")
	CREATE_SOUND_VOLUMES(BonesInTheOcean, "\x\gg\addons\gg_music\AssortedBangers\BonesInTheOcean.ogg")
	CREATE_SOUND_VOLUMES(RedRightHand, "\x\gg\addons\gg_music\AssortedBangers\RedRightHand.ogg")
	CREATE_SOUND_VOLUMES(JustDroppedIn, "\x\gg\addons\gg_music\AssortedBangers\JustDroppedIn.ogg")
	CREATE_SOUND_VOLUMES(IfYouCouldReadMyMind, "\x\gg\addons\gg_music\AssortedBangers\IfYouCouldReadMyMind.ogg")
	CREATE_SOUND_VOLUMES(DontThinkTwiceItsAllRight, "\x\gg\addons\gg_music\AssortedBangers\DontThinkTwiceItsAllRight.ogg")
	CREATE_SOUND_VOLUMES(500Miles, "\x\gg\addons\gg_music\AssortedBangers\500Miles.ogg")
	CREATE_SOUND_VOLUMES(LittleWing, "\x\gg\addons\gg_music\AssortedBangers\LittleWing.ogg")
	CREATE_SOUND_VOLUMES(HeyJoe, "\x\gg\addons\gg_music\AssortedBangers\HeyJoe.ogg")
	CREATE_SOUND_VOLUMES(AllAlongTheWatchtower, "\x\gg\addons\gg_music\AssortedBangers\AllAlongTheWatchtower.ogg")
	CREATE_SOUND_VOLUMES(ComingIntoLosAngeles, "\x\gg\addons\gg_music\AssortedBangers\ComingIntoLosAngeles.ogg")
	CREATE_SOUND_VOLUMES(PaintItBlack, "\x\gg\addons\gg_music\AssortedBangers\PaintItBlack.ogg")
	CREATE_SOUND_VOLUMES(StrawberryLetter23, "\x\gg\addons\gg_music\AssortedBangers\StrawberryLetter23.ogg")
	CREATE_SOUND_VOLUMES(Pinball, "\x\gg\addons\gg_music\AssortedBangers\Pinball.ogg")
	CREATE_SOUND_VOLUMES(Cocaine, "\x\gg\addons\gg_music\AssortedBangers\Cocaine.ogg")
	CREATE_SOUND_VOLUMES(WhiteRoom, "\x\gg\addons\gg_music\AssortedBangers\WhiteRoom.ogg")
	CREATE_SOUND_VOLUMES(Godzilla, "\x\gg\addons\gg_music\AssortedBangers\Godzilla.ogg")
	CREATE_SOUND_VOLUMES(Time, "\x\gg\addons\gg_music\AssortedBangers\Time.ogg")
	CREATE_SOUND_VOLUMES(OneOfTheseDays, "\x\gg\addons\gg_music\AssortedBangers\OneOfTheseDays.ogg")
	CREATE_SOUND_VOLUMES(TheMomentBefore, "\x\gg\addons\gg_music\AssortedBangers\TheMomentBefore.ogg")
	CREATE_SOUND_VOLUMES(FarFromAnyRoad, "\x\gg\addons\gg_music\AssortedBangers\FarFromAnyRoad.ogg")
	CREATE_SOUND_VOLUMES(GhostRidersInTheSky, "\x\gg\addons\gg_music\AssortedBangers\GhostRidersInTheSky.ogg")
	CREATE_SOUND_VOLUMES(DontFearTheReaper, "\x\gg\addons\gg_music\AssortedBangers\DontFearTheReaper.ogg")
	CREATE_SOUND_VOLUMES(Epitaph, "\x\gg\addons\gg_music\AssortedBangers\Epitaph.ogg")
	CREATE_SOUND_VOLUMES(HouseOfTheRisingSun, "\x\gg\addons\gg_music\AssortedBangers\HouseOfTheRisingSun.ogg")
	CREATE_SOUND_VOLUMES(AWhiterShadeOfPale, "\x\gg\addons\gg_music\AssortedBangers\AWhiterShadeOfPale.ogg")
	CREATE_SOUND_VOLUMES(BlackMagicWoman, "\x\gg\addons\gg_music\AssortedBangers\BlackMagicWoman.ogg")
	CREATE_SOUND_VOLUMES(Abracadabra, "\x\gg\addons\gg_music\AssortedBangers\Abracadabra.ogg")
	CREATE_SOUND_VOLUMES(AintNoLoveInTheHeartOfTheCity, "\x\gg\addons\gg_music\AssortedBangers\AintNoLoveInTheHeartOfTheCity.ogg")
	CREATE_SOUND_VOLUMES(CaliforniaDreamin, "\x\gg\addons\gg_music\AssortedBangers\CaliforniaDreamin.ogg")
	CREATE_SOUND_VOLUMES(SunshineOfYourLove, "\x\gg\addons\gg_music\AssortedBangers\SunshineOfYourLove.ogg")
	CREATE_SOUND_VOLUMES(ComeAndGetYourLove, "\x\gg\addons\gg_music\AssortedBangers\ComeAndGetYourLove.ogg")
	CREATE_SOUND_VOLUMES(SpaceTruckin, "\x\gg\addons\gg_music\AssortedBangers\SpaceTruckin.ogg")
	CREATE_SOUND_VOLUMES(Strutter, "\x\gg\addons\gg_music\AssortedBangers\Strutter.ogg")
	CREATE_SOUND_VOLUMES(Refugee, "\x\gg\addons\gg_music\AssortedBangers\Refugee.ogg")
	CREATE_SOUND_VOLUMES(LosingMyReligion, "\x\gg\addons\gg_music\AssortedBangers\LosingMyReligion.ogg")
	CREATE_SOUND_VOLUMES(DearGod, "\x\gg\addons\gg_music\AssortedBangers\DearGod.ogg")
	CREATE_SOUND_VOLUMES(BurninForYou, "\x\gg\addons\gg_music\AssortedBangers\BurninForYou.ogg")
	CREATE_SOUND_VOLUMES(CallMe, "\x\gg\addons\gg_music\AssortedBangers\CallMe.ogg")
	CREATE_SOUND_VOLUMES(DaYaThinkImSexy, "\x\gg\addons\gg_music\AssortedBangers\DaYaThinkImSexy.ogg")
	CREATE_SOUND_VOLUMES(TakeMeOut, "\x\gg\addons\gg_music\AssortedBangers\TakeMeOut.ogg")
	CREATE_SOUND_VOLUMES(SevenNationArmy, "\x\gg\addons\gg_music\AssortedBangers\SevenNationArmy.ogg")
	CREATE_SOUND_VOLUMES(OffendInEveryWay, "\x\gg\addons\gg_music\AssortedBangers\OffendInEveryWay.ogg")
	CREATE_SOUND_VOLUMES(NotYourKindOfPeople, "\x\gg\addons\gg_music\AssortedBangers\NotYourKindOfPeople.ogg")
	CREATE_SOUND_VOLUMES(NotUpToMe, "\x\gg\addons\gg_music\AssortedBangers\NotUpToMe.ogg")
	CREATE_SOUND_VOLUMES(LoveWillTearUsApart, "\x\gg\addons\gg_music\AssortedBangers\LoveWillTearUsApart.ogg")
	CREATE_SOUND_VOLUMES(Buena, "\x\gg\addons\gg_music\AssortedBangers\Buena.ogg")
	CREATE_SOUND_VOLUMES(WalkThisLand, "\x\gg\addons\gg_music\AssortedBangers\WalkThisLand.ogg")
	CREATE_SOUND_VOLUMES(PumpedUpKicks, "\x\gg\addons\gg_music\AssortedBangers\PumpedUpKicks.ogg")
	CREATE_SOUND_VOLUMES(WhenTheLeveeBreaks, "\x\gg\addons\gg_music\AssortedBangers\WhenTheLeveeBreaks.ogg")
	CREATE_SOUND_VOLUMES(ThenCameTheLastDaysOfMay, "\x\gg\addons\gg_music\AssortedBangers\ThenCameTheLastDaysOfMay.ogg")
	CREATE_SOUND_VOLUMES(TheBottomlessHole, "\x\gg\addons\gg_music\AssortedBangers\TheBottomlessHole.ogg")
	CREATE_SOUND_VOLUMES(TheChain, "\x\gg\addons\gg_music\AssortedBangers\TheChain.ogg")
	CREATE_SOUND_VOLUMES(CatchTheRainbow, "\x\gg\addons\gg_music\AssortedBangers\CatchTheRainbow.ogg")
	CREATE_SOUND_VOLUMES(BadCompany, "\x\gg\addons\gg_music\AssortedBangers\BadCompany.ogg")
	CREATE_SOUND_VOLUMES(Mother, "\x\gg\addons\gg_music\AssortedBangers\Mother.ogg")
	CREATE_SOUND_VOLUMES(ThatSmell, "\x\gg\addons\gg_music\AssortedBangers\ThatSmell.ogg")
	CREATE_SOUND_VOLUMES(MaryJanesLastDance, "\x\gg\addons\gg_music\AssortedBangers\MaryJanesLastDance.ogg")
	CREATE_SOUND_VOLUMES(CallMeTheBreeze, "\x\gg\addons\gg_music\AssortedBangers\CallMeTheBreeze.ogg")
	CREATE_SOUND_VOLUMES(ChoctawBingo, "\x\gg\addons\gg_music\AssortedBangers\ChoctawBingo.ogg")
	CREATE_SOUND_VOLUMES(FeelGoodInc, "\x\gg\addons\gg_music\AssortedBangers\FeelGoodInc.ogg")
	CREATE_SOUND_VOLUMES(CantFeelMyFace, "\x\gg\addons\gg_music\AssortedBangers\CantFeelMyFace.ogg")
	CREATE_SOUND_VOLUMES(SingAlong, "\x\gg\addons\gg_music\AssortedBangers\SingAlong.ogg")
	CREATE_SOUND_VOLUMES(AGoodLook, "\x\gg\addons\gg_music\AssortedBangers\AGoodLook.ogg")
	CREATE_SOUND_VOLUMES(TheLessIKnowTheBetter, "\x\gg\addons\gg_music\AssortedBangers\TheLessIKnowTheBetter.ogg")
	CREATE_SOUND_VOLUMES(AbsoluteTerritory, "\x\gg\addons\gg_music\AssortedBangers\AbsoluteTerritory.ogg")
	CREATE_SOUND_VOLUMES(CocaineMan, "\x\gg\addons\gg_music\AssortedBangers\CocaineMan.ogg")
	CREATE_SOUND_VOLUMES(InTheCity, "\x\gg\addons\gg_music\AssortedBangers\InTheCity.ogg")
	CREATE_SOUND_VOLUMES(AHorseWithNoName, "\x\gg\addons\gg_music\AssortedBangers\AHorseWithNoName.ogg")
	CREATE_SOUND_VOLUMES(HowLong, "\x\gg\addons\gg_music\AssortedBangers\HowLong.ogg")
	CREATE_SOUND_VOLUMES(InHellIllBeInGoodCompany, "\x\gg\addons\gg_music\AssortedBangers\InHellIllBeInGoodCompany.ogg")
	CREATE_SOUND_VOLUMES(BigIron, "\x\gg\addons\gg_music\AssortedBangers\BigIron.ogg")
	CREATE_SOUND_VOLUMES(LastTrainHome, "\x\gg\addons\gg_music\AssortedBangers\LastTrainHome.ogg")
	CREATE_SOUND_VOLUMES(SimpleMan, "\x\gg\addons\gg_music\AssortedBangers\SimpleMan.ogg")
	CREATE_SOUND_VOLUMES(StairwayToHeaven, "\x\gg\addons\gg_music\AssortedBangers\StairwayToHeaven.ogg")
	CREATE_SOUND_VOLUMES(FreeBird, "\x\gg\addons\gg_music\AssortedBangers\FreeBird.ogg")
	CREATE_SOUND_VOLUMES(TheEcstasyOfGold, "\x\gg\addons\gg_music\AssortedBangers\TheEcstasyOfGold.ogg")
	CREATE_SOUND_VOLUMES(Battery, "\x\gg\addons\gg_music\AssortedBangers\Battery.ogg")
	CREATE_SOUND_VOLUMES(SeekAndDestroy, "\x\gg\addons\gg_music\AssortedBangers\SeekAndDestroy.ogg")
	CREATE_SOUND_VOLUMES(ForWhomTheBellTolls, "\x\gg\addons\gg_music\AssortedBangers\ForWhomTheBellTolls.ogg")
	CREATE_SOUND_VOLUMES(SquareHammer, "\x\gg\addons\gg_music\AssortedBangers\SquareHammer.ogg")
	CREATE_SOUND_VOLUMES(DanceMacabre, "\x\gg\addons\gg_music\AssortedBangers\DanceMacabre.ogg")
	CREATE_SOUND_VOLUMES(KnightsOfCydonia, "\x\gg\addons\gg_music\AssortedBangers\KnightsOfCydonia.ogg")
	CREATE_SOUND_VOLUMES(ISeeThroughYou, "\x\gg\addons\gg_music\AssortedBangers\ISeeThroughYou.ogg")
	CREATE_SOUND_VOLUMES(DeathsDoor, "\x\gg\addons\gg_music\AssortedBangers\DeathsDoor.ogg")
	CREATE_SOUND_VOLUMES(WelcomeToTheVoid, "\x\gg\addons\gg_music\AssortedBangers\WelcomeToTheVoid.ogg")
	CREATE_SOUND_VOLUMES(ColdSweat, "\x\gg\addons\gg_music\AssortedBangers\ColdSweat.ogg")
	CREATE_SOUND_VOLUMES(WeAreTheRoadCrew, "\x\gg\addons\gg_music\AssortedBangers\WeAreTheRoadCrew.ogg")
	CREATE_SOUND_VOLUMES(AceOfSpades, "\x\gg\addons\gg_music\AssortedBangers\AceOfSpades.ogg")
	CREATE_SOUND_VOLUMES(HolyDiver, "\x\gg\addons\gg_music\AssortedBangers\HolyDiver.ogg")
	CREATE_SOUND_VOLUMES(DeathByDesign, "\x\gg\addons\gg_music\AssortedBangers\DeathByDesign.ogg")
	CREATE_SOUND_VOLUMES(CultOfPersonality, "\x\gg\addons\gg_music\AssortedBangers\CultOfPersonality.ogg")
	CREATE_SOUND_VOLUMES(Hellraiser, "\x\gg\addons\gg_music\AssortedBangers\Hellraiser.ogg")
	CREATE_SOUND_VOLUMES(NoMoreTears, "\x\gg\addons\gg_music\AssortedBangers\NoMoreTears.ogg")
	CREATE_SOUND_VOLUMES(Stillborn, "\x\gg\addons\gg_music\AssortedBangers\Stillborn.ogg")
	CREATE_SOUND_VOLUMES(CounterfeitGod, "\x\gg\addons\gg_music\AssortedBangers\CounterfeitGod.ogg")
	CREATE_SOUND_VOLUMES(MassMurderMachine, "\x\gg\addons\gg_music\AssortedBangers\MassMurderMachine.ogg")
	CREATE_SOUND_VOLUMES(BatteringRam, "\x\gg\addons\gg_music\AssortedBangers\BatteringRam.ogg")
	CREATE_SOUND_VOLUMES(GenocideJunkies, "\x\gg\addons\gg_music\AssortedBangers\GenocideJunkies.ogg")
	CREATE_SOUND_VOLUMES(WarPigs, "\x\gg\addons\gg_music\AssortedBangers\WarPigs.ogg")
	CREATE_SOUND_VOLUMES(NIB, "\x\gg\addons\gg_music\AssortedBangers\NIB.ogg")
	CREATE_SOUND_VOLUMES(Supernaut, "\x\gg\addons\gg_music\AssortedBangers\Supernaut.ogg")
	CREATE_SOUND_VOLUMES(SabbraCadabra, "\x\gg\addons\gg_music\AssortedBangers\SabbraCadabra.ogg")
	CREATE_SOUND_VOLUMES(SabbathBloodySabbath, "\x\gg\addons\gg_music\AssortedBangers\SabbathBloodySabbath.ogg")
	CREATE_SOUND_VOLUMES(Snowblind, "\x\gg\addons\gg_music\AssortedBangers\Snowblind.ogg")
	CREATE_SOUND_VOLUMES(ANationalAcrobat, "\x\gg\addons\gg_music\AssortedBangers\ANationalAcrobat.ogg")
	CREATE_SOUND_VOLUMES(IntoTheVoid, "\x\gg\addons\gg_music\AssortedBangers\IntoTheVoid.ogg")
	CREATE_SOUND_VOLUMES(CountryGirl, "\x\gg\addons\gg_music\AssortedBangers\CountryGirl.ogg")
	CREATE_SOUND_VOLUMES(HeavenAndHell, "\x\gg\addons\gg_music\AssortedBangers\HeavenAndHell.ogg")
	CREATE_SOUND_VOLUMES(Badlands, "\x\gg\addons\gg_music\AssortedBangers\Badlands.ogg")
	CREATE_SOUND_VOLUMES(MoonsOfNeptune, "\x\gg\addons\gg_music\AssortedBangers\MoonsOfNeptune.ogg")
	CREATE_SOUND_VOLUMES(TheMan, "\x\gg\addons\gg_music\AssortedBangers\TheMan.ogg")
	CREATE_SOUND_VOLUMES(MadWorld, "\x\gg\addons\gg_music\SadBoiHours\MadWorld.ogg")
	CREATE_SOUND_VOLUMES(TheEveningTrain, "\x\gg\addons\gg_music\SadBoiHours\TheEveningTrain.ogg")
	CREATE_SOUND_VOLUMES(LookOnDownFromTheBridge, "\x\gg\addons\gg_music\SadBoiHours\LookOnDownFromTheBridge.ogg")
	CREATE_SOUND_VOLUMES(ThisWorldIsNotMyHome, "\x\gg\addons\gg_music\SadBoiHours\ThisWorldIsNotMyHome.ogg")
	CREATE_SOUND_VOLUMES(Changes, "\x\gg\addons\gg_music\SadBoiHours\Changes.ogg")
	CREATE_SOUND_VOLUMES(BuryMeNotInTheLonePrairie, "\x\gg\addons\gg_music\SadBoiHours\BuryMeNotInTheLonePrairie.ogg")
	CREATE_SOUND_VOLUMES(Hurt, "\x\gg\addons\gg_music\SadBoiHours\Hurt.ogg")
	CREATE_SOUND_VOLUMES(HopeIsADangerousThingForAWoman, "\x\gg\addons\gg_music\SadBoiHours\HopeIsADangerousThingForAWoman.ogg")
	CREATE_SOUND_VOLUMES(LetItGo, "\x\gg\addons\gg_music\SadBoiHours\LetItGo.ogg")
	CREATE_SOUND_VOLUMES(TheSoundOfSilence, "\x\gg\addons\gg_music\SadBoiHours\TheSoundOfSilence.ogg")
	CREATE_SOUND_VOLUMES(Hallelujah, "\x\gg\addons\gg_music\SadBoiHours\Hallelujah.ogg")
	CREATE_SOUND_VOLUMES(SuicideIsPainless, "\x\gg\addons\gg_music\SadBoiHours\SuicideIsPainless.ogg")
	CREATE_SOUND_VOLUMES(SomewhereOverTheRainbow, "\x\gg\addons\gg_music\SadBoiHours\SomewhereOverTheRainbow.ogg")
	CREATE_SOUND_VOLUMES(LettertoMadeline, "\x\gg\addons\gg_music\SadBoiHours\LettertoMadeline.ogg")
	CREATE_SOUND_VOLUMES(Way2Sexy, "\x\gg\addons\gg_music\ALittleTrollin\Way2Sexy.ogg")
	CREATE_SOUND_VOLUMES(ALot, "\x\gg\addons\gg_music\ALittleTrollin\ALot.ogg")
	CREATE_SOUND_VOLUMES(MoneyTrees, "\x\gg\addons\gg_music\ALittleTrollin\MoneyTrees.ogg")
	CREATE_SOUND_VOLUMES(MiddleChild, "\x\gg\addons\gg_music\ALittleTrollin\MiddleChild.ogg")
	CREATE_SOUND_VOLUMES(GirlsWantGirls, "\x\gg\addons\gg_music\ALittleTrollin\GirlsWantGirls.ogg")
	CREATE_SOUND_VOLUMES(Blessings, "\x\gg\addons\gg_music\ALittleTrollin\Blessings.ogg")
	CREATE_SOUND_VOLUMES(MoneyInTheGrave, "\x\gg\addons\gg_music\ALittleTrollin\MoneyInTheGrave.ogg")
	CREATE_SOUND_VOLUMES(ThereHeGo, "\x\gg\addons\gg_music\ALittleTrollin\ThereHeGo.ogg")
	CREATE_SOUND_VOLUMES(Dysfunctional, "\x\gg\addons\gg_music\ALittleTrollin\Dysfunctional.ogg")
	CREATE_SOUND_VOLUMES(RicFlairDrip, "\x\gg\addons\gg_music\ALittleTrollin\RicFlairDrip.ogg")
	CREATE_SOUND_VOLUMES(SmackThat, "\x\gg\addons\gg_music\ALittleTrollin\SmackThat.ogg")
	CREATE_SOUND_VOLUMES(InDaClub, "\x\gg\addons\gg_music\ALittleTrollin\InDaClub.ogg")
	CREATE_SOUND_VOLUMES(ManyMen, "\x\gg\addons\gg_music\ALittleTrollin\ManyMen.ogg")
	CREATE_SOUND_VOLUMES(Rockstar, "\x\gg\addons\gg_music\ALittleTrollin\Rockstar.ogg")
	CREATE_SOUND_VOLUMES(KnifeTalk, "\x\gg\addons\gg_music\ALittleTrollin\KnifeTalk.ogg")
	CREATE_SOUND_VOLUMES(RapGod, "\x\gg\addons\gg_music\ALittleTrollin\RapGod.ogg")
	CREATE_SOUND_VOLUMES(GoingBad, "\x\gg\addons\gg_music\ALittleTrollin\GoingBad.ogg")
	CREATE_SOUND_VOLUMES(Bugatti, "\x\gg\addons\gg_music\ALittleTrollin\Bugatti.ogg")
	CREATE_SOUND_VOLUMES(SickoMode, "\x\gg\addons\gg_music\ALittleTrollin\SickoMode.ogg")
	CREATE_SOUND_VOLUMES(DNA, "\x\gg\addons\gg_music\ALittleTrollin\DNA.ogg")
	CREATE_SOUND_VOLUMES(FollowGod, "\x\gg\addons\gg_music\ALittleTrollin\FollowGod.ogg")
	CREATE_SOUND_VOLUMES(Heartless, "\x\gg\addons\gg_music\ALittleTrollin\Heartless.ogg")
	CREATE_SOUND_VOLUMES(LaughNowCryLater, "\x\gg\addons\gg_music\ALittleTrollin\LaughNowCryLater.ogg")
	CREATE_SOUND_VOLUMES(TunnelVision, "\x\gg\addons\gg_music\ALittleTrollin\TunnelVision.ogg")
	CREATE_SOUND_VOLUMES(LifeIsGood, "\x\gg\addons\gg_music\ALittleTrollin\LifeIsGood.ogg")
	CREATE_SOUND_VOLUMES(SoundtrackToMyLife, "\x\gg\addons\gg_music\ALittleTrollin\SoundtrackToMyLife.ogg")
	CREATE_SOUND_VOLUMES(ToosieSlide, "\x\gg\addons\gg_music\ALittleTrollin\ToosieSlide.ogg")
	CREATE_SOUND_VOLUMES(ImSoPaid, "\x\gg\addons\gg_music\ALittleTrollin\ImSoPaid.ogg")
	CREATE_SOUND_VOLUMES(DripTooHard, "\x\gg\addons\gg_music\ALittleTrollin\DripTooHard.ogg")
	CREATE_SOUND_VOLUMES(Yeah, "\x\gg\addons\gg_music\ALittleTrollin\Yeah.ogg")
	CREATE_SOUND_VOLUMES(WhereTheHoodAt, "\x\gg\addons\gg_music\GhostTwoMixtape\WhereTheHoodAt.ogg")
	CREATE_SOUND_VOLUMES(DoubleBaccin, "\x\gg\addons\gg_music\GhostTwoMixtape\DoubleBaccin.ogg")
	CREATE_SOUND_VOLUMES(BlackBetty, "\x\gg\addons\gg_music\GhostTwoMixtape\BlackBetty.ogg")
	CREATE_SOUND_VOLUMES(CloserToTheSun, "\x\gg\addons\gg_music\GhostTwoMixtape\CloserToTheSun.ogg")
	CREATE_SOUND_VOLUMES(ForWhatItsWorth, "\x\gg\addons\gg_music\GhostTwoMixtape\ForWhatItsWorth.ogg")
	CREATE_SOUND_VOLUMES(ItWasntMe, "\x\gg\addons\gg_music\GhostTwoMixtape\ItWasntMe.ogg")
	CREATE_SOUND_VOLUMES(Colt45, "\x\gg\addons\gg_music\GhostTwoMixtape\Colt45.ogg")
	CREATE_SOUND_VOLUMES(AllCanadianSurfClub, "\x\gg\addons\gg_music\GhostTwoMixtape\AllCanadianSurfClub.ogg")
	CREATE_SOUND_VOLUMES(FortunateSon, "\x\gg\addons\gg_music\GhostTwoMixtape\FortunateSon.ogg")
	CREATE_SOUND_VOLUMES(ManInTheBox, "\x\gg\addons\gg_music\GhostTwoMixtape\ManInTheBox.ogg")
	CREATE_SOUND_VOLUMES(Pisces, "\x\gg\addons\gg_music\GhostTwoMixtape\Pisces.ogg")
	CREATE_SOUND_VOLUMES(Demolisher, "\x\gg\addons\gg_music\GhostTwoMixtape\Demolisher.ogg")
	CREATE_SOUND_VOLUMES(AreYouSureHankDoneItThisWay, "\x\gg\addons\gg_music\GhostThreeMixtape\AreYouSureHankDoneItThisWay.ogg")
	CREATE_SOUND_VOLUMES(Track020299, "\x\gg\addons\gg_music\GhostThreeMixtape\02.02.99.ogg")
	CREATE_SOUND_VOLUMES(MyNameIsMud, "\x\gg\addons\gg_music\GhostThreeMixtape\MyNameIsMud.ogg")
	CREATE_SOUND_VOLUMES(DieForYou, "\x\gg\addons\gg_music\GhostThreeMixtape\DieForYou.ogg")
	CREATE_SOUND_VOLUMES(RealAmerican, "\x\gg\addons\gg_music\GhostThreeMixtape\RealAmerican.ogg")
	CREATE_SOUND_VOLUMES(FuckYouBitch, "\x\gg\addons\gg_music\GhostThreeMixtape\FuckYouBitch.ogg")
	CREATE_SOUND_VOLUMES(KickstartMyHeart, "\x\gg\addons\gg_music\GhostThreeMixtape\KickstartMyHeart.ogg")
	CREATE_SOUND_VOLUMES(HotelLobby, "\x\gg\addons\gg_music\GhostThreeMixtape\HotelLobby.ogg")
	CREATE_SOUND_VOLUMES(BadMoonRising, "\x\gg\addons\gg_music\GhostThreeMixtape\BadMoonRising.ogg")
	CREATE_SOUND_VOLUMES(BackInBlack, "\x\gg\addons\gg_music\TibbsTastefulTracks\BackInBlack.ogg")
	CREATE_SOUND_VOLUMES(Bandit, "\x\gg\addons\gg_music\TibbsTastefulTracks\Bandit.ogg")
	CREATE_SOUND_VOLUMES(PartyandBullshit, "\x\gg\addons\gg_music\TibbsTastefulTracks\PartyandBullshit.ogg")
	CREATE_SOUND_VOLUMES(SpiritintheSky, "\x\gg\addons\gg_music\TibbsTastefulTracks\SpiritintheSky.ogg")
	CREATE_SOUND_VOLUMES(HereComesTheSun, "\x\gg\addons\gg_music\TibbsTastefulTracks\HereComesTheSun.ogg")
	CREATE_SOUND_VOLUMES(Twirlanta, "\x\gg\addons\gg_music\TibbsTastefulTracks\Twirlanta.ogg")
	CREATE_SOUND_VOLUMES(Rocky, "\x\gg\addons\gg_music\TibbsTastefulTracks\Rocky.ogg")
	CREATE_SOUND_VOLUMES(AlmostEasy, "\x\gg\addons\gg_music\TibbsTastefulTracks\AlmostEasy.ogg")
	CREATE_SOUND_VOLUMES(TheRubberbandMan, "\x\gg\addons\gg_music\TibbsTastefulTracks\TheRubberbandMan.ogg")
	CREATE_SOUND_VOLUMES(DancingintheMoonlight, "\x\gg\addons\gg_music\TibbsTastefulTracks\DancingintheMoonlight.ogg")
	CREATE_SOUND_VOLUMES(Superstition, "\x\gg\addons\gg_music\TibbsTastefulTracks\Superstition.ogg")
	CREATE_SOUND_VOLUMES(ComeOutYeBlackAndTans, "\x\gg\addons\gg_music\TibbsTastefulTracks\ComeOutYeBlackAndTans.ogg")
	CREATE_SOUND_VOLUMES(Erika, "\x\gg\addons\gg_music\TibbsTastefulTracks\Erika.ogg")
};
class CfgVehicles
{
	class Item_Base_F;
	class gg_compact_discs_90sRap: Item_Base_F
	{
		author="$STR_GG_Main_Author";
		displayName="$STR_gg_compact_discs_90sRap_DisplayName";
		vehicleClass="Items";
		scope=2;
		scopeCurator=2;
		class TransportItems
		{
			class _xx_gg_compact_discs_90sRap
			{
				name="gg_compact_discs_90sRap";
				count=1;
			};
		};
	};
	class gg_compact_discs_AssortedBangers: Item_Base_F
	{
		author="$STR_GG_Main_Author";
		displayName="$STR_gg_compact_discs_AssortedBangers_DisplayName";
		vehicleClass="Items";
		scope=2;
		scopeCurator=2;
		class TransportItems
		{
			class _xx_gg_compact_discs_AssortedBangers
			{
				name="gg_compact_discs_AssortedBangers";
				count=1;
			};
		};
	};
	class gg_compact_discs_GhostTwoMixtape: Item_Base_F
	{
		author="$STR_GG_Main_Author";
		displayName="$STR_gg_compact_discs_GhostTwoMixtape_DisplayName";
		vehicleClass="Items";
		scope=2;
		scopeCurator=2;
		class TransportItems
		{
			class _xx_gg_compact_discs_GhostTwoMixtape
			{
				name="gg_compact_discs_GhostTwoMixtape";
				count=1;
			};
		};
	};
	class gg_compact_discs_GhostThreeMixtape: Item_Base_F
	{
		author="$STR_GG_Main_Author";
		displayName="$STR_gg_compact_discs_GhostThreeMixtape_DisplayName";
		vehicleClass="Items";
		scope=2;
		scopeCurator=2;
		class TransportItems
		{
			class _xx_gg_compact_discs_GhostThreeMixtape
			{
				name="gg_compact_discs_GhostThreeMixtape";
				count=1;
			};
		};
	};
	class gg_compact_discs_SadBoiHours: Item_Base_F
	{
		author="$STR_GG_Main_Author";
		displayName="$STR_gg_compact_discs_SadBoiHours_DisplayName";
		vehicleClass="Items";
		scope=2;
		scopeCurator=2;
		class TransportItems
		{
			class _xx_gg_compact_discs_SadBoiHours
			{
				name="gg_compact_discs_SadBoiHours";
				count=1;
			};
		};
	};
	class gg_compact_discs_ALittleTrollin: Item_Base_F
	{
		author="$STR_GG_Main_Author";
		displayName="$STR_gg_compact_discs_ALittleTrollin_DisplayName";
		vehicleClass="Items";
		scope=2;
		scopeCurator=2;
		class TransportItems
		{
			class _xx_gg_compact_discs_ALittleTrollin
			{
				name="gg_compact_discs_ALittleTrollin";
				count=1;
			};
		};
	};
};
class CfgWeapons
{
	class gg_car_stereo_BaseCD;
	class gg_compact_discs_90sRap: gg_car_stereo_BaseCD
	{
		author="$STR_GG_Main_Author";
		displayName="$STR_gg_compact_discs_90sRap_DisplayName";
		descriptionShort="$STR_gg_compact_discs_90sRap_Description";
		scope=2;
		gg_car_stereo_tracks[]=
		{
			
			{
				"gg_compact_discs_AmbitionzAzARidah",
				"$STR_gg_music_AmbitionzAzARidah",
				278
			},
			
			{
				"gg_compact_discs_DiamondsAndWood",
				"$STR_gg_music_DiamondsAndWood",
				313
			},
			
			{
				"gg_compact_discs_GinAndJuice",
				"$STR_gg_music_GinAndJuice",
				212
			},
			
			{
				"gg_compact_discs_HailMary",
				"$STR_gg_music_HailMary",
				312
			},
			
			{
				"gg_compact_discs_IGot5OnIt",
				"$STR_gg_music_IGot5OnIt",
				253
			},
			
			{
				"gg_compact_discs_ISmellSmoke",
				"$STR_gg_music_ISmellSmoke",
				209
			},
			
			{
				"gg_compact_discs_ItWasAGoodDay",
				"$STR_gg_music_ItWasAGoodDay",
				260
			},
			
			{
				"gg_compact_discs_Murder",
				"$STR_gg_music_Murder",
				232
			},
			
			{
				"gg_compact_discs_MyMindPlayinTricksOnMe",
				"$STR_gg_music_MyMindPlayinTricksOnMe",
				311
			},
			
			{
				"gg_compact_discs_NoMoPlay",
				"$STR_gg_music_NoMoPlay",
				295
			},
			
			{
				"gg_compact_discs_NotoriousThugs",
				"$STR_gg_music_NotoriousThugs",
				369
			},
			
			{
				"gg_compact_discs_NuthinButAGThang",
				"$STR_gg_music_NuthinButAGThang",
				238
			},
			
			{
				"gg_compact_discs_Regulate",
				"$STR_gg_music_Regulate",
				238
			},
			
			{
				"gg_compact_discs_SippinOnSomeSyrup",
				"$STR_gg_music_SippinOnSomeSyrup",
				262
			},
			
			{
				"gg_compact_discs_StillSmokin",
				"$STR_gg_music_StillSmokin",
				143
			},
			
			{
				"gg_compact_discs_TheManRightChea",
				"$STR_gg_music_TheManRightChea",
				240
			},
			
			{
				"gg_compact_discs_ThugLuv",
				"$STR_gg_music_ThugLuv",
				307
			},
			
			{
				"gg_compact_discs_ThuggishRuggishBone",
				"$STR_gg_music_ThuggishRuggishBone",
				281
			},
			
			{
				"gg_compact_discs_WhoDatTalkingDown",
				"$STR_gg_music_WhoDatTalkingDown",
				230
			},
			
			{
				"gg_compact_discs_WhoRunIt",
				"$STR_gg_music_WhoRunIt",
				249
			}
		};
	};
	class gg_compact_discs_AssortedBangers: gg_car_stereo_BaseCD
	{
		author="$STR_GG_Main_Author";
		displayName="$STR_gg_compact_discs_AssortedBangers_DisplayName";
		descriptionShort="$STR_gg_compact_discs_AssortedBangers_Description";
		scope=2;
		gg_car_stereo_tracks[]=
		{
			
			{
				"gg_compact_discs_TheLadyDontMind",
				"$STR_gg_music_TheLadyDontMind",
				238
			},
			
			{
				"gg_compact_discs_PaleShelter",
				"$STR_gg_music_PaleShelter",
				273
			},
			
			{
				"gg_compact_discs_Maneater",
				"$STR_gg_music_Maneater",
				271
			},
			
			{
				"gg_compact_discs_IRanSoFarAway",
				"$STR_gg_music_IRanSoFarAway",
				306
			},
			
			{
				"gg_compact_discs_SweetDreamsAreMadeOfThis",
				"$STR_gg_music_SweetDreamsAreMadeOfThis",
				292
			},
			
			{
				"gg_compact_discs_BlueMonday",
				"$STR_gg_music_BlueMonday",
				450
			},
			
			{
				"gg_compact_discs_LifeDuringWartime",
				"$STR_gg_music_LifeDuringWartime",
				221
			},
			
			{
				"gg_compact_discs_OutOfTouch",
				"$STR_gg_music_OutOfTouch",
				249
			},
			
			{
				"gg_compact_discs_SmalltownBoy",
				"$STR_gg_music_SmalltownBoy",
				540
			},
			
			{
				"gg_compact_discs_OverAndOver",
				"$STR_gg_music_OverAndOver",
				350
			},
			
			{
				"gg_compact_discs_PsychoKiller",
				"$STR_gg_music_PsychoKiller",
				261
			},
			
			{
				"gg_compact_discs_LittleDarkAge",
				"$STR_gg_music_LittleDarkAge",
				299
			},
			
			{
				"gg_compact_discs_Nightcall",
				"$STR_gg_music_Nightcall",
				256
			},
			
			{
				"gg_compact_discs_TheManWhoSoldTheWorld",
				"$STR_gg_music_TheManWhoSoldTheWorld",
				343
			},
			
			{
				"gg_compact_discs_BlindingLights",
				"$STR_gg_music_BlindingLights",
				203
			},
			
			{
				"gg_compact_discs_Edgerunner",
				"$STR_gg_music_Edgerunner",
				161
			},
			
			{
				"gg_compact_discs_InTheAirTonight",
				"$STR_gg_music_InTheAirTonight",
				336
			},
			
			{
				"gg_compact_discs_MessageInABottle",
				"$STR_gg_music_MessageInABottle",
				260
			},
			
			{
				"gg_compact_discs_YourLove",
				"$STR_gg_music_YourLove",
				221
			},
			
			{
				"gg_compact_discs_Dreams",
				"$STR_gg_music_Dreams",
				257
			},
			
			{
				"gg_compact_discs_TunnelOfLove",
				"$STR_gg_music_TunnelOfLove",
				489
			},
			
			{
				"gg_compact_discs_DancingInTheDark",
				"$STR_gg_music_DancingInTheDark",
				427
			},
			
			{
				"gg_compact_discs_PapaWasARollingStone",
				"$STR_gg_music_PapaWasARollingStone",
				710
			},
			
			{
				"gg_compact_discs_DoItAgain",
				"$STR_gg_music_DoItAgain",
				356
			},
			
			{
				"gg_compact_discs_BennysHere",
				"$STR_gg_music_BennysHere",
				401
			},
			
			{
				"gg_compact_discs_Showdown",
				"$STR_gg_music_Showdown",
				249
			},
			
			{
				"gg_compact_discs_Destination",
				"$STR_gg_music_Destination",
				402
			},
			
			{
				"gg_compact_discs_BabyImYours",
				"$STR_gg_music_BabyImYours",
				215
			},
			
			{
				"gg_compact_discs_GetLucky",
				"$STR_gg_music_GetLucky",
				369
			},
			
			{
				"gg_compact_discs_IHeardItThroughTheGrapevine",
				"$STR_gg_music_IHeardItThroughTheGrapevine",
				664
			},
			
			{
				"gg_compact_discs_SisterGoldenHair",
				"$STR_gg_music_SisterGoldenHair",
				196
			},
			
			{
				"gg_compact_discs_Layla",
				"$STR_gg_music_Layla",
				423
			},
			
			{
				"gg_compact_discs_Psycho",
				"$STR_gg_music_Psycho",
				223
			},
			
			{
				"gg_compact_discs_Mykonos",
				"$STR_gg_music_Mykonos",
				228
			},
			
			{
				"gg_compact_discs_BonesInTheOcean",
				"$STR_gg_music_BonesInTheOcean",
				193
			},
			
			{
				"gg_compact_discs_RedRightHand",
				"$STR_gg_music_RedRightHand",
				370
			},
			
			{
				"gg_compact_discs_JustDroppedIn",
				"$STR_gg_music_JustDroppedIn",
				262
			},
			
			{
				"gg_compact_discs_IfYouCouldReadMyMind",
				"$STR_gg_music_IfYouCouldReadMyMind",
				269
			},
			
			{
				"gg_compact_discs_DontThinkTwiceItsAllRight",
				"$STR_gg_music_DontThinkTwiceItsAllRight",
				231
			},
			
			{
				"gg_compact_discs_500Miles",
				"$STR_gg_music_500Miles",
				193
			},
			
			{
				"gg_compact_discs_LittleWing",
				"$STR_gg_music_LittleWing",
				408
			},
			
			{
				"gg_compact_discs_HeyJoe",
				"$STR_gg_music_HeyJoe",
				227
			},
			
			{
				"gg_compact_discs_AllAlongTheWatchtower",
				"$STR_gg_music_AllAlongTheWatchtower",
				241
			},
			
			{
				"gg_compact_discs_ComingIntoLosAngeles",
				"$STR_gg_music_ComingIntoLosAngeles",
				186
			},
			
			{
				"gg_compact_discs_PaintItBlack",
				"$STR_gg_music_PaintItBlack",
				226
			},
			
			{
				"gg_compact_discs_StrawberryLetter23",
				"$STR_gg_music_StrawberryLetter23",
				242
			},
			
			{
				"gg_compact_discs_Pinball",
				"$STR_gg_music_Pinball",
				193
			},
			
			{
				"gg_compact_discs_Cocaine",
				"$STR_gg_music_Cocaine",
				409
			},
			
			{
				"gg_compact_discs_WhiteRoom",
				"$STR_gg_music_WhiteRoom",
				298
			},
			
			{
				"gg_compact_discs_Godzilla",
				"$STR_gg_music_Godzilla",
				221
			},
			
			{
				"gg_compact_discs_Time",
				"$STR_gg_music_Time",
				413
			},
			
			{
				"gg_compact_discs_OneOfTheseDays",
				"$STR_gg_music_OneOfTheseDays",
				355
			},
			
			{
				"gg_compact_discs_TheMomentBefore",
				"$STR_gg_music_TheMomentBefore",
				328
			},
			
			{
				"gg_compact_discs_FarFromAnyRoad",
				"$STR_gg_music_FarFromAnyRoad",
				166
			},
			
			{
				"gg_compact_discs_GhostRidersInTheSky",
				"$STR_gg_music_GhostRidersInTheSky",
				351
			},
			
			{
				"gg_compact_discs_DontFearTheReaper",
				"$STR_gg_music_DontFearTheReaper",
				308
			},
			
			{
				"gg_compact_discs_Epitaph",
				"$STR_gg_music_Epitaph",
				535
			},
			
			{
				"gg_compact_discs_HouseOfTheRisingSun",
				"$STR_gg_music_HouseOfTheRisingSun",
				268
			},
			
			{
				"gg_compact_discs_AWhiterShadeOfPale",
				"$STR_gg_music_AWhiterShadeOfPale",
				235
			},
			
			{
				"gg_compact_discs_BlackMagicWoman",
				"$STR_gg_music_BlackMagicWoman",
				321
			},
			
			{
				"gg_compact_discs_Abracadabra",
				"$STR_gg_music_Abracadabra",
				308
			},
			
			{
				"gg_compact_discs_AintNoLoveInTheHeartOfTheCity",
				"$STR_gg_music_AintNoLoveInTheHeartOfTheCity",
				233
			},
			
			{
				"gg_compact_discs_CaliforniaDreamin",
				"$STR_gg_music_CaliforniaDreamin",
				377
			},
			
			{
				"gg_compact_discs_SunshineOfYourLove",
				"$STR_gg_music_SunshineOfYourLove",
				250
			},
			
			{
				"gg_compact_discs_ComeAndGetYourLove",
				"$STR_gg_music_ComeAndGetYourLove",
				300
			},
			
			{
				"gg_compact_discs_SpaceTruckin",
				"$STR_gg_music_SpaceTruckin",
				273
			},
			
			{
				"gg_compact_discs_Strutter",
				"$STR_gg_music_Strutter",
				190
			},
			
			{
				"gg_compact_discs_Refugee",
				"$STR_gg_music_Refugee",
				202
			},
			
			{
				"gg_compact_discs_LosingMyReligion",
				"$STR_gg_music_LosingMyReligion",
				268
			},
			
			{
				"gg_compact_discs_DearGod",
				"$STR_gg_music_DearGod",
				219
			},
			
			{
				"gg_compact_discs_BurninForYou",
				"$STR_gg_music_BurninForYou",
				271
			},
			
			{
				"gg_compact_discs_CallMe",
				"$STR_gg_music_CallMe",
				212
			},
			
			{
				"gg_compact_discs_DaYaThinkImSexy",
				"$STR_gg_music_DaYaThinkImSexy",
				327
			},
			
			{
				"gg_compact_discs_TakeMeOut",
				"$STR_gg_music_TakeMeOut",
				240
			},
			
			{
				"gg_compact_discs_SevenNationArmy",
				"$STR_gg_music_SevenNationArmy",
				231
			},
			
			{
				"gg_compact_discs_OffendInEveryWay",
				"$STR_gg_music_OffendInEveryWay",
				186
			},
			
			{
				"gg_compact_discs_NotYourKindOfPeople",
				"$STR_gg_music_NotYourKindOfPeople",
				299
			},
			
			{
				"gg_compact_discs_NotUpToMe",
				"$STR_gg_music_NotUpToMe",
				289
			},
			
			{
				"gg_compact_discs_LoveWillTearUsApart",
				"$STR_gg_music_LoveWillTearUsApart",
				204
			},
			
			{
				"gg_compact_discs_Buena",
				"$STR_gg_music_Buena",
				199
			},
			
			{
				"gg_compact_discs_WalkThisLand",
				"$STR_gg_music_WalkThisLand",
				415
			},
			
			{
				"gg_compact_discs_PumpedUpKicks",
				"$STR_gg_music_PumpedUpKicks",
				239
			},
			
			{
				"gg_compact_discs_WhenTheLeveeBreaks",
				"$STR_gg_music_WhenTheLeveeBreaks",
				428
			},
			
			{
				"gg_compact_discs_ThenCameTheLastDaysOfMay",
				"$STR_gg_music_ThenCameTheLastDaysOfMay",
				210
			},
			
			{
				"gg_compact_discs_TheBottomlessHole",
				"$STR_gg_music_TheBottomlessHole",
				193
			},
			
			{
				"gg_compact_discs_TheChain",
				"$STR_gg_music_TheChain",
				270
			},
			
			{
				"gg_compact_discs_CatchTheRainbow",
				"$STR_gg_music_CatchTheRainbow",
				396
			},
			
			{
				"gg_compact_discs_BadCompany",
				"$STR_gg_music_BadCompany",
				288
			},
			
			{
				"gg_compact_discs_Mother",
				"$STR_gg_music_Mother",
				204
			},
			
			{
				"gg_compact_discs_ThatSmell",
				"$STR_gg_music_ThatSmell",
				348
			},
			
			{
				"gg_compact_discs_MaryJanesLastDance",
				"$STR_gg_music_MaryJanesLastDance",
				273
			},
			
			{
				"gg_compact_discs_CallMeTheBreeze",
				"$STR_gg_music_CallMeTheBreeze",
				307
			},
			
			{
				"gg_compact_discs_ChoctawBingo",
				"$STR_gg_music_ChoctawBingo",
				513
			},
			
			{
				"gg_compact_discs_FeelGoodInc",
				"$STR_gg_music_FeelGoodInc",
				222
			},
			
			{
				"gg_compact_discs_CantFeelMyFace",
				"$STR_gg_music_CantFeelMyFace",
				215
			},
			
			{
				"gg_compact_discs_SingAlong",
				"$STR_gg_music_SingAlong",
				174
			},
			
			{
				"gg_compact_discs_AGoodLook",
				"$STR_gg_music_AGoodLook",
				241
			},
			
			{
				"gg_compact_discs_TheLessIKnowTheBetter",
				"$STR_gg_music_TheLessIKnowTheBetter",
				217
			},
			
			{
				"gg_compact_discs_AbsoluteTerritory",
				"$STR_gg_music_AbsoluteTerritory",
				268
			},
			
			{
				"gg_compact_discs_CocaineMan",
				"$STR_gg_music_CocaineMan",
				234
			},
			
			{
				"gg_compact_discs_InTheCity",
				"$STR_gg_music_InTheCity",
				235
			},
			
			{
				"gg_compact_discs_AHorseWithNoName",
				"$STR_gg_music_AHorseWithNoName",
				252
			},
			
			{
				"gg_compact_discs_HowLong",
				"$STR_gg_music_HowLong",
				229
			},
			
			{
				"gg_compact_discs_InHellIllBeInGoodCompany",
				"$STR_gg_music_InHellIllBeInGoodCompany",
				249
			},
			
			{
				"gg_compact_discs_BigIron",
				"$STR_gg_music_BigIron",
				235
			},
			
			{
				"gg_compact_discs_LastTrainHome",
				"$STR_gg_music_LastTrainHome",
				338
			},
			
			{
				"gg_compact_discs_SimpleMan",
				"$STR_gg_music_SimpleMan",
				356
			},
			
			{
				"gg_compact_discs_StairwayToHeaven",
				"$STR_gg_music_StairwayToHeaven",
				482
			},
			
			{
				"gg_compact_discs_FreeBird",
				"$STR_gg_music_FreeBird",
				607
			},
			
			{
				"gg_compact_discs_TheEcstasyOfGold",
				"$STR_gg_music_TheEcstasyOfGold",
				200
			},
			
			{
				"gg_compact_discs_Battery",
				"$STR_gg_music_Battery",
				312
			},
			
			{
				"gg_compact_discs_SeekAndDestroy",
				"$STR_gg_music_SeekAndDestroy",
				414
			},
			
			{
				"gg_compact_discs_ForWhomTheBellTolls",
				"$STR_gg_music_ForWhomTheBellTolls",
				309
			},
			
			{
				"gg_compact_discs_SquareHammer",
				"$STR_gg_music_SquareHammer",
				239
			},
			
			{
				"gg_compact_discs_DanceMacabre",
				"$STR_gg_music_DanceMacabre",
				219
			},
			
			{
				"gg_compact_discs_KnightsOfCydonia",
				"$STR_gg_music_KnightsOfCydonia",
				367
			},
			
			{
				"gg_compact_discs_ISeeThroughYou",
				"$STR_gg_music_ISeeThroughYou",
				342
			},
			
			{
				"gg_compact_discs_DeathsDoor",
				"$STR_gg_music_DeathsDoor",
				435
			},
			
			{
				"gg_compact_discs_WelcomeToTheVoid",
				"$STR_gg_music_WelcomeToTheVoid",
				490
			},
			
			{
				"gg_compact_discs_ColdSweat",
				"$STR_gg_music_ColdSweat",
				186
			},
			
			{
				"gg_compact_discs_WeAreTheRoadCrew",
				"$STR_gg_music_WeAreTheRoadCrew",
				190
			},
			
			{
				"gg_compact_discs_AceOfSpades",
				"$STR_gg_music_AceOfSpades",
				166
			},
			
			{
				"gg_compact_discs_HolyDiver",
				"$STR_gg_music_HolyDiver",
				280
			},
			
			{
				"gg_compact_discs_DeathByDesign",
				"$STR_gg_music_DeathByDesign",
				280
			},
			
			{
				"gg_compact_discs_CultOfPersonality",
				"$STR_gg_music_CultOfPersonality",
				292
			},
			
			{
				"gg_compact_discs_Hellraiser",
				"$STR_gg_music_Hellraiser",
				293
			},
			
			{
				"gg_compact_discs_NoMoreTears",
				"$STR_gg_music_NoMoreTears",
				445
			},
			
			{
				"gg_compact_discs_Stillborn",
				"$STR_gg_music_Stillborn",
				195
			},
			
			{
				"gg_compact_discs_CounterfeitGod",
				"$STR_gg_music_CounterfeitGod",
				258
			},
			
			{
				"gg_compact_discs_MassMurderMachine",
				"$STR_gg_music_MassMurderMachine",
				346
			},
			
			{
				"gg_compact_discs_BatteringRam",
				"$STR_gg_music_BatteringRam",
				261
			},
			
			{
				"gg_compact_discs_GenocideJunkies",
				"$STR_gg_music_GenocideJunkies",
				352
			},
			
			{
				"gg_compact_discs_WarPigs",
				"$STR_gg_music_WarPigs",
				474
			},
			
			{
				"gg_compact_discs_NIB",
				"$STR_gg_music_NIB",
				364
			},
			
			{
				"gg_compact_discs_Supernaut",
				"$STR_gg_music_Supernaut",
				270
			},
			
			{
				"gg_compact_discs_SabbraCadabra",
				"$STR_gg_music_SabbraCadabra",
				357
			},
			
			{
				"gg_compact_discs_SabbathBloodySabbath",
				"$STR_gg_music_SabbathBloodySabbath",
				347
			},
			
			{
				"gg_compact_discs_Snowblind",
				"$STR_gg_music_Snowblind",
				325
			},
			
			{
				"gg_compact_discs_ANationalAcrobat",
				"$STR_gg_music_ANationalAcrobat",
				375
			},
			
			{
				"gg_compact_discs_IntoTheVoid",
				"$STR_gg_music_IntoTheVoid",
				370
			},
			
			{
				"gg_compact_discs_CountryGirl",
				"$STR_gg_music_CountryGirl",
				242
			},
			
			{
				"gg_compact_discs_HeavenAndHell",
				"$STR_gg_music_HeavenAndHell",
				417
			},
			
			{
				"gg_compact_discs_Badlands",
				"$STR_gg_music_Badlands",
				647
			},
			
			{
				"gg_compact_discs_MoonsOfNeptune",
				"$STR_gg_music_MoonsOfNeptune",
				1011
			},
			
			{
				"gg_compact_discs_TheMan",
				"$STR_gg_music_TheMan",
				266
			},
			
			{
				"gg_compact_discs_Rasputin",
				"$STR_gg_music_Rasputin",
				267
			}
		};
	};
	class gg_compact_discs_SadBoiHours: gg_car_stereo_BaseCD
	{
		author="$STR_GG_Main_Author";
		displayName="$STR_gg_compact_discs_SadBoiHours_DisplayName";
		descriptionShort="$STR_gg_compact_discs_SadBoiHours_Description";
		scope=2;
		gg_car_stereo_tracks[]=
		{
			
			{
				"gg_compact_discs_MadWorld",
				"$STR_gg_music_MadWorld",
				182
			},
			
			{
				"gg_compact_discs_TheEveningTrain",
				"$STR_gg_music_TheEveningTrain",
				257
			},
			
			{
				"gg_compact_discs_LookOnDownFromTheBridge",
				"$STR_gg_music_LookOnDownFromTheBridge",
				287
			},
			
			{
				"gg_compact_discs_ThisWorldIsNotMyHome",
				"$STR_gg_music_ThisWorldIsNotMyHome",
				207
			},
			
			{
				"gg_compact_discs_Changes",
				"$STR_gg_music_Changes",
				302
			},
			
			{
				"gg_compact_discs_BuryMeNotInTheLonePrairie",
				"$STR_gg_music_BuryMeNotInTheLonePrairie",
				144
			},
			
			{
				"gg_compact_discs_Hurt",
				"$STR_gg_music_Hurt",
				228
			},
			
			{
				"gg_compact_discs_HopeIsADangerousThingForAWoman",
				"$STR_gg_music_HopeIsADangerousThingForAWoman",
				326
			},
			
			{
				"gg_compact_discs_LetItGo",
				"$STR_gg_music_LetItGo",
				258
			},
			
			{
				"gg_compact_discs_TheSoundOfSilence",
				"$STR_gg_music_TheSoundOfSilence",
				187
			},
			
			{
				"gg_compact_discs_Hallelujah",
				"$STR_gg_music_Hallelujah",
				393
			},
			
			{
				"gg_compact_discs_SuicideIsPainless",
				"$STR_gg_music_SuicideIsPainless",
				174
			},
			
			{
				"gg_compact_discs_SomewhereOverTheRainbow",
				"$STR_gg_music_SomewhereOverTheRainbow",
				210
			},
			
			{
				"gg_compact_discs_LettertoMadeline",
				"$STR_gg_music_LettertoMadeline",
				471
			}
		};
	};
	class gg_compact_discs_GhostTwoMixtape: gg_car_stereo_BaseCD
	{
		author="$STR_GG_Main_Author";
		displayName="$STR_gg_compact_discs_GhostTwoMixtape_DisplayName";
		descriptionShort="$STR_gg_compact_discs_GhostTwoMixtape_Description";
		scope=2;
		gg_car_stereo_tracks[]=
		{
			
			{
				"gg_compact_discs_ManyMen",
				"$STR_gg_music_ManyMen",
				246
			},
			
			{
				"gg_compact_discs_WhereTheHoodAt",
				"$STR_gg_music_WhereTheHoodAt",
				286
			},
			
			{
				"gg_compact_discs_DoubleBaccin",
				"$STR_gg_music_DoubleBaccin",
				135
			},
			
			{
				"gg_compact_discs_WarPigs",
				"$STR_gg_music_WarPigs",
				478
			},
			
			{
				"gg_compact_discs_AllAlongTheWatchtower",
				"$STR_gg_music_AllAlongTheWatchtower",
				241
			},
			
			{
				"gg_compact_discs_BlackBetty",
				"$STR_gg_music_BlackBetty",
				238
			},
			
			{
				"gg_compact_discs_CloserToTheSun",
				"$STR_gg_music_CloserToTheSun",
				146
			},
			
			{
				"gg_compact_discs_ForWhatItsWorth",
				"$STR_gg_music_ForWhatItsWorth",
				157
			},
			
			{
				"gg_compact_discs_ItWasntMe",
				"$STR_gg_music_ItWasntMe",
				227
			},
			
			{
				"gg_compact_discs_Colt45",
				"$STR_gg_music_Colt45",
				359
			},
			
			{
				"gg_compact_discs_AllCanadianSurfClub",
				"$STR_gg_music_AllCanadianSurfClub",
				169
			},
			
			{
				"gg_compact_discs_FortunateSon",
				"$STR_gg_music_FortunateSon",
				138
			},
			
			{
				"gg_compact_discs_ManInTheBox",
				"$STR_gg_music_ManInTheBox",
				287
			},
			
			{
				"gg_compact_discs_Pisces",
				"$STR_gg_music_Pisces",
				305
			},
			
			{
				"gg_compact_discs_Demolisher",
				"$STR_gg_music_Demolisher",
				219
			}
		};
	};
	class gg_compact_discs_GhostThreeMixtape: gg_car_stereo_BaseCD
	{
		author="$STR_GG_Main_Author";
		displayName="$STR_gg_compact_discs_GhostThreeMixtape_DisplayName";
		descriptionShort="$STR_gg_compact_discs_GhostThreeMixtape_Description";
		scope=2;
		gg_car_stereo_tracks[]=
		{
			
			{
				"gg_compact_discs_AreYouSureHankDoneItThisWay",
				"$STR_gg_music_AreYouSureHankDoneItThisWay",
				175
			},
			
			{
				"gg_compact_discs_Track020299",
				"$STR_gg_music_020299",
				163
			},
			
			{
				"gg_compact_discs_MyNameIsMud",
				"$STR_gg_music_MyNameIsMud",
				283
			},
			
			{
				"gg_compact_discs_DieForYou",
				"$STR_gg_music_DieForYou",
				260
			},
			
			{
				"gg_compact_discs_RealAmerican",
				"$STR_gg_music_RealAmerican",
				362
			},
			
			{
				"gg_compact_discs_MoneyTrees",
				"$STR_gg_music_MoneyTrees",
				386
			},
			
			{
				"gg_compact_discs_FuckYouBitch",
				"$STR_gg_music_FuckYouBitch",
				204
			},
			
			{
				"gg_compact_discs_KickstartMyHeart",
				"$STR_gg_music_KickstartMyHeart",
				282
			},
			
			{
				"gg_compact_discs_WarPigs",
				"$STR_gg_music_WarPigs",
				478
			},
			
			{
				"gg_compact_discs_HotelLobby",
				"$STR_gg_music_HotelLobby",
				204
			},
			
			{
				"gg_compact_discs_ItWasAGoodDay",
				"$STR_gg_music_ItWasAGoodDay",
				260
			},
			
			{
				"gg_compact_discs_BadMoonRising",
				"$STR_gg_music_BadMoonRising",
				138
			}
		};
	};
	class gg_compact_discs_TibbsTastefulTracks: gg_car_stereo_BaseCD
	{
		author="$STR_GG_Main_Author";
		displayName="$STR_gg_compact_discs_TibbsTastefulTracks_DisplayName";
		descriptionShort="$STR_gg_compact_discs_TibbsTastefulTracks_Description";
		scope=2;
		gg_car_stereo_tracks[]=
		{
			
			{
				"gg_compact_discs_BackInBlack",
				"$STR_gg_music_BackInBlack",
				253
			},
			
			{
				"gg_compact_discs_Bandit",
				"$STR_gg_music_Bandit",
				149
			},
			
			{
				"gg_compact_discs_PartyAndBullshit",
				"$STR_gg_music_PartyAndBullshit",
				221
			},
			
			{
				"gg_compact_discs_KnifeTalk",
				"$STR_gg_music_KnifeTalk",
				243
			},
			
			{
				"gg_compact_discs_SpiritInTheSky",
				"$STR_gg_music_SpiritInTheSky",
				239
			},
			
			{
				"gg_compact_discs_HereComesTheSun",
				"$STR_gg_music_HereComesTheSun",
				191
			},
			
			{
				"gg_compact_discs_Twirlanta",
				"$STR_gg_music_Twirlanta",
				185
			},
			
			{
				"gg_compact_discs_Rocky",
				"$STR_gg_music_Rocky",
				216
			},
			
			{
				"gg_compact_discs_AlmostEasy",
				"$STR_gg_music_AlmostEasy",
				235
			},
			
			{
				"gg_compact_discs_TheRubberbandMan",
				"$STR_gg_music_TheRubberbandMan",
				213
			},
			
			{
				"gg_compact_discs_DancingintheMoonlight",
				"$STR_gg_music_DancingintheMoonlight",
				181
			},
			
			{
				"gg_compact_discs_Superstition",
				"$STR_gg_music_Superstition",
				266
			},
			
			{
				"gg_compact_discs_ComeandGetYourLove",
				"$STR_gg_music_ComeandGetYourLove",
				207
			},
			
			{
				"gg_compact_discs_ComeOutYeBlackAndTans",
				"$STR_gg_music_ComeOutYeBlackAndTans",
				184
			},
			
			{
				"gg_compact_discs_Erika",
				"$STR_gg_music_Erika",
				178
			}
		};
	};
	class gg_compact_discs_ALittleTrollin: gg_car_stereo_BaseCD
	{
		author="$STR_GG_Main_Author";
		displayName="$STR_gg_compact_discs_ALittleTrollin_DisplayName";
		descriptionShort="$STR_gg_compact_discs_ALittleTrollin_Description";
		scope=2;
		gg_car_stereo_tracks[]=
		{
			
			{
				"gg_compact_discs_Way2Sexy",
				"$STR_gg_music_Way2Sexy",
				258
			},
			
			{
				"gg_compact_discs_ALot",
				"$STR_gg_music_ALot",
				288
			},
			
			{
				"gg_compact_discs_MoneyTrees",
				"$STR_gg_music_MoneyTrees",
				388
			},
			
			{
				"gg_compact_discs_MiddleChild",
				"$STR_gg_music_MiddleChild",
				213
			},
			
			{
				"gg_compact_discs_GirlsWantGirls",
				"$STR_gg_music_GirlsWantGirls",
				222
			},
			
			{
				"gg_compact_discs_Blessings",
				"$STR_gg_music_Blessings",
				252
			},
			
			{
				"gg_compact_discs_MoneyInTheGrave",
				"$STR_gg_music_MoneyInTheGrave",
				205
			},
			
			{
				"gg_compact_discs_ThereHeGo",
				"$STR_gg_music_ThereHeGo",
				196
			},
			
			{
				"gg_compact_discs_Dysfunctional",
				"$STR_gg_music_Dysfunctional",
				244
			},
			
			{
				"gg_compact_discs_RicFlairDrip",
				"$STR_gg_music_RicFlairDrip",
				172
			},
			
			{
				"gg_compact_discs_SmackThat",
				"$STR_gg_music_SmackThat",
				212
			},
			
			{
				"gg_compact_discs_InDaClub",
				"$STR_gg_music_InDaClub",
				193
			},
			
			{
				"gg_compact_discs_ManyMen",
				"$STR_gg_music_ManyMen",
				256
			},
			
			{
				"gg_compact_discs_Rockstar",
				"$STR_gg_music_Rockstar",
				217
			},
			
			{
				"gg_compact_discs_KnifeTalk",
				"$STR_gg_music_KnifeTalk",
				243
			},
			
			{
				"gg_compact_discs_RapGod",
				"$STR_gg_music_RapGod",
				366
			},
			
			{
				"gg_compact_discs_GoingBad",
				"$STR_gg_music_GoingBad",
				180
			},
			
			{
				"gg_compact_discs_Bugatti",
				"$STR_gg_music_Bugatti",
				326
			},
			
			{
				"gg_compact_discs_SickoMode",
				"$STR_gg_music_SickoMode",
				322
			},
			
			{
				"gg_compact_discs_DNA",
				"$STR_gg_music_DNA",
				186
			},
			
			{
				"gg_compact_discs_FollowGod",
				"$STR_gg_music_FollowGod",
				104
			},
			
			{
				"gg_compact_discs_Heartless",
				"$STR_gg_music_Heartless",
				210
			},
			
			{
				"gg_compact_discs_LaughNowCryLater",
				"$STR_gg_music_LaughNowCryLater",
				261
			},
			
			{
				"gg_compact_discs_TunnelVision",
				"$STR_gg_music_TunnelVision",
				268
			},
			
			{
				"gg_compact_discs_LifeIsGood",
				"$STR_gg_music_LifeIsGood",
				237
			},
			
			{
				"gg_compact_discs_SoundtrackToMyLife",
				"$STR_gg_music_SoundtrackToMyLife",
				237
			},
			
			{
				"gg_compact_discs_ToosieSlide",
				"$STR_gg_music_ToosieSlide",
				248
			},
			
			{
				"gg_compact_discs_ImSoPaid",
				"$STR_gg_music_ImSoPaid",
				263
			},
			
			{
				"gg_compact_discs_DripTooHard",
				"$STR_gg_music_DripTooHard",
				146
			},
			
			{
				"gg_compact_discs_Yeah",
				"$STR_gg_music_Yeah",
				252
			}
		};
	};
};
