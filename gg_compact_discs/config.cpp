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
			"gg_compact_discs_MixtapeOne",
			"gg_compact_discs_MixtapeTwo",
			"gg_compact_discs_MixtapeThree"
		};
		weapons[]=
		{
			"gg_compact_discs_90sRap",
			"gg_compact_discs_AssortedBangers",
			"gg_compact_discs_SadBoiHours",
			"gg_compact_discs_MixtapeOne",
			"gg_compact_discs_MixtapeTwo",
			"gg_compact_discs_MixtapeThree",
			"gg_compact_discs_MixtapeFour",
			"gg_compact_discs_EasternDefianceMegamix"
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
	CREATE_SOUND_VOLUMES(lostCause, "\x\gg\addons\gg_music\SadBoiHours\lostCause.ogg")
	CREATE_SOUND_VOLUMES(PassOut, "\x\gg\addons\gg_music\SadBoiHours\PassOut.ogg")
	CREATE_SOUND_VOLUMES(Alright, "\x\gg\addons\gg_music\SadBoiHours\Alright.ogg")
	CREATE_SOUND_VOLUMES(Hurricane, "\x\gg\addons\gg_music\SadBoiHours\Hurricane.ogg")
	CREATE_SOUND_VOLUMES(Alone, "\x\gg\addons\gg_music\SadBoiHours\Alone.ogg")
	CREATE_SOUND_VOLUMES(Way2Sexy, "\x\gg\addons\gg_music\MixtapeThree\Way2Sexy.ogg")
	CREATE_SOUND_VOLUMES(ALot, "\x\gg\addons\gg_music\MixtapeThree\ALot.ogg")
	CREATE_SOUND_VOLUMES(MoneyTrees, "\x\gg\addons\gg_music\MixtapeThree\MoneyTrees.ogg")
	CREATE_SOUND_VOLUMES(MiddleChild, "\x\gg\addons\gg_music\MixtapeThree\MiddleChild.ogg")
	CREATE_SOUND_VOLUMES(GirlsWantGirls, "\x\gg\addons\gg_music\MixtapeThree\GirlsWantGirls.ogg")
	CREATE_SOUND_VOLUMES(Blessings, "\x\gg\addons\gg_music\MixtapeThree\Blessings.ogg")
	CREATE_SOUND_VOLUMES(MoneyInTheGrave, "\x\gg\addons\gg_music\MixtapeThree\MoneyInTheGrave.ogg")
	CREATE_SOUND_VOLUMES(ThereHeGo, "\x\gg\addons\gg_music\MixtapeThree\ThereHeGo.ogg")
	CREATE_SOUND_VOLUMES(Dysfunctional, "\x\gg\addons\gg_music\MixtapeThree\Dysfunctional.ogg")
	CREATE_SOUND_VOLUMES(RicFlairDrip, "\x\gg\addons\gg_music\MixtapeThree\RicFlairDrip.ogg")
	CREATE_SOUND_VOLUMES(SmackThat, "\x\gg\addons\gg_music\MixtapeThree\SmackThat.ogg")
	CREATE_SOUND_VOLUMES(InDaClub, "\x\gg\addons\gg_music\MixtapeThree\InDaClub.ogg")
	CREATE_SOUND_VOLUMES(ManyMen, "\x\gg\addons\gg_music\MixtapeThree\ManyMen.ogg")
	CREATE_SOUND_VOLUMES(Rockstar, "\x\gg\addons\gg_music\MixtapeThree\Rockstar.ogg")
	CREATE_SOUND_VOLUMES(KnifeTalk, "\x\gg\addons\gg_music\MixtapeThree\KnifeTalk.ogg")
	CREATE_SOUND_VOLUMES(RapGod, "\x\gg\addons\gg_music\MixtapeThree\RapGod.ogg")
	CREATE_SOUND_VOLUMES(GoingBad, "\x\gg\addons\gg_music\MixtapeThree\GoingBad.ogg")
	CREATE_SOUND_VOLUMES(Bugatti, "\x\gg\addons\gg_music\MixtapeThree\Bugatti.ogg")
	CREATE_SOUND_VOLUMES(SickoMode, "\x\gg\addons\gg_music\MixtapeThree\SickoMode.ogg")
	CREATE_SOUND_VOLUMES(DNA, "\x\gg\addons\gg_music\MixtapeThree\DNA.ogg")
	CREATE_SOUND_VOLUMES(FollowGod, "\x\gg\addons\gg_music\MixtapeThree\FollowGod.ogg")
	CREATE_SOUND_VOLUMES(Heartless, "\x\gg\addons\gg_music\MixtapeThree\Heartless.ogg")
	CREATE_SOUND_VOLUMES(LaughNowCryLater, "\x\gg\addons\gg_music\MixtapeThree\LaughNowCryLater.ogg")
	CREATE_SOUND_VOLUMES(TunnelVision, "\x\gg\addons\gg_music\MixtapeThree\TunnelVision.ogg")
	CREATE_SOUND_VOLUMES(LifeIsGood, "\x\gg\addons\gg_music\MixtapeThree\LifeIsGood.ogg")
	CREATE_SOUND_VOLUMES(SoundtrackToMyLife, "\x\gg\addons\gg_music\MixtapeThree\SoundtrackToMyLife.ogg")
	CREATE_SOUND_VOLUMES(ToosieSlide, "\x\gg\addons\gg_music\MixtapeThree\ToosieSlide.ogg")
	CREATE_SOUND_VOLUMES(ImSoPaid, "\x\gg\addons\gg_music\MixtapeThree\ImSoPaid.ogg")
	CREATE_SOUND_VOLUMES(DripTooHard, "\x\gg\addons\gg_music\MixtapeThree\DripTooHard.ogg")
	CREATE_SOUND_VOLUMES(Yeah, "\x\gg\addons\gg_music\MixtapeThree\Yeah.ogg")
	CREATE_SOUND_VOLUMES(WhereTheHoodAt, "\x\gg\addons\gg_music\MixtapeOne\WhereTheHoodAt.ogg")
	CREATE_SOUND_VOLUMES(DoubleBaccin, "\x\gg\addons\gg_music\MixtapeOne\DoubleBaccin.ogg")
	CREATE_SOUND_VOLUMES(BlackBetty, "\x\gg\addons\gg_music\MixtapeOne\BlackBetty.ogg")
	CREATE_SOUND_VOLUMES(CloserToTheSun, "\x\gg\addons\gg_music\MixtapeOne\CloserToTheSun.ogg")
	CREATE_SOUND_VOLUMES(ForWhatItsWorth, "\x\gg\addons\gg_music\MixtapeOne\ForWhatItsWorth.ogg")
	CREATE_SOUND_VOLUMES(ItWasntMe, "\x\gg\addons\gg_music\MixtapeOne\ItWasntMe.ogg")
	CREATE_SOUND_VOLUMES(Colt45, "\x\gg\addons\gg_music\MixtapeOne\Colt45.ogg")
	CREATE_SOUND_VOLUMES(AllCanadianSurfClub, "\x\gg\addons\gg_music\MixtapeOne\AllCanadianSurfClub.ogg")
	CREATE_SOUND_VOLUMES(FortunateSon, "\x\gg\addons\gg_music\MixtapeOne\FortunateSon.ogg")
	CREATE_SOUND_VOLUMES(ManInTheBox, "\x\gg\addons\gg_music\MixtapeOne\ManInTheBox.ogg")
	CREATE_SOUND_VOLUMES(Pisces, "\x\gg\addons\gg_music\MixtapeOne\Pisces.ogg")
	CREATE_SOUND_VOLUMES(Demolisher, "\x\gg\addons\gg_music\MixtapeOne\Demolisher.ogg")
	CREATE_SOUND_VOLUMES(AreYouSureHankDoneItThisWay, "\x\gg\addons\gg_music\MixtapeTwo\AreYouSureHankDoneItThisWay.ogg")
	CREATE_SOUND_VOLUMES(Track020299, "\x\gg\addons\gg_music\MixtapeTwo\02.02.99.ogg")
	CREATE_SOUND_VOLUMES(MyNameIsMud, "\x\gg\addons\gg_music\MixtapeTwo\MyNameIsMud.ogg")
	CREATE_SOUND_VOLUMES(DieForYou, "\x\gg\addons\gg_music\MixtapeTwo\DieForYou.ogg")
	CREATE_SOUND_VOLUMES(RealAmerican, "\x\gg\addons\gg_music\MixtapeTwo\RealAmerican.ogg")
	CREATE_SOUND_VOLUMES(FuckYouBitch, "\x\gg\addons\gg_music\MixtapeTwo\FuckYouBitch.ogg")
	CREATE_SOUND_VOLUMES(KickstartMyHeart, "\x\gg\addons\gg_music\MixtapeTwo\KickstartMyHeart.ogg")
	CREATE_SOUND_VOLUMES(HotelLobby, "\x\gg\addons\gg_music\MixtapeTwo\HotelLobby.ogg")
	CREATE_SOUND_VOLUMES(BadMoonRising, "\x\gg\addons\gg_music\MixtapeTwo\BadMoonRising.ogg")
	CREATE_SOUND_VOLUMES(BackInBlack, "\x\gg\addons\gg_music\MixtapeFour\BackInBlack.ogg")
	CREATE_SOUND_VOLUMES(Bandit, "\x\gg\addons\gg_music\MixtapeFour\Bandit.ogg")
	CREATE_SOUND_VOLUMES(PartyandBullshit, "\x\gg\addons\gg_music\MixtapeFour\PartyandBullshit.ogg")
	CREATE_SOUND_VOLUMES(SpiritintheSky, "\x\gg\addons\gg_music\MixtapeFour\SpiritintheSky.ogg")
	CREATE_SOUND_VOLUMES(HereComesTheSun, "\x\gg\addons\gg_music\MixtapeFour\HereComesTheSun.ogg")
	CREATE_SOUND_VOLUMES(Twirlanta, "\x\gg\addons\gg_music\MixtapeFour\Twirlanta.ogg")
	CREATE_SOUND_VOLUMES(Rocky, "\x\gg\addons\gg_music\MixtapeFour\Rocky.ogg")
	CREATE_SOUND_VOLUMES(AlmostEasy, "\x\gg\addons\gg_music\MixtapeFour\AlmostEasy.ogg")
	CREATE_SOUND_VOLUMES(TheRubberbandMan, "\x\gg\addons\gg_music\MixtapeFour\TheRubberbandMan.ogg")
	CREATE_SOUND_VOLUMES(DancingintheMoonlight, "\x\gg\addons\gg_music\MixtapeFour\DancingintheMoonlight.ogg")
	CREATE_SOUND_VOLUMES(Superstition, "\x\gg\addons\gg_music\MixtapeFour\Superstition.ogg")
	CREATE_SOUND_VOLUMES(ComeOutYeBlackAndTans, "\x\gg\addons\gg_music\MixtapeFour\ComeOutYeBlackAndTans.ogg")
	CREATE_SOUND_VOLUMES(Erika, "\x\gg\addons\gg_music\MixtapeFour\Erika.ogg")
	CREATE_SOUND_VOLUMES(AriseBelgorod, "\x\gg\addons\gg_music\EasternDefianceMegamix\AriseBelgorod.ogg")
	CREATE_SOUND_VOLUMES(ACossackRodeAcrosstheDenude, "\x\gg\addons\gg_music\EasternDefianceMegamix\ACossackRodeAcrosstheDenude.ogg")
	CREATE_SOUND_VOLUMES(DibDubSnop, "\x\gg\addons\gg_music\EasternDefianceMegamix\DibDubSnop.ogg")
	CREATE_SOUND_VOLUMES(StormOverAzov, "\x\gg\addons\gg_music\EasternDefianceMegamix\StormOverAzov.ogg")
	CREATE_SOUND_VOLUMES(VPlenu, "\x\gg\addons\gg_music\EasternDefianceMegamix\VPlenu.ogg")
	CREATE_SOUND_VOLUMES(FPVtoVolchanski, "\x\gg\addons\gg_music\EasternDefianceMegamix\FPVtoVolchanski.ogg")
	CREATE_SOUND_VOLUMES(TheLastStand, "\x\gg\addons\gg_music\EasternDefianceMegamix\TheLastStand.ogg")
	CREATE_SOUND_VOLUMES(Cassette, "\x\gg\addons\gg_music\EasternDefianceMegamix\Cassette.ogg")
	CREATE_SOUND_VOLUMES(Ragnarok, "\x\gg\addons\gg_music\EasternDefianceMegamix\Ragnarok.ogg")
	CREATE_SOUND_VOLUMES(SleepGuys, "\x\gg\addons\gg_music\EasternDefianceMegamix\SleepGuys.ogg")
	CREATE_SOUND_VOLUMES(RedViburnum, "\x\gg\addons\gg_music\EasternDefianceMegamix\RedViburnum.ogg")
	CREATE_SOUND_VOLUMES(AtDawnAlyans, "\x\gg\addons\gg_music\EasternDefianceMegamix\AtDawnAlyans.ogg")
};
class CfgVehicles
{
	class Item_Base_F;
	CREATE_DISC_ITEM(90sRap)
	CREATE_DISC_ITEM(AssortedBangers)
	CREATE_DISC_ITEM(MixtapeOne)
	CREATE_DISC_ITEM(MixtapeTwo)
	CREATE_DISC_ITEM(SadBoiHours)
	CREATE_DISC_ITEM(MixtapeThree)
	CREATE_DISC_ITEM(MixtapeFour)
	CREATE_DISC_ITEM(EasternDefianceMegamix)
};
class CfgWeapons
{
	class gg_car_stereo_BaseCD;
	CREATE_DISC_WEAPON_HEADER(90sRap)
		ADD_TRACK(AmbitionzAzARidah, 278),
		ADD_TRACK(DiamondsAndWood, 313),
		ADD_TRACK(GinAndJuice, 212),
		ADD_TRACK(HailMary, 312),
		ADD_TRACK(IGot5OnIt, 253),
		ADD_TRACK(ISmellSmoke, 209),
		ADD_TRACK(ItWasAGoodDay, 260),
		ADD_TRACK(Murder, 232),
		ADD_TRACK(MyMindPlayinTricksOnMe, 311),
		ADD_TRACK(NoMoPlay, 295),
		ADD_TRACK(NotoriousThugs, 369),
		ADD_TRACK(NuthinButAGThang, 238),
		ADD_TRACK(Regulate, 238),
		ADD_TRACK(SippinOnSomeSyrup, 262),
		ADD_TRACK(StillSmokin, 143),
		ADD_TRACK(TheManRightChea, 240),
		ADD_TRACK(ThugLuv, 307),
		ADD_TRACK(ThuggishRuggishBone, 281),
		ADD_TRACK(WhoDatTalkingDown, 230),
		ADD_TRACK(WhoRunIt, 249)
	CREATE_DISC_WEAPON_FOOTER()
	CREATE_DISC_WEAPON_HEADER(AssortedBangers)
		ADD_TRACK(TheLadyDontMind, 238),
		ADD_TRACK(PaleShelter, 273),
		ADD_TRACK(Maneater, 271),
		ADD_TRACK(IRanSoFarAway, 306),
		ADD_TRACK(SweetDreamsAreMadeOfThis, 292),
		ADD_TRACK(BlueMonday, 450),
		ADD_TRACK(LifeDuringWartime, 221),
		ADD_TRACK(OutOfTouch, 249),
		ADD_TRACK(SmalltownBoy, 540),
		ADD_TRACK(OverAndOver, 350),
		ADD_TRACK(PsychoKiller, 261),
		ADD_TRACK(LittleDarkAge, 299),
		ADD_TRACK(Nightcall, 256),
		ADD_TRACK(TheManWhoSoldTheWorld, 343),
		ADD_TRACK(BlindingLights, 203),
		ADD_TRACK(Edgerunner, 161),
		ADD_TRACK(InTheAirTonight, 336),
		ADD_TRACK(MessageInABottle, 260),
		ADD_TRACK(YourLove, 221),
		ADD_TRACK(Dreams, 257),
		ADD_TRACK(TunnelOfLove, 489),
		ADD_TRACK(DancingInTheDark, 427),
		ADD_TRACK(PapaWasARollingStone, 710),
		ADD_TRACK(DoItAgain, 356),
		ADD_TRACK(BennysHere, 401),
		ADD_TRACK(Showdown, 249),
		ADD_TRACK(Destination, 402),
		ADD_TRACK(BabyImYours, 215),
		ADD_TRACK(GetLucky, 369),
		ADD_TRACK(IHeardItThroughTheGrapevine, 664),
		ADD_TRACK(SisterGoldenHair, 196),
		ADD_TRACK(Layla, 423),
		ADD_TRACK(Psycho, 223),
		ADD_TRACK(Mykonos, 228),
		ADD_TRACK(BonesInTheOcean, 193),
		ADD_TRACK(RedRightHand, 370),
		ADD_TRACK(JustDroppedIn, 262),
		ADD_TRACK(IfYouCouldReadMyMind, 269),
		ADD_TRACK(DontThinkTwiceItsAllRight, 231),
		ADD_TRACK(500Miles, 193),
		ADD_TRACK(LittleWing, 408),
		ADD_TRACK(HeyJoe, 227),
		ADD_TRACK(AllAlongTheWatchtower, 241),
		ADD_TRACK(ComingIntoLosAngeles, 186),
		ADD_TRACK(PaintItBlack, 226),
		ADD_TRACK(StrawberryLetter23, 242),
		ADD_TRACK(Pinball, 193),
		ADD_TRACK(Cocaine, 409),
		ADD_TRACK(WhiteRoom, 298),
		ADD_TRACK(Godzilla, 221),
		ADD_TRACK(Time, 413),
		ADD_TRACK(OneOfTheseDays, 355),
		ADD_TRACK(TheMomentBefore, 328),
		ADD_TRACK(FarFromAnyRoad, 166),
		ADD_TRACK(GhostRidersInTheSky, 351),
		ADD_TRACK(DontFearTheReaper, 308),
		ADD_TRACK(Epitaph, 535),
		ADD_TRACK(HouseOfTheRisingSun, 268),
		ADD_TRACK(AWhiterShadeOfPale, 235),
		ADD_TRACK(BlackMagicWoman, 321),
		ADD_TRACK(Abracadabra, 308),
		ADD_TRACK(AintNoLoveInTheHeartOfTheCity, 233),
		ADD_TRACK(CaliforniaDreamin, 377),
		ADD_TRACK(SunshineOfYourLove, 250),
		ADD_TRACK(ComeAndGetYourLove, 300),
		ADD_TRACK(SpaceTruckin, 273),
		ADD_TRACK(Strutter, 190),
		ADD_TRACK(Refugee, 202),
		ADD_TRACK(LosingMyReligion, 268),
		ADD_TRACK(DearGod, 219),
		ADD_TRACK(BurninForYou, 271),
		ADD_TRACK(CallMe, 212),
		ADD_TRACK(DaYaThinkImSexy, 327),
		ADD_TRACK(TakeMeOut, 240),
		ADD_TRACK(SevenNationArmy, 231),
		ADD_TRACK(OffendInEveryWay, 186),
		ADD_TRACK(NotYourKindOfPeople, 299),
		ADD_TRACK(NotUpToMe, 289),
		ADD_TRACK(LoveWillTearUsApart, 204),
		ADD_TRACK(Buena, 199),
		ADD_TRACK(WalkThisLand, 415),
		ADD_TRACK(PumpedUpKicks, 239),
		ADD_TRACK(WhenTheLeveeBreaks, 428),
		ADD_TRACK(ThenCameTheLastDaysOfMay, 210),
		ADD_TRACK(TheBottomlessHole, 193),
		ADD_TRACK(TheChain, 270),
		ADD_TRACK(CatchTheRainbow, 396),
		ADD_TRACK(BadCompany, 288),
		ADD_TRACK(Mother, 204),
		ADD_TRACK(ThatSmell, 348),
		ADD_TRACK(MaryJanesLastDance, 273),
		ADD_TRACK(CallMeTheBreeze, 307),
		ADD_TRACK(ChoctawBingo, 513),
		ADD_TRACK(FeelGoodInc, 222),
		ADD_TRACK(CantFeelMyFace, 215),
		ADD_TRACK(SingAlong, 174),
		ADD_TRACK(AGoodLook, 241),
		ADD_TRACK(TheLessIKnowTheBetter, 217),
		ADD_TRACK(AbsoluteTerritory, 268),
		ADD_TRACK(CocaineMan, 234),
		ADD_TRACK(InTheCity, 235),
		ADD_TRACK(AHorseWithNoName, 252),
		ADD_TRACK(HowLong, 229),
		ADD_TRACK(InHellIllBeInGoodCompany, 249),
		ADD_TRACK(BigIron, 235),
		ADD_TRACK(LastTrainHome, 338),
		ADD_TRACK(SimpleMan, 356),
		ADD_TRACK(StairwayToHeaven, 482),
		ADD_TRACK(FreeBird, 607),
		ADD_TRACK(TheEcstasyOfGold, 200),
		ADD_TRACK(Battery, 312),
		ADD_TRACK(SeekAndDestroy, 414),
		ADD_TRACK(ForWhomTheBellTolls, 309),
		ADD_TRACK(SquareHammer, 239),
		ADD_TRACK(DanceMacabre, 219),
		ADD_TRACK(KnightsOfCydonia, 367),
		ADD_TRACK(ISeeThroughYou, 342),
		ADD_TRACK(DeathsDoor, 435),
		ADD_TRACK(WelcomeToTheVoid, 490),
		ADD_TRACK(ColdSweat, 186),
		ADD_TRACK(WeAreTheRoadCrew, 190),
		ADD_TRACK(AceOfSpades, 166),
		ADD_TRACK(HolyDiver, 280),
		ADD_TRACK(DeathByDesign, 280),
		ADD_TRACK(CultOfPersonality, 292),
		ADD_TRACK(Hellraiser, 293),
		ADD_TRACK(NoMoreTears, 445),
		ADD_TRACK(Stillborn, 195),
		ADD_TRACK(CounterfeitGod, 258),
		ADD_TRACK(MassMurderMachine, 346),
		ADD_TRACK(BatteringRam, 261),
		ADD_TRACK(GenocideJunkies, 352),
		ADD_TRACK(WarPigs, 474),
		ADD_TRACK(NIB, 364),
		ADD_TRACK(Supernaut, 270),
		ADD_TRACK(SabbraCadabra, 357),
		ADD_TRACK(SabbathBloodySabbath, 347),
		ADD_TRACK(Snowblind, 325),
		ADD_TRACK(ANationalAcrobat, 375),
		ADD_TRACK(IntoTheVoid, 370),
		ADD_TRACK(CountryGirl, 242),
		ADD_TRACK(HeavenAndHell, 417),
		ADD_TRACK(Badlands, 647),
		ADD_TRACK(MoonsOfNeptune, 1011),
		ADD_TRACK(TheMan, 266),
		ADD_TRACK(Rasputin, 267)
	CREATE_DISC_WEAPON_FOOTER()
	CREATE_DISC_WEAPON_HEADER(SadBoiHours)
		ADD_TRACK(MadWorld, 182),
		ADD_TRACK(TheEveningTrain, 257),
		ADD_TRACK(LookOnDownFromTheBridge, 287),
		ADD_TRACK(ThisWorldIsNotMyHome, 207),
		ADD_TRACK(Changes, 302),
		ADD_TRACK(BuryMeNotInTheLonePrairie, 144),
		ADD_TRACK(Hurt, 228),
		ADD_TRACK(HopeIsADangerousThingForAWoman, 326),
		ADD_TRACK(LetItGo, 258),
		ADD_TRACK(TheSoundOfSilence, 187),
		ADD_TRACK(Hallelujah, 393),
		ADD_TRACK(SuicideIsPainless, 174),
		ADD_TRACK(SomewhereOverTheRainbow, 210),
		ADD_TRACK(LettertoMadeline, 471),
		ADD_TRACK(lostCause, 242),
		ADD_TRACK(PassOut, 148),
		ADD_TRACK(Alright, 170),
		ADD_TRACK(Hurricane, 213),
		ADD_TRACK(Alone, 127)
	CREATE_DISC_WEAPON_FOOTER()
	CREATE_DISC_WEAPON_HEADER(MixtapeOne)
		ADD_TRACK(ManyMen, 246),
		ADD_TRACK(WhereTheHoodAt, 286),
		ADD_TRACK(DoubleBaccin, 135),
		ADD_TRACK(WarPigs, 478),
		ADD_TRACK(AllAlongTheWatchtower, 241),
		ADD_TRACK(BlackBetty, 238),
		ADD_TRACK(CloserToTheSun, 146),
		ADD_TRACK(ForWhatItsWorth, 157),
		ADD_TRACK(ItWasntMe, 227),
		ADD_TRACK(Colt45, 359),
		ADD_TRACK(AllCanadianSurfClub, 169),
		ADD_TRACK(FortunateSon, 138),
		ADD_TRACK(ManInTheBox, 287),
		ADD_TRACK(Pisces, 305),
		ADD_TRACK(Demolisher, 219)
	CREATE_DISC_WEAPON_FOOTER()
	CREATE_DISC_WEAPON_HEADER(MixtapeTwo)
		ADD_TRACK(AreYouSureHankDoneItThisWay, 175),
		ADD_TRACK(Track020299, 163),
		ADD_TRACK(MyNameIsMud, 283),
		ADD_TRACK(DieForYou, 260),
		ADD_TRACK(RealAmerican, 362),
		ADD_TRACK(MoneyTrees, 386),
		ADD_TRACK(FuckYouBitch, 204),
		ADD_TRACK(KickstartMyHeart, 282),
		ADD_TRACK(WarPigs, 478),
		ADD_TRACK(HotelLobby, 204),
		ADD_TRACK(ItWasAGoodDay, 260),
		ADD_TRACK(BadMoonRising, 138)
	CREATE_DISC_WEAPON_FOOTER()
	CREATE_DISC_WEAPON_HEADER(MixtapeFour)
		ADD_TRACK(BackInBlack, 253),
		ADD_TRACK(Bandit, 149),
		ADD_TRACK(PartyAndBullshit, 221),
		ADD_TRACK(KnifeTalk, 243),
		ADD_TRACK(SpiritInTheSky, 239),
		ADD_TRACK(HereComesTheSun, 191),
		ADD_TRACK(Twirlanta, 185),
		ADD_TRACK(Rocky, 216),
		ADD_TRACK(AlmostEasy, 235),
		ADD_TRACK(TheRubberbandMan, 213),
		ADD_TRACK(DancingintheMoonlight, 181),
		ADD_TRACK(Superstition, 266),
		ADD_TRACK(ComeandGetYourLove, 207),
		ADD_TRACK(ComeOutYeBlackAndTans, 184),
		ADD_TRACK(Erika, 178)
	CREATE_DISC_WEAPON_FOOTER()
	CREATE_DISC_WEAPON_HEADER(MixtapeThree)
		ADD_TRACK(Way2Sexy, 258),
		ADD_TRACK(ALot, 288),
		ADD_TRACK(MoneyTrees, 388),
		ADD_TRACK(MiddleChild, 213),
		ADD_TRACK(GirlsWantGirls, 222),
		ADD_TRACK(Blessings, 252),
		ADD_TRACK(MoneyInTheGrave, 205),
		ADD_TRACK(ThereHeGo, 196),
		ADD_TRACK(Dysfunctional, 244),
		ADD_TRACK(RicFlairDrip, 172),
		ADD_TRACK(SmackThat, 212),
		ADD_TRACK(InDaClub, 193),
		ADD_TRACK(ManyMen, 256),
		ADD_TRACK(Rockstar, 217),
		ADD_TRACK(KnifeTalk, 243),
		ADD_TRACK(RapGod, 366),
		ADD_TRACK(GoingBad, 180),
		ADD_TRACK(Bugatti, 326),
		ADD_TRACK(SickoMode, 322),
		ADD_TRACK(DNA, 186),
		ADD_TRACK(FollowGod, 104),
		ADD_TRACK(Heartless, 210),
		ADD_TRACK(LaughNowCryLater, 261),
		ADD_TRACK(TunnelVision, 268),
		ADD_TRACK(LifeIsGood, 237),
		ADD_TRACK(SoundtrackToMyLife, 237),
		ADD_TRACK(ToosieSlide, 248),
		ADD_TRACK(ImSoPaid, 263),
		ADD_TRACK(DripTooHard, 146),
		ADD_TRACK(Yeah, 252)
	CREATE_DISC_WEAPON_FOOTER()
	CREATE_DISC_WEAPON_HEADER(EasternDefianceMegamix)
		ADD_TRACK(AriseBelgorod, 164),
		ADD_TRACK(ACossackRodeAcrosstheDenude, 212),
		ADD_TRACK(DibDubSnop, 368),
		ADD_TRACK(StormOverAzov, 454),
		ADD_TRACK(VPlenu, 240),
		ADD_TRACK(FPVtoVolchanski, 233),
		ADD_TRACK(TheLastStand, 238),
		ADD_TRACK(Cassette, 144),
		ADD_TRACK(Ragnarok, 237),
		ADD_TRACK(SleepGuys, 158),
		ADD_TRACK(RedViburnum, 154),
		ADD_TRACK(AtDawnAlyans, 343)
	CREATE_DISC_WEAPON_FOOTER()
};