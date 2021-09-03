﻿#pragma once

// Name: SoT, Version: 2.2.1.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class AthenaCheat.AthenaCheatManager
// 0x00A8 (FullSize[0x0120] - InheritedSize[0x0078])
class UAthenaCheatManager : public UCheatManager
{
public:
	class ACinematicCameraController*                  CinematicCameraController;                                 // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      CinematicCameraControllerClass;                            // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GH07[0x28];                                    // 0x0088(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FWorldMarkerDesc>                    CreatedWorldMarkers;                                       // 0x00B0(0x0010) (ZeroConstructor, Transient)
	class UGameEventSchedulerSettingsAsset*            DebugSchedulerSettings;                                    // 0x00C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AServerPerformanceReplicator*                ServerPerformanceReplicator;                               // 0x00C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TeleportToDigsiteHeightOffset;                             // 0x00D0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_S084[0x4C];                                    // 0x00D4(0x004C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaCheat.AthenaCheatManager");
		return ptr;
	}



	void WindTriggerChange(int ChangeInstantly);
	void WindSetVector(float X, float Y);
	void WindSetMagnitude(float Magnitude);
	void WindSetDirection(float X, float Y);
	void WindReloadParams();
	void WindPrintDirection();
	void WindEnableDebug();
	void WindDisableDebug();
	void WindAlignWithCamera();
	void Walk();
	void VomitWithType(const struct FName& VomitType, float Duration);
	void Vomit();
	void UnlockTradeRouteSelectionForMyCrew();
	void UnlockTradeRouteSelectionForCrew(const struct FGuid& CrewId);
	void UnlockEntitlement(const struct FString& EntitlementId);
	void UnlockAllEntitlements(int TrueFalse);
	void UnlockAllEmblemsAndAchievements();
	void UnBreakLeg();
	void TutorialAction(const struct FString& ActionTypeString);
	void TriggerTunnelMigration();
	void TriggerRewardNotification(struct FName* Identifier);
	void TriggerLandmarkReaction(int ActionType);
	void TriggerFogManagerAtNearestIsland();
	void TriggerEmblemUnlockedMessage(const struct FString& EmblemFriendlyName);
	void TriggerControllerConnectionChange(bool IsConnect, int UserId, int ControllerId);
	void TriggerContestMatchmakingMigration();
	void TriggerContestBannerUnfurl();
	void TriggerAIShipTimerBattle();
	void TriggerAIShipPassive();
	void TriggerAIShipEncounter();
	void TriggerAIShipAggressive();
	void ToggleVideprinter(const struct FString& Id);
	void ToggleThirdPerson();
	void ToggleSeaClueLocationQueryDebugDisplay();
	void ToggleRetailDrawDebug();
	void ToggleProjectileAimBaseAdjustmentsServer();
	void ToggleProjectileAimBaseAdjustmentsLocalClient();
	void ToggleNoClip();
	void ToggleNearestSuperheatedWater();
	void ToggleNearestLava();
	void ToggleMigrationPointOfInterestChecks(bool Enabled);
	void ToggleIslandSelectionDebugDisplay();
	void ToggleFastShipControls();
	void ToggleDrowning();
	void ToggleDrawShipSpeed();
	void ToggleDrawAboveIslandBounds();
	void ToggleDisplayCannonAISpawnerZones();
	void ToggleDebugFlying();
	void ToggleDeathCamera();
	void ToggleDamageAllowedToPlayerShip();
	void ToggleContestScoreDebug();
	void ToggleCinematicCamera();
	void ToggleAttributeOverride();
	void TestCrashDumpCreationOnRunnableThread();
	void TestCrashDumpCreationOnMainThread();
	void TeleportToShip();
	void TeleportToPlayerStart();
	void TeleportToNearestTreasureLocation();
	void TeleportToLocation(float LocationX, float LocationY, float LocationZ);
	void TeleportToHideout();
	void TeleportToDebugDestinationLocation(const struct FString& ActorIdString, const struct FString& DestinationId);
	void TeleportToAggressiveGhostShipEncounter();
	void TeleportShip(float X, float Y, float Z);
	void TeleportPlayerToSpireLocation(int SpireIndex);
	void TeleportPlayerToSafety();
	void TeleportPlayerToOffsetAndReturn(float OffsetX, float OffsetY, float OffsetZ, float ReturnTime);
	void TeleportPlayerToKraken();
	void TeleportPlayersCrewShipToPlayerLocation();
	void TeleportOutOfHideout();
	void TeleportCrewToShip(const struct FString& CrewId);
	void TeleportCrewToSafeSpawnLocationFromRemoteActor(const struct FString& ActorIdString, const struct FString& CrewId);
	void TeleportCrewToSafeSpawnLocation(const struct FString& CrewId);
	void TeleportCrewMemberToShip(const struct FString& ActorIdString);
	void TeleportAllPlayersToShip();
	void TeleportAllPlayersToPlayerStart();
	void TeleportAllCrewsToShips();
	void TeleportAllCrewsToCrewSpawnLocations();
	void TeleportActorToTrackedActorType(const struct FString& ActorIdString, int DestinationActorType);
	void TeleportActorToTeleportLocationActor(const struct FString& ControllerActorIdString, const struct FString& TeleportLocationActorIdString);
	void TeleportActorToLocation(const struct FString& ActorIdString, float LocationX, float LocationY, float LocationZ, float Yaw);
	void TeleportActorToIsland(const struct FString& ActorIdString, const struct FString& IslandName);
	void TeleportActorToDigSite(const struct FString& ActorIdString);
	void TeleportActorToActorWithOffset(const struct FString& ActorIdString, const struct FString& DestinationActorIdString, float OffsetX, float OffsetY, float OffsetZ);
	void SuperSailor();
	void StoreWieldedItemInBootyStorageInCurrentIsland();
	void StoreWieldedItemInBootyStorage(const struct FString& IslandName);
	void StoreShipLocation(float LocationX, float LocationY, float LocationZ, float Yaw);
	void StopShip();
	void StopPetHangout();
	void StopLocalSequences();
	void StopAllShips();
	void StopAllPetsHangout();
	void StartVoyage(const struct FString& SourceAssetName, bool Development);
	void StartSicknessOnPlayer();
	void StartSelectedRomeVoyage(const struct FString& RomeVoyageString);
	void StartNearestVolcano();
	void StartNearestGeysers();
	void StartNearestEarthquake();
	void StartDemoSession();
	void StartCargoRunFromNearestNPC(int NumOfCrates);
	void StartAshenLordGeysers();
	void StartAllVolcanos();
	void StartAllCrewVoyages();
	void SpireStreamOut(int SpireIndex);
	void SpireStreamIn(int SpireIndex);
	void SpinShip(float YawSpdInDegreesPerSecond);
	void SpawnWatercraft(const struct FString& WatercraftClassString);
	void SpawnTreasureChestOfType(struct FString* ChestTypeString);
	void SpawnTreasureArtifact(const struct FString& TypeString);
	void SpawnTinySharkAtLocation(float X, float Y, float Z, int PartIndex);
	void SpawnTinySharkAtCurrentLocation(int ControllerParamIndex, int PartIndex);
	void SpawnStrongholdKeyFromGameEventType(const struct FString& FortEventName);
	void SpawnStrongholdKey();
	void SpawnSmallShipAtIsland(const struct FString& IslandName);
	void SpawnSmallShip(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw);
	void SpawnSkeletonAtNearestAISpawnPoint();
	void SpawnShipOfType(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw, const struct FString& TypeString);
	void SpawnShipInFrontOfNearestAIInteractable(float XProportion, float YProportion, float Yaw, const struct FString& TypeString);
	void SpawnShipFromDesc(const struct FString& InShipDescAssetString, float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw);
	void SpawnShipAtIsland(const struct FString& IslandName);
	void SpawnShip(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw);
	void SpawnRomeTreasureChestOfType(const struct FString& ChestTypeString);
	void SpawnNumberOfAI(const struct FString& AIDescString, int NumToSpawn);
	void SpawnNightmareAggressiveGhostShipEncountersRandom();
	void SpawnNightmareAggressiveGhostShipEncountersNearToPlayer();
	void SpawnMultipleTreasureChestsOfType(struct FString* ChestTypeString, int Num);
	void SpawnMessageInABottle(const struct FString& MessageInABottleTypeString);
	void SpawnMermaid();
	void SpawnMerchantFauna(const struct FString& FaunaTypeString);
	void SpawnMerchantCrate(const struct FString& MerchantCrateTypeString);
	void SpawnMerchantCargo(const struct FString& MerchantCargoTypeString);
	void SpawnKrakenAtCurrentLocationWithNumTentacles(uint32_t NumTentacles);
	void SpawnKrakenAtCurrentLocation();
	void SpawnItemOnFloor(const struct FString& ItemString);
	void SpawnItemInHand(const struct FString& ItemString);
	void SpawnGoldMound(const struct FString& GoldMoundTypeString);
	void SpawnGeyserAtPlayerLocationWithDormancy(float Dormancy);
	void SpawnGeyserAtPlayerLocation();
	void SpawnGeyserAtLocation(float LocationX, float LocationY, float LocationZ, float Dormancy);
	void SpawnFogAtPlayerPosition();
	void SpawnFishAtPlayerLocation(const struct FString& InBaitType);
	void SpawnCursedCannonball(const struct FString& CannonballTypeString);
	void SpawnCollectorsChestOfType(struct FString* ChestTypeString);
	void SpawnCargoRunCrate(const struct FString& SpawnCargoRunCrateString);
	void SpawnCabinDoorInFrontOfPlayer(float Distance);
	void SpawnBountyReward(const struct FString& BountyTypeString);
	void SpawnBootyPickupPoint();
	void SpawnBarrelGroup(bool ForcedCloseSpawn);
	void SpawnAThousandTreasureChests();
	void SpawnAndEquipDebugWieldable(const struct FString& DebugWieldableTypeString);
	void SpawnAINoTrigger(const struct FString& AIDescString);
	void SpawnAIEncounter(const struct FString& AIEncounterString);
	void SpawnAIAtNearestAISpawnPoint(const struct FString& AIDescString);
	void SpawnAIAtLocationDelayed(const struct FString& AIDescString, float LocationX, float LocationY, float LocationZ, float Yaw, float Delay);
	void SpawnAIAtCurrentLocationDelayed(const struct FString& AIDescString, float Delay);
	void SpawnAI(const struct FString& AIDescString);
	void SpawnAggressiveGhostShipEncounterSpireTheHellishMermaid();
	void SpawnAggressiveGhostShipEncounterSpireFriendlyFormation();
	void SpawnAggressiveGhostShipEncounterSpireEnemyFormation();
	void SpawnAggressiveGhostShipEncounterSpire();
	void SpawnAggressiveGhostShipEncounter();
	void SmoulderClosestShipFire();
	void SmoulderAllShipFires();
	void SlowMotionOverride(bool InValue);
	void SkipToEndOfOnboarding();
	void SinkShipWithKeelOverIndex(int KeelOverConfigIndex);
	void SinkShipByActorId(const struct FString& ShipActorIdString);
	void SinkShip();
	void SinkClosestItemProxy();
	void SinkAllBarrels();
	void SinkAllAIShips();
	void SingleStickRight();
	void SingleStickOff();
	void SingleStickLeft();
	void SimulateTunnelFailure();
	void SimulatePetReactRequest(const struct FString& Id);
	void SimulatePetReactCancellation(const struct FString& Id);
	void ShowTavernBanners();
	void ShowTaleDebug_WithVariables();
	void ShowTaleDebug();
	void ShowRandomCrewMemberGamerCard();
	void ShowEmissaryVoteIndicators();
	void ShowAllWelds();
	void ShowAllRomeBeacons();
	void ShowAllianceStatus(const struct FString& CrewId);
	void ShipwrecksSpawnOne(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ);
	void ShipwrecksSpawnCustom(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, const struct FString& WreckAsset);
	void ShipwrecksRemoveCustom();
	void ShipwrecksRegen();
	void ShipUpdateMassProperies();
	void SetWheelAngle(float Angle);
	void SetWeaponsLockedOut(bool WeaponsLockedOut);
	void SetWaveFlag(int InFlag);
	void SetWaterWaveParams(float Amplitude, float WaveLength, float PropagationSpeed);
	void SetVoiceChatEndpointXAudio2();
	void SetVoiceChatEndpointWwise();
	void SetUnattenuatedChatMixingMethodToUseWwise();
	void SetUnattenuatedChatMixingMethodToUsePlatform();
	void SetTinySharkToOneHealth();
	void SetTimeScalar(float TimeScalar);
	void SetTimeHoursAndMinutes(int Hours, int Minutes);
	void SetTime(int Hours);
	void SetTaleSelectorSeed(int Seed);
	void SetShroudbreakerActive(bool bActive);
	void SetShipYaw(float Yaw);
	void SetShipWheelFullyRepaired();
	void SetShipWheelFullyDamaged();
	void SetShipRoll(float Roll);
	void SetShipFullyDamaged();
	void SetShipCapstanFullyRepaired();
	void SetShipCapstanFullyDamaged();
	void SetShipBuoyancyBlend(float UnaryBlend);
	void SetSailLoweredProportions(float Proportion);
	void SetSailAngles(float Angle);
	void SetPreventLeakingOnAllShips();
	void SetPreventLeakingOnAllDamageZones(bool PreventLeaking);
	void SetPlayerVisibleToAI();
	void SetPlayerInvisibleToAI();
	void SetPhotoMode(bool Enabled);
	void SetPetMovementTimeWindow(float TimeWindow);
	void SetNonCrewChatSpatialisation(bool Enabled);
	void SetMaxNumOfSpawnedAI(int MaxNumOfSpawnedActors);
	void SetMaxMovingPetsOnShips(int MaxMovingPets);
	void SetMaxMovingPetsOnServer(int MaxMovingPets);
	void SetMaxMovingPetsOnLand(int MaxMovingPets);
	void SetMastsFullyRepaired();
	void SetMastsFullyDamaged();
	void SetKnockbackDisabled(bool Disabled);
	void SetIdleDisconnectEnabled(bool Enabled);
	void SetHealthInfoReplicateOverride(bool bActive);
	void SetGrogSecondary(bool InValue);
	void SetGodMode(bool GodModeOn);
	void SetGlitterbeardRequiredPlayersOverride(int RequiredPlayerCount);
	void SetFOV(float InNewFOV);
	void SetFlameOfFateColour(int InFlameOfFateType);
	void SetDebugItemSource(const struct FString& Source);
	void SetDebugHealthStage(int InStage);
	void SetDebugCameraUseProjectileCollisionChannel(bool bUseProjectileChannel);
	void SetDeathPenaltyRespawnTimer(float InSpawnTimer);
	void SetDamageAllowedToPlayerShip(bool InAllowDamage);
	void SetCutsceneResponseCoordinatorDebug(bool Value);
	void SetCurrentCulture(const struct FString& Culture);
	void SetCoordinatedKrakenPhaseAsset(int AssetIndex);
	void SetCoordinatedKrakenCurrentPhaseAssetInactive();
	void SetCoordinatedKrakenCurrentPhaseAssetActive();
	void SetCapstanPosition(float Position);
	void SetAxisBinding(const struct FString& InBindingName, const struct FString& InKeyName);
	void SetAllAIOverrideCannonShotHitChance(float HitChance);
	void SetAITeamAttitude(const struct FString& TeamAString, const struct FString& TeamBString, const struct FString& AttitudeString);
	void SetAIExclusiveAbility(const struct FString& AIAbilityString);
	void SetAIAbilityTimeMultiplier(const struct FString& AIAbilityString, float IntervalCooldownMultiplier, float ActivationCooldownMultiplier);
	void SetAbilityAlwaysOn(const struct FString& AIAbilityString);
	void SendUpdateVoyageProgressEvent();
	void SendStatEvent(uint32_t StatId, uint64_t StatValue);
	void SendRewardRequestEvent(const struct FString& CompanyNameAndRewardIdSeparatedByColon);
	void SendResetReaperLevelEvent();
	void ScuttleShip();
	void ScreenFadeStart();
	void ScreenFadeEnd();
	void SchedulerToggleDebugDraw();
	void SchedulerSkipToNext();
	void SchedulerInitTinyShark();
	void SchedulerInitSkellyFort();
	void SchedulerInitKraken();
	void SchedulerInitDefault();
	void SchedulerInitAshenLord();
	void SchedulerInitAIShipPassive();
	void SchedulerInitAIShipBattle();
	void SchedulerInitAIShipAggro();
	void SchedulerInitAggroGhostShip();
	void SchedulerAdvance(float Time);
	void SailShip();
	void SailAllShips();
	void RewindPhysicsSceneBy(float SecondsToRewindBy);
	void ReviveLocalPlayerInstantly();
	void ReviveLocalPlayerAccordingToReviveTime();
	void ReviveAllPlayerCharactersAccordingToReviveTime();
	void RetrieveItemsFromBootyStorageInCurrentIsland();
	void RetrieveItemsFromBootyStorage(const struct FString& IslandName);
	void ResurfaceShipByActorId(const struct FString& ShipActorIdString);
	void RestoreAndRestockShipAndPlayer();
	void RestockIslandBarrels();
	void RestockAllReplenishables();
	void RespawnAllIslandItemSpawners();
	void ResetTinySharkSpawnTimerWithTime(float Timer);
	void ResetTinySharkSpawnTimer();
	void ResetTaleSelectorSeed();
	void ResetStats();
	void ResetNearestVault();
	void ResetNearestEventRoom();
	void ResetMouseDelta();
	void ResetMaxNumOfSpawnedAI();
	void ResetMaxMovingPetsOnServerToDefault();
	void ResetGlitterbeardTree();
	void ResetDemoSession(bool StartNewSession);
	void ResetAllOverrideCannonShotHitChance();
	void ResetAllMechanisms();
	void ResetAITeamAttitudes();
	void ResetAIExclusiveAbilities();
	void ResetAbilityAlwaysOn();
	void RequestSmallPassiveAIShip();
	void RequestSmallAggressiveAIShip();
	void RequestMysteriousNotesForPlayer();
	void RequestLargePassiveAIShip();
	void RequestLargeAggressiveAIShip();
	void ReplenishShipWithDebugSpawner();
	void ReplenishShip();
	void ReplaceShipWithSmallShip(const struct FString& ShipActorIdConsoleString);
	void RepairShipAndClearInternalWater();
	void RepairAndClearInternalWaterOnAllShips();
	void RenameTreasure(const struct FString& InVendorName);
	void RemovePetsFromAllPlayers();
	void RemovePetFromPlayer();
	void RemoveLostShipmentsDebugging();
	void RemoveItemInSlot(int SlotIndex);
	void RemoveDebugPetSpawners();
	void RemoveDebugHealthStage();
	void RemoveAllFog();
	void RemoveAISpawnContext(const struct FString& ContextName);
	void RebuildPirateFromSeed(int Seed);
	void ReallyScrambleMyGamertag();
	void PushShip(float FwdSpdInMetersPerSecond);
	void PullLatestEmblemProgress();
	void ProceedToNextContestState();
	void PrintTime();
	void PrintNPCs();
	void PrintAllNetworkActors();
	void PrintAISpawners();
	void PrintAISpawnContexts();
	void PlayWorldSequence(const struct FString& InReference);
	void PlayLocalSequences();
	void PlayerAnimationOverride(const struct FName& Name);
	void OverrideShipPartFromCatalogue(const struct FString& InShipActorIdConsoleString, int InCataloguePartIndex, int InCataloguePartCustomisationIndex);
	void OpenSkeletonFortDoor();
	void MoveStormToPlayer();
	void MoveStormToLocation(float LocationX, float LocationY);
	void MoveStormToIsland(const struct FString& IslandNameString);
	void MessageBoxOnGraphicsThreadTest();
	void MakeSharksBrainDead();
	void MakeDebugPetSpawner();
	void LogShipHierarchy();
	void LogServerShipHierarchy();
	void LogAITeamAttitudes();
	void LockTradeRouteSelectionToSpecificRouteForMyCrew(const struct FString& RouteReferencePath);
	void LockTradeRouteSelectionToSpecificRouteForCrew(const struct FGuid& CrewId, const struct FString& RouteReferencePath);
	void LocallyUnBreakLeg();
	void LocallyDisableTutorial();
	void LightLocalBraziers();
	void LightBraziersInRadius(float Radius);
	void LeaveAlliance(const struct FString& CrewId);
	void LaunchPlayer(float Velocity, float Angle);
	void KrakenSetTentaclesToOneHealth();
	void KrakenAnimatedTentacleThrowPlayer();
	void KrakenAnimatedTentacleTakeDamage(float Damage);
	void KrakenAnimatedTentacleSwallowPlayer();
	void KrakenAnimatedTentacleSuckPlayer();
	void KrakenAnimatedTentaclePowerSlamPlayer();
	void KrakenAnimatedTentacleKill();
	void KrakenAnimatedTentacleIngestPlayer();
	void KrakenAnimatedTentacleDropPlayer();
	void KrakenAnimatedTentacleDespawn();
	void KrakenAnimatedTentacleDefeat();
	void KrakenAnimatedTentacleChangePlayerHoldState(const struct FString& HoldState);
	void KindleClosestShip();
	void KindleAllShipFires();
	void KillPlayer();
	void KillCrew(const struct FString& CrewId);
	void KillAllSkeletons();
	void KillAllPlayers();
	void KillAllOtherPlayers();
	void KillAllOtherPlayerCharacters();
	void KillAllDebugAISpawners();
	void KillAllCrews();
	void KillAllAI();
	void KillAllAggressiveGhostShips();
	void KillAllAggressiveGhostShipEncounters();
	void JoinAlliance(const struct FString& OfferingCrew, const struct FString& AcceptingCrew);
	void IPGOverride(const struct FName& BodyShape, float Distance);
	void IPGLoadWithoutClothing(const struct FString& ActorIdString, const struct FString& path);
	void IPGLoadWithClothing(const struct FString& ActorIdString, const struct FString& path);
	void IPGLoad(const struct FString& path);
	void InvincibleEverything();
	void InterruptSicknessOnPlayer();
	void InfiniteGunAmmo(bool Enabled);
	void IncrementTime(int Hours, int Minutes);
	void IncrementDebugHealthStage();
	void IncreaseEmissaryCount(int Amount);
	void IgniteShipAtPlayerLocation();
	void IgniteLocalPlayer();
	void IgniteClosestShip();
	void IgniteAllShipFires();
	void HideTaleDebug();
	void HideEmissaryVoteIndicators();
	void HideAllRomeBeacons();
	void HealthSet(float Value);
	void HealthReset();
	void HealthRegenResetToEmpty();
	void HealthRegenAdd(float Value);
	void HealthContinuousStopWithTestReason();
	void HealthContinuousStopWithReason(const struct FString& Reason);
	void HealthContinuousStartWithTestReason(float Value);
	void HealthContinuousStartWithReason(float Value, const struct FString& Reason);
	void HealthAdjust(float Amount);
	void God();
	void ForceStopAllPetsDanger();
	void ForceStartAllPetsDangerWithChangingThreatLocation(const struct FString& ResponseType, float UpdateThreatLocationTime);
	void ForceStartAllPetsDanger(const struct FString& ResponseType);
	void ForceSkipTallTaleSteps_WaitAndCutscenes();
	void ForceRequestCampaignsFromServices();
	void ForcePetHangout(const struct FName& HangoutName, int PositionIndex);
	void ForceOpenShop();
	void ForceNPCOnSurfaceToMove(bool FastMove, bool KeepCurrentLocation);
	void ForceNPCOnSurfaceLocation(int LoctationIndex, int LoctationPointIndex);
	void ForceNPCOnShipIsCurrentlyInDanger(bool IsCurrentlyInDanger);
	void ForceMigrationServiceHeartBeat();
	void ForceEmoteWithDescription(const struct FName& EmoteIdentifier, const struct FString& DisplayName, const struct FString& AudioDescription);
	void ForceEmote(const struct FName& EmoteIdentifier);
	void ForceCloseShop();
	void ForceAllPetsDangerWithNoiseEventWithChangingThreatLocation(const struct FString& ResponseType, float UpdateThreatLocationTime);
	void ForceAllPetsDangerWithNoiseEvent(const struct FString& ResponseType);
	void ForceAggressiveGhostShipStartSinkingAnimation();
	void ForceAggressiveGhostShipStartDisappearAnimation();
	void ForceAggressiveGhostShipStartAppearAnimation();
	void ForceAggressiveGhostShipPortalJump();
	void Fly();
	void FloodShipWithKeelOverIndex(float NormalisedWaterAmount, int KeelOverConfigIndex);
	void FloodShip(float NormalisedWaterAmount);
	void FireSeasonRewardEarnedMessage(int InNumSeason, int InRewardsLevel, bool InMultipleRewards);
	void FireSeasonGoalProgressionMessage(int InNumSeason, int InPreviousProgress, int InCurrentProgress, int InCompletionTreshold, int InGoalType, const struct FString& InGoalCategory);
	void FireSeasonGoalCompletionMessage(int InNumSeason, int InGoalType, const struct FString& InGoalCategory);
	void FireLevelCompletionMessage(int InNumSeason, int InLevel, int InTimeSpentInLevel, int InTier, int InTimeSpentInTier, bool InTierCompleted, bool InSeasonCompleted);
	void FireCreatorCrewSignedUpStat();
	void FireCreatorCrewMinutesViewedStat(int InNumMinutes);
	void FireCreatorCrewMinutesStreamedStat(int InNumMinutes);
	void FireCreatorCrewCurrentViewersStat(int InNumViewers);
	void FindText(const struct FString& Namespace, const struct FString& Key);
	void FakeMigrateBountyQuests();
	void EquipPirateTitle(const struct FString& PirateTitleType);
	void EquipCompassInLoadout();
	void EndDemoSession();
	void EnableVoiceChatMeteringForOutgoingSignals(bool Enabled);
	void EnableVoiceChatMeteringForIncomingSignals(bool Enabled);
	void EnableStormEffects(unsigned char LockReason);
	void EnableSelectShipwreckLocationFromValidCandidatesDebugDisplay(int TrueFalse);
	void EnableNTP(bool Enable);
	void EnableMermaidSpawning(int Enable);
	void EnableMermaidDeletion(int Enable);
	void EnableHeadphoneMixing(bool Enabled);
	void EnableEmergentSirenSpawning();
	void EnableEmergentSharkSpawning();
	void EnableConsoleLogging();
	void EnableCinematicCamera();
	void EnableBeaconOnAllMermaids(int Enable);
	void EnableAllEmergentWaterSpawning();
	void EnableAIBehaviour();
	void DrawVideprinter(const struct FString& Id, bool Active);
	void DrawTreasureDebug(int Enabled);
	void DrawTemporaryLandmarkDebug(bool Enabled);
	void DrawNearbyAISpawnPointsRanged(float Range);
	void DrawNearbyAISpawnPoints();
	void DownPlayer();
	void DownAllPlayers();
	void DownAllOtherPlayers();
	void DownAllOtherPlayerCharacters();
	void DouseClosestShip();
	void DouseAllShipFires();
	void DiveShipByActorId(const struct FString& ShipActorIdString);
	void DisplaySpireLocationsDebug(int Enabled);
	void DisplaySingleEmblemProgress(const struct FString& StatName);
	void DisplayServersideHitsAtPlayerPosWithDefaults();
	void DisplayServersideHitsAtPlayerPos(uint32_t NumSamplesPerDimension, float DistanceBetweenSamples, float TestHeight);
	void DisplayServerFPS();
	void DisplayNonVagueNonUniqueLandmarksForIsland(bool Enabled);
	void DisplayLoadingScreenTeleport();
	void DisplayLoadingScreenBoot();
	void DisplayLoadingScreenArena();
	void DisplayLoadingScreenAdventure();
	void DisplayLandmarkValidTreasureLocationsForPlayer();
	void DisplayLandmarkRegions();
	void DisplayLandmarkNames();
	void DisplayFallDamageDebug(int Enable);
	void DisplayDrunkenness(bool Flag);
	void DismissProjectileAimAdjustmentsMessages();
	void DismissAllPickupPoints();
	void DisableStormEffects(unsigned char LockReason);
	void DisableEmergentSirenSpawning();
	void DisableEmergentSharkSpawning();
	void DisableConsoleLogging();
	void DisableCinematicCamera();
	void DisableAllEmergentWaterSpawning();
	void DisableAIBehaviour();
	void DisableAIAbilities();
	void DioramaStartNearest(const struct FString& Spawner, const struct FString& DioramaDesc);
	void DioramaStart(const struct FString& ActorName, const struct FString& Spawner, const struct FString& DioramaDesc);
	void DioramaKillAllDebug();
	void DestroyShip(const struct FString& ShipActorIdConsoleString);
	void DestroyNearestDebugReapersChestMarker();
	void DestroyMyShip();
	void DestroyKraken();
	void DestroyAllTreasureChests();
	void DestroyAllTinySharks();
	void DestroyAllSirenStatues();
	void DestroyAllShips();
	void DespawnNumberOfAI(const struct FString& AITypeString, int NumToDespawn);
	void DespawnFirstAI();
	void DespawnAllAggressiveGhostShips();
	void DespawnAI(const struct FString& AITypeString);
	void DeleteVoyageHistory();
	void DeleteAllMermaids();
	void DecrementDebugHealthStage();
	void DebugIslandDelta();
	void DeactivateSkellyFort(const struct FString& FortName);
	void DeactivateEmissaryFlagCompany();
	void DeactivateDeathEffect();
	void DamageShipFromRemoteActor(const struct FString& ActorIdString, float Strength, float CameraLocationX, float CameraLocationY, float CameraLocationZ, float CameraForwardDirectionX, float CameraForwardDirectionY, float CameraForwardDirectionZ);
	void DamageShip(float Strength);
	void DamagePlayerFromRemoteActor(const struct FString& ActorIdString, float Strength, float CameraLocationX, float CameraLocationY, float CameraLocationZ, float CameraForwardDirectionX, float CameraForwardDirectionY, float CameraForwardDirectionZ);
	void DamagePlayer(float Strength);
	void CureAllAilings();
	void CreateDebugReapersChestMarkerAtPlayerLocation();
	void CreateDebugAISpawnerAt(const struct FString& SpawnerAssetName, const struct FString& LocationActorName);
	void CreateDebugAISpawner(const struct FString& SpawnerAssetName);
	void CoordinatedKrakenToggleAI();
	void CoordinatedKrakenRequestAction(const struct FString& ActionName);
	void CoordinatedKrakenEnableDebugging(int Enable);
	void ContextualPromptCountersToggleDebugDraw();
	void CompleteVoyage();
	void CompleteAllActivePuzzleVaults();
	void CompleteActiveQuests();
	void CloseSkeletonFortDoor();
	void CloseLoadingScreen();
	void ClearWorldSequences();
	void ClearVoiceChatMeters();
	void ClearSlowMotionOverride();
	void ClearGrogSecondary();
	void ClearGlitterbeardRequiredPlayersOverride();
	void ClearDebugStormLocation();
	void ClearAxisBinding(const struct FString& InBindingName);
	void ClearAIAbilityTimeMultipliers();
	void CheckLandmarkValidTreasureLocationsAtPlayerPos();
	void CheckLandmarkRelativeToIslandCalculation();
	void CapsizeShip();
	void CancelVoyage();
	void CancelTale();
	void CancelEmergentVoyages();
	void CancelAllCrewVoyages();
	void CancelActiveAIShipEncounters();
	void BuryNearestBuriable();
	void BuryItem(const struct FString& NameOfItemToBury);
	void BreakLeg();
	void BlockMigrationForPlayer(bool Enabled);
	void ApplyVenomWithParams(float InitialDamage, float DamagePerSecond, float DamageOverTimeDuration);
	void ApplyVenom();
	void ApplyStatusToPlayer(const struct FString& StatusIdentifier, float Duration);
	void ApplyDamageToAllDamageZones(float Damage);
	void ApplyCursedCannonballStatusToShip(const struct FString& CannonballTypeString);
	void ApplyCursedCannonballStatusToPlayer(const struct FString& CannonballTypeString);
	void AllowTeleportWithItems(bool CanTeleport);
	void AllocatePortalToTunnelOfTheDamned(const struct FString& TunnelDescAssetPath);
	void AllJoinAlliance();
	void AIPlayerShip();
	void AggressiveGhostShipRebuildSpline();
	void AdjustGhostShader(bool Enabled, float InStartingAmount, float InTargetAmount, float InVengeanceStartingAmount, float InVengeanceTargetAmount, float InDelayBeforeStart, float InBlendDuration);
	void AddTradeRouteNPCHintDialogClueMarkToMapAtCurrentLocation();
	void AddTradeRouteMessageInABottleClueMarkToMapAtCurrentLocation();
	void AddTradeRouteClueMarkToMapAtCurrentLocation();
	void AddTornMapPiece();
	void AddShipToCrew(const struct FString& ActorIdString, const struct FString& CrewId);
	void AddRandomPetForAllPlayers();
	void AddPlayerToCrew(const struct FString& ActorIdString, const struct FString& CrewId);
	void AddPetForPlayer(int PetTypeIndex, int PetPartIndex);
	void AddPetForAllPlayers(int PetTypeIndex, int PetPartIndex);
	void AddMysteriousNote(const struct FString& NoteType, const struct FString& NoteTitle, const struct FString& NoteBody, const struct FString& CompletionStrings);
	void AddDrunkenness(int DrunkennessType, float DrunkennessChange);
	void AddAISpawnContext(const struct FString& ContextName);
	void ActivateSkellyFort(const struct FString& FortEventName, const struct FString& FortName);
	void ActivateEmissaryFlagCompany(const struct FString& CompanyId);
	void ActivateDebugTeleportationDestinationService();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
