#pragma once
#include <inttypes.h>
#include "dt_recv.h"
typedef unsigned char byte;

enum ClientClassIDs {
	SporeExplosion = 359,
	RocketTrail = 357,
	SmokeTrail = 358,
	CPropVehicleDriveable = 107,
	ParticleSmokeGrenade = 356,
	CParticleFire = 90,
	MovieExplosion = 354,
	CTEGaussExplosion = 154,
	CEnvQuadraticBeam = 43,
	CEmbers = 36,
	CEnvWind = 47,
	CPrecipitation = 106,
	CBaseTempEntity = 17,
	CWeaponIFMSteadyCam = 349,
	CWeaponIFMBaseCamera = 348,
	CWeaponIFMBase = 347,
	CTFWearableVM = 341,
	CTFWearable = 334,
	CTFWearableItem = 337,
	CEconWearable = 35,
	CBaseAttributableItem = 3,
	CEconEntity = 34,
	CHandleTest = 72,
	CTeamplayRoundBasedRulesProxy = 125,
	CTeamRoundTimer = 126,
	CSpriteTrail = 121,
	CSpriteOriented = 120,
	CSprite = 119,
	CRagdollPropAttached = 110,
	CRagdollProp = 109,
	CPoseController = 105,
	CGameRulesProxy = 68,
	CInfoLadderDismount = 75,
	CFuncLadder = 58,
	CEnvDetailController = 40,
	CWorld = 351,
	CWaterLODControl = 346,
	CWaterBullet = 345,
	CVoteController = 344,
	CVGuiScreen = 343,
	CPropJeep = 0,
	CPropVehicleChoreoGeneric = 0,
	CTest_ProxyToggle_Networkable = 174,
	CTesla = 169,
	CTeamTrainWatcher = 127,
	CBaseTeamObjectiveResource = 16,
	CTeam = 124,
	CSun = 123,
	CParticlePerformanceMonitor = 91,
	CSpotlightEnd = 118,
	CSlideshowDisplay = 115,
	CShadowControl = 114,
	CSceneEntity = 113,
	CRopeKeyframe = 112,
	CRagdollManager = 108,
	CPhysicsPropMultiplayer = 98,
	CPhysBoxMultiplayer = 96,
	CBasePropDoor = 15,
	CDynamicProp = 33,
	CPointCommentaryNode = 104,
	CPointCamera = 103,
	CPlayerResource = 102,
	CPlasma = 100,
	CPhysMagnet = 99,
	CPhysicsProp = 97,
	CPhysBox = 95,
	CParticleSystem = 92,
	CMaterialModifyControl = 81,
	CLightGlow = 79,
	CInfoOverlayAccessor = 77,
	CFuncTrackTrain = 67,
	CFuncSmokeVolume = 66,
	CFuncRotating = 65,
	CFuncReflectiveGlass = 62,
	CFuncOccluder = 60,
	CFuncMonitor = 59,
	CFunc_LOD = 54,
	CTEDust = 146,
	CFunc_Dust = 53,
	CFuncConveyor = 56,
	CBreakableSurface = 25,
	CFuncAreaPortalWindow = 55,
	CFish = 51,
	CEntityFlame = 38,
	CFireSmoke = 49,
	CEnvTonemapController = 46,
	CEnvScreenEffect = 44,
	CEnvScreenOverlay = 45,
	CEnvProjectedTexture = 42,
	CEnvParticleScript = 41,
	CFogController = 52,
	CEntityParticleTrail = 39,
	CEntityDissolve = 37,
	CDynamicLight = 32,
	CColorCorrectionVolume = 30,
	CColorCorrection = 29,
	CBreakableProp = 24,
	CBasePlayer = 13,
	CBaseFlex = 8,
	CBaseEntity_ = 7,
	CBaseDoor = 6,
	CBaseCombatCharacter = 4,
	CBaseAnimatingOverlay = 2,
	CBoneFollower = 20,
	CBaseAnimating = 1,
	CInfoLightingRelative = 76,
	CAI_BaseNPC = 0,
	CBeam = 19,
	CBaseViewModel = 18,
	CBaseProjectile = 14,
	CBaseParticleEntity = 12,
	CBaseGrenade = 9,
	CBaseCombatWeapon = 5,
	CTFWearableRazorback = 339,
	CTFWearableDemoShield = 336,
	CTFWearableLevelableItem = 338,
	CTFWearableCampaignItem = 335,
	CTFBaseRocket = 184,
	CTFWeaponBaseMerasmusGrenade = 323,
	CTFWeaponBaseMelee = 322,
	CTFWeaponBaseGun = 321,
	CTFWeaponBaseGrenadeProj = 320,
	CTFWeaponBase = 319,
	CTFWearableRobotArm = 340,
	CTFRobotArm = 285,
	CTFWrench = 342,
	CTFProjectile_ThrowableBreadMonster = 277,
	CTFProjectile_ThrowableBrick = 278,
	CTFProjectile_ThrowableRepel = 279,
	CTFProjectile_Throwable = 276,
	CTFThrowable = 317,
	CTFSyringeGun = 313,
	CTFKatana = 224,
	CTFSword = 312,
	CSniperDot = 117,
	CTFSniperRifleClassic = 306,
	CTFSniperRifleDecap = 307,
	CTFSniperRifle = 305,
	CTFChargedSMG = 196,
	CTFSMG = 304,
	CTFSlap = 303,
	CTFShovel = 302,
	CTFShotgunBuildingRescue = 301,
	CTFPEPBrawlerBlaster = 240,
	CTFSodaPopper = 308,
	CTFShotgun_Revenge = 299,
	CTFScatterGun = 295,
	CTFShotgun_Pyro = 298,
	CTFShotgun_HWG = 297,
	CTFShotgun_Soldier = 300,
	CTFShotgun = 296,
	CTFRocketPack = 294,
	CTFCrossbow = 200,
	CTFRocketLauncher_Mortar = 293,
	CTFRocketLauncher_AirStrike = 291,
	CTFRocketLauncher_DirectHit = 292,
	CTFRocketLauncher = 290,
	CTFRevolver = 284,
	CTFDRGPomson = 201,
	CTFRaygun = 282,
	CTFPistol_ScoutSecondary = 245,
	CTFPistol_ScoutPrimary = 244,
	CTFPistol_Scout = 243,
	CTFPistol = 242,
	CTFPipebombLauncher = 241,
	CTFWeaponPDA_Spy = 330,
	CTFWeaponPDA_Engineer_Destroy = 329,
	CTFWeaponPDA_Engineer_Build = 328,
	CTFWeaponPDAExpansion_Teleporter = 332,
	CTFWeaponPDAExpansion_Dispenser = 331,
	CTFWeaponPDA = 327,
	CTFParticleCannon = 238,
	CTFParachute_Secondary = 237,
	CTFParachute_Primary = 236,
	CTFParachute = 235,
	CTFMinigun = 233,
	CTFMedigunShield = 230,
	CWeaponMedigun = 350,
	CTFMechanicalArm = 229,
	CTFLunchBox_Drink = 228,
	CTFLunchBox = 227,
	CLaserDot = 78,
	CTFLaserPointer = 226,
	CTFKnife = 225,
	CTFGasManager = 211,
	CTFProjectile_JarGas = 260,
	CTFJarGas = 222,
	CTFProjectile_Cleaver = 253,
	CTFProjectile_JarMilk = 261,
	CTFProjectile_Jar = 259,
	CTFCleaver = 197,
	CTFJarMilk = 223,
	CTFJar = 221,
	CTFWeaponInvis = 326,
	CTFCannon = 195,
	CTFGrenadeLauncher = 215,
	CTFGrenadePipebombProjectile = 216,
	CTFGrapplingHook = 214,
	CTFFlareGun_Revenge = 209,
	CTFFlareGun = 208,
	CTFFlameRocket = 206,
	CTFFlameThrower = 207,
	CTFFists = 204,
	CTFFireAxe = 203,
	CTFWeaponFlameBall = 325,
	CTFCompoundBow = 199,
	CTFClub = 198,
	CTFBuffItem = 194,
	CTFStickBomb = 310,
	CTFBreakableSign = 193,
	CTFBottle = 191,
	CTFBreakableMelee = 192,
	CTFBonesaw = 189,
	CTFBall_Ornament = 181,
	CTFStunBall = 311,
	CTFBat_Giftwrap = 187,
	CTFBat_Wood = 188,
	CTFBat_Fish = 186,
	CTFBat = 185,
	CTFProjectile_EnergyRing = 255,
	CTFDroppedWeapon = 202,
	CTFWeaponSapper = 333,
	CTFWeaponBuilder = 324,
	C_TFWeaponBuilder = 0,
	CTFProjectile_Rocket = 262,
	CTFProjectile_Flare = 256,
	CTFProjectile_EnergyBall = 254,
	CTFProjectile_GrapplingHook = 257,
	CTFProjectile_HealingBolt = 258,
	CTFProjectile_Arrow = 251,
	CTFTankBoss = 314,
	CTFBaseBoss = 182,
	CBossAlpha = 0,
	NextBotCombatCharacter = 355,
	CTFProjectile_SpellKartBats = 266,
	CTFProjectile_SpellKartOrb = 267,
	CTFHellZap = 219,
	CTFProjectile_SpellLightningOrb = 268,
	CTFProjectile_SpellTransposeTeleport = 275,
	CTFProjectile_SpellMeteorShower = 269,
	CTFProjectile_SpellSpawnBoss = 272,
	CTFProjectile_SpellMirv = 270,
	CTFProjectile_SpellPumpkin = 271,
	CTFProjectile_SpellSpawnHorde = 273,
	CTFProjectile_SpellSpawnZombie = 274,
	CTFProjectile_SpellBats = 264,
	CTFProjectile_SpellFireball = 265,
	CTFSpellBook = 309,
	CHightower_TeleportVortex = 74,
	CTeleportVortex = 159,
	CZombie = 352,
	CMerasmusDancer = 83,
	CMerasmus = 82,
	CHeadlessHatman = 73,
	CEyeballBoss = 48,
	CTFBotHintEngineerNest = 190,
	CBotNPCMinion = 0,
	CBotNPC = 0,
	CPasstimeGun = 94,
	CTFViewModel = 318,
	CRobotDispenser = 111,
	CTFRobotDestruction_Robot = 286,
	CTFReviveMarker = 283,
	CTFPumpkinBomb = 280,
	CTFProjectile_BallOfFire = 252,
	CTFBaseProjectile = 183,
	CTFPointManager = 249,
	CBaseObjectUpgrade = 11,
	CTFRobotDestructionLogic = 289,
	CTFRobotDestruction_RobotGroup = 287,
	CTFRobotDestruction_RobotSpawn = 288,
	CTFPlayerDestructionLogic = 247,
	CPlayerDestructionDispenser = 101,
	CTFMinigameLogic = 232,
	CTFHalloweenMinigame_FallingPlatforms = 218,
	CTFHalloweenMinigame = 217,
	CTFMiniGame = 231,
	CTFPowerupBottle = 250,
	CTFItem = 220,
	CHalloweenSoulPack = 71,
	CTFGenericBomb = 212,
	CBonusRoundLogic = 23,
	CTFGameRulesProxy = 210,
	CTETFParticleEffect = 178,
	CTETFExplosion = 177,
	CTETFBlood = 176,
	CTFFlameManager = 205,
	CHalloweenGiftPickup = 69,
	CBonusDuckPickup = 21,
	CHalloweenPickup = 70,
	CCaptureFlagReturnIcon = 27,
	CCaptureFlag = 26,
	CBonusPack = 22,
	CTFTeam = 316,
	CTFTauntProp = 315,
	CTFPlayerResource = 248,
	CTFPlayer = 246,
	CTFRagdoll = 281,
	CTEPlayerAnimEvent = 164,
	CTFPasstimeLogic = 239,
	CPasstimeBall = 93,
	CTFObjectiveResource = 234,
	CTFGlow = 213,
	CTEFireBullets = 151,
	CTFBuffBanner = 0,
	CTFAmmoPack = 180,
	CObjectTeleporter = 89,
	CObjectSentrygun = 88,
	CTFProjectile_SentryRocket = 263,
	CObjectSapper = 87,
	CObjectCartDispenser = 85,
	CObjectDispenser = 86,
	CMonsterResource = 84,
	CFuncRespawnRoomVisualizer = 64,
	CFuncRespawnRoom = 63,
	CFuncPasstimeGoal = 61,
	CFuncForceField = 57,
	CCaptureZone = 28,
	CCurrencyPack = 31,
	CBaseObject = 10,
	CTestTraceline = 175,
	CTEWorldDecal = 179,
	CTESpriteSpray = 173,
	CTESprite = 172,
	CTESparks = 171,
	CTESmoke = 170,
	CTEShowLine = 168,
	CTEProjectedDecal = 166,
	CTEPlayerDecal = 165,
	CTEPhysicsProp = 163,
	CTEParticleSystem = 162,
	CTEMuzzleFlash = 161,
	CTELargeFunnel = 158,
	CTEKillPlayerAttachments = 157,
	CTEImpact = 156,
	CTEGlowSprite = 155,
	CTEShatterSurface = 167,
	CTEFootprintDecal = 153,
	CTEFizz = 152,
	CTEExplosion = 150,
	CTEEnergySplash = 149,
	CTEEffectDispatch = 148,
	CTEDynamicLight = 147,
	CTEDecal = 145,
	CTEClientProjectile = 144,
	CTEBubbleTrail = 143,
	CTEBubbles = 142,
	CTEBSPDecal = 141,
	CTEBreakModel = 140,
	CTEBloodStream = 139,
	CTEBloodSprite = 138,
	CTEBeamSpline = 137,
	CTEBeamRingPoint = 136,
	CTEBeamRing = 135,
	CTEBeamPoints = 134,
	CTEBeamLaser = 133,
	CTEBeamFollow = 132,
	CTEBeamEnts = 131,
	CTEBeamEntPoint = 130,
	CTEBaseBeam = 129,
	CTEArmorRicochet = 128,
	CTEMetalSparks = 160,
	CSteamJet = 122,
	CSmokeStack = 116,
	DustTrail = 353,
	CFireTrail = 50,
};

class client_class_t {
	byte _chpadding[ 8 ];
public:
	char* m_name;
	RecvTable* m_rt_table;
	client_class_t* m_next;
	int m_class_id;
};