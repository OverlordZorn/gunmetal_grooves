#define CREATE_SOUND_VOLUMES(PATH,CLASSNAME) \
class GVAR(DOUBLES(CLASSNAME,VOL_1)) { \
    sound[] = { \
        QPATHTOEF(music,PATH), \
        0.5, \
        1 \
    }; \
    titles[] = {}; \
}; \
class GVAR(DOUBLES(CLASSNAME,VOL_2)) { \
    sound[] = { \
        QPATHTOEF(music,PATH), \
        1.0, \
        1 \
    }; \
    titles[] = {}; \
}; \
class GVAR(DOUBLES(CLASSNAME,VOL_3)) { \
    sound[] = { \
        QPATHTOEF(music,PATH), \
        1.5, \
        1 \
    }; \
    titles[] = {}; \
}; \
class GVAR(DOUBLES(CLASSNAME,VOL_4)) { \
    sound[] = { \
        QPATHTOEF(music,PATH), \
        2.0, \
        1 \
    }; \
    titles[] = {}; \
}; \
class GVAR(DOUBLES(CLASSNAME,VOL_5)) { \
    sound[] = { \
        QPATHTOEF(music,PATH), \
        2.5, \
        1 \
    }; \
    titles[] = {}; \
}; \
class GVAR(DOUBLES(CLASSNAME,VOL_6)) { \
    sound[] = { \
        QPATHTOEF(music,PATH), \
        3.0, \
        1 \
    }; \
    titles[] = {}; \
}; \
class GVAR(DOUBLES(CLASSNAME,VOL_7)) { \
    sound[] = { \
        QPATHTOEF(music,PATH), \
        3.5, \
        1 \
    }; \
    titles[] = {}; \
}; \
class GVAR(DOUBLES(CLASSNAME,VOL_8)) { \
    sound[] = { \
        QPATHTOEF(music,PATH), \
        4.0, \
        1 \
    }; \
    titles[] = {}; \
}; \
class GVAR(DOUBLES(CLASSNAME,VOL_9)) { \
    sound[] = { \
        QPATHTOEF(music,PATH), \
        4.5, \
        1 \
    }; \
    titles[] = {}; \
}; \
class GVAR(DOUBLES(CLASSNAME,VOL_10)) { \
    sound[] = { \
        QPATHTOEF(music,PATH), \
        5.0, \
        1 \
    }; \
    titles[] = {}; \
}


class CfgSounds
{
	CREATE_SOUND_VOLUMES(data\90sRap\AmbitionzAzARidah.ogg,AmbitionzAzARidah);
	CREATE_SOUND_VOLUMES(data\90sRap\DiamondsAndWood.ogg,DiamondsAndWood);
	CREATE_SOUND_VOLUMES(data\90sRap\GinAndJuice.ogg,GinAndJuice);
	CREATE_SOUND_VOLUMES(data\90sRap\HailMary.ogg,HailMary);
	CREATE_SOUND_VOLUMES(data\90sRap\IGot5OnIt.ogg,IGot5OnIt);
	CREATE_SOUND_VOLUMES(data\90sRap\ISmellSmoke.ogg,ISmellSmoke);
	CREATE_SOUND_VOLUMES(data\90sRap\ItWasAGoodDay.ogg,ItWasAGoodDay);
	CREATE_SOUND_VOLUMES(data\90sRap\Murder.ogg,Murder);
	CREATE_SOUND_VOLUMES(data\90sRap\MyMindPlayinTricksOnMe.ogg,MyMindPlayinTricksOnMe);
	CREATE_SOUND_VOLUMES(data\90sRap\NoMoPlay.ogg,NoMoPlay);
	CREATE_SOUND_VOLUMES(data\90sRap\NotoriousThugs.ogg,NotoriousThugs);
	CREATE_SOUND_VOLUMES(data\90sRap\NuthinButAGThang.ogg,NuthinButAGThang);
	CREATE_SOUND_VOLUMES(data\90sRap\Regulate.ogg,Regulate);
	CREATE_SOUND_VOLUMES(data\90sRap\SippinOnSomeSyrup.ogg,SippinOnSomeSyrup);
	CREATE_SOUND_VOLUMES(data\90sRap\StillSmokin.ogg,StillSmokin);
	CREATE_SOUND_VOLUMES(data\90sRap\TheManRightChea.ogg,TheManRightChea);
	CREATE_SOUND_VOLUMES(data\90sRap\ThugLuv.ogg,ThugLuv);
	CREATE_SOUND_VOLUMES(data\90sRap\ThuggishRuggishBone.ogg,ThuggishRuggishBone);
	CREATE_SOUND_VOLUMES(data\90sRap\WhoDatTalkingDown.ogg,WhoDatTalkingDown);
	CREATE_SOUND_VOLUMES(data\90sRap\WhoRunIt.ogg,WhoRunIt);

	CREATE_SOUND_VOLUMES(data\AssortedBangers\Rasputin.ogg,Rasputin);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\TheLadyDontMind.ogg,TheLadyDontMind);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\PaleShelter.ogg,PaleShelter);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\Maneater.ogg,Maneater);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\IRanSoFarAway.ogg,IRanSoFarAway);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\SweetDreamsAreMadeOfThis.ogg,SweetDreamsAreMadeOfThis);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\BlueMonday.ogg,BlueMonday);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\LifeDuringWartime.ogg,LifeDuringWartime);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\OutOfTouch.ogg,OutOfTouch);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\SmalltownBoy.ogg,SmalltownBoy);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\OverAndOver.ogg,OverAndOver);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\PsychoKiller.ogg,PsychoKiller);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\LittleDarkAge.ogg,LittleDarkAge);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\Nightcall.ogg,Nightcall);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\TheManWhoSoldTheWorld.ogg,TheManWhoSoldTheWorld);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\BlindingLights.ogg,BlindingLights);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\Edgerunner.ogg,Edgerunner);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\InTheAirTonight.ogg,InTheAirTonight);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\MessageInABottle.ogg,MessageInABottle);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\YourLove.ogg,YourLove);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\Dreams.ogg,Dreams);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\TunnelOfLove.ogg,TunnelOfLove);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\DancingInTheDark.ogg,DancingInTheDark);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\PapaWasARollingStone.ogg,PapaWasARollingStone);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\DoItAgain.ogg,DoItAgain);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\BennysHere.ogg,BennysHere);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\Showdown.ogg,Showdown);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\Destination.ogg,Destination);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\BabyImYours.ogg,BabyImYours);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\GetLucky.ogg,GetLucky);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\IHeardItThroughTheGrapevine.ogg,IHeardItThroughTheGrapevine);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\SisterGoldenHair.ogg,SisterGoldenHair);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\Layla.ogg,Layla);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\Psycho.ogg,Psycho);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\Mykonos.ogg,Mykonos);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\BonesInTheOcean.ogg,BonesInTheOcean);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\RedRightHand.ogg,RedRightHand);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\JustDroppedIn.ogg,JustDroppedIn);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\IfYouCouldReadMyMind.ogg,IfYouCouldReadMyMind);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\DontThinkTwiceItsAllRight.ogg,DontThinkTwiceItsAllRight);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\500Miles.ogg,500Miles);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\LittleWing.ogg,LittleWing);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\HeyJoe.ogg,HeyJoe);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\AllAlongTheWatchtower.ogg,AllAlongTheWatchtower);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\ComingIntoLosAngeles.ogg,ComingIntoLosAngeles);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\PaintItBlack.ogg,PaintItBlack);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\StrawberryLetter23.ogg,StrawberryLetter23);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\Pinball.ogg,Pinball);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\Cocaine.ogg,Cocaine);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\WhiteRoom.ogg,WhiteRoom);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\Godzilla.ogg,Godzilla);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\Time.ogg,Time);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\OneOfTheseDays.ogg,OneOfTheseDays);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\TheMomentBefore.ogg,TheMomentBefore);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\FarFromAnyRoad.ogg,FarFromAnyRoad);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\GhostRidersInTheSky.ogg,GhostRidersInTheSky);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\DontFearTheReaper.ogg,DontFearTheReaper);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\Epitaph.ogg,Epitaph);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\HouseOfTheRisingSun.ogg,HouseOfTheRisingSun);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\AWhiterShadeOfPale.ogg,AWhiterShadeOfPale);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\BlackMagicWoman.ogg,BlackMagicWoman);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\Abracadabra.ogg,Abracadabra);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\AintNoLoveInTheHeartOfTheCity.ogg,AintNoLoveInTheHeartOfTheCity);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\CaliforniaDreamin.ogg,CaliforniaDreamin);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\SunshineOfYourLove.ogg,SunshineOfYourLove);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\ComeAndGetYourLove.ogg,ComeAndGetYourLove);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\SpaceTruckin.ogg,SpaceTruckin);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\Strutter.ogg,Strutter);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\Refugee.ogg,Refugee);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\LosingMyReligion.ogg,LosingMyReligion);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\DearGod.ogg,DearGod);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\BurninForYou.ogg,BurninForYou);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\CallMe.ogg,CallMe);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\DaYaThinkImSexy.ogg,DaYaThinkImSexy);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\TakeMeOut.ogg,TakeMeOut);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\SevenNationArmy.ogg,SevenNationArmy);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\OffendInEveryWay.ogg,OffendInEveryWay);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\NotYourKindOfPeople.ogg,NotYourKindOfPeople);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\NotUpToMe.ogg,NotUpToMe);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\LoveWillTearUsApart.ogg,LoveWillTearUsApart);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\Buena.ogg,Buena);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\WalkThisLand.ogg,WalkThisLand);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\PumpedUpKicks.ogg,PumpedUpKicks);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\WhenTheLeveeBreaks.ogg,WhenTheLeveeBreaks);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\ThenCameTheLastDaysOfMay.ogg,ThenCameTheLastDaysOfMay);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\TheBottomlessHole.ogg,TheBottomlessHole);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\TheChain.ogg,TheChain);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\CatchTheRainbow.ogg,CatchTheRainbow);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\BadCompany.ogg,BadCompany);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\Mother.ogg,Mother);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\ThatSmell.ogg,ThatSmell);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\MaryJanesLastDance.ogg,MaryJanesLastDance);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\CallMeTheBreeze.ogg,CallMeTheBreeze);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\ChoctawBingo.ogg,ChoctawBingo);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\FeelGoodInc.ogg,FeelGoodInc);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\CantFeelMyFace.ogg,CantFeelMyFace);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\SingAlong.ogg,SingAlong);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\AGoodLook.ogg,AGoodLook);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\TheLessIKnowTheBetter.ogg,TheLessIKnowTheBetter);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\AbsoluteTerritory.ogg,AbsoluteTerritory);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\CocaineMan.ogg,CocaineMan);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\InTheCity.ogg,InTheCity);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\AHorseWithNoName.ogg,AHorseWithNoName);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\HowLong.ogg,HowLong);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\InHellIllBeInGoodCompany.ogg,InHellIllBeInGoodCompany);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\BigIron.ogg,BigIron);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\LastTrainHome.ogg,LastTrainHome);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\SimpleMan.ogg,SimpleMan);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\StairwayToHeaven.ogg,StairwayToHeaven);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\FreeBird.ogg,FreeBird);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\TheEcstasyOfGold.ogg,TheEcstasyOfGold);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\Battery.ogg,Battery);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\SeekAndDestroy.ogg,SeekAndDestroy);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\ForWhomTheBellTolls.ogg,ForWhomTheBellTolls);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\SquareHammer.ogg,SquareHammer);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\DanceMacabre.ogg,DanceMacabre);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\KnightsOfCydonia.ogg,KnightsOfCydonia);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\ISeeThroughYou.ogg,ISeeThroughYou);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\DeathsDoor.ogg,DeathsDoor);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\WelcomeToTheVoid.ogg,WelcomeToTheVoid);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\ColdSweat.ogg,ColdSweat);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\WeAreTheRoadCrew.ogg,WeAreTheRoadCrew);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\AceOfSpades.ogg,AceOfSpades);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\HolyDiver.ogg,HolyDiver);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\DeathByDesign.ogg,DeathByDesign);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\CultOfPersonality.ogg,CultOfPersonality);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\Hellraiser.ogg,Hellraiser);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\NoMoreTears.ogg,NoMoreTears);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\Stillborn.ogg,Stillborn);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\CounterfeitGod.ogg,CounterfeitGod);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\MassMurderMachine.ogg,MassMurderMachine);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\BatteringRam.ogg,BatteringRam);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\GenocideJunkies.ogg,GenocideJunkies);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\WarPigs.ogg,WarPigs);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\NIB.ogg,NIB);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\Supernaut.ogg,Supernaut);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\SabbraCadabra.ogg,SabbraCadabra);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\SabbathBloodySabbath.ogg,SabbathBloodySabbath);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\Snowblind.ogg,Snowblind);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\ANationalAcrobat.ogg,ANationalAcrobat);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\IntoTheVoid.ogg,IntoTheVoid);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\CountryGirl.ogg,CountryGirl);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\HeavenAndHell.ogg,HeavenAndHell);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\Badlands.ogg,Badlands);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\MoonsOfNeptune.ogg,MoonsOfNeptune);
	CREATE_SOUND_VOLUMES(data\AssortedBangers\TheMan.ogg,TheMan);

	CREATE_SOUND_VOLUMES(data\SadBoiHours\MadWorld.ogg,MadWorld);
	CREATE_SOUND_VOLUMES(data\SadBoiHours\TheEveningTrain.ogg,TheEveningTrain);
	CREATE_SOUND_VOLUMES(data\SadBoiHours\LookOnDownFromTheBridge.ogg,LookOnDownFromTheBridge);
	CREATE_SOUND_VOLUMES(data\SadBoiHours\ThisWorldIsNotMyHome.ogg,ThisWorldIsNotMyHome);
	CREATE_SOUND_VOLUMES(data\SadBoiHours\Changes.ogg,Changes);
	CREATE_SOUND_VOLUMES(data\SadBoiHours\BuryMeNotInTheLonePrairie.ogg,BuryMeNotInTheLonePrairie);
	CREATE_SOUND_VOLUMES(data\SadBoiHours\Hurt.ogg,Hurt);
	CREATE_SOUND_VOLUMES(data\SadBoiHours\HopeIsADangerousThingForAWoman.ogg,HopeIsADangerousThingForAWoman);
	CREATE_SOUND_VOLUMES(data\SadBoiHours\LetItGo.ogg,LetItGo);
	CREATE_SOUND_VOLUMES(data\SadBoiHours\TheSoundOfSilence.ogg,TheSoundOfSilence);
	CREATE_SOUND_VOLUMES(data\SadBoiHours\Hallelujah.ogg,Hallelujah);
	CREATE_SOUND_VOLUMES(data\SadBoiHours\SuicideIsPainless.ogg,SuicideIsPainless);
	CREATE_SOUND_VOLUMES(data\SadBoiHours\SomewhereOverTheRainbow.ogg,SomewhereOverTheRainbow);
	CREATE_SOUND_VOLUMES(data\SadBoiHours\LettertoMadeline.ogg,LettertoMadeline);
	CREATE_SOUND_VOLUMES(data\SadBoiHours\lostCause.ogg,lostCause);
	CREATE_SOUND_VOLUMES(data\SadBoiHours\PassOut.ogg,PassOut);
	CREATE_SOUND_VOLUMES(data\SadBoiHours\Alright.ogg,Alright);
	CREATE_SOUND_VOLUMES(data\SadBoiHours\Hurricane.ogg,Hurricane);
	CREATE_SOUND_VOLUMES(data\SadBoiHours\Alone.ogg,Alone);

	CREATE_SOUND_VOLUMES(data\MixtapeThree\Way2Sexy.ogg,Way2Sexy);
	CREATE_SOUND_VOLUMES(data\MixtapeThree\ALot.ogg,ALot);
	CREATE_SOUND_VOLUMES(data\MixtapeThree\MoneyTrees.ogg,MoneyTrees);
	CREATE_SOUND_VOLUMES(data\MixtapeThree\MiddleChild.ogg,MiddleChild);
	CREATE_SOUND_VOLUMES(data\MixtapeThree\GirlsWantGirls.ogg,GirlsWantGirls);
	CREATE_SOUND_VOLUMES(data\MixtapeThree\Blessings.ogg,Blessings);
	CREATE_SOUND_VOLUMES(data\MixtapeThree\MoneyInTheGrave.ogg,MoneyInTheGrave);
	CREATE_SOUND_VOLUMES(data\MixtapeThree\ThereHeGo.ogg,ThereHeGo);
	CREATE_SOUND_VOLUMES(data\MixtapeThree\Dysfunctional.ogg,Dysfunctional);
	CREATE_SOUND_VOLUMES(data\MixtapeThree\RicFlairDrip.ogg,RicFlairDrip);
	CREATE_SOUND_VOLUMES(data\MixtapeThree\SmackThat.ogg,SmackThat);
	CREATE_SOUND_VOLUMES(data\MixtapeThree\InDaClub.ogg,InDaClub);
	CREATE_SOUND_VOLUMES(data\MixtapeThree\ManyMen.ogg,ManyMen);
	CREATE_SOUND_VOLUMES(data\MixtapeThree\Rockstar.ogg,Rockstar);
	CREATE_SOUND_VOLUMES(data\MixtapeThree\KnifeTalk.ogg,KnifeTalk);
	CREATE_SOUND_VOLUMES(data\MixtapeThree\RapGod.ogg,RapGod);
	CREATE_SOUND_VOLUMES(data\MixtapeThree\GoingBad.ogg,GoingBad);
	CREATE_SOUND_VOLUMES(data\MixtapeThree\Bugatti.ogg,Bugatti);
	CREATE_SOUND_VOLUMES(data\MixtapeThree\SickoMode.ogg,SickoMode);
	CREATE_SOUND_VOLUMES(data\MixtapeThree\DNA.ogg,DNA);
	CREATE_SOUND_VOLUMES(data\MixtapeThree\FollowGod.ogg,FollowGod);
	CREATE_SOUND_VOLUMES(data\MixtapeThree\Heartless.ogg,Heartless);
	CREATE_SOUND_VOLUMES(data\MixtapeThree\LaughNowCryLater.ogg,LaughNowCryLater);
	CREATE_SOUND_VOLUMES(data\MixtapeThree\TunnelVision.ogg,TunnelVision);
	CREATE_SOUND_VOLUMES(data\MixtapeThree\LifeIsGood.ogg,LifeIsGood);
	CREATE_SOUND_VOLUMES(data\MixtapeThree\SoundtrackToMyLife.ogg,SoundtrackToMyLife);
	CREATE_SOUND_VOLUMES(data\MixtapeThree\ToosieSlide.ogg,ToosieSlide);
	CREATE_SOUND_VOLUMES(data\MixtapeThree\ImSoPaid.ogg,ImSoPaid);
	CREATE_SOUND_VOLUMES(data\MixtapeThree\DripTooHard.ogg,DripTooHard);
	CREATE_SOUND_VOLUMES(data\MixtapeThree\Yeah.ogg,Yeah);
	CREATE_SOUND_VOLUMES(data\MixtapeThree\HerFriend.ogg,HerFriend);

	CREATE_SOUND_VOLUMES(data\MixtapeOne\WhereTheHoodAt.ogg,WhereTheHoodAt);
	CREATE_SOUND_VOLUMES(data\MixtapeOne\DoubleBaccin.ogg,DoubleBaccin);
	CREATE_SOUND_VOLUMES(data\MixtapeOne\BlackBetty.ogg,BlackBetty);
	CREATE_SOUND_VOLUMES(data\MixtapeOne\CloserToTheSun.ogg,CloserToTheSun);
	CREATE_SOUND_VOLUMES(data\MixtapeOne\ForWhatItsWorth.ogg,ForWhatItsWorth);
	CREATE_SOUND_VOLUMES(data\MixtapeOne\ItWasntMe.ogg,ItWasntMe);
	CREATE_SOUND_VOLUMES(data\MixtapeOne\Colt45.ogg,Colt45);
	CREATE_SOUND_VOLUMES(data\MixtapeOne\AllCanadianSurfClub.ogg,AllCanadianSurfClub);
	CREATE_SOUND_VOLUMES(data\MixtapeOne\FortunateSon.ogg,FortunateSon);
	CREATE_SOUND_VOLUMES(data\MixtapeOne\ManInTheBox.ogg,ManInTheBox);
	CREATE_SOUND_VOLUMES(data\MixtapeOne\Pisces.ogg,Pisces);
	CREATE_SOUND_VOLUMES(data\MixtapeOne\Demolisher.ogg,Demolisher);

	CREATE_SOUND_VOLUMES(data\MixtapeTwo\AreYouSureHankDoneItThisWay.ogg,AreYouSureHankDoneItThisWay);
	CREATE_SOUND_VOLUMES(data\MixtapeTwo\02.02.99.ogg,Track020299);
	CREATE_SOUND_VOLUMES(data\MixtapeTwo\MyNameIsMud.ogg,MyNameIsMud);
	CREATE_SOUND_VOLUMES(data\MixtapeTwo\DieForYou.ogg,DieForYou);
	CREATE_SOUND_VOLUMES(data\MixtapeTwo\RealAmerican.ogg,RealAmerican);
	CREATE_SOUND_VOLUMES(data\MixtapeTwo\FuckYouBitch.ogg,FuckYouBitch);
	CREATE_SOUND_VOLUMES(data\MixtapeTwo\KickstartMyHeart.ogg,KickstartMyHeart);
	CREATE_SOUND_VOLUMES(data\MixtapeTwo\HotelLobby.ogg,HotelLobby);
	CREATE_SOUND_VOLUMES(data\MixtapeTwo\BadMoonRising.ogg,BadMoonRising);

	CREATE_SOUND_VOLUMES(data\MixtapeFour\BackInBlack.ogg,BackInBlack);
	CREATE_SOUND_VOLUMES(data\MixtapeFour\Bandit.ogg,Bandit);
	CREATE_SOUND_VOLUMES(data\MixtapeFour\PartyandBullshit.ogg,PartyandBullshit);
	CREATE_SOUND_VOLUMES(data\MixtapeFour\SpiritintheSky.ogg,SpiritintheSky);
	CREATE_SOUND_VOLUMES(data\MixtapeFour\HereComesTheSun.ogg,HereComesTheSun);
	CREATE_SOUND_VOLUMES(data\MixtapeFour\Twirlanta.ogg,Twirlanta);
	CREATE_SOUND_VOLUMES(data\MixtapeFour\Rocky.ogg,Rocky);
	CREATE_SOUND_VOLUMES(data\MixtapeFour\AlmostEasy.ogg,AlmostEasy);
	CREATE_SOUND_VOLUMES(data\MixtapeFour\TheRubberbandMan.ogg,TheRubberbandMan);
	CREATE_SOUND_VOLUMES(data\MixtapeFour\DancingintheMoonlight.ogg,DancingintheMoonlight);
	CREATE_SOUND_VOLUMES(data\MixtapeFour\Superstition.ogg,Superstition);
	CREATE_SOUND_VOLUMES(data\MixtapeFour\ComeOutYeBlackAndTans.ogg,ComeOutYeBlackAndTans);
	CREATE_SOUND_VOLUMES(data\MixtapeFour\Erika.ogg,Erika);

	CREATE_SOUND_VOLUMES(data\EasternDefianceMegamix\AriseBelgorod.ogg,AriseBelgorod);
	CREATE_SOUND_VOLUMES(data\EasternDefianceMegamix\ACossackRodeAccrosstheDanube.ogg,ACossackRodeAcrosstheDenude);
	CREATE_SOUND_VOLUMES(data\EasternDefianceMegamix\DibDubSnop.ogg,DibDubSnop);
	CREATE_SOUND_VOLUMES(data\EasternDefianceMegamix\StormOverAzov.ogg,StormOverAzov);
	CREATE_SOUND_VOLUMES(data\EasternDefianceMegamix\VPlenu.ogg,VPlenu);
	CREATE_SOUND_VOLUMES(data\EasternDefianceMegamix\FPVtoVolchanski.ogg,FPVtoVolchanski);
	CREATE_SOUND_VOLUMES(data\EasternDefianceMegamix\TheLastStand.ogg,TheLastStand);
	CREATE_SOUND_VOLUMES(data\EasternDefianceMegamix\Cassette.ogg,Cassette);
	CREATE_SOUND_VOLUMES(data\EasternDefianceMegamix\Ragnarok.ogg,Ragnarok);
	CREATE_SOUND_VOLUMES(data\EasternDefianceMegamix\SleepGuys.ogg,SleepGuys);
	CREATE_SOUND_VOLUMES(data\EasternDefianceMegamix\RedViburnum.ogg,RedViburnum);
	CREATE_SOUND_VOLUMES(data\EasternDefianceMegamix\AtDawnAlyans.ogg,AtDawnAlyans);
	CREATE_SOUND_VOLUMES(data\EasternDefianceMegamix\Dontrelax.ogg,Dontrelax);
	CREATE_SOUND_VOLUMES(data\EasternDefianceMegamix\SKWLKR.ogg,SKWLKR);
	CREATE_SOUND_VOLUMES(data\EasternDefianceMegamix\MyFriendTapeRecorder.ogg,MyFriendTapeRecorder);
	CREATE_SOUND_VOLUMES(data\EasternDefianceMegamix\bi2.ogg,bi2);
	CREATE_SOUND_VOLUMES(data\EasternDefianceMegamix\Threechoppersovermyyard.ogg,Threechoppersovermyyard);
	CREATE_SOUND_VOLUMES(data\EasternDefianceMegamix\SportsGlasses.ogg,SportsGlasses);
	CREATE_SOUND_VOLUMES(data\EasternDefianceMegamix\DarkoftheNight.ogg,DarkoftheNight);
	CREATE_SOUND_VOLUMES(data\EasternDefianceMegamix\VerySimple.ogg,VerySimple);
	CREATE_SOUND_VOLUMES(data\EasternDefianceMegamix\Polishcow.ogg,Polishcow);

	CREATE_SOUND_VOLUMES(data\Echoesofthe2000s\DarkinHere.ogg,DarkinHere);
	CREATE_SOUND_VOLUMES(data\Echoesofthe2000s\Blurry.ogg,Blurry);
	CREATE_SOUND_VOLUMES(data\Echoesofthe2000s\Boom.ogg,Boom);
	CREATE_SOUND_VOLUMES(data\Echoesofthe2000s\BytheWay.ogg,BytheWay);
	CREATE_SOUND_VOLUMES(data\Echoesofthe2000s\SendthePainBelow.ogg,SendthePainBelow);
	CREATE_SOUND_VOLUMES(data\Echoesofthe2000s\TheRed.ogg,TheRed);
	CREATE_SOUND_VOLUMES(data\Echoesofthe2000s\BackHome.ogg,BackHome);
	CREATE_SOUND_VOLUMES(data\Echoesofthe2000s\Goneaway.ogg,Goneaway);
	CREATE_SOUND_VOLUMES(data\Echoesofthe2000s\Higher.ogg,Higher);
	CREATE_SOUND_VOLUMES(data\Echoesofthe2000s\Cold.ogg,Cold);
	CREATE_SOUND_VOLUMES(data\Echoesofthe2000s\RememberEverything.ogg,RememberEverything);
	CREATE_SOUND_VOLUMES(data\Echoesofthe2000s\BoulevardofBrokenDreams.ogg,BoulevardofBrokenDreams);
	CREATE_SOUND_VOLUMES(data\Echoesofthe2000s\Lifehouse.ogg,Lifehouse);
	CREATE_SOUND_VOLUMES(data\Echoesofthe2000s\HowYouRemindMe.ogg,HowYouRemindMe);
	CREATE_SOUND_VOLUMES(data\Echoesofthe2000s\KillingintheName.ogg,KillingintheName);
	CREATE_SOUND_VOLUMES(data\Echoesofthe2000s\Kryptonite.ogg,Kryptonite);
	CREATE_SOUND_VOLUMES(data\Echoesofthe2000s\Pain.ogg,Pain);
	CREATE_SOUND_VOLUMES(data\Echoesofthe2000s\RightLeftWrong.ogg,RightLeftWrong);
	CREATE_SOUND_VOLUMES(data\Echoesofthe2000s\Headstrong.ogg,Headstrong);

	CREATE_SOUND_VOLUMES(data\PeaceintheMIddleEast\AmrDiab.ogg,AmrDiab);
	CREATE_SOUND_VOLUMES(data\PeaceintheMIddleEast\BarraBarra.ogg,BarraBarra);
	CREATE_SOUND_VOLUMES(data\PeaceintheMIddleEast\BijiYPGBijiYPJ.ogg,BijiYPGBijiYPJ);
	CREATE_SOUND_VOLUMES(data\PeaceintheMIddleEast\DaboorShabjdeed.ogg,DaboorShabjdeed);
	CREATE_SOUND_VOLUMES(data\PeaceintheMIddleEast\DadEbatoranokor.ogg,DadEbatoranokor);
	CREATE_SOUND_VOLUMES(data\PeaceintheMIddleEast\HavaNagilaOriginal.ogg,HavaNagilaOriginal);
	CREATE_SOUND_VOLUMES(data\PeaceintheMIddleEast\Hunger.ogg,Hunger);
	CREATE_SOUND_VOLUMES(data\PeaceintheMIddleEast\SaintLevant.ogg,SaintLevant);
	CREATE_SOUND_VOLUMES(data\PeaceintheMIddleEast\SanakhuduNasheed.ogg,SanakhuduNasheed);
	CREATE_SOUND_VOLUMES(data\PeaceintheMIddleEast\SERHADO.ogg,SERHADO);
	CREATE_SOUND_VOLUMES(data\PeaceintheMIddleEast\ShlomoArtzi.ogg,ShlomoArtzi);
	CREATE_SOUND_VOLUMES(data\PeaceintheMIddleEast\TamerHosny.ogg,TamerHosny);
	CREATE_SOUND_VOLUMES(data\PeaceintheMIddleEast\TheRevivoProject.ogg,TheRevivoProject);
	CREATE_SOUND_VOLUMES(data\PeaceintheMIddleEast\TUL8TE.ogg,TUL8TE);
	CREATE_SOUND_VOLUMES(data\PeaceintheMIddleEast\YourForeheadisRaisedHighandDoesntLookDown.ogg,YourForeheadisRaisedHighandDoesntLookDown);
	CREATE_SOUND_VOLUMES(data\PeaceintheMIddleEast\Allah.ogg,Allah);
};
