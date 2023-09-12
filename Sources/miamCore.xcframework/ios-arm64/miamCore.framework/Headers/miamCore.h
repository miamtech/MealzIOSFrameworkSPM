#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class MiamCoreKotlinThrowable, MiamCoreI18nResolver, MiamCoreI18n, NSBundle, MiamCoreI18nCompanion, MiamCoreResourcesPluralsResource, MiamCoreKotlinArray<T>, MiamCoreResourcesStringResource, MiamCoreNoResourceThrowable, MiamCoreKMMContext, MiamCoreMiamPreferencesContext, MiamCoreAnalyticEffect, MiamCoreAnalyticEvent, MiamCoreAnalyticEffectEventEmitted, MiamCoreAnalyticsPlausibleProps, MiamCoreAnalyticState, MiamCoreAnalyticsCompanion, MiamCoreAnalyticsPlausibleEventCompanion, MiamCoreAnalyticsPlausibleEvent, MiamCoreKotlinEnumCompanion, MiamCoreKotlinEnum<E>, MiamCoreAnalyticsPlausiblePathsCompanion, MiamCoreAnalyticsPlausiblePaths, MiamCoreAnalyticsPlausiblePropsCompanion, MiamCoreAnalyticsInstance, MiamCoreAnalytics, MiamCoreRoute, MiamCoreDialogRoute, MiamCorePageRoute, MiamCoreRouteServiceAction, MiamCoreRouteServiceActionSetDialogRoute, MiamCoreRouteServiceActionSetInitialPageRoute, MiamCoreRouteServiceActionSetPageRoute, MiamCoreRouteServiceEffect, MiamCoreRouteServiceEffectRouteChanged, MiamCoreRouteServiceInstance, MiamCoreRouteService, MiamCoreRouteServiceState, MiamCoreUserPreferencesInstance, MiamCoreUserPreferences, MiamCoreKotlinx_coroutines_coreCoroutineDispatcher, MiamCoreKotlinAbstractCoroutineContextElement, MiamCoreKotlinx_coroutines_coreCoroutineDispatcherKey, MiamCoreMainLoopDispatcher, MiamCoreEnableRecipeLikeUseCaseCompanion, MiamCoreEnableRecipeLikeUseCase, MiamCoreSetProfilingAllowedUseCaseCompanion, MiamCoreSetProfilingAllowedUseCase, MiamCorePointOfSaleStore, MiamCoreSetSupplierUseCaseCompanion, MiamCoreSupplierInfo, MiamCoreSetSupplierUseCase, MiamCoreUpdateUserIdUseCaseCompanion, MiamCoreUpdateUserIdUseCase, MiamCoreMainExecutor, MiamCoreOnGetPriceAsyncUseCaseCompanion, MiamCoreOnGetPriceAsyncUseCaseInput, MiamCoreOnGetPriceAsyncUseCase, MiamCoreAddRecipesByIdsToMealPlannerUseCaseInput, MiamCoreAttributesCompanion, MiamCoreRecordCompanion, MiamCoreKotlinx_serialization_jsonJsonElement, MiamCoreAttributes, MiamCoreRelationships, MiamCoreRecord, MiamCoreBasketCompanion, MiamCoreBasketAttributes, MiamCoreBasketRelationships, MiamCoreRecipe, MiamCoreBasket, MiamCoreBasketEntry, MiamCoreAttributesField, MiamCoreBasketAttributesCompanion, MiamCoreBasketEntriesItemCompanion, MiamCoreBasketEntriesItem, MiamCoreBasketEntryCompanion, MiamCoreBasketEntryAttributes, MiamCoreBasketEntryRelationships, MiamCoreItem, MiamCoreBasketEntryAttributesCompanion, MiamCoreRelationshipListCompanion, MiamCoreRelationshipList, MiamCoreBasketEntryRelationshipListCompanion, MiamCoreBasketEntryRelationshipListSerializer, MiamCoreBasketEntryRelationshipList, MiamCoreRelationshipsCompanion, MiamCoreItemRelationshipList, MiamCoreGroceriesEntryRelationship, MiamCoreBasketEntryRelationshipsCompanion, MiamCoreLineEntries, MiamCoreBasketPreviewLineCompanion, MiamCoreBasketPreviewLine, MiamCoreGroceriesList, MiamCoreBasketRelationshipsCompanion, MiamCoreCatalogFilterOptions, MiamCoreTagTypes, MiamCoreTag, MiamCoreCheckableTagCompanion, MiamCoreCheckableTag, MiamCoreGroceriesEntryCompanion, MiamCoreGroceriesEntryAttributes, MiamCoreGroceriesEntryRelationships, MiamCoreGroceriesEntry, MiamCoreGroceriesEntryAttributesCompanion, MiamCoreRelationshipCompanion, MiamCoreRelationship, MiamCoreGroceriesEntryRelationshipCompanion, MiamCoreGroceriesEntryRelationshipListCompanion, MiamCoreGroceriesEntryRelationshipListSerializer, MiamCoreGroceriesEntryRelationshipList, MiamCoreGroceriesEntryRelationshipSerializer, MiamCoreGroceriesEntryRelationshipsCompanion, MiamCoreGroceriesListCompanion, MiamCoreGroceriesListAttributes, MiamCoreGroceriesListRelationships, MiamCoreRecipeInfos, MiamCoreGroceriesListAttributesCompanion, MiamCoreGroceriesListRelationshipsCompanion, MiamCoreIngredientCompanion, MiamCoreIngredientAttributes, MiamCoreIngredientRelationships, MiamCoreIngredient, MiamCoreIngredientAttributesCompanion, MiamCoreIngredientListRelationshipCompanion, MiamCoreIngredientListSerializer, MiamCoreIngredientListRelationship, MiamCoreIngredientRelationshipsCompanion, MiamCoreItemCompanion, MiamCoreItemAttributes, MiamCoreItemRelationships, MiamCoreItemAttributesCompanion, MiamCoreItemRelationshipListCompanion, MiamCoreItemRelationshipListSerializer, MiamCoreItemRelationshipsCompanion, MiamCoreMealPlannerRecipe, MiamCoreMiamConfigCompanion, MiamCoreMiamConfig, MiamCorePackageCompanion, MiamCorePackage, MiamCorePackageAttributes, MiamCorePackageRelationships, MiamCorePackageSettings, MiamCorePackageAttributesCompanion, MiamCoreRecipeRelationshipList, MiamCorePackageRelationshipsCompanion, MiamCorePackageSettingsCompanion, MiamCorePointOfSaleCompanion, MiamCorePointOfSale, MiamCorePointOfSaleWrapperCompanion, MiamCorePointOfSaleWrapper, MiamCorePointOfSalesCompanion, MiamCorePointOfSales, MiamCorePricingCompanion, MiamCorePricing, MiamCoreRecipeCompanion, MiamCoreRecipeAttributes, MiamCoreRecipeRelationships, MiamCoreRecipeLike, MiamCoreRecipeStep, MiamCoreRecipeAttributesCompanion, MiamCoreRecipeInfosCompanion, MiamCoreRecipeLikeCompanion, MiamCoreRecipeLikeAttributes, MiamCoreRecipeLikeRelationships, MiamCoreRecipeLikeAttributesCompanion, MiamCoreRecipeLikeRelationshipsCompanion, MiamCoreRecipePlanCompanion, MiamCoreRecipePlan, MiamCoreRecipeRelationshipListCompanion, MiamCoreRecipeRelationshipListSerializer, MiamCoreSponsorListRelationship, MiamCoreRecipeStepListRelationship, MiamCoreRecipeRelationshipsCompanion, MiamCoreRecipeStepCompanion, MiamCoreRecipeStepAttributes, MiamCoreRecipeStepRelationships, MiamCoreRecipeStepAttributesCompanion, MiamCoreRecipeStepListListSerializer, MiamCoreRecipeStepListRelationshipCompanion, MiamCoreRecipeStepRelationshipsCompanion, MiamCoreRecordLink, MiamCoreRecordCounterWrapperCompanion, MiamCoreRecordCounterWrapper, MiamCoreRecordLinkCompanion, MiamCoreRecordWrapperCompanion, MiamCoreRecordWrapper, MiamCoreRetailerProduct, MiamCoreSponsorCompanion, MiamCoreSponsorAttributes, MiamCoreSponsorRelationships, MiamCoreSponsor, MiamCoreSponsorAttributesCompanion, MiamCoreSponsorBlockCompanion, MiamCoreSponsorBlockAttributes, MiamCoreSponsorBlockRelationships, MiamCoreSponsorBlock, MiamCoreSponsorBlockAttributesCompanion, MiamCoreSponsorBlockRelationshipName, MiamCoreSponsorBlockTypeRelationship, MiamCoreSponsorBlockRelationshipsCompanion, MiamCoreSponsorBlockTypeCompanion, MiamCoreSponsorBlockTypeAttributes, MiamCoreSponsorBlockTypeRelationships, MiamCoreSponsorBlockType, MiamCoreSponsorBlockTypeAttributesCompanion, MiamCoreSponsorBlockTypeRelationshipCompanion, MiamCoreSponsorBlockTypeSerializer, MiamCoreSponsorBlockTypesList, MiamCoreSponsorBlocksRelationshipsCompanion, MiamCoreSponsorBlocksSerializer, MiamCoreSponsorBlocksRelationships, MiamCoreSponsorListRelationshipCompanion, MiamCoreSponsorListSerializer, MiamCoreSponsorRelationshipName, MiamCoreSponsorRelationshipsCompanion, MiamCoreSuggestionsCriteriaCompanion, MiamCoreSuggestionsCriteria, MiamCoreSupplierCompanion, MiamCoreSupplierAttributes, MiamCoreSupplierRelationships, MiamCoreSupplier, MiamCoreSupplierAttributesCompanion, MiamCoreSupplierNotificationWrapperCompanion, MiamCoreSupplierNotificationWrapper, MiamCoreTagCompanion, MiamCoreTagAttributes, MiamCoreTagRelationships, MiamCoreTagAttributesCompanion, MiamCoreBasketFakeFactory, MiamCoreGroceriesEntryFakeFactory, MiamCoreGroceriesListFakeFactory, MiamCoreIngredientFakeFactory, MiamCoreItemFakeFactory, MiamCorePackageFakeFactory, MiamCorePointOfSaleFakeFactory, MiamCoreRecipeFakeFactory, MiamCoreRecipeLikeFakeFactory, MiamCoreRecipeStepFakeFactory, MiamCoreSponsorBlockFakeFactory, MiamCoreSponsorBlockTypeFakeFactory, MiamCoreSponsorFakeFactory, MiamCoreSupplierFakeFactory, MiamCoreTagFakeFactory, MiamCoreCustomDurationSerializer, MiamCoreRecipeRepositoryImpCompanion, MiamCoreRecipeSort, MiamCoreClient, MiamCorePricingDataSourceImpCompanion, MiamCoreRecipeFilter, MiamCoreBaseViewModel<Event, State, Effect>, MiamCoreRecipeLikeContractState, MiamCoreRecipeLikeContractEvent, MiamCoreRecipeLikeContractEffect, MiamCoreBasicUiState<__covariant T>, MiamCoreQuantityFormatterDefault, MiamCoreBasketPreviewContractEvent, MiamCoreBasketPreviewContractEventAddEntry, MiamCoreBasketPreviewContractEventCloseItemSelector, MiamCoreBasketPreviewContractEventKillJob, MiamCoreBasketPreviewContractEventOpenItemSelector, MiamCoreBasketPreviewContractEventRemoveRecipe, MiamCoreBasketPreviewContractEventReplaceItem, MiamCoreBasketPreviewContractEventSetLines, MiamCoreBasketPreviewContractEventSetRecipeId, MiamCoreBasketPreviewContractEventToggleLine, MiamCoreBasketPreviewContractState, MiamCoreBasketPreviewContractEffect, MiamCoreBasketPreviewViewModelLineUpdateState, MiamCoreItemSelectorContractEvent, MiamCoreItemSelectorContractEventReturnToBasketPreview, MiamCoreItemSelectorContractEventSetItemList, MiamCoreItemSelectorContractEventSetReplaceItemInPreview, MiamCoreItemSelectorContractEventSetReturnToBasketPreview, MiamCoreItemSelectorContractState, MiamCoreItemSelectorInstance, MiamCoreItemSelectorViewModel, MiamCoreItemSelectorContractEffect, MiamCoreFavoritePageContractEvent, MiamCoreFavoritePageContractEventLoadPage, MiamCoreFavoritePageContractState, MiamCoreFavoritePageViewModelCompanion, MiamCoreFavoritePageContractEffect, MiamCoreMyMealContractEvent, MiamCoreMyMealContractEventRemoveRecipe, MiamCoreMyMealContractState, MiamCoreMyMealContractEffect, MiamCorePricingContractState, MiamCorePricingContractEvent, MiamCorePricingContractEffect, MiamCoreRecipeListPageContractEvent, MiamCoreRecipeListPageContractEventInitPage, MiamCoreRecipeListPageContractEventLoadPage, MiamCoreRecipeListPageContractState, MiamCoreRecipeListPageContractEffect, MiamCoreMyMealButtonContractState, MiamCoreMyMealButtonContractEvent, MiamCoreMyMealButtonContractEffect, MiamCorePreferencesContent, MiamCorePreferencesContractState, MiamCorePreferencesEffect, MiamCorePreferencesEffectPreferencesChanged, MiamCorePreferencesEffectPreferencesLoaded, MiamCorePreferencesViewModelInstance, MiamCoreSingletonPreferencesViewModel, MiamCoreSingletonPreferencesViewModelCompanion, MiamCorePreferencesContractEvent, MiamCorePreferencesContractEffect, MiamCoreRouterContent, MiamCoreRouterOutletContractEvent, MiamCoreRecipeViewModel, MiamCoreRouterOutletContractEventGoToDetail, MiamCoreRouterOutletContractEventGoToHelper, MiamCoreRouterOutletContractEventGoToItemSelector, MiamCoreRouterOutletContractEventGoToPreview, MiamCoreRouterOutletContractEventGoToSponsor, MiamCoreRouterOutletContractEventOpenDialog, MiamCoreRouterOutletContractEventPrevious, MiamCoreRouterOutletContractState, MiamCoreRouterOutletContractEffect, MiamCorePreferencesSearchContractState, MiamCorePreferencesSearchContractEvent, MiamCorePreferencesSearchContractEffect, MiamCoreRecipeCarouselContractEvent, MiamCoreRecipeCarouselContractEventGetRecipeSuggestionsFromCriteria, MiamCoreRecipeCarouselContractEventGetRecipeSuggestionsFromId, MiamCoreRecipeCarouselContractState, MiamCoreRecipeCarouselContractEffect, MiamCoreFilterEffect, MiamCoreFilterEffectOnUpdate, MiamCoreFilterViewModelInstance, MiamCoreSingletonFilterViewModel, MiamCoreSingletonFilterContractEffect, MiamCoreSingletonFilterContractEffectOnUpdate, MiamCoreSingletonFilterContractEvent, MiamCoreSingletonFilterContractEventOnCostFilterChanged, MiamCoreSingletonFilterContractEventOnDifficultyChanged, MiamCoreSingletonFilterContractEventOnTimeFilterChanged, MiamCoreSingletonFilterContractState, MiamCoreSingletonFilterViewModelCompanion, MiamCoreRecipeRepositoryImp, MiamCoreBasketTagContractEvent, MiamCoreBasketTagContractEventSetRetailerProductId, MiamCoreBasketTagContractState, MiamCoreRouterOutletViewModel, MiamCoreBasketTagContractEffect, MiamCoreSponsorDetailsContractState, MiamCoreSponsorDetailsContractEvent, MiamCoreSponsorDetailsContractEffect, MiamCoreRecipeContractEffect, MiamCoreRecipeContractEffectDisliked, MiamCoreRecipeContractEffectHideCard, MiamCoreRecipeContractEvent, MiamCoreRecipeContractEventError, MiamCoreRecipeContractEventOnAddRecipe, MiamCoreRecipeContractEventSetActiveStep, MiamCoreRecipeContractEventShowIngredient, MiamCoreRecipeContractEventShowSteps, MiamCoreTabEnum, MiamCoreRecipeContractState, MiamCoreCatalogContent, MiamCoreCatalogContractEvent, MiamCoreCatalogContractEventGoBack, MiamCoreCatalogContractEventGoToFavorite, MiamCoreDialogContent, MiamCoreCatalogContractState, MiamCoreCatalogViewModelCompanion, MiamCoreCatalogContractEffect, MiamCoreExecutorHelperCompanion, MiamCoreAlterQuantityBasketEntry, MiamCoreBasicUiStateEmpty, MiamCoreKotlinNothing, MiamCoreBasicUiStateError, MiamCoreBasicUiStateIdle, MiamCoreBasicUiStateLoading, MiamCoreBasicUiStateSuccess<T>, MiamCoreBasketAction, MiamCoreBasketActionAddBasketEntry, MiamCoreBasketActionConfirmBasket, MiamCoreBasketActionRefreshBasket, MiamCoreBasketActionRemoveEntry, MiamCoreBasketActionReplaceSelectedItem, MiamCoreBasketActionUpdateBasketEntries, MiamCoreBasketActionUpdateBasketEntriesDiff, MiamCoreBasketEffect, MiamCoreBasketEffectBasketConfirmed, MiamCoreBasketEffectBasketPreviewChange, MiamCoreBasketState, MiamCoreGroceriesListAction, MiamCoreGroceriesListActionAlterRecipeList, MiamCoreGroceriesListActionRefreshGroceriesList, MiamCoreGroceriesListActionRemoveRecipe, MiamCoreGroceriesListActionResetGroceriesList, MiamCoreGroceriesListEffect, MiamCoreGroceriesListEffectGroceriesListLoaded, MiamCoreGroceriesListEffectRecipeAdded, MiamCoreGroceriesListEffectRecipeCountChanged, MiamCoreGroceriesListEffectRecipeRemoved, MiamCoreGroceriesListState, MiamCoreLikeEffect, MiamCoreLikeEffectDisliked, MiamCoreLikeEffectLiked, MiamCoreLikeStoreInstance, MiamCoreLikeStore, MiamCoreMealPlannerState, MiamCorePointOfSaleAction, MiamCorePointOfSaleActionSetExtId, MiamCorePointOfSaleActionSetSupplierId, MiamCorePointOfSaleState, MiamCoreUserAction, MiamCoreUserActionRefreshUser, MiamCoreUserState, MiamCoreUserStoreImplCompanion, MiamCoreReadyEvent, MiamCoreContextHandlerInstance, MiamCoreContextHandler, MiamCoreContextHandlerState, MiamCoreGroceriesListHandler, MiamCoreLogHandlerCompanion, MiamCorePointOfSaleHandler, MiamCoreCatalogCategory, MiamCoreReadyEventIsNotReady, MiamCoreReadyEventIsReady, MiamCoreToasterHandler, MiamCoreToasterState, MiamCoreUserHandler, MiamCoreBasketComparisonItem, MiamCoreBasketComparator, MiamCoreBasketComparatorData, MiamCoreBasketHandlerInstance, MiamCoreBasketHandler, MiamCoreSponsorDetailState, MiamCoreMealPlannerRecapContractState, MiamCoreMealPlannerRecapContractEvent, MiamCoreMealPlannerRecapContractEffect, MiamCoreRecipesPageContractState, MiamCoreRecipesPageContractEvent, MiamCoreRecipesPageContractEffect, MiamCoreRecipesPageViewModel, MiamCoreComponentUiState, MiamCoreMealPlannerFormContractState, MiamCoreMealPlannerFormContractEvent, MiamCoreMealPlannerStore, MiamCoreMealPlannerFormContractEffect, MiamCoreDefaultBasketPreviewContractState, MiamCoreDefaultBasketPreviewContractEvent, MiamCoreDefaultBasketPreviewContractEffect, MiamCoreDefaultBasketPreviewViewModel, MiamCoreMealPlannerMealsContractState, MiamCoreMealPlannerMealsContractEvent, MiamCoreMealPlannerMealsContractEffect, MiamCoreBudgetRepositoryCompanion, MiamCoreLocalisation, MiamCoreLocalisationBasket, MiamCoreLocalisationBudget, MiamCoreLocalisationCatalog, MiamCoreLocalisationCounter, MiamCoreLocalisationError, MiamCoreLocalisationFavorites, MiamCoreLocalisationFilters, MiamCoreLocalisationItemSelector, MiamCoreLocalisationMyMeals, MiamCoreLocalisationPreferences, MiamCoreLocalisationPrice, MiamCoreLocalisationRecipe, MiamCoreLocalisationSponsorBanner, MiamCoreLocalisationTag, MiamCoreMiamDI, MiamCorePricingRepositoryImp, MiamCoreKoin_coreKoinApplication, MiamCoreKoin_coreModule, MiamCoreKotlinx_serialization_jsonJson, MiamCoreKotlinException, MiamCoreKotlinRuntimeException, MiamCoreKotlinIllegalStateException, MiamCoreKotlinCancellationException, MiamCoreKotlinAbstractCoroutineContextKey<B, E>, MiamCoreKotlinx_serialization_jsonJsonElementCompanion, MiamCoreKotlinx_serialization_coreSerializersModule, MiamCoreKotlinx_serialization_coreSerialKind, MiamCoreKoin_coreKoinApplicationCompanion, MiamCoreKoin_coreLogger, MiamCoreKoin_coreLevel, MiamCoreKoin_coreKoin, MiamCoreKoin_coreInstanceFactory<T>, MiamCoreKotlinPair<__covariant A, __covariant B>, MiamCoreKoin_coreScope, MiamCoreKoin_coreParametersHolder, MiamCoreKoin_coreScopeDSL, MiamCoreKoin_coreSingleInstanceFactory<T>, MiamCoreKotlinx_serialization_jsonJsonDefault, MiamCoreKotlinx_serialization_jsonJsonConfiguration, MiamCoreKotlinLazyThreadSafetyMode, MiamCoreKoin_coreInstanceRegistry, MiamCoreKoin_corePropertyRegistry, MiamCoreKoin_coreScopeRegistry, MiamCoreKoin_coreLockable, MiamCoreKoin_coreBeanDefinition<T>, MiamCoreKoin_coreInstanceFactoryCompanion, MiamCoreKoin_coreInstanceContext, MiamCoreKoin_coreParametersHolderCompanion, MiamCoreKotlinx_coroutines_coreAtomicDesc, MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp, MiamCoreKoin_coreScopeRegistryCompanion, MiamCoreKoin_coreKind, MiamCoreKoin_coreCallbacks<T>, MiamCoreKotlinx_coroutines_coreAtomicOp<__contravariant T>, MiamCoreKotlinx_coroutines_coreOpDescriptor, MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode, MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc, MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T>, MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T>;

@protocol MiamCoreKotlinx_coroutines_coreFlowCollector, MiamCoreKotlinx_coroutines_coreFlow, MiamCoreClosable, MiamCoreKotlinx_coroutines_coreCoroutineScope, MiamCoreKotlinCoroutineContext, MiamCoreI18nResource, MiamCoreEffect, MiamCoreState, MiamCoreKotlinx_coroutines_coreMutableStateFlow, MiamCoreKotlinx_serialization_coreKSerializer, MiamCoreKotlinComparable, MiamCoreKotlinx_coroutines_coreJob, MiamCoreAction, MiamCoreKotlinx_coroutines_coreStateFlow, MiamCoreStore, MiamCoreKotlinCoroutineContextKey, MiamCoreKotlinCoroutineContextElement, MiamCoreKotlinContinuation, MiamCoreKotlinContinuationInterceptor, MiamCoreKotlinx_coroutines_coreRunnable, MiamCoreUserStore, MiamCoreSupplierRepository, MiamCoreIExecutorScope, MiamCoreBasketStore, MiamCorePricingRepository, MiamCoreKotlinx_coroutines_coreDeferred, MiamCoreKotlinKClass, MiamCoreBasketPreviewEntry, MiamCoreKotlinx_serialization_coreEncoder, MiamCoreKotlinx_serialization_coreSerialDescriptor, MiamCoreKotlinx_serialization_coreSerializationStrategy, MiamCoreKotlinx_serialization_coreDecoder, MiamCoreKotlinx_serialization_coreDeserializationStrategy, MiamCorePricingDataSource, MiamCoreRecipeRepository, MiamCoreRecipeDataSource, MiamCoreKotlinx_coroutines_coreSharedFlow, MiamCoreUiEffect, MiamCoreUiEvent, MiamCoreUiState, MiamCoreKotlinx_coroutines_coreCoroutineExceptionHandler, MiamCoreGroceriesListStore, MiamCoreSponsorDetailViewModel, MiamCoreResourcesStringDesc, MiamCoreKotlinIterator, MiamCoreKotlinx_coroutines_coreMutableSharedFlow, MiamCoreKotlinx_coroutines_coreChildHandle, MiamCoreKotlinx_coroutines_coreChildJob, MiamCoreKotlinx_coroutines_coreDisposableHandle, MiamCoreKotlinSequence, MiamCoreKotlinx_coroutines_coreSelectClause0, MiamCoreKotlinx_coroutines_coreSelectClause1, MiamCoreKotlinKDeclarationContainer, MiamCoreKotlinKAnnotatedElement, MiamCoreKotlinKClassifier, MiamCoreKotlinx_serialization_coreCompositeEncoder, MiamCoreKotlinAnnotation, MiamCoreKotlinx_serialization_coreCompositeDecoder, MiamCoreKoin_coreQualifier, MiamCoreKotlinx_serialization_coreSerialFormat, MiamCoreKotlinx_serialization_coreStringFormat, MiamCoreKotlinx_coroutines_coreParentJob, MiamCoreKotlinx_coroutines_coreSelectInstance, MiamCoreKotlinSuspendFunction0, MiamCoreKotlinSuspendFunction1, MiamCoreKotlinx_serialization_coreSerializersModuleCollector, MiamCoreKoin_coreKoinScopeComponent, MiamCoreKotlinLazy, MiamCoreKoin_coreScopeCallback, MiamCoreKotlinFunction, MiamCoreKoin_coreKoinComponent;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface MiamCoreBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface MiamCoreBase (MiamCoreBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface MiamCoreMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface MiamCoreMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorMiamCoreKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface MiamCoreNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface MiamCoreByte : MiamCoreNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface MiamCoreUByte : MiamCoreNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface MiamCoreShort : MiamCoreNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface MiamCoreUShort : MiamCoreNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface MiamCoreInt : MiamCoreNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface MiamCoreUInt : MiamCoreNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface MiamCoreLong : MiamCoreNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface MiamCoreULong : MiamCoreNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface MiamCoreFloat : MiamCoreNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface MiamCoreDouble : MiamCoreNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface MiamCoreBoolean : MiamCoreNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol MiamCoreKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<MiamCoreKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlowWrapper")))
@interface MiamCoreFlowWrapper<T> : MiamCoreBase <MiamCoreKotlinx_coroutines_coreFlow>
- (instancetype)initWithFlow:(id<MiamCoreKotlinx_coroutines_coreFlow>)flow __attribute__((swift_name("init(flow:)"))) __attribute__((objc_designated_initializer));
- (id<MiamCoreClosable>)collectCoroutineScope:(id<MiamCoreKotlinx_coroutines_coreCoroutineScope>)coroutineScope onEach:(void (^)(T _Nullable))onEach onThrow:(void (^ _Nullable)(MiamCoreKotlinThrowable *))onThrow __attribute__((swift_name("collect(coroutineScope:onEach:onThrow:)")));
- (id<MiamCoreClosable>)collectCoroutineScope:(id<MiamCoreKotlinx_coroutines_coreCoroutineScope>)coroutineScope coroutineContext:(id<MiamCoreKotlinCoroutineContext>)coroutineContext onEach:(void (^ _Nullable)(T _Nullable))onEach onComplete:(void (^ _Nullable)(void))onComplete onThrow:(void (^ _Nullable)(MiamCoreKotlinThrowable *))onThrow __attribute__((swift_name("collect(coroutineScope:coroutineContext:onEach:onComplete:onThrow:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<MiamCoreKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((swift_name("Closable")))
@protocol MiamCoreClosable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("I18nResolver")))
@interface MiamCoreI18nResolver : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)i18nResolver __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreI18nResolver *shared __attribute__((swift_name("shared")));
- (MiamCoreI18n *)localizeI18nResource:(id<MiamCoreI18nResource>)i18nResource __attribute__((swift_name("localize(i18nResource:)")));
- (void)registerAppBundleBundle:(NSBundle *)bundle __attribute__((swift_name("registerAppBundle(bundle:)")));
@end

__attribute__((swift_name("I18nResource")))
@protocol MiamCoreI18nResource
@required
@property (readonly) NSString *accessibilityKey __attribute__((swift_name("accessibilityKey")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("I18n")))
@interface MiamCoreI18n : MiamCoreBase <MiamCoreI18nResource>
- (instancetype)initWithAccessibilityKey:(NSString *)accessibilityKey localised:(NSString *)localised __attribute__((swift_name("init(accessibilityKey:localised:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreI18nCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreI18n *)doCopyAccessibilityKey:(NSString *)accessibilityKey localised:(NSString *)localised __attribute__((swift_name("doCopy(accessibilityKey:localised:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *accessibilityKey __attribute__((swift_name("accessibilityKey")));
@property (readonly) NSString *localised __attribute__((swift_name("localised")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("I18n.Companion")))
@interface MiamCoreI18nCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreI18nCompanion *shared __attribute__((swift_name("shared")));
- (MiamCoreI18n *)empty __attribute__((swift_name("empty()")));
- (MiamCoreI18n *)pluralAccessibilityKey:(NSString *)accessibilityKey res:(MiamCoreResourcesPluralsResource * _Nullable)res quantity:(int32_t)quantity args:(MiamCoreKotlinArray<id> *)args __attribute__((swift_name("plural(accessibilityKey:res:quantity:args:)")));
- (MiamCoreI18n *)stringAccessibilityKey:(NSString *)accessibilityKey res:(MiamCoreResourcesStringResource * _Nullable)res args:(MiamCoreKotlinArray<id> *)args __attribute__((swift_name("string(accessibilityKey:res:args:)")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface MiamCoreKotlinThrowable : MiamCoreBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MiamCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MiamCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoResourceThrowable")))
@interface MiamCoreNoResourceThrowable : MiamCoreKotlinThrowable
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(MiamCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MiamCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)noResourceThrowable __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreNoResourceThrowable *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("KMMContext")))
@interface MiamCoreKMMContext : MiamCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MiamPreferencesContext")))
@interface MiamCoreMiamPreferencesContext : MiamCoreKMMContext
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)miamPreferencesContext __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreMiamPreferencesContext *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Effect")))
@protocol MiamCoreEffect
@required
@end

__attribute__((swift_name("AnalyticEffect")))
@interface MiamCoreAnalyticEffect : MiamCoreBase <MiamCoreEffect>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnalyticEffect.EventEmitted")))
@interface MiamCoreAnalyticEffectEventEmitted : MiamCoreAnalyticEffect
- (instancetype)initWithEvent:(MiamCoreAnalyticEvent *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreAnalyticEvent *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreAnalyticEffectEventEmitted *)doCopyEvent:(MiamCoreAnalyticEvent *)event __attribute__((swift_name("doCopy(event:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreAnalyticEvent *event __attribute__((swift_name("event")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnalyticEvent")))
@interface MiamCoreAnalyticEvent : MiamCoreBase
- (instancetype)initWithEventType:(NSString *)eventType path:(NSString *)path props:(MiamCoreAnalyticsPlausibleProps *)props __attribute__((swift_name("init(eventType:path:props:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreAnalyticsPlausibleProps *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreAnalyticEvent *)doCopyEventType:(NSString *)eventType path:(NSString *)path props:(MiamCoreAnalyticsPlausibleProps *)props __attribute__((swift_name("doCopy(eventType:path:props:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *eventType __attribute__((swift_name("eventType")));
@property (readonly) NSString *path __attribute__((swift_name("path")));
@property (readonly) MiamCoreAnalyticsPlausibleProps *props __attribute__((swift_name("props")));
@end

__attribute__((swift_name("State")))
@protocol MiamCoreState
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnalyticState")))
@interface MiamCoreAnalyticState : MiamCoreBase <MiamCoreState>
- (instancetype)initWithOnEventEmitted:(void (^)(MiamCoreAnalyticEvent *))onEventEmitted __attribute__((swift_name("init(onEventEmitted:)"))) __attribute__((objc_designated_initializer));
- (void (^)(MiamCoreAnalyticEvent *))component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreAnalyticState *)doCopyOnEventEmitted:(void (^)(MiamCoreAnalyticEvent *))onEventEmitted __attribute__((swift_name("doCopy(onEventEmitted:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^onEventEmitted)(MiamCoreAnalyticEvent *) __attribute__((swift_name("onEventEmitted")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Analytics")))
@interface MiamCoreAnalytics : MiamCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MiamCoreAnalyticsCompanion *companion __attribute__((swift_name("companion")));
- (void)doInitSupplierOrigin:(NSString *)supplierOrigin __attribute__((swift_name("doInit(supplierOrigin:)")));
- (id<MiamCoreKotlinx_coroutines_coreFlow>)observeSideEffect __attribute__((swift_name("observeSideEffect()")));
- (void)sendEventEventType:(NSString *)eventType path:(NSString *)path props:(MiamCoreAnalyticsPlausibleProps *)props __attribute__((swift_name("sendEvent(eventType:path:props:)")));
- (void)setOnEventEmittedOnEventEmittedCallBack:(void (^)(MiamCoreAnalyticEvent *))onEventEmittedCallBack __attribute__((swift_name("setOnEventEmitted(onEventEmittedCallBack:)")));
@property (readonly) id<MiamCoreKotlinx_coroutines_coreMutableStateFlow> domain __attribute__((swift_name("domain")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Analytics.Companion")))
@interface MiamCoreAnalyticsCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreAnalyticsCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *EVENT_BASKET_CONFIRMED __attribute__((swift_name("EVENT_BASKET_CONFIRMED")));
@property (readonly) NSString *EVENT_CATEGORY_SHOW __attribute__((swift_name("EVENT_CATEGORY_SHOW")));
@property (readonly) NSString *EVENT_ENTRY_ADD __attribute__((swift_name("EVENT_ENTRY_ADD")));
@property (readonly) NSString *EVENT_ENTRY_CHANGE_QUANTITY __attribute__((swift_name("EVENT_ENTRY_CHANGE_QUANTITY")));
@property (readonly) NSString *EVENT_ENTRY_DELETE __attribute__((swift_name("EVENT_ENTRY_DELETE")));
@property (readonly) NSString *EVENT_ENTRY_REPLACE __attribute__((swift_name("EVENT_ENTRY_REPLACE")));
@property (readonly) NSString *EVENT_PAGEVIEW __attribute__((swift_name("EVENT_PAGEVIEW")));
@property (readonly) NSString *EVENT_PAYMENT_CONFIRMED __attribute__((swift_name("EVENT_PAYMENT_CONFIRMED")));
@property (readonly) NSString *EVENT_PAYMENT_STARTED __attribute__((swift_name("EVENT_PAYMENT_STARTED")));
@property (readonly) NSString *EVENT_PERSONAL_RECIPE_CREATE __attribute__((swift_name("EVENT_PERSONAL_RECIPE_CREATE")));
@property (readonly) NSString *EVENT_PERSONAL_RECIPE_DELETE __attribute__((swift_name("EVENT_PERSONAL_RECIPE_DELETE")));
@property (readonly) NSString *EVENT_PLANNER_CLOSE __attribute__((swift_name("EVENT_PLANNER_CLOSE")));
@property (readonly) NSString *EVENT_PLANNER_CONFIRM __attribute__((swift_name("EVENT_PLANNER_CONFIRM")));
@property (readonly) NSString *EVENT_PLANNER_SEARCH __attribute__((swift_name("EVENT_PLANNER_SEARCH")));
@property (readonly) NSString *EVENT_RECIPE_ADD __attribute__((swift_name("EVENT_RECIPE_ADD")));
@property (readonly) NSString *EVENT_RECIPE_CHANGEGUESTS __attribute__((swift_name("EVENT_RECIPE_CHANGEGUESTS")));
@property (readonly) NSString *EVENT_RECIPE_DISPLAY __attribute__((swift_name("EVENT_RECIPE_DISPLAY")));
@property (readonly) NSString *EVENT_RECIPE_LIKE __attribute__((swift_name("EVENT_RECIPE_LIKE")));
@property (readonly) NSString *EVENT_RECIPE_PRINT __attribute__((swift_name("EVENT_RECIPE_PRINT")));
@property (readonly) NSString *EVENT_RECIPE_REMOVE __attribute__((swift_name("EVENT_RECIPE_REMOVE")));
@property (readonly) NSString *EVENT_RECIPE_RESET __attribute__((swift_name("EVENT_RECIPE_RESET")));
@property (readonly) NSString *EVENT_RECIPE_SHOW __attribute__((swift_name("EVENT_RECIPE_SHOW")));
@property (readonly) NSString *EVENT_RECIPE_UNLIKE __attribute__((swift_name("EVENT_RECIPE_UNLIKE")));
@property (readonly) NSString *EVENT_SEARCH __attribute__((swift_name("EVENT_SEARCH")));
@property (readonly) NSString *PLAUSIBLE_URL __attribute__((swift_name("PLAUSIBLE_URL")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Analytics.PlausibleEvent")))
@interface MiamCoreAnalyticsPlausibleEvent : MiamCoreBase
- (instancetype)initWithName:(NSString *)name url:(NSString *)url domain:(NSString *)domain props:(MiamCoreAnalyticsPlausibleProps *)props __attribute__((swift_name("init(name:url:domain:props:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreAnalyticsPlausibleEventCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreAnalyticsPlausibleProps *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreAnalyticsPlausibleEvent *)doCopyName:(NSString *)name url:(NSString *)url domain:(NSString *)domain props:(MiamCoreAnalyticsPlausibleProps *)props __attribute__((swift_name("doCopy(name:url:domain:props:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *domain __attribute__((swift_name("domain")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) MiamCoreAnalyticsPlausibleProps *props __attribute__((swift_name("props")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Analytics.PlausibleEventCompanion")))
@interface MiamCoreAnalyticsPlausibleEventCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreAnalyticsPlausibleEventCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol MiamCoreKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface MiamCoreKotlinEnum<E> : MiamCoreBase <MiamCoreKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Analytics.PlausiblePaths")))
@interface MiamCoreAnalyticsPlausiblePaths : MiamCoreKotlinEnum<MiamCoreAnalyticsPlausiblePaths *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MiamCoreAnalyticsPlausiblePathsCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MiamCoreAnalyticsPlausiblePaths *recipeMealPlanner __attribute__((swift_name("recipeMealPlanner")));
@property (class, readonly) MiamCoreAnalyticsPlausiblePaths *recipeMealPlannerResult __attribute__((swift_name("recipeMealPlannerResult")));
@property (class, readonly) MiamCoreAnalyticsPlausiblePaths *recipeMealPlannerCatalog __attribute__((swift_name("recipeMealPlannerCatalog")));
@property (class, readonly) MiamCoreAnalyticsPlausiblePaths *recipeMealPlannerBasketPreview __attribute__((swift_name("recipeMealPlannerBasketPreview")));
@property (class, readonly) MiamCoreAnalyticsPlausiblePaths *recipeMealPlannerConfirmation __attribute__((swift_name("recipeMealPlannerConfirmation")));
+ (MiamCoreKotlinArray<MiamCoreAnalyticsPlausiblePaths *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *path __attribute__((swift_name("path")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Analytics.PlausiblePathsCompanion")))
@interface MiamCoreAnalyticsPlausiblePathsCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreAnalyticsPlausiblePathsCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MiamCoreKotlinArray<id<MiamCoreKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Analytics.PlausibleProps")))
@interface MiamCoreAnalyticsPlausibleProps : MiamCoreBase
- (instancetype)initWithRecipe_id:(NSString * _Nullable)recipe_id category_id:(NSString * _Nullable)category_id entry_name:(NSString * _Nullable)entry_name basket_id:(NSString * _Nullable)basket_id miam_amount:(MiamCoreFloat * _Nullable)miam_amount total_amount:(NSString * _Nullable)total_amount pos_id:(NSString * _Nullable)pos_id pos_total_amount:(NSString * _Nullable)pos_total_amount pos_name:(NSString * _Nullable)pos_name search_term:(NSString * _Nullable)search_term uses_count:(NSString * _Nullable)uses_count time_passed:(NSString * _Nullable)time_passed budget_user:(NSString * _Nullable)budget_user budget_planner:(NSString * _Nullable)budget_planner recipe_count:(NSString * _Nullable)recipe_count query:(NSString * _Nullable)query guests:(NSString * _Nullable)guests __attribute__((swift_name("init(recipe_id:category_id:entry_name:basket_id:miam_amount:total_amount:pos_id:pos_total_amount:pos_name:search_term:uses_count:time_passed:budget_user:budget_planner:recipe_count:query:guests:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreAnalyticsPlausiblePropsCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component14 __attribute__((swift_name("component14()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component15 __attribute__((swift_name("component15()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component16 __attribute__((swift_name("component16()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component17 __attribute__((swift_name("component17()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreFloat * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreAnalyticsPlausibleProps *)doCopyRecipe_id:(NSString * _Nullable)recipe_id category_id:(NSString * _Nullable)category_id entry_name:(NSString * _Nullable)entry_name basket_id:(NSString * _Nullable)basket_id miam_amount:(MiamCoreFloat * _Nullable)miam_amount total_amount:(NSString * _Nullable)total_amount pos_id:(NSString * _Nullable)pos_id pos_total_amount:(NSString * _Nullable)pos_total_amount pos_name:(NSString * _Nullable)pos_name search_term:(NSString * _Nullable)search_term uses_count:(NSString * _Nullable)uses_count time_passed:(NSString * _Nullable)time_passed budget_user:(NSString * _Nullable)budget_user budget_planner:(NSString * _Nullable)budget_planner recipe_count:(NSString * _Nullable)recipe_count query:(NSString * _Nullable)query guests:(NSString * _Nullable)guests __attribute__((swift_name("doCopy(recipe_id:category_id:entry_name:basket_id:miam_amount:total_amount:pos_id:pos_total_amount:pos_name:search_term:uses_count:time_passed:budget_user:budget_planner:recipe_count:query:guests:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable basket_id __attribute__((swift_name("basket_id")));
@property (readonly) NSString * _Nullable budget_planner __attribute__((swift_name("budget_planner")));
@property (readonly) NSString * _Nullable budget_user __attribute__((swift_name("budget_user")));
@property (readonly) NSString * _Nullable category_id __attribute__((swift_name("category_id")));
@property (readonly) NSString * _Nullable entry_name __attribute__((swift_name("entry_name")));
@property (readonly) NSString * _Nullable guests __attribute__((swift_name("guests")));
@property (readonly) MiamCoreFloat * _Nullable miam_amount __attribute__((swift_name("miam_amount")));
@property (readonly) NSString * _Nullable pos_id __attribute__((swift_name("pos_id")));
@property (readonly) NSString * _Nullable pos_name __attribute__((swift_name("pos_name")));
@property (readonly) NSString * _Nullable pos_total_amount __attribute__((swift_name("pos_total_amount")));
@property (readonly) NSString * _Nullable query __attribute__((swift_name("query")));
@property (readonly) NSString * _Nullable recipe_count __attribute__((swift_name("recipe_count")));
@property (readonly) NSString * _Nullable recipe_id __attribute__((swift_name("recipe_id")));
@property (readonly) NSString * _Nullable search_term __attribute__((swift_name("search_term")));
@property (readonly) NSString * _Nullable time_passed __attribute__((swift_name("time_passed")));
@property (readonly) NSString * _Nullable total_amount __attribute__((swift_name("total_amount")));
@property (readonly) NSString * _Nullable uses_count __attribute__((swift_name("uses_count")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Analytics.PlausiblePropsCompanion")))
@interface MiamCoreAnalyticsPlausiblePropsCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreAnalyticsPlausiblePropsCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnalyticsInstance")))
@interface MiamCoreAnalyticsInstance : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)analyticsInstance __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreAnalyticsInstance *shared __attribute__((swift_name("shared")));
@property (readonly) MiamCoreAnalytics *instance __attribute__((swift_name("instance")));
@end

__attribute__((swift_name("Route")))
@interface MiamCoreRoute : MiamCoreBase
- (instancetype)initWithTitle:(NSString *)title backToRoute:(void (^)(void))backToRoute previous:(MiamCoreRoute * _Nullable)previous __attribute__((swift_name("init(title:backToRoute:previous:)"))) __attribute__((objc_designated_initializer));
- (void)onDialogBackRoute:(MiamCoreDialogRoute *)route __attribute__((swift_name("onDialogBack(route:)")));
- (MiamCorePageRoute * _Nullable)onDialogClose __attribute__((swift_name("onDialogClose()")));
- (void)onPrevious __attribute__((swift_name("onPrevious()")));
@property (readonly) void (^backToRoute)(void) __attribute__((swift_name("backToRoute")));
@property (readonly) MiamCoreRoute * _Nullable previous __attribute__((swift_name("previous")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DialogRoute")))
@interface MiamCoreDialogRoute : MiamCoreRoute
- (instancetype)initWithTitle:(NSString *)title backToRoute:(void (^)(void))backToRoute previous:(MiamCoreRoute * _Nullable)previous closeDialog:(void (^)(void))closeDialog __attribute__((swift_name("init(title:backToRoute:previous:closeDialog:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithTitle:(NSString *)title backToRoute:(void (^)(void))backToRoute previous:(MiamCoreRoute * _Nullable)previous __attribute__((swift_name("init(title:backToRoute:previous:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (void (^)(void))component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRoute * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (void (^)(void))component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreDialogRoute *)doCopyTitle:(NSString *)title backToRoute:(void (^)(void))backToRoute previous:(MiamCoreRoute * _Nullable)previous closeDialog:(void (^)(void))closeDialog __attribute__((swift_name("doCopy(title:backToRoute:previous:closeDialog:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)onDialogBackRoute:(MiamCoreDialogRoute *)route __attribute__((swift_name("onDialogBack(route:)")));
- (MiamCorePageRoute * _Nullable)onDialogClose __attribute__((swift_name("onDialogClose()")));
- (void)onPrevious __attribute__((swift_name("onPrevious()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^backToRoute)(void) __attribute__((swift_name("backToRoute")));
@property (readonly) void (^closeDialog)(void) __attribute__((swift_name("closeDialog")));
@property (readonly) MiamCoreRoute * _Nullable previous __attribute__((swift_name("previous")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PageRoute")))
@interface MiamCorePageRoute : MiamCoreRoute
- (instancetype)initWithTitle:(NSString *)title backToRoute:(void (^)(void))backToRoute previous:(MiamCoreRoute * _Nullable)previous __attribute__((swift_name("init(title:backToRoute:previous:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (void (^)(void))component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRoute * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCorePageRoute *)doCopyTitle:(NSString *)title backToRoute:(void (^)(void))backToRoute previous:(MiamCoreRoute * _Nullable)previous __attribute__((swift_name("doCopy(title:backToRoute:previous:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)onDialogBackRoute:(MiamCoreDialogRoute *)route __attribute__((swift_name("onDialogBack(route:)")));
- (MiamCorePageRoute *)onDialogClose __attribute__((swift_name("onDialogClose()")));
- (void)onPrevious __attribute__((swift_name("onPrevious()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^backToRoute)(void) __attribute__((swift_name("backToRoute")));
@property (readonly) MiamCoreRoute * _Nullable previous __attribute__((swift_name("previous")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((swift_name("Store")))
@protocol MiamCoreStore
@required
- (id<MiamCoreKotlinx_coroutines_coreJob>)dispatchAction:(id<MiamCoreAction>)action __attribute__((swift_name("dispatch(action:)")));
- (id<MiamCoreKotlinx_coroutines_coreFlow>)observeSideEffect __attribute__((swift_name("observeSideEffect()")));
- (id<MiamCoreKotlinx_coroutines_coreStateFlow>)observeState __attribute__((swift_name("observeState()")));
- (void)updateStateIfChangedNewState:(id<MiamCoreState>)newState __attribute__((swift_name("updateStateIfChanged(newState:)")));
@property (readonly) id<MiamCoreKotlinx_coroutines_coreMutableStateFlow> state __attribute__((swift_name("state")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol MiamCoreKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<MiamCoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("RouteService")))
@interface MiamCoreRouteService : MiamCoreBase <MiamCoreStore, MiamCoreKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<MiamCoreKotlinx_coroutines_coreJob>)dispatchAction:(MiamCoreRouteServiceAction *)action __attribute__((swift_name("dispatch(action:)")));
- (MiamCoreRoute * _Nullable)getCurrentRoute __attribute__((swift_name("getCurrentRoute()")));
- (id<MiamCoreKotlinx_coroutines_coreFlow>)observeSideEffect __attribute__((swift_name("observeSideEffect()")));
- (id<MiamCoreKotlinx_coroutines_coreStateFlow>)observeState __attribute__((swift_name("observeState()")));
- (void)onCloseDialog __attribute__((swift_name("onCloseDialog()")));
- (void)onRouteChangeUpdateRoute:(void (^)(MiamCoreRoute * _Nullable))updateRoute __attribute__((swift_name("onRouteChange(updateRoute:)")));
- (MiamCoreRoute * _Nullable)previous __attribute__((swift_name("previous()")));
@property (readonly) id<MiamCoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<MiamCoreKotlinx_coroutines_coreMutableStateFlow> state __attribute__((swift_name("state")));
@end

__attribute__((swift_name("Action")))
@protocol MiamCoreAction
@required
@end

__attribute__((swift_name("RouteServiceAction")))
@interface MiamCoreRouteServiceAction : MiamCoreBase <MiamCoreAction>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouteServiceAction.SetDialogRoute")))
@interface MiamCoreRouteServiceActionSetDialogRoute : MiamCoreRouteServiceAction
- (instancetype)initWithTitle:(NSString *)title backToRoute:(void (^)(void))backToRoute closeDialog:(void (^)(void))closeDialog __attribute__((swift_name("init(title:backToRoute:closeDialog:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (void (^)(void))component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (void (^)(void))component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRouteServiceActionSetDialogRoute *)doCopyTitle:(NSString *)title backToRoute:(void (^)(void))backToRoute closeDialog:(void (^)(void))closeDialog __attribute__((swift_name("doCopy(title:backToRoute:closeDialog:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^backToRoute)(void) __attribute__((swift_name("backToRoute")));
@property (readonly) void (^closeDialog)(void) __attribute__((swift_name("closeDialog")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouteServiceAction.SetInitialPageRoute")))
@interface MiamCoreRouteServiceActionSetInitialPageRoute : MiamCoreRouteServiceAction
- (instancetype)initWithTitle:(NSString *)title backToRoute:(void (^)(void))backToRoute __attribute__((swift_name("init(title:backToRoute:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (void (^)(void))component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRouteServiceActionSetInitialPageRoute *)doCopyTitle:(NSString *)title backToRoute:(void (^)(void))backToRoute __attribute__((swift_name("doCopy(title:backToRoute:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^backToRoute)(void) __attribute__((swift_name("backToRoute")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouteServiceAction.SetPageRoute")))
@interface MiamCoreRouteServiceActionSetPageRoute : MiamCoreRouteServiceAction
- (instancetype)initWithTitle:(NSString *)title backToRoute:(void (^)(void))backToRoute __attribute__((swift_name("init(title:backToRoute:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (void (^)(void))component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRouteServiceActionSetPageRoute *)doCopyTitle:(NSString *)title backToRoute:(void (^)(void))backToRoute __attribute__((swift_name("doCopy(title:backToRoute:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^backToRoute)(void) __attribute__((swift_name("backToRoute")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((swift_name("RouteServiceEffect")))
@interface MiamCoreRouteServiceEffect : MiamCoreBase <MiamCoreEffect>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouteServiceEffect.RouteChanged")))
@interface MiamCoreRouteServiceEffectRouteChanged : MiamCoreRouteServiceEffect
- (instancetype)initWithNewRoute:(MiamCoreRoute *)newRoute __attribute__((swift_name("init(newRoute:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreRoute *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRouteServiceEffectRouteChanged *)doCopyNewRoute:(MiamCoreRoute *)newRoute __attribute__((swift_name("doCopy(newRoute:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly, getter=doNewRoute) MiamCoreRoute *newRoute __attribute__((swift_name("newRoute")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouteServiceInstance")))
@interface MiamCoreRouteServiceInstance : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)routeServiceInstance __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreRouteServiceInstance *shared __attribute__((swift_name("shared")));
@property (readonly) MiamCoreRouteService *instance __attribute__((swift_name("instance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouteServiceState")))
@interface MiamCoreRouteServiceState : MiamCoreBase <MiamCoreState>
- (instancetype)initWithRoute:(MiamCoreRoute * _Nullable)route __attribute__((swift_name("init(route:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreRoute * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRouteServiceState *)doCopyRoute:(MiamCoreRoute * _Nullable)route __attribute__((swift_name("doCopy(route:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreRoute * _Nullable route __attribute__((swift_name("route")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPreferences")))
@interface MiamCoreUserPreferences : MiamCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MiamCoreDouble * _Nullable)getDoubleOrNullKey:(NSString *)key __attribute__((swift_name("getDoubleOrNull(key:)")));
- (MiamCoreInt * _Nullable)getIntOrNullKey:(NSString *)key __attribute__((swift_name("getIntOrNull(key:)")));
- (NSArray<NSString *> * _Nullable)getListOrNullKey:(NSString *)key __attribute__((swift_name("getListOrNull(key:)")));
- (NSString * _Nullable)getStringOrNullKey:(NSString *)key __attribute__((swift_name("getStringOrNull(key:)")));
- (void)putDoubleKey:(NSString *)key value:(double)value __attribute__((swift_name("putDouble(key:value:)")));
- (void)putIntKey:(NSString *)key value:(int32_t)value __attribute__((swift_name("putInt(key:value:)")));
- (void)putListKey:(NSString *)key value:(NSArray<NSString *> *)value __attribute__((swift_name("putList(key:value:)")));
- (void)putStringKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("putString(key:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPreferencesInstance")))
@interface MiamCoreUserPreferencesInstance : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)userPreferencesInstance __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreUserPreferencesInstance *shared __attribute__((swift_name("shared")));
@property (readonly) MiamCoreUserPreferences *instance __attribute__((swift_name("instance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainDispatcher")))
@interface MiamCoreMainDispatcher : MiamCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) MiamCoreKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol MiamCoreKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<MiamCoreKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<MiamCoreKotlinCoroutineContextElement> _Nullable)getKey:(id<MiamCoreKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<MiamCoreKotlinCoroutineContext>)minusKeyKey:(id<MiamCoreKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<MiamCoreKotlinCoroutineContext>)plusContext:(id<MiamCoreKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol MiamCoreKotlinCoroutineContextElement <MiamCoreKotlinCoroutineContext>
@required
@property (readonly) id<MiamCoreKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface MiamCoreKotlinAbstractCoroutineContextElement : MiamCoreBase <MiamCoreKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<MiamCoreKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<MiamCoreKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol MiamCoreKotlinContinuationInterceptor <MiamCoreKotlinCoroutineContextElement>
@required
- (id<MiamCoreKotlinContinuation>)interceptContinuationContinuation:(id<MiamCoreKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<MiamCoreKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface MiamCoreKotlinx_coroutines_coreCoroutineDispatcher : MiamCoreKotlinAbstractCoroutineContextElement <MiamCoreKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<MiamCoreKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MiamCoreKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<MiamCoreKotlinCoroutineContext>)context block:(id<MiamCoreKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<MiamCoreKotlinCoroutineContext>)context block:(id<MiamCoreKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<MiamCoreKotlinContinuation>)interceptContinuationContinuation:(id<MiamCoreKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<MiamCoreKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (MiamCoreKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (MiamCoreKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(MiamCoreKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<MiamCoreKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainLoopDispatcher")))
@interface MiamCoreMainLoopDispatcher : MiamCoreKotlinx_coroutines_coreCoroutineDispatcher
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)mainLoopDispatcher __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreMainLoopDispatcher *shared __attribute__((swift_name("shared")));
- (void)dispatchContext:(id<MiamCoreKotlinCoroutineContext>)context block:(id<MiamCoreKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EnableRecipeLikeUseCase")))
@interface MiamCoreEnableRecipeLikeUseCase : MiamCoreBase
- (instancetype)initWithUserStore:(id<MiamCoreUserStore>)userStore __attribute__((swift_name("init(userStore:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreEnableRecipeLikeUseCaseCompanion *companion __attribute__((swift_name("companion")));
- (void)invokeInput:(BOOL)input __attribute__((swift_name("invoke(input:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EnableRecipeLikeUseCase.Companion")))
@interface MiamCoreEnableRecipeLikeUseCaseCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreEnableRecipeLikeUseCaseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MiamCoreEnableRecipeLikeUseCase *create __attribute__((swift_name("create")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetProfilingAllowedUseCase")))
@interface MiamCoreSetProfilingAllowedUseCase : MiamCoreBase
- (instancetype)initWithUserStore:(id<MiamCoreUserStore>)userStore __attribute__((swift_name("init(userStore:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreSetProfilingAllowedUseCaseCompanion *companion __attribute__((swift_name("companion")));
- (void)invokeInput:(BOOL)input __attribute__((swift_name("invoke(input:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetProfilingAllowedUseCase.Companion")))
@interface MiamCoreSetProfilingAllowedUseCaseCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreSetProfilingAllowedUseCaseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MiamCoreSetProfilingAllowedUseCase *create __attribute__((swift_name("create")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetSupplierUseCase")))
@interface MiamCoreSetSupplierUseCase : MiamCoreBase <MiamCoreKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithSupplierRepository:(id<MiamCoreSupplierRepository>)supplierRepository pointOfSaleStore:(MiamCorePointOfSaleStore *)pointOfSaleStore __attribute__((swift_name("init(supplierRepository:pointOfSaleStore:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreSetSupplierUseCaseCompanion *companion __attribute__((swift_name("companion")));
- (void)invokeInput:(MiamCoreSupplierInfo *)input __attribute__((swift_name("invoke(input:)")));
@property (readonly) id<MiamCoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetSupplierUseCase.Companion")))
@interface MiamCoreSetSupplierUseCaseCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreSetSupplierUseCaseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MiamCoreSetSupplierUseCase *create __attribute__((swift_name("create")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SupplierInfo")))
@interface MiamCoreSupplierInfo : MiamCoreBase
- (instancetype)initWithSupplierId:(NSString *)supplierId __attribute__((swift_name("init(supplierId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreSupplierInfo *)doCopySupplierId:(NSString *)supplierId __attribute__((swift_name("doCopy(supplierId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *supplierId __attribute__((swift_name("supplierId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateUserIdUseCase")))
@interface MiamCoreUpdateUserIdUseCase : MiamCoreBase
- (instancetype)initWithUserStore:(id<MiamCoreUserStore>)userStore __attribute__((swift_name("init(userStore:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreUpdateUserIdUseCaseCompanion *companion __attribute__((swift_name("companion")));
- (void)invokeInput:(NSString *)input __attribute__((swift_name("invoke(input:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateUserIdUseCase.Companion")))
@interface MiamCoreUpdateUserIdUseCaseCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreUpdateUserIdUseCaseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MiamCoreUpdateUserIdUseCase *create __attribute__((swift_name("create")));
@end

__attribute__((swift_name("IExecutorScope")))
@protocol MiamCoreIExecutorScope
@required
- (void)attach __attribute__((swift_name("attach()")));
- (void)detach __attribute__((swift_name("detach()")));
@end

__attribute__((swift_name("MainExecutor")))
@interface MiamCoreMainExecutor : MiamCoreBase <MiamCoreIExecutorScope, MiamCoreKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)attach __attribute__((swift_name("attach()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)collectFlow:(id<MiamCoreKotlinx_coroutines_coreFlow>)flow collect:(void (^)(id _Nullable))collect __attribute__((swift_name("collect(flow:collect:)")));
- (void)detach __attribute__((swift_name("detach()")));
@property (readonly) id<MiamCoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnGetPriceAsyncUseCase")))
@interface MiamCoreOnGetPriceAsyncUseCase : MiamCoreMainExecutor
- (instancetype)initWithBasketStore:(id<MiamCoreBasketStore>)basketStore pricingRepository:(id<MiamCorePricingRepository>)pricingRepository pointOfSaleStore:(MiamCorePointOfSaleStore *)pointOfSaleStore __attribute__((swift_name("init(basketStore:pricingRepository:pointOfSaleStore:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MiamCoreOnGetPriceAsyncUseCaseCompanion *companion __attribute__((swift_name("companion")));
- (id<MiamCoreKotlinx_coroutines_coreDeferred>)invokeInput:(MiamCoreOnGetPriceAsyncUseCaseInput *)input __attribute__((swift_name("invoke(input:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnGetPriceAsyncUseCase.Companion")))
@interface MiamCoreOnGetPriceAsyncUseCaseCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreOnGetPriceAsyncUseCaseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MiamCoreOnGetPriceAsyncUseCase *create __attribute__((swift_name("create")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnGetPriceAsyncUseCaseInput")))
@interface MiamCoreOnGetPriceAsyncUseCaseInput : MiamCoreBase
- (instancetype)initWithRecipeId:(NSString *)recipeId guestCount:(int32_t)guestCount __attribute__((swift_name("init(recipeId:guestCount:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreOnGetPriceAsyncUseCaseInput *)doCopyRecipeId:(NSString *)recipeId guestCount:(int32_t)guestCount __attribute__((swift_name("doCopy(recipeId:guestCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t guestCount __attribute__((swift_name("guestCount")));
@property (readonly) NSString *recipeId __attribute__((swift_name("recipeId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddRecipesByIdsToMealPlannerUseCaseInput")))
@interface MiamCoreAddRecipesByIdsToMealPlannerUseCaseInput : MiamCoreBase
- (instancetype)initWithIndex:(int32_t)index newRecipeId:(NSString *)newRecipeId __attribute__((swift_name("init(index:newRecipeId:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreAddRecipesByIdsToMealPlannerUseCaseInput *)doCopyIndex:(int32_t)index newRecipeId:(NSString *)newRecipeId __attribute__((swift_name("doCopy(index:newRecipeId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t index __attribute__((swift_name("index")));
@property (readonly, getter=doNewRecipeId) NSString *newRecipeId __attribute__((swift_name("newRecipeId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("Attributes")))
@interface MiamCoreAttributes : MiamCoreBase
@property (class, readonly, getter=companion) MiamCoreAttributesCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Attributes.Companion")))
@interface MiamCoreAttributesCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreAttributesCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MiamCoreKotlinArray<id<MiamCoreKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((swift_name("AttributesField")))
@interface MiamCoreAttributesField : MiamCoreBase
- (instancetype)initWithT:(id<MiamCoreKotlinKClass>)t __attribute__((swift_name("init(t:)"))) __attribute__((objc_designated_initializer));
- (NSString *)fieldsIncluded:(NSArray<NSString *> *)included __attribute__((swift_name("fields(included:)")));
@property (readonly) NSArray<NSString *> *defaultIncluded __attribute__((swift_name("defaultIncluded")));
@property (readonly) NSString *fieldParameterName __attribute__((swift_name("fieldParameterName")));
@property (readonly) NSString *includedRelationships __attribute__((swift_name("includedRelationships")));
@property (readonly) id<MiamCoreKotlinKClass> t __attribute__((swift_name("t")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("Record")))
@interface MiamCoreRecord : MiamCoreBase
@property (class, readonly, getter=companion) MiamCoreRecordCompanion *companion __attribute__((swift_name("companion")));
- (MiamCoreKotlinx_serialization_jsonJsonElement *)toJsonElement __attribute__((swift_name("toJsonElement()")));
@property (readonly) MiamCoreAttributes * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) MiamCoreRelationships * _Nullable relationships __attribute__((swift_name("relationships")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Basket")))
@interface MiamCoreBasket : MiamCoreRecord
- (instancetype)initWithId:(NSString *)id attributes:(MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable)attributes json_relationships:(MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable)json_relationships includedRecords:(NSArray<MiamCoreRecord *> *)includedRecords __attribute__((swift_name("init(id:attributes:json_relationships:includedRecords:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreBasketCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreBasketAttributes * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreBasketRelationships * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<MiamCoreRecipe *> *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreBasket *)doCopyId:(NSString *)id attributes:(MiamCoreBasketAttributes * _Nullable)attributes relationships:(MiamCoreBasketRelationships * _Nullable)relationships recipes:(NSArray<MiamCoreRecipe *> *)recipes __attribute__((swift_name("doCopy(id:attributes:relationships:recipes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MiamCoreBasket *)updateBasketEntryNewBe:(MiamCoreBasketEntry *)newBe __attribute__((swift_name("updateBasketEntry(newBe:)")));
@property MiamCoreBasketAttributes * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property NSArray<MiamCoreRecipe *> *recipes __attribute__((swift_name("recipes")));
@property (readonly) MiamCoreBasketRelationships * _Nullable relationships __attribute__((swift_name("relationships")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Basket.Companion")))
@interface MiamCoreBasketCompanion : MiamCoreAttributesField
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithT:(id<MiamCoreKotlinKClass>)t __attribute__((swift_name("init(t:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreBasketCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSArray<NSString *> *defaultIncluded __attribute__((swift_name("defaultIncluded")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketAttributes")))
@interface MiamCoreBasketAttributes : MiamCoreAttributes
- (instancetype)initWithConfirmed:(MiamCoreBoolean * _Nullable)confirmed totalPrice:(float)totalPrice token:(NSString * _Nullable)token priceBookKey:(NSString * _Nullable)priceBookKey __attribute__((swift_name("init(confirmed:totalPrice:token:priceBookKey:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreBasketAttributesCompanion *companion __attribute__((swift_name("companion")));
- (MiamCoreBoolean * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (float)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreBasketAttributes *)doCopyConfirmed:(MiamCoreBoolean * _Nullable)confirmed totalPrice:(float)totalPrice token:(NSString * _Nullable)token priceBookKey:(NSString * _Nullable)priceBookKey __attribute__((swift_name("doCopy(confirmed:totalPrice:token:priceBookKey:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreBoolean * _Nullable confirmed __attribute__((swift_name("confirmed")));
@property (readonly) NSString * _Nullable priceBookKey __attribute__((swift_name("priceBookKey")));
@property (readonly) NSString * _Nullable token __attribute__((swift_name("token")));
@property (readonly) float totalPrice __attribute__((swift_name("totalPrice")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketAttributes.Companion")))
@interface MiamCoreBasketAttributesCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreBasketAttributesCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketEntriesItem")))
@interface MiamCoreBasketEntriesItem : MiamCoreBase
- (instancetype)initWithId:(MiamCoreInt * _Nullable)id itemId:(MiamCoreInt * _Nullable)itemId score:(MiamCoreFloat * _Nullable)score learningFactor:(MiamCoreInt * _Nullable)learningFactor timesSelected:(MiamCoreInt * _Nullable)timesSelected selected:(BOOL)selected default:(BOOL)default_ unitPrice:(MiamCoreDouble * _Nullable)unitPrice currency:(NSString * _Nullable)currency pftPlages:(NSArray<MiamCoreInt *> * _Nullable)pftPlages pftChecksum:(NSString * _Nullable)pftChecksum __attribute__((swift_name("init(id:itemId:score:learningFactor:timesSelected:selected:default:unitPrice:currency:pftPlages:pftChecksum:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreBasketEntriesItemCompanion *companion __attribute__((swift_name("companion")));
- (MiamCoreInt * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<MiamCoreInt *> * _Nullable)component10 __attribute__((swift_name("component10()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreInt * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreFloat * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreInt * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreInt * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreDouble * _Nullable)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreBasketEntriesItem *)doCopyId:(MiamCoreInt * _Nullable)id itemId:(MiamCoreInt * _Nullable)itemId score:(MiamCoreFloat * _Nullable)score learningFactor:(MiamCoreInt * _Nullable)learningFactor timesSelected:(MiamCoreInt * _Nullable)timesSelected selected:(BOOL)selected default:(BOOL)default_ unitPrice:(MiamCoreDouble * _Nullable)unitPrice currency:(NSString * _Nullable)currency pftPlages:(NSArray<MiamCoreInt *> * _Nullable)pftPlages pftChecksum:(NSString * _Nullable)pftChecksum __attribute__((swift_name("doCopy(id:itemId:score:learningFactor:timesSelected:selected:default:unitPrice:currency:pftPlages:pftChecksum:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable currency __attribute__((swift_name("currency")));
@property (readonly, getter=default) BOOL default_ __attribute__((swift_name("default_")));
@property (readonly) MiamCoreInt * _Nullable id __attribute__((swift_name("id")));
@property (readonly) MiamCoreInt * _Nullable itemId __attribute__((swift_name("itemId")));
@property (readonly) MiamCoreInt * _Nullable learningFactor __attribute__((swift_name("learningFactor")));
@property (readonly) NSString * _Nullable pftChecksum __attribute__((swift_name("pftChecksum")));
@property (readonly) NSArray<MiamCoreInt *> * _Nullable pftPlages __attribute__((swift_name("pftPlages")));
@property (readonly) MiamCoreFloat * _Nullable score __attribute__((swift_name("score")));
@property (readonly) BOOL selected __attribute__((swift_name("selected")));
@property (readonly) MiamCoreInt * _Nullable timesSelected __attribute__((swift_name("timesSelected")));
@property (readonly) MiamCoreDouble * _Nullable unitPrice __attribute__((swift_name("unitPrice")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketEntriesItem.Companion")))
@interface MiamCoreBasketEntriesItemCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreBasketEntriesItemCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("BasketPreviewEntry")))
@protocol MiamCoreBasketPreviewEntry
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketEntry")))
@interface MiamCoreBasketEntry : MiamCoreRecord <MiamCoreBasketPreviewEntry>
- (instancetype)initWithId:(NSString *)id attributes:(MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable)attributes json_relationships:(MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable)json_relationships includedRecords:(NSArray<MiamCoreRecord *> *)includedRecords __attribute__((swift_name("init(id:attributes:json_relationships:includedRecords:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreBasketEntryCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreBasketEntryAttributes * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreBasketEntryRelationships * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreBasketEntry *)doCopyId:(NSString *)id attributes:(MiamCoreBasketEntryAttributes * _Nullable)attributes relationships:(MiamCoreBasketEntryRelationships * _Nullable)relationships __attribute__((swift_name("doCopy(id:attributes:relationships:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MiamCoreBasketEntry *)updateQuantityQty:(int32_t)qty __attribute__((swift_name("updateQuantity(qty:)")));
- (MiamCoreBasketEntry *)updateSelectedItemSelectedItemId:(int32_t)selectedItemId __attribute__((swift_name("updateSelectedItem(selectedItemId:)")));
- (MiamCoreBasketEntry *)updateStatusStatus:(NSString *)status __attribute__((swift_name("updateStatus(status:)")));
@property (readonly) MiamCoreBasketEntryAttributes * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isSubstitutable __attribute__((swift_name("isSubstitutable")));
@property (readonly) int32_t itemsCountOrZero __attribute__((swift_name("itemsCountOrZero")));
@property BOOL needPatch __attribute__((swift_name("needPatch")));
@property (readonly) MiamCoreBasketEntryRelationships * _Nullable relationships __attribute__((swift_name("relationships")));
@property (readonly) MiamCoreItem * _Nullable selectedItem __attribute__((swift_name("selectedItem")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketEntry.Companion")))
@interface MiamCoreBasketEntryCompanion : MiamCoreAttributesField
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithT:(id<MiamCoreKotlinKClass>)t __attribute__((swift_name("init(t:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreBasketEntryCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketEntryAttributes")))
@interface MiamCoreBasketEntryAttributes : MiamCoreAttributes
- (instancetype)initWithSelectedItemId:(MiamCoreInt * _Nullable)selectedItemId quantity:(MiamCoreInt * _Nullable)quantity recipeIds:(NSArray<MiamCoreInt *> * _Nullable)recipeIds groceriesEntryStatus:(NSString * _Nullable)groceriesEntryStatus basketEntriesItems:(NSArray<MiamCoreBasketEntriesItem *> * _Nullable)basketEntriesItems __attribute__((swift_name("init(selectedItemId:quantity:recipeIds:groceriesEntryStatus:basketEntriesItems:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreBasketEntryAttributesCompanion *companion __attribute__((swift_name("companion")));
- (MiamCoreInt * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreInt * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<MiamCoreInt *> * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<MiamCoreBasketEntriesItem *> * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreBasketEntryAttributes *)doCopySelectedItemId:(MiamCoreInt * _Nullable)selectedItemId quantity:(MiamCoreInt * _Nullable)quantity recipeIds:(NSArray<MiamCoreInt *> * _Nullable)recipeIds groceriesEntryStatus:(NSString * _Nullable)groceriesEntryStatus basketEntriesItems:(NSArray<MiamCoreBasketEntriesItem *> * _Nullable)basketEntriesItems __attribute__((swift_name("doCopy(selectedItemId:quantity:recipeIds:groceriesEntryStatus:basketEntriesItems:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<MiamCoreBasketEntriesItem *> * _Nullable basketEntriesItems __attribute__((swift_name("basketEntriesItems")));
@property (readonly) NSString * _Nullable groceriesEntryStatus __attribute__((swift_name("groceriesEntryStatus")));
@property (readonly) MiamCoreInt * _Nullable quantity __attribute__((swift_name("quantity")));
@property (readonly) NSArray<MiamCoreInt *> * _Nullable recipeIds __attribute__((swift_name("recipeIds")));
@property (readonly) MiamCoreInt * _Nullable selectedItemId __attribute__((swift_name("selectedItemId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketEntryAttributes.Companion")))
@interface MiamCoreBasketEntryAttributesCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreBasketEntryAttributesCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("RelationshipList")))
@interface MiamCoreRelationshipList : MiamCoreBase
@property (class, readonly, getter=companion) MiamCoreRelationshipListCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<MiamCoreRecord *> *)buildedFromIncludedIncludedRecords:(NSArray<MiamCoreRecord *> *)includedRecords subClass:(id<MiamCoreKotlinKClass>)subClass __attribute__((swift_name("buildedFromIncluded(includedRecords:subClass:)")));
- (void)serializeEncoder:(id<MiamCoreKotlinx_serialization_coreEncoder>)encoder __attribute__((swift_name("serialize(encoder:)")));
@property (readonly) NSArray<MiamCoreRecord *> *data __attribute__((swift_name("data")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/miam/kmmMiamCore/miam_core/model/BasketEntryRelationshipListSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketEntryRelationshipList")))
@interface MiamCoreBasketEntryRelationshipList : MiamCoreRelationshipList
- (instancetype)initWithData:(NSArray<MiamCoreBasketEntry *> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreBasketEntryRelationshipListCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MiamCoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
@property NSArray<MiamCoreBasketEntry *> *data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketEntryRelationshipList.Companion")))
@interface MiamCoreBasketEntryRelationshipListCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreBasketEntryRelationshipListCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol MiamCoreKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<MiamCoreKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MiamCoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol MiamCoreKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<MiamCoreKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<MiamCoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol MiamCoreKotlinx_serialization_coreKSerializer <MiamCoreKotlinx_serialization_coreSerializationStrategy, MiamCoreKotlinx_serialization_coreDeserializationStrategy>
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializer(forClass=NormalClass(value=com/miam/kmmMiamCore/miam_core/model/BasketEntryRelationshipList))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketEntryRelationshipListSerializer")))
@interface MiamCoreBasketEntryRelationshipListSerializer : MiamCoreBase <MiamCoreKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)basketEntryRelationshipListSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreBasketEntryRelationshipListSerializer *shared __attribute__((swift_name("shared")));
- (MiamCoreBasketEntryRelationshipList *)deserializeDecoder:(id<MiamCoreKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<MiamCoreKotlinx_serialization_coreEncoder>)encoder value:(MiamCoreBasketEntryRelationshipList *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MiamCoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("Relationships")))
@interface MiamCoreRelationships : MiamCoreBase
@property (class, readonly, getter=companion) MiamCoreRelationshipsCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MiamCoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketEntryRelationships")))
@interface MiamCoreBasketEntryRelationships : MiamCoreRelationships
- (instancetype)initWithItems:(MiamCoreItemRelationshipList * _Nullable)items groceriesEntry:(MiamCoreGroceriesEntryRelationship * _Nullable)groceriesEntry __attribute__((swift_name("init(items:groceriesEntry:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreBasketEntryRelationshipsCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MiamCoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
- (MiamCoreItemRelationshipList * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreGroceriesEntryRelationship * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreBasketEntryRelationships *)doCopyItems:(MiamCoreItemRelationshipList * _Nullable)items groceriesEntry:(MiamCoreGroceriesEntryRelationship * _Nullable)groceriesEntry __attribute__((swift_name("doCopy(items:groceriesEntry:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property MiamCoreGroceriesEntryRelationship * _Nullable groceriesEntry __attribute__((swift_name("groceriesEntry")));
@property MiamCoreItemRelationshipList * _Nullable items __attribute__((swift_name("items")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketEntryRelationships.Companion")))
@interface MiamCoreBasketEntryRelationshipsCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreBasketEntryRelationshipsCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketPreviewLine")))
@interface MiamCoreBasketPreviewLine : MiamCoreBase
- (instancetype)initWithId:(NSString * _Nullable)id record:(id<MiamCoreBasketPreviewEntry>)record isRecipe:(BOOL)isRecipe inlineTag:(NSString * _Nullable)inlineTag title:(NSString *)title picture:(NSString *)picture bplDescription:(NSArray<NSString *> *)bplDescription price:(double)price count:(int32_t)count entries:(MiamCoreLineEntries * _Nullable)entries _displayMode:(BOOL)_displayMode isDeleting:(BOOL)isDeleting recipesCount:(int32_t)recipesCount __attribute__((swift_name("init(id:record:isRecipe:inlineTag:title:picture:bplDescription:price:count:entries:_displayMode:isDeleting:recipesCount:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreBasketPreviewLineCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreLineEntries * _Nullable)component10 __attribute__((swift_name("component10()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component11 __attribute__((swift_name("component11()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component12 __attribute__((swift_name("component12()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component13 __attribute__((swift_name("component13()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<MiamCoreBasketPreviewEntry>)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<NSString *> *)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (double)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreBasketPreviewLine *)doCopyId:(NSString * _Nullable)id record:(id<MiamCoreBasketPreviewEntry>)record isRecipe:(BOOL)isRecipe inlineTag:(NSString * _Nullable)inlineTag title:(NSString *)title picture:(NSString *)picture bplDescription:(NSArray<NSString *> *)bplDescription price:(double)price count:(int32_t)count entries:(MiamCoreLineEntries * _Nullable)entries _displayMode:(BOOL)_displayMode isDeleting:(BOOL)isDeleting recipesCount:(int32_t)recipesCount __attribute__((swift_name("doCopy(id:record:isRecipe:inlineTag:title:picture:bplDescription:price:count:entries:_displayMode:isDeleting:recipesCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)hasEntries __attribute__((swift_name("hasEntries()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL _displayMode __attribute__((swift_name("_displayMode")));
@property (readonly) NSArray<NSString *> *bplDescription __attribute__((swift_name("bplDescription")));
@property (readonly) int32_t count __attribute__((swift_name("count")));
@property (readonly) MiamCoreLineEntries * _Nullable entries __attribute__((swift_name("entries")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable inlineTag __attribute__((swift_name("inlineTag")));
@property (readonly) BOOL isDeleting __attribute__((swift_name("isDeleting")));
@property (readonly) BOOL isRecipe __attribute__((swift_name("isRecipe")));
@property (readonly) NSString *picture __attribute__((swift_name("picture")));
@property (readonly) double price __attribute__((swift_name("price")));
@property (readonly) int32_t recipesCount __attribute__((swift_name("recipesCount")));
@property (readonly) id<MiamCoreBasketPreviewEntry> record __attribute__((swift_name("record")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketPreviewLine.Companion")))
@interface MiamCoreBasketPreviewLineCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreBasketPreviewLineCompanion *shared __attribute__((swift_name("shared")));
- (MiamCoreBasketPreviewLine *)fromBasketEntryEntry:(MiamCoreBasketEntry *)entry __attribute__((swift_name("fromBasketEntry(entry:)")));
- (MiamCoreBasketPreviewLine *)fromBasketEntryItemEntry:(MiamCoreBasketEntry *)entry item:(MiamCoreItem *)item __attribute__((swift_name("fromBasketEntryItem(entry:item:)")));
- (MiamCoreBasketPreviewLine *)fromRecipeRecipe:(MiamCoreRecipe *)recipe itemsCount:(int32_t)itemsCount pricePerGuest:(MiamCoreDouble * _Nullable)pricePerGuest guestNum:(MiamCoreInt * _Nullable)guestNum recipePrice:(double)recipePrice entries:(MiamCoreLineEntries * _Nullable)entries __attribute__((swift_name("fromRecipe(recipe:itemsCount:pricePerGuest:guestNum:recipePrice:entries:)")));
- (NSArray<MiamCoreBasketPreviewLine *> *)recipesAndLineEntriesToBasketPreviewLineGroceriesList:(MiamCoreGroceriesList *)groceriesList lineEntries:(NSArray<MiamCoreLineEntries *> *)lineEntries __attribute__((swift_name("recipesAndLineEntriesToBasketPreviewLine(groceriesList:lineEntries:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketRelationships")))
@interface MiamCoreBasketRelationships : MiamCoreRelationships
- (instancetype)initWithBasketEntries:(MiamCoreBasketEntryRelationshipList * _Nullable)basketEntries __attribute__((swift_name("init(basketEntries:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreBasketRelationshipsCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MiamCoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
- (MiamCoreBasketEntryRelationshipList * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreBasketRelationships *)doCopyBasketEntries:(MiamCoreBasketEntryRelationshipList * _Nullable)basketEntries __attribute__((swift_name("doCopy(basketEntries:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property MiamCoreBasketEntryRelationshipList * _Nullable basketEntries __attribute__((swift_name("basketEntries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketRelationships.Companion")))
@interface MiamCoreBasketRelationshipsCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreBasketRelationshipsCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CatalogFilterOptions")))
@interface MiamCoreCatalogFilterOptions : MiamCoreBase
- (instancetype)initWithName:(NSString *)name uiLabel:(NSString *)uiLabel isSelected:(BOOL)isSelected __attribute__((swift_name("init(name:uiLabel:isSelected:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreCatalogFilterOptions *)doCopyName:(NSString *)name uiLabel:(NSString *)uiLabel isSelected:(BOOL)isSelected __attribute__((swift_name("doCopy(name:uiLabel:isSelected:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (MiamCoreCatalogFilterOptions *)off __attribute__((swift_name("off()")));
- (MiamCoreCatalogFilterOptions *)on __attribute__((swift_name("on()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MiamCoreCatalogFilterOptions *)toogle __attribute__((swift_name("toogle()")));
@property BOOL isSelected __attribute__((swift_name("isSelected")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *uiLabel __attribute__((swift_name("uiLabel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckableTag")))
@interface MiamCoreCheckableTag : MiamCoreBase
- (instancetype)initWithTagType:(MiamCoreTagTypes *)tagType tag:(MiamCoreTag *)tag __attribute__((swift_name("init(tagType:tag:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithTagType:(MiamCoreTagTypes *)tagType tag:(MiamCoreTag *)tag isChecked:(BOOL)isChecked __attribute__((swift_name("init(tagType:tag:isChecked:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreCheckableTagCompanion *companion __attribute__((swift_name("companion")));
- (MiamCoreTagTypes *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreTag *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreCheckableTag *)doCopyTagType:(MiamCoreTagTypes *)tagType tag:(MiamCoreTag *)tag isChecked:(BOOL)isChecked __attribute__((swift_name("doCopy(tagType:tag:isChecked:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (MiamCoreCheckableTag *)resetWithStorageTagIds:(NSArray<NSString *> *)storageTagIds __attribute__((swift_name("resetWith(storageTagIds:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MiamCoreCheckableTag *)toggleIfNeededTagIdToToggle:(NSString *)tagIdToToggle __attribute__((swift_name("toggleIfNeeded(tagIdToToggle:)")));
@property (readonly) BOOL changedFromItsDefaultValue __attribute__((swift_name("changedFromItsDefaultValue")));
@property (readonly) BOOL isChecked __attribute__((swift_name("isChecked")));
@property (readonly) BOOL isIncludedInQuery __attribute__((swift_name("isIncludedInQuery")));
@property (readonly) MiamCoreTag *tag __attribute__((swift_name("tag")));
@property (readonly) MiamCoreTagTypes *tagType __attribute__((swift_name("tagType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckableTag.Companion")))
@interface MiamCoreCheckableTagCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreCheckableTagCompanion *shared __attribute__((swift_name("shared")));
- (BOOL)checkedByDefaultTagType:(MiamCoreTagTypes *)tagType __attribute__((swift_name("checkedByDefault(tagType:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GroceriesEntry")))
@interface MiamCoreGroceriesEntry : MiamCoreRecord
- (instancetype)initWithId:(NSString *)id attributes:(MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable)attributes json_relationships:(MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable)json_relationships includedRecords:(NSArray<MiamCoreRecord *> *)includedRecords __attribute__((swift_name("init(id:attributes:json_relationships:includedRecords:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreGroceriesEntryCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreGroceriesEntryAttributes * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreGroceriesEntryRelationships * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreGroceriesEntry *)doCopyId:(NSString *)id attributes:(MiamCoreGroceriesEntryAttributes * _Nullable)attributes relationships:(MiamCoreGroceriesEntryRelationships * _Nullable)relationships __attribute__((swift_name("doCopy(id:attributes:relationships:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MiamCoreGroceriesEntry *)updateStatusStatus:(NSString *)status __attribute__((swift_name("updateStatus(status:)")));
@property (readonly) MiamCoreGroceriesEntryAttributes * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property BOOL needPatch __attribute__((swift_name("needPatch")));
@property (readonly) MiamCoreGroceriesEntryRelationships * _Nullable relationships __attribute__((swift_name("relationships")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GroceriesEntry.Companion")))
@interface MiamCoreGroceriesEntryCompanion : MiamCoreAttributesField
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithT:(id<MiamCoreKotlinKClass>)t __attribute__((swift_name("init(t:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreGroceriesEntryCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GroceriesEntryAttributes")))
@interface MiamCoreGroceriesEntryAttributes : MiamCoreAttributes
- (instancetype)initWithName:(NSString * _Nullable)name status:(NSString * _Nullable)status recipeIds:(NSArray<MiamCoreInt *> * _Nullable)recipeIds __attribute__((swift_name("init(name:status:recipeIds:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreGroceriesEntryAttributesCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<MiamCoreInt *> * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreGroceriesEntryAttributes *)doCopyName:(NSString * _Nullable)name status:(NSString * _Nullable)status recipeIds:(NSArray<MiamCoreInt *> * _Nullable)recipeIds __attribute__((swift_name("doCopy(name:status:recipeIds:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSArray<MiamCoreInt *> * _Nullable recipeIds __attribute__((swift_name("recipeIds")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GroceriesEntryAttributes.Companion")))
@interface MiamCoreGroceriesEntryAttributesCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreGroceriesEntryAttributesCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("Relationship")))
@interface MiamCoreRelationship : MiamCoreBase
@property (class, readonly, getter=companion) MiamCoreRelationshipCompanion *companion __attribute__((swift_name("companion")));
- (MiamCoreRecord *)buildedFromIncludedIncludedRecords:(NSArray<MiamCoreRecord *> *)includedRecords subClass:(id<MiamCoreKotlinKClass>)subClass __attribute__((swift_name("buildedFromIncluded(includedRecords:subClass:)")));
- (void)serializeEncoder:(id<MiamCoreKotlinx_serialization_coreEncoder>)encoder __attribute__((swift_name("serialize(encoder:)")));
@property (readonly) MiamCoreRecord *data __attribute__((swift_name("data")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/miam/kmmMiamCore/miam_core/model/GroceriesEntryRelationshipSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GroceriesEntryRelationship")))
@interface MiamCoreGroceriesEntryRelationship : MiamCoreRelationship
- (instancetype)initWithData:(MiamCoreGroceriesEntry *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreGroceriesEntryRelationshipCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MiamCoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
@property MiamCoreGroceriesEntry *data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GroceriesEntryRelationship.Companion")))
@interface MiamCoreGroceriesEntryRelationshipCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreGroceriesEntryRelationshipCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/miam/kmmMiamCore/miam_core/model/GroceriesEntryRelationshipListSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GroceriesEntryRelationshipList")))
@interface MiamCoreGroceriesEntryRelationshipList : MiamCoreRelationshipList
- (instancetype)initWithData:(NSArray<MiamCoreGroceriesEntry *> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreGroceriesEntryRelationshipListCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MiamCoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
@property NSArray<MiamCoreGroceriesEntry *> *data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GroceriesEntryRelationshipList.Companion")))
@interface MiamCoreGroceriesEntryRelationshipListCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreGroceriesEntryRelationshipListCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializer(forClass=NormalClass(value=com/miam/kmmMiamCore/miam_core/model/GroceriesEntryRelationshipList))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GroceriesEntryRelationshipListSerializer")))
@interface MiamCoreGroceriesEntryRelationshipListSerializer : MiamCoreBase <MiamCoreKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)groceriesEntryRelationshipListSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreGroceriesEntryRelationshipListSerializer *shared __attribute__((swift_name("shared")));
- (MiamCoreGroceriesEntryRelationshipList *)deserializeDecoder:(id<MiamCoreKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<MiamCoreKotlinx_serialization_coreEncoder>)encoder value:(MiamCoreGroceriesEntryRelationshipList *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MiamCoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializer(forClass=NormalClass(value=com/miam/kmmMiamCore/miam_core/model/GroceriesEntryRelationship))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GroceriesEntryRelationshipSerializer")))
@interface MiamCoreGroceriesEntryRelationshipSerializer : MiamCoreBase <MiamCoreKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)groceriesEntryRelationshipSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreGroceriesEntryRelationshipSerializer *shared __attribute__((swift_name("shared")));
- (MiamCoreGroceriesEntryRelationship *)deserializeDecoder:(id<MiamCoreKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<MiamCoreKotlinx_serialization_coreEncoder>)encoder value:(MiamCoreGroceriesEntryRelationship *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MiamCoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GroceriesEntryRelationships")))
@interface MiamCoreGroceriesEntryRelationships : MiamCoreRelationships
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MiamCoreGroceriesEntryRelationshipsCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MiamCoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GroceriesEntryRelationships.Companion")))
@interface MiamCoreGroceriesEntryRelationshipsCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreGroceriesEntryRelationshipsCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GroceriesList")))
@interface MiamCoreGroceriesList : MiamCoreRecord
- (instancetype)initWithId:(NSString *)id attributes:(MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable)attributes json_relationships:(MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable)json_relationships includedRecords:(NSArray<MiamCoreRecord *> *)includedRecords __attribute__((swift_name("init(id:attributes:json_relationships:includedRecords:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreGroceriesListCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreGroceriesListAttributes * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreGroceriesListRelationships * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<MiamCoreRecipe *> *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreGroceriesList *)doCopyId:(NSString *)id attributes:(MiamCoreGroceriesListAttributes * _Nullable)attributes relationships:(MiamCoreGroceriesListRelationships * _Nullable)relationships recipes:(NSArray<MiamCoreRecipe *> *)recipes __attribute__((swift_name("doCopy(id:attributes:relationships:recipes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (int32_t)guestsForRecipeRecipeId:(NSString *)recipeId __attribute__((swift_name("guestsForRecipe(recipeId:)")));
- (BOOL)hasRecipeRecipeId:(NSString *)recipeId __attribute__((swift_name("hasRecipe(recipeId:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSArray<NSString *> *)missingRecipesIdsExistingRecipes:(NSArray<MiamCoreRecipe *> *)existingRecipes __attribute__((swift_name("missingRecipesIds(existingRecipes:)")));
- (void)rebuildRecipesRelationshipsMissingRecipes:(NSArray<MiamCoreRecipe *> *)missingRecipes existingRecipes:(NSArray<MiamCoreRecipe *> *)existingRecipes __attribute__((swift_name("rebuildRecipesRelationships(missingRecipes:existingRecipes:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property MiamCoreGroceriesListAttributes * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property NSArray<MiamCoreRecipe *> *recipes __attribute__((swift_name("recipes")));
@property (readonly) MiamCoreGroceriesListRelationships * _Nullable relationships __attribute__((swift_name("relationships")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GroceriesList.Companion")))
@interface MiamCoreGroceriesListCompanion : MiamCoreAttributesField
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithT:(id<MiamCoreKotlinKClass>)t __attribute__((swift_name("init(t:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreGroceriesListCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GroceriesListAttributes")))
@interface MiamCoreGroceriesListAttributes : MiamCoreAttributes
- (instancetype)initWithRecipesInfos:(NSMutableArray<MiamCoreRecipeInfos *> *)recipesInfos appendRecipes:(BOOL)appendRecipes __attribute__((swift_name("init(recipesInfos:appendRecipes:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreGroceriesListAttributesCompanion *companion __attribute__((swift_name("companion")));
- (NSMutableArray<MiamCoreRecipeInfos *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreGroceriesListAttributes *)doCopyRecipesInfos:(NSMutableArray<MiamCoreRecipeInfos *> *)recipesInfos appendRecipes:(BOOL)appendRecipes __attribute__((swift_name("doCopy(recipesInfos:appendRecipes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property BOOL appendRecipes __attribute__((swift_name("appendRecipes")));
@property (readonly) NSMutableArray<MiamCoreRecipeInfos *> *recipesInfos __attribute__((swift_name("recipesInfos")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GroceriesListAttributes.Companion")))
@interface MiamCoreGroceriesListAttributesCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreGroceriesListAttributesCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GroceriesListRelationships")))
@interface MiamCoreGroceriesListRelationships : MiamCoreRelationships
- (instancetype)initWithGroceriesEntries:(MiamCoreGroceriesEntryRelationshipList * _Nullable)groceriesEntries __attribute__((swift_name("init(groceriesEntries:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreGroceriesListRelationshipsCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MiamCoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
- (MiamCoreGroceriesEntryRelationshipList * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreGroceriesListRelationships *)doCopyGroceriesEntries:(MiamCoreGroceriesEntryRelationshipList * _Nullable)groceriesEntries __attribute__((swift_name("doCopy(groceriesEntries:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property MiamCoreGroceriesEntryRelationshipList * _Nullable groceriesEntries __attribute__((swift_name("groceriesEntries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GroceriesListRelationships.Companion")))
@interface MiamCoreGroceriesListRelationshipsCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreGroceriesListRelationshipsCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ingredient")))
@interface MiamCoreIngredient : MiamCoreRecord
- (instancetype)initWithId:(NSString *)id attributes:(MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable)attributes json_relationships:(MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable)json_relationships includedRecords:(NSArray<MiamCoreRecord *> *)includedRecords __attribute__((swift_name("init(id:attributes:json_relationships:includedRecords:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreIngredientCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreIngredientAttributes * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreIngredientRelationships * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreIngredient *)doCopyId:(NSString *)id attributes:(MiamCoreIngredientAttributes * _Nullable)attributes relationships:(MiamCoreIngredientRelationships * _Nullable)relationships __attribute__((swift_name("doCopy(id:attributes:relationships:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreIngredientAttributes * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) MiamCoreIngredientRelationships * _Nullable relationships __attribute__((swift_name("relationships")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ingredient.Companion")))
@interface MiamCoreIngredientCompanion : MiamCoreAttributesField
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithT:(id<MiamCoreKotlinKClass>)t __attribute__((swift_name("init(t:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreIngredientCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IngredientAttributes")))
@interface MiamCoreIngredientAttributes : MiamCoreAttributes
- (instancetype)initWithName:(NSString * _Nullable)name quantity:(NSString * _Nullable)quantity unit:(NSString * _Nullable)unit pictureUrl:(NSString * _Nullable)pictureUrl __attribute__((swift_name("init(name:quantity:unit:pictureUrl:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreIngredientAttributesCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreIngredientAttributes *)doCopyName:(NSString * _Nullable)name quantity:(NSString * _Nullable)quantity unit:(NSString * _Nullable)unit pictureUrl:(NSString * _Nullable)pictureUrl __attribute__((swift_name("doCopy(name:quantity:unit:pictureUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable pictureUrl __attribute__((swift_name("pictureUrl")));
@property (readonly) NSString * _Nullable quantity __attribute__((swift_name("quantity")));
@property (readonly) NSString * _Nullable unit __attribute__((swift_name("unit")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IngredientAttributes.Companion")))
@interface MiamCoreIngredientAttributesCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreIngredientAttributesCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/miam/kmmMiamCore/miam_core/model/IngredientListSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IngredientListRelationship")))
@interface MiamCoreIngredientListRelationship : MiamCoreRelationshipList
- (instancetype)initWithData:(NSArray<MiamCoreIngredient *> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreIngredientListRelationshipCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MiamCoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
@property NSArray<MiamCoreIngredient *> *data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IngredientListRelationship.Companion")))
@interface MiamCoreIngredientListRelationshipCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreIngredientListRelationshipCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializer(forClass=NormalClass(value=com/miam/kmmMiamCore/miam_core/model/IngredientListRelationship))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IngredientListSerializer")))
@interface MiamCoreIngredientListSerializer : MiamCoreBase <MiamCoreKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)ingredientListSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreIngredientListSerializer *shared __attribute__((swift_name("shared")));
- (MiamCoreIngredientListRelationship *)deserializeDecoder:(id<MiamCoreKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<MiamCoreKotlinx_serialization_coreEncoder>)encoder value:(MiamCoreIngredientListRelationship *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MiamCoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IngredientRelationships")))
@interface MiamCoreIngredientRelationships : MiamCoreRelationships
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MiamCoreIngredientRelationshipsCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MiamCoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IngredientRelationships.Companion")))
@interface MiamCoreIngredientRelationshipsCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreIngredientRelationshipsCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Item")))
@interface MiamCoreItem : MiamCoreRecord
- (instancetype)initWithId:(NSString *)id attributes:(MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable)attributes json_relationships:(MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable)json_relationships includedRecords:(NSArray<MiamCoreRecord *> *)includedRecords __attribute__((swift_name("init(id:attributes:json_relationships:includedRecords:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreItemCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreItemAttributes * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreItemRelationships * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreItem *)doCopyId:(NSString *)id attributes:(MiamCoreItemAttributes * _Nullable)attributes relationships:(MiamCoreItemRelationships * _Nullable)relationships __attribute__((swift_name("doCopy(id:attributes:relationships:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreItemAttributes * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString *capacity __attribute__((swift_name("capacity")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) MiamCoreItemRelationships * _Nullable relationships __attribute__((swift_name("relationships")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Item.Companion")))
@interface MiamCoreItemCompanion : MiamCoreAttributesField
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithT:(id<MiamCoreKotlinKClass>)t __attribute__((swift_name("init(t:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreItemCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItemAttributes")))
@interface MiamCoreItemAttributes : MiamCoreAttributes
- (instancetype)initWithExtId:(NSString * _Nullable)extId name:(NSString *)name status:(NSString * _Nullable)status itemDescription:(NSString * _Nullable)itemDescription brand:(NSString * _Nullable)brand productPage:(NSString * _Nullable)productPage image:(NSString * _Nullable)image unitPrice:(NSString *)unitPrice capacityUnit:(NSString * _Nullable)capacityUnit capacityVolume:(NSString * _Nullable)capacityVolume capacityFactor:(MiamCoreInt * _Nullable)capacityFactor variableCapacity:(BOOL)variableCapacity __attribute__((swift_name("init(extId:name:status:itemDescription:brand:productPage:image:unitPrice:capacityUnit:capacityVolume:capacityFactor:variableCapacity:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreItemAttributesCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreInt * _Nullable)component11 __attribute__((swift_name("component11()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component12 __attribute__((swift_name("component12()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreItemAttributes *)doCopyExtId:(NSString * _Nullable)extId name:(NSString *)name status:(NSString * _Nullable)status itemDescription:(NSString * _Nullable)itemDescription brand:(NSString * _Nullable)brand productPage:(NSString * _Nullable)productPage image:(NSString * _Nullable)image unitPrice:(NSString *)unitPrice capacityUnit:(NSString * _Nullable)capacityUnit capacityVolume:(NSString * _Nullable)capacityVolume capacityFactor:(MiamCoreInt * _Nullable)capacityFactor variableCapacity:(BOOL)variableCapacity __attribute__((swift_name("doCopy(extId:name:status:itemDescription:brand:productPage:image:unitPrice:capacityUnit:capacityVolume:capacityFactor:variableCapacity:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable brand __attribute__((swift_name("brand")));
@property (readonly) MiamCoreInt * _Nullable capacityFactor __attribute__((swift_name("capacityFactor")));
@property (readonly) NSString * _Nullable capacityUnit __attribute__((swift_name("capacityUnit")));
@property (readonly) NSString * _Nullable capacityVolume __attribute__((swift_name("capacityVolume")));
@property (readonly) NSString * _Nullable extId __attribute__((swift_name("extId")));
@property (readonly) NSString * _Nullable image __attribute__((swift_name("image")));
@property (readonly) NSString * _Nullable itemDescription __attribute__((swift_name("itemDescription")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable productPage __attribute__((swift_name("productPage")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@property (readonly) NSString *unitPrice __attribute__((swift_name("unitPrice")));
@property (readonly) BOOL variableCapacity __attribute__((swift_name("variableCapacity")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItemAttributes.Companion")))
@interface MiamCoreItemAttributesCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreItemAttributesCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/miam/kmmMiamCore/miam_core/model/ItemRelationshipListSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItemRelationshipList")))
@interface MiamCoreItemRelationshipList : MiamCoreRelationshipList
- (instancetype)initWithData:(NSArray<MiamCoreItem *> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreItemRelationshipListCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MiamCoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
@property NSArray<MiamCoreItem *> *data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItemRelationshipList.Companion")))
@interface MiamCoreItemRelationshipListCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreItemRelationshipListCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializer(forClass=NormalClass(value=com/miam/kmmMiamCore/miam_core/model/ItemRelationshipList))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItemRelationshipListSerializer")))
@interface MiamCoreItemRelationshipListSerializer : MiamCoreBase <MiamCoreKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)itemRelationshipListSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreItemRelationshipListSerializer *shared __attribute__((swift_name("shared")));
- (MiamCoreItemRelationshipList *)deserializeDecoder:(id<MiamCoreKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<MiamCoreKotlinx_serialization_coreEncoder>)encoder value:(MiamCoreItemRelationshipList *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MiamCoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItemRelationships")))
@interface MiamCoreItemRelationships : MiamCoreRelationships
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MiamCoreItemRelationshipsCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MiamCoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItemRelationships.Companion")))
@interface MiamCoreItemRelationshipsCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreItemRelationshipsCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LineEntries")))
@interface MiamCoreLineEntries : MiamCoreBase
- (instancetype)initWithRecipeId:(NSString *)recipeId found:(NSArray<MiamCoreBasketEntry *> *)found notFound:(NSArray<MiamCoreBasketEntry *> *)notFound oftenDeleted:(NSArray<MiamCoreBasketEntry *> *)oftenDeleted removed:(NSArray<MiamCoreBasketEntry *> *)removed __attribute__((swift_name("init(recipeId:found:notFound:oftenDeleted:removed:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<MiamCoreBasketEntry *> *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<MiamCoreBasketEntry *> *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<MiamCoreBasketEntry *> *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<MiamCoreBasketEntry *> *)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreLineEntries *)doCopyRecipeId:(NSString *)recipeId found:(NSArray<MiamCoreBasketEntry *> *)found notFound:(NSArray<MiamCoreBasketEntry *> *)notFound oftenDeleted:(NSArray<MiamCoreBasketEntry *> *)oftenDeleted removed:(NSArray<MiamCoreBasketEntry *> *)removed __attribute__((swift_name("doCopy(recipeId:found:notFound:oftenDeleted:removed:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (double)totalPrice __attribute__((swift_name("totalPrice()")));
- (MiamCoreLineEntries *)updateBasketEntriesBasketEntries:(NSArray<MiamCoreBasketEntry *> *)basketEntries __attribute__((swift_name("updateBasketEntries(basketEntries:)")));
@property (readonly) NSArray<MiamCoreBasketEntry *> *found __attribute__((swift_name("found")));
@property (readonly) NSArray<MiamCoreBasketEntry *> *notFound __attribute__((swift_name("notFound")));
@property (readonly) NSArray<MiamCoreBasketEntry *> *oftenDeleted __attribute__((swift_name("oftenDeleted")));
@property (readonly) NSString *recipeId __attribute__((swift_name("recipeId")));
@property (readonly) NSArray<MiamCoreBasketEntry *> *removed __attribute__((swift_name("removed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MealPlannerRecipe")))
@interface MiamCoreMealPlannerRecipe : MiamCoreBase
- (instancetype)initWithRecipeId:(NSString *)recipeId price:(double)price __attribute__((swift_name("init(recipeId:price:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (double)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreMealPlannerRecipe *)doCopyRecipeId:(NSString *)recipeId price:(double)price __attribute__((swift_name("doCopy(recipeId:price:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double price __attribute__((swift_name("price")));
@property (readonly) NSString *recipeId __attribute__((swift_name("recipeId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MiamConfig")))
@interface MiamCoreMiamConfig : MiamCoreBase
@property (class, readonly, getter=companion) MiamCoreMiamConfigCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreMiamConfig *)doCopySupplierId:(NSString *)supplierId plausibleDomain:(NSString *)plausibleDomain host:(NSString *)host miamOrigin:(NSString *)miamOrigin origin:(NSString *)origin environment:(NSString *)environment __attribute__((swift_name("doCopy(supplierId:plausibleDomain:host:miamOrigin:origin:environment:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *environment __attribute__((swift_name("environment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) NSString *miamOrigin __attribute__((swift_name("miamOrigin")));
@property (readonly) NSString *origin __attribute__((swift_name("origin")));
@property (readonly) NSString *plausibleDomain __attribute__((swift_name("plausibleDomain")));
@property (readonly) NSString *supplierId __attribute__((swift_name("supplierId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MiamConfig.Companion")))
@interface MiamCoreMiamConfigCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreMiamConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Package")))
@interface MiamCorePackage : MiamCoreRecord
- (instancetype)initWithId:(NSString *)id attributes:(MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable)attributes json_relationships:(MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable)json_relationships includedRecords:(NSArray<MiamCoreRecord *> *)includedRecords __attribute__((swift_name("init(id:attributes:json_relationships:includedRecords:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCorePackageCompanion *companion __attribute__((swift_name("companion")));
- (MiamCorePackage *)buildRecipesRecipes:(NSArray<MiamCoreRecipe *> *)recipes __attribute__((swift_name("buildRecipes(recipes:)")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCorePackageAttributes * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCorePackageRelationships * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCorePackage *)doCopyId:(NSString *)id attributes:(MiamCorePackageAttributes * _Nullable)attributes relationships:(MiamCorePackageRelationships * _Nullable)relationships __attribute__((swift_name("doCopy(id:attributes:relationships:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property MiamCorePackageAttributes * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) MiamCorePackageRelationships * _Nullable relationships __attribute__((swift_name("relationships")));
@property (readonly) NSString * _Nullable subtitle __attribute__((swift_name("subtitle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Package.Companion")))
@interface MiamCorePackageCompanion : MiamCoreAttributesField
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithT:(id<MiamCoreKotlinKClass>)t __attribute__((swift_name("init(t:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCorePackageCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PackageAttributes")))
@interface MiamCorePackageAttributes : MiamCoreAttributes
- (instancetype)initWithTitle:(NSString *)title settings:(MiamCorePackageSettings *)settings __attribute__((swift_name("init(title:settings:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCorePackageAttributesCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCorePackageSettings *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCorePackageAttributes *)doCopyTitle:(NSString *)title settings:(MiamCorePackageSettings *)settings __attribute__((swift_name("doCopy(title:settings:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCorePackageSettings *settings __attribute__((swift_name("settings")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PackageAttributes.Companion")))
@interface MiamCorePackageAttributesCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCorePackageAttributesCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PackageRelationships")))
@interface MiamCorePackageRelationships : MiamCoreRelationships
- (instancetype)initWithRecipes:(MiamCoreRecipeRelationshipList * _Nullable)recipes __attribute__((swift_name("init(recipes:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCorePackageRelationshipsCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MiamCoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
- (MiamCoreRecipeRelationshipList * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCorePackageRelationships *)doCopyRecipes:(MiamCoreRecipeRelationshipList * _Nullable)recipes __attribute__((swift_name("doCopy(recipes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property MiamCoreRecipeRelationshipList * _Nullable recipes __attribute__((swift_name("recipes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PackageRelationships.Companion")))
@interface MiamCorePackageRelationshipsCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCorePackageRelationshipsCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PackageSettings")))
@interface MiamCorePackageSettings : MiamCoreBase
- (instancetype)initWithSubtitle:(NSString * _Nullable)subtitle __attribute__((swift_name("init(subtitle:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCorePackageSettingsCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCorePackageSettings *)doCopySubtitle:(NSString * _Nullable)subtitle __attribute__((swift_name("doCopy(subtitle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable subtitle __attribute__((swift_name("subtitle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PackageSettings.Companion")))
@interface MiamCorePackageSettingsCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCorePackageSettingsCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PointOfSale")))
@interface MiamCorePointOfSale : MiamCoreBase
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCorePointOfSaleCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCorePointOfSale *)doCopyId:(NSString *)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PointOfSale.Companion")))
@interface MiamCorePointOfSaleCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCorePointOfSaleCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PointOfSaleWrapper")))
@interface MiamCorePointOfSaleWrapper : MiamCoreBase
- (instancetype)initWithData:(MiamCorePointOfSale *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCorePointOfSaleWrapperCompanion *companion __attribute__((swift_name("companion")));
- (MiamCorePointOfSale *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCorePointOfSaleWrapper *)doCopyData:(MiamCorePointOfSale *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCorePointOfSale *data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PointOfSaleWrapper.Companion")))
@interface MiamCorePointOfSaleWrapperCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCorePointOfSaleWrapperCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PointOfSales")))
@interface MiamCorePointOfSales : MiamCoreBase
- (instancetype)initWithData:(NSArray<MiamCorePointOfSale *> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCorePointOfSalesCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<MiamCorePointOfSale *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCorePointOfSales *)doCopyData:(NSArray<MiamCorePointOfSale *> *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<MiamCorePointOfSale *> *data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PointOfSales.Companion")))
@interface MiamCorePointOfSalesCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCorePointOfSalesCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Pricing")))
@interface MiamCorePricing : MiamCoreBase
- (instancetype)initWithPrice:(double)price serves:(int32_t)serves __attribute__((swift_name("init(price:serves:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCorePricingCompanion *companion __attribute__((swift_name("companion")));
- (double)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCorePricing *)doCopyPrice:(double)price serves:(int32_t)serves __attribute__((swift_name("doCopy(price:serves:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double price __attribute__((swift_name("price")));
@property (readonly) double pricePerServe __attribute__((swift_name("pricePerServe")));
@property (readonly) int32_t serves __attribute__((swift_name("serves")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Pricing.Companion")))
@interface MiamCorePricingCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCorePricingCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Recipe")))
@interface MiamCoreRecipe : MiamCoreRecord <MiamCoreBasketPreviewEntry>
- (instancetype)initWithId:(NSString *)id attributes:(MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable)attributes json_relationships:(MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable)json_relationships includedRecords:(NSArray<MiamCoreRecord *> *)includedRecords __attribute__((swift_name("init(id:attributes:json_relationships:includedRecords:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreRecipeCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRecipeAttributes * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRecipeRelationships * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRecipeLike * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRecipe *)doCopyId:(NSString *)id attributes:(MiamCoreRecipeAttributes * _Nullable)attributes relationships:(MiamCoreRecipeRelationships * _Nullable)relationships recipeLike:(MiamCoreRecipeLike * _Nullable)recipeLike __attribute__((swift_name("doCopy(id:attributes:relationships:recipeLike:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreRecipeAttributes * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString *cookingTimeIos __attribute__((swift_name("cookingTimeIos")));
@property (readonly) BOOL hasRelationships __attribute__((swift_name("hasRelationships")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isSponsored __attribute__((swift_name("isSponsored")));
@property (readonly) NSString *preparationTimeIos __attribute__((swift_name("preparationTimeIos")));
@property (readonly) MiamCoreRecipeLike * _Nullable recipeLike __attribute__((swift_name("recipeLike")));
@property (readonly) MiamCoreRecipeRelationships * _Nullable relationships __attribute__((swift_name("relationships")));
@property (readonly) NSString *restingTimeIos __attribute__((swift_name("restingTimeIos")));
@property (readonly) NSArray<MiamCoreRecipeStep *> *sortedStep __attribute__((swift_name("sortedStep")));
@property (readonly) NSString *totalTime __attribute__((swift_name("totalTime")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Recipe.Companion")))
@interface MiamCoreRecipeCompanion : MiamCoreAttributesField
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithT:(id<MiamCoreKotlinKClass>)t __attribute__((swift_name("init(t:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreRecipeCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeAttributes")))
@interface MiamCoreRecipeAttributes : MiamCoreAttributes
- (instancetype)initWithTitle:(NSString *)title recipeDescription:(NSString * _Nullable)recipeDescription numberOfGuests:(int32_t)numberOfGuests preparationTime:(id _Nullable)preparationTime cookingTime:(id _Nullable)cookingTime restingTime:(id _Nullable)restingTime computedCost:(MiamCoreDouble * _Nullable)computedCost mediaUrl:(NSString *)mediaUrl difficulty:(MiamCoreInt * _Nullable)difficulty __attribute__((swift_name("init(title:recipeDescription:numberOfGuests:preparationTime:cookingTime:restingTime:computedCost:mediaUrl:difficulty:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreRecipeAttributesCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (id _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (id _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (id _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreDouble * _Nullable)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreInt * _Nullable)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRecipeAttributes *)doCopyTitle:(NSString *)title recipeDescription:(NSString * _Nullable)recipeDescription numberOfGuests:(int32_t)numberOfGuests preparationTime:(id _Nullable)preparationTime cookingTime:(id _Nullable)cookingTime restingTime:(id _Nullable)restingTime computedCost:(MiamCoreDouble * _Nullable)computedCost mediaUrl:(NSString *)mediaUrl difficulty:(MiamCoreInt * _Nullable)difficulty __attribute__((swift_name("doCopy(title:recipeDescription:numberOfGuests:preparationTime:cookingTime:restingTime:computedCost:mediaUrl:difficulty:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreDouble * _Nullable computedCost __attribute__((swift_name("computedCost")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/miam/kmmMiamCore/miam_core/model/utils/CustomDurationSerializer))
*/
@property (readonly) id _Nullable cookingTime __attribute__((swift_name("cookingTime")));
@property (readonly) MiamCoreInt * _Nullable difficulty __attribute__((swift_name("difficulty")));
@property (readonly) NSString *mediaUrl __attribute__((swift_name("mediaUrl")));
@property (readonly) int32_t numberOfGuests __attribute__((swift_name("numberOfGuests")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/miam/kmmMiamCore/miam_core/model/utils/CustomDurationSerializer))
*/
@property (readonly) id _Nullable preparationTime __attribute__((swift_name("preparationTime")));
@property (readonly) NSString * _Nullable recipeDescription __attribute__((swift_name("recipeDescription")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/miam/kmmMiamCore/miam_core/model/utils/CustomDurationSerializer))
*/
@property (readonly) id _Nullable restingTime __attribute__((swift_name("restingTime")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeAttributes.Companion")))
@interface MiamCoreRecipeAttributesCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreRecipeAttributesCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeInfos")))
@interface MiamCoreRecipeInfos : MiamCoreBase
- (instancetype)initWithId:(int32_t)id guests:(int32_t)guests __attribute__((swift_name("init(id:guests:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreRecipeInfosCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRecipeInfos *)doCopyId:(int32_t)id guests:(int32_t)guests __attribute__((swift_name("doCopy(id:guests:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property int32_t guests __attribute__((swift_name("guests")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeInfos.Companion")))
@interface MiamCoreRecipeInfosCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreRecipeInfosCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeLike")))
@interface MiamCoreRecipeLike : MiamCoreRecord <MiamCoreBasketPreviewEntry>
- (instancetype)initWithId:(NSString * _Nullable)id attributes:(MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable)attributes json_relationships:(MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable)json_relationships includedRecords:(NSArray<MiamCoreRecord *> *)includedRecords __attribute__((swift_name("init(id:attributes:json_relationships:includedRecords:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreRecipeLikeCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRecipeLikeAttributes * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRecipeLikeRelationships * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRecipeLike *)doCopyId:(NSString * _Nullable)id attributes:(MiamCoreRecipeLikeAttributes * _Nullable)attributes relationships:(MiamCoreRecipeLikeRelationships * _Nullable)relationships __attribute__((swift_name("doCopy(id:attributes:relationships:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MiamCoreRecipeLike *)toggle __attribute__((swift_name("toggle()")));
@property (readonly) MiamCoreRecipeLikeAttributes * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL exists __attribute__((swift_name("exists")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) BOOL isLiked __attribute__((swift_name("isLiked")));
@property (readonly) MiamCoreRecipeLikeRelationships * _Nullable relationships __attribute__((swift_name("relationships")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeLike.Companion")))
@interface MiamCoreRecipeLikeCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreRecipeLikeCompanion *shared __attribute__((swift_name("shared")));
- (MiamCoreRecipeLike *)createDefaultRecipeId:(NSString *)recipeId __attribute__((swift_name("createDefault(recipeId:)")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeLikeAttributes")))
@interface MiamCoreRecipeLikeAttributes : MiamCoreAttributes
- (instancetype)initWithIsPast:(BOOL)isPast recipeId:(int32_t)recipeId __attribute__((swift_name("init(isPast:recipeId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreRecipeLikeAttributesCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRecipeLikeAttributes *)doCopyIsPast:(BOOL)isPast recipeId:(int32_t)recipeId __attribute__((swift_name("doCopy(isPast:recipeId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isPast __attribute__((swift_name("isPast")));
@property (readonly) int32_t recipeId __attribute__((swift_name("recipeId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeLikeAttributes.Companion")))
@interface MiamCoreRecipeLikeAttributesCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreRecipeLikeAttributesCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeLikeRelationships")))
@interface MiamCoreRecipeLikeRelationships : MiamCoreRelationships
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MiamCoreRecipeLikeRelationshipsCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MiamCoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeLikeRelationships.Companion")))
@interface MiamCoreRecipeLikeRelationshipsCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreRecipeLikeRelationshipsCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipePlan")))
@interface MiamCoreRecipePlan : MiamCoreBase
- (instancetype)initWithMaxRecipes:(int32_t)maxRecipes __attribute__((swift_name("init(maxRecipes:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreRecipePlanCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRecipePlan *)doCopyMaxRecipes:(int32_t)maxRecipes __attribute__((swift_name("doCopy(maxRecipes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t maxRecipes __attribute__((swift_name("maxRecipes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipePlan.Companion")))
@interface MiamCoreRecipePlanCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreRecipePlanCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/miam/kmmMiamCore/miam_core/model/RecipeRelationshipListSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeRelationshipList")))
@interface MiamCoreRecipeRelationshipList : MiamCoreRelationshipList
- (instancetype)initWithData:(NSArray<MiamCoreRecipe *> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreRecipeRelationshipListCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MiamCoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
@property NSArray<MiamCoreRecipe *> *data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeRelationshipList.Companion")))
@interface MiamCoreRecipeRelationshipListCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreRecipeRelationshipListCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializer(forClass=NormalClass(value=com/miam/kmmMiamCore/miam_core/model/RecipeRelationshipList))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeRelationshipListSerializer")))
@interface MiamCoreRecipeRelationshipListSerializer : MiamCoreBase <MiamCoreKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)recipeRelationshipListSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreRecipeRelationshipListSerializer *shared __attribute__((swift_name("shared")));
- (MiamCoreRecipeRelationshipList *)deserializeDecoder:(id<MiamCoreKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<MiamCoreKotlinx_serialization_coreEncoder>)encoder value:(MiamCoreRecipeRelationshipList *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MiamCoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeRelationships")))
@interface MiamCoreRecipeRelationships : MiamCoreRelationships
- (instancetype)initWithIngredients:(MiamCoreIngredientListRelationship * _Nullable)ingredients sponsors:(MiamCoreSponsorListRelationship * _Nullable)sponsors recipeSteps:(MiamCoreRecipeStepListRelationship * _Nullable)recipeSteps __attribute__((swift_name("init(ingredients:sponsors:recipeSteps:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreRecipeRelationshipsCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MiamCoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
- (MiamCoreIngredientListRelationship * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreSponsorListRelationship * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRecipeStepListRelationship * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRecipeRelationships *)doCopyIngredients:(MiamCoreIngredientListRelationship * _Nullable)ingredients sponsors:(MiamCoreSponsorListRelationship * _Nullable)sponsors recipeSteps:(MiamCoreRecipeStepListRelationship * _Nullable)recipeSteps __attribute__((swift_name("doCopy(ingredients:sponsors:recipeSteps:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property MiamCoreIngredientListRelationship * _Nullable ingredients __attribute__((swift_name("ingredients")));
@property MiamCoreRecipeStepListRelationship * _Nullable recipeSteps __attribute__((swift_name("recipeSteps")));
@property MiamCoreSponsorListRelationship * _Nullable sponsors __attribute__((swift_name("sponsors")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeRelationships.Companion")))
@interface MiamCoreRecipeRelationshipsCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreRecipeRelationshipsCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeStep")))
@interface MiamCoreRecipeStep : MiamCoreRecord
- (instancetype)initWithId:(NSString *)id attributes:(MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable)attributes json_relationships:(MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable)json_relationships includedRecords:(NSArray<MiamCoreRecord *> *)includedRecords __attribute__((swift_name("init(id:attributes:json_relationships:includedRecords:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreRecipeStepCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRecipeStepAttributes * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRecipeStepRelationships * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRecipeStep *)doCopyId:(NSString *)id attributes:(MiamCoreRecipeStepAttributes * _Nullable)attributes relationships:(MiamCoreRecipeStepRelationships * _Nullable)relationships __attribute__((swift_name("doCopy(id:attributes:relationships:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreRecipeStepAttributes * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) MiamCoreRecipeStepRelationships * _Nullable relationships __attribute__((swift_name("relationships")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeStep.Companion")))
@interface MiamCoreRecipeStepCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreRecipeStepCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeStepAttributes")))
@interface MiamCoreRecipeStepAttributes : MiamCoreAttributes
- (instancetype)initWithStepNumber:(int32_t)stepNumber title:(NSString * _Nullable)title stepDescription:(NSString * _Nullable)stepDescription mediaUrl:(NSString * _Nullable)mediaUrl __attribute__((swift_name("init(stepNumber:title:stepDescription:mediaUrl:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreRecipeStepAttributesCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRecipeStepAttributes *)doCopyStepNumber:(int32_t)stepNumber title:(NSString * _Nullable)title stepDescription:(NSString * _Nullable)stepDescription mediaUrl:(NSString * _Nullable)mediaUrl __attribute__((swift_name("doCopy(stepNumber:title:stepDescription:mediaUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable mediaUrl __attribute__((swift_name("mediaUrl")));
@property (readonly) NSString * _Nullable stepDescription __attribute__((swift_name("stepDescription")));
@property (readonly) int32_t stepNumber __attribute__((swift_name("stepNumber")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeStepAttributes.Companion")))
@interface MiamCoreRecipeStepAttributesCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreRecipeStepAttributesCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializer(forClass=NormalClass(value=com/miam/kmmMiamCore/miam_core/model/RecipeStepListRelationship))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeStepListListSerializer")))
@interface MiamCoreRecipeStepListListSerializer : MiamCoreBase <MiamCoreKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)recipeStepListListSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreRecipeStepListListSerializer *shared __attribute__((swift_name("shared")));
- (MiamCoreRecipeStepListRelationship *)deserializeDecoder:(id<MiamCoreKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<MiamCoreKotlinx_serialization_coreEncoder>)encoder value:(MiamCoreRecipeStepListRelationship *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MiamCoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/miam/kmmMiamCore/miam_core/model/RecipeStepListListSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeStepListRelationship")))
@interface MiamCoreRecipeStepListRelationship : MiamCoreRelationshipList
- (instancetype)initWithData:(NSArray<MiamCoreRecipeStep *> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreRecipeStepListRelationshipCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MiamCoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
@property NSArray<MiamCoreRecipeStep *> *data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeStepListRelationship.Companion")))
@interface MiamCoreRecipeStepListRelationshipCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreRecipeStepListRelationshipCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeStepRelationships")))
@interface MiamCoreRecipeStepRelationships : MiamCoreRelationships
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MiamCoreRecipeStepRelationshipsCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MiamCoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeStepRelationships.Companion")))
@interface MiamCoreRecipeStepRelationshipsCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreRecipeStepRelationshipsCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Record.Companion")))
@interface MiamCoreRecordCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreRecordCompanion *shared __attribute__((swift_name("shared")));
- (MiamCoreRecord * _Nullable)fromStringStr:(NSString *)str __attribute__((swift_name("fromString(str:)")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MiamCoreKotlinArray<id<MiamCoreKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecordCounterWrapper")))
@interface MiamCoreRecordCounterWrapper : MiamCoreBase
- (instancetype)initWithLinks:(MiamCoreRecordLink *)links data:(MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable)data __attribute__((swift_name("init(links:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreRecordCounterWrapperCompanion *companion __attribute__((swift_name("companion")));
- (MiamCoreRecordLink *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRecordCounterWrapper *)doCopyLinks:(MiamCoreRecordLink *)links data:(MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable)data __attribute__((swift_name("doCopy(links:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (int32_t)getCount __attribute__((swift_name("getCount()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable data __attribute__((swift_name("data")));
@property MiamCoreRecordLink *links __attribute__((swift_name("links")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecordCounterWrapper.Companion")))
@interface MiamCoreRecordCounterWrapperCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreRecordCounterWrapperCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecordLink")))
@interface MiamCoreRecordLink : MiamCoreBase
- (instancetype)initWithFirst:(NSString *)first last:(NSString *)last __attribute__((swift_name("init(first:last:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreRecordLinkCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRecordLink *)doCopyFirst:(NSString *)first last:(NSString *)last __attribute__((swift_name("doCopy(first:last:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *first __attribute__((swift_name("first")));
@property (readonly) NSString *last __attribute__((swift_name("last")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecordLink.Companion")))
@interface MiamCoreRecordLinkCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreRecordLinkCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecordWrapper")))
@interface MiamCoreRecordWrapper : MiamCoreBase
- (instancetype)initWithData:(MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable)data included:(MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable)included __attribute__((swift_name("init(data:included:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreRecordWrapperCompanion *companion __attribute__((swift_name("companion")));
- (MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRecordWrapper *)doCopyData:(MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable)data included:(MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable)included __attribute__((swift_name("doCopy(data:included:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (MiamCoreRecord *)toRecord __attribute__((swift_name("toRecord()")));
- (NSArray<MiamCoreRecord *> *)toRecords __attribute__((swift_name("toRecords()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable data __attribute__((swift_name("data")));
@property MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable included __attribute__((swift_name("included")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecordWrapper.Companion")))
@interface MiamCoreRecordWrapperCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreRecordWrapperCompanion *shared __attribute__((swift_name("shared")));
- (MiamCoreRecordWrapper *)fromRecordRecord:(MiamCoreRecord *)record __attribute__((swift_name("fromRecord(record:)")));
- (MiamCoreRecordWrapper *)fromRecordsRecords:(NSArray<MiamCoreRecord *> *)records __attribute__((swift_name("fromRecords(records:)")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Relationship.Companion")))
@interface MiamCoreRelationshipCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreRelationshipCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MiamCoreKotlinArray<id<MiamCoreKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RelationshipList.Companion")))
@interface MiamCoreRelationshipListCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreRelationshipListCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MiamCoreKotlinArray<id<MiamCoreKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Relationships.Companion")))
@interface MiamCoreRelationshipsCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreRelationshipsCompanion *shared __attribute__((swift_name("shared")));
- (MiamCoreKotlinx_serialization_jsonJsonElement *)filterEmptyRelationshipsRelationships:(MiamCoreKotlinx_serialization_jsonJsonElement *)relationships __attribute__((swift_name("filterEmptyRelationships(relationships:)")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MiamCoreKotlinArray<id<MiamCoreKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RetailerProduct")))
@interface MiamCoreRetailerProduct : MiamCoreBase
- (instancetype)initWithRetailerId:(NSString *)retailerId quantity:(int32_t)quantity name:(NSString * _Nullable)name productIdentifier:(NSString * _Nullable)productIdentifier __attribute__((swift_name("init(retailerId:quantity:name:productIdentifier:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRetailerProduct *)doCopyRetailerId:(NSString *)retailerId quantity:(int32_t)quantity name:(NSString * _Nullable)name productIdentifier:(NSString * _Nullable)productIdentifier __attribute__((swift_name("doCopy(retailerId:quantity:name:productIdentifier:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable productIdentifier __attribute__((swift_name("productIdentifier")));
@property (readonly) int32_t quantity __attribute__((swift_name("quantity")));
@property (readonly) NSString *retailerId __attribute__((swift_name("retailerId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sponsor")))
@interface MiamCoreSponsor : MiamCoreRecord
- (instancetype)initWithId:(NSString *)id attributes:(MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable)attributes json_relationships:(MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable)json_relationships includedRecords:(NSArray<MiamCoreRecord *> *)includedRecords __attribute__((swift_name("init(id:attributes:json_relationships:includedRecords:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreSponsorCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreSponsorAttributes * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreSponsorRelationships * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreSponsor *)doCopyId:(NSString *)id attributes:(MiamCoreSponsorAttributes * _Nullable)attributes relationships:(MiamCoreSponsorRelationships * _Nullable)relationships __attribute__((swift_name("doCopy(id:attributes:relationships:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreSponsorAttributes * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) MiamCoreSponsorRelationships * _Nullable relationships __attribute__((swift_name("relationships")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sponsor.Companion")))
@interface MiamCoreSponsorCompanion : MiamCoreAttributesField
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithT:(id<MiamCoreKotlinKClass>)t __attribute__((swift_name("init(t:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreSponsorCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorAttributes")))
@interface MiamCoreSponsorAttributes : MiamCoreAttributes
- (instancetype)initWithName:(NSString *)name logoUrl:(NSString *)logoUrl __attribute__((swift_name("init(name:logoUrl:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreSponsorAttributesCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreSponsorAttributes *)doCopyName:(NSString *)name logoUrl:(NSString *)logoUrl __attribute__((swift_name("doCopy(name:logoUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *logoUrl __attribute__((swift_name("logoUrl")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorAttributes.Companion")))
@interface MiamCoreSponsorAttributesCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreSponsorAttributesCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlock")))
@interface MiamCoreSponsorBlock : MiamCoreRecord
- (instancetype)initWithId:(NSString *)id attributes:(MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable)attributes json_relationships:(MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable)json_relationships includedRecords:(NSArray<MiamCoreRecord *> *)includedRecords __attribute__((swift_name("init(id:attributes:json_relationships:includedRecords:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreSponsorBlockCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreSponsorBlockAttributes * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreSponsorBlockRelationships * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreSponsorBlock *)doCopyId:(NSString *)id attributes:(MiamCoreSponsorBlockAttributes * _Nullable)attributes relationships:(MiamCoreSponsorBlockRelationships * _Nullable)relationships __attribute__((swift_name("doCopy(id:attributes:relationships:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreSponsorBlockAttributes * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) MiamCoreSponsorBlockRelationships * _Nullable relationships __attribute__((swift_name("relationships")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlock.Companion")))
@interface MiamCoreSponsorBlockCompanion : MiamCoreAttributesField
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithT:(id<MiamCoreKotlinKClass>)t __attribute__((swift_name("init(t:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreSponsorBlockCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlockAttributes")))
@interface MiamCoreSponsorBlockAttributes : MiamCoreAttributes
- (instancetype)initWithPosition:(int32_t)position height:(int32_t)height width:(int32_t)width videoUrl:(NSString * _Nullable)videoUrl pictureUrl:(NSString * _Nullable)pictureUrl content:(NSString * _Nullable)content backgroundColor:(NSString * _Nullable)backgroundColor __attribute__((swift_name("init(position:height:width:videoUrl:pictureUrl:content:backgroundColor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreSponsorBlockAttributesCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreSponsorBlockAttributes *)doCopyPosition:(int32_t)position height:(int32_t)height width:(int32_t)width videoUrl:(NSString * _Nullable)videoUrl pictureUrl:(NSString * _Nullable)pictureUrl content:(NSString * _Nullable)content backgroundColor:(NSString * _Nullable)backgroundColor __attribute__((swift_name("doCopy(position:height:width:videoUrl:pictureUrl:content:backgroundColor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable backgroundColor __attribute__((swift_name("backgroundColor")));
@property (readonly) NSString * _Nullable content __attribute__((swift_name("content")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) NSString * _Nullable pictureUrl __attribute__((swift_name("pictureUrl")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@property (readonly) NSString * _Nullable videoUrl __attribute__((swift_name("videoUrl")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlockAttributes.Companion")))
@interface MiamCoreSponsorBlockAttributesCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreSponsorBlockAttributesCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlockRelationshipName")))
@interface MiamCoreSponsorBlockRelationshipName : MiamCoreKotlinEnum<MiamCoreSponsorBlockRelationshipName *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MiamCoreSponsorBlockRelationshipName *sponsorBlockType __attribute__((swift_name("sponsorBlockType")));
+ (MiamCoreKotlinArray<MiamCoreSponsorBlockRelationshipName *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *relationshipName __attribute__((swift_name("relationshipName")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlockRelationships")))
@interface MiamCoreSponsorBlockRelationships : MiamCoreRelationships
- (instancetype)initWithSponsorBlockType:(MiamCoreSponsorBlockTypeRelationship * _Nullable)sponsorBlockType __attribute__((swift_name("init(sponsorBlockType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreSponsorBlockRelationshipsCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MiamCoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
@property MiamCoreSponsorBlockTypeRelationship * _Nullable sponsorBlockType __attribute__((swift_name("sponsorBlockType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlockRelationships.Companion")))
@interface MiamCoreSponsorBlockRelationshipsCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreSponsorBlockRelationshipsCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlockType")))
@interface MiamCoreSponsorBlockType : MiamCoreRecord
- (instancetype)initWithId:(NSString *)id attributes:(MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable)attributes json_relationships:(MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable)json_relationships includedRecords:(NSArray<MiamCoreRecord *> *)includedRecords __attribute__((swift_name("init(id:attributes:json_relationships:includedRecords:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreSponsorBlockTypeCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreSponsorBlockTypeAttributes * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreSponsorBlockTypeRelationships * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreSponsorBlockType *)doCopyId:(NSString *)id attributes:(MiamCoreSponsorBlockTypeAttributes * _Nullable)attributes relationships:(MiamCoreSponsorBlockTypeRelationships * _Nullable)relationships __attribute__((swift_name("doCopy(id:attributes:relationships:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreSponsorBlockTypeAttributes * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) MiamCoreSponsorBlockTypeRelationships * _Nullable relationships __attribute__((swift_name("relationships")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlockType.Companion")))
@interface MiamCoreSponsorBlockTypeCompanion : MiamCoreAttributesField
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithT:(id<MiamCoreKotlinKClass>)t __attribute__((swift_name("init(t:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreSponsorBlockTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlockTypeAttributes")))
@interface MiamCoreSponsorBlockTypeAttributes : MiamCoreAttributes
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreSponsorBlockTypeAttributesCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreSponsorBlockTypeAttributes *)doCopyName:(NSString *)name __attribute__((swift_name("doCopy(name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlockTypeAttributes.Companion")))
@interface MiamCoreSponsorBlockTypeAttributesCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreSponsorBlockTypeAttributesCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/miam/kmmMiamCore/miam_core/model/SponsorBlockTypeSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlockTypeRelationship")))
@interface MiamCoreSponsorBlockTypeRelationship : MiamCoreRelationship
- (instancetype)initWithData:(MiamCoreSponsorBlockType *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreSponsorBlockTypeRelationshipCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MiamCoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
@property MiamCoreSponsorBlockType *data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlockTypeRelationship.Companion")))
@interface MiamCoreSponsorBlockTypeRelationshipCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreSponsorBlockTypeRelationshipCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlockTypeRelationships")))
@interface MiamCoreSponsorBlockTypeRelationships : MiamCoreRelationships
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sponsorBlockTypeRelationships __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreSponsorBlockTypeRelationships *shared __attribute__((swift_name("shared")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MiamCoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MiamCoreKotlinArray<id<MiamCoreKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializer(forClass=NormalClass(value=com/miam/kmmMiamCore/miam_core/model/SponsorBlockTypeRelationship))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlockTypeSerializer")))
@interface MiamCoreSponsorBlockTypeSerializer : MiamCoreBase <MiamCoreKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sponsorBlockTypeSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreSponsorBlockTypeSerializer *shared __attribute__((swift_name("shared")));
- (MiamCoreSponsorBlockTypeRelationship *)deserializeDecoder:(id<MiamCoreKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<MiamCoreKotlinx_serialization_coreEncoder>)encoder value:(MiamCoreSponsorBlockTypeRelationship *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MiamCoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlockTypesList")))
@interface MiamCoreSponsorBlockTypesList : MiamCoreKotlinEnum<MiamCoreSponsorBlockTypesList *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MiamCoreSponsorBlockTypesList *title __attribute__((swift_name("title")));
@property (class, readonly) MiamCoreSponsorBlockTypesList *smallTitle __attribute__((swift_name("smallTitle")));
@property (class, readonly) MiamCoreSponsorBlockTypesList *picture __attribute__((swift_name("picture")));
@property (class, readonly) MiamCoreSponsorBlockTypesList *smallPicture __attribute__((swift_name("smallPicture")));
@property (class, readonly) MiamCoreSponsorBlockTypesList *imageWithText __attribute__((swift_name("imageWithText")));
@property (class, readonly) MiamCoreSponsorBlockTypesList *imageAndText __attribute__((swift_name("imageAndText")));
@property (class, readonly) MiamCoreSponsorBlockTypesList *textAndImage __attribute__((swift_name("textAndImage")));
@property (class, readonly) MiamCoreSponsorBlockTypesList *text __attribute__((swift_name("text")));
@property (class, readonly) MiamCoreSponsorBlockTypesList *smallText __attribute__((swift_name("smallText")));
@property (class, readonly) MiamCoreSponsorBlockTypesList *video __attribute__((swift_name("video")));
+ (MiamCoreKotlinArray<MiamCoreSponsorBlockTypesList *> *)values __attribute__((swift_name("values()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/miam/kmmMiamCore/miam_core/model/SponsorBlocksSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlocksRelationships")))
@interface MiamCoreSponsorBlocksRelationships : MiamCoreRelationshipList
- (instancetype)initWithData:(NSArray<MiamCoreSponsorBlock *> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreSponsorBlocksRelationshipsCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MiamCoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
@property NSArray<MiamCoreSponsorBlock *> *data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlocksRelationships.Companion")))
@interface MiamCoreSponsorBlocksRelationshipsCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreSponsorBlocksRelationshipsCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializer(forClass=NormalClass(value=com/miam/kmmMiamCore/miam_core/model/SponsorBlocksRelationships))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlocksSerializer")))
@interface MiamCoreSponsorBlocksSerializer : MiamCoreBase <MiamCoreKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sponsorBlocksSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreSponsorBlocksSerializer *shared __attribute__((swift_name("shared")));
- (MiamCoreSponsorBlocksRelationships *)deserializeDecoder:(id<MiamCoreKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<MiamCoreKotlinx_serialization_coreEncoder>)encoder value:(MiamCoreSponsorBlocksRelationships *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MiamCoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/miam/kmmMiamCore/miam_core/model/SponsorListSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorListRelationship")))
@interface MiamCoreSponsorListRelationship : MiamCoreRelationshipList
- (instancetype)initWithData:(NSArray<MiamCoreSponsor *> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreSponsorListRelationshipCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MiamCoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
@property NSArray<MiamCoreSponsor *> *data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorListRelationship.Companion")))
@interface MiamCoreSponsorListRelationshipCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreSponsorListRelationshipCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializer(forClass=NormalClass(value=com/miam/kmmMiamCore/miam_core/model/SponsorListRelationship))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorListSerializer")))
@interface MiamCoreSponsorListSerializer : MiamCoreBase <MiamCoreKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sponsorListSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreSponsorListSerializer *shared __attribute__((swift_name("shared")));
- (MiamCoreSponsorListRelationship *)deserializeDecoder:(id<MiamCoreKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<MiamCoreKotlinx_serialization_coreEncoder>)encoder value:(MiamCoreSponsorListRelationship *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MiamCoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorRelationshipName")))
@interface MiamCoreSponsorRelationshipName : MiamCoreKotlinEnum<MiamCoreSponsorRelationshipName *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MiamCoreSponsorRelationshipName *sponsorBlock __attribute__((swift_name("sponsorBlock")));
+ (MiamCoreKotlinArray<MiamCoreSponsorRelationshipName *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *relationshipName __attribute__((swift_name("relationshipName")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorRelationships")))
@interface MiamCoreSponsorRelationships : MiamCoreRelationships
- (instancetype)initWithSponsorBlocks:(MiamCoreSponsorBlocksRelationships * _Nullable)sponsorBlocks __attribute__((swift_name("init(sponsorBlocks:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreSponsorRelationshipsCompanion *companion __attribute__((swift_name("companion")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MiamCoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
@property MiamCoreSponsorBlocksRelationships * _Nullable sponsorBlocks __attribute__((swift_name("sponsorBlocks")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorRelationships.Companion")))
@interface MiamCoreSponsorRelationshipsCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreSponsorRelationshipsCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SuggestionsCriteria")))
@interface MiamCoreSuggestionsCriteria : MiamCoreBase
- (instancetype)initWithShelfIngredientsIds:(NSArray<NSString *> * _Nullable)shelfIngredientsIds currentIngredientsIds:(NSArray<NSString *> * _Nullable)currentIngredientsIds basketIngredientsIds:(NSArray<NSString *> * _Nullable)basketIngredientsIds groupId:(NSString * _Nullable)groupId __attribute__((swift_name("init(shelfIngredientsIds:currentIngredientsIds:basketIngredientsIds:groupId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreSuggestionsCriteriaCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<NSString *> * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<NSString *> * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<NSString *> * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreSuggestionsCriteria *)doCopyShelfIngredientsIds:(NSArray<NSString *> * _Nullable)shelfIngredientsIds currentIngredientsIds:(NSArray<NSString *> * _Nullable)currentIngredientsIds basketIngredientsIds:(NSArray<NSString *> * _Nullable)basketIngredientsIds groupId:(NSString * _Nullable)groupId __attribute__((swift_name("doCopy(shelfIngredientsIds:currentIngredientsIds:basketIngredientsIds:groupId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> * _Nullable basketIngredientsIds __attribute__((swift_name("basketIngredientsIds")));
@property (readonly) NSArray<NSString *> * _Nullable currentIngredientsIds __attribute__((swift_name("currentIngredientsIds")));
@property (readonly) NSString * _Nullable groupId __attribute__((swift_name("groupId")));
@property (readonly) NSArray<NSString *> * _Nullable shelfIngredientsIds __attribute__((swift_name("shelfIngredientsIds")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SuggestionsCriteria.Companion")))
@interface MiamCoreSuggestionsCriteriaCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreSuggestionsCriteriaCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Supplier")))
@interface MiamCoreSupplier : MiamCoreRecord
- (instancetype)initWithId:(NSString *)id attributes:(MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable)attributes json_relationships:(MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable)json_relationships includedRecords:(NSArray<MiamCoreRecord *> *)includedRecords __attribute__((swift_name("init(id:attributes:json_relationships:includedRecords:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreSupplierCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreSupplierAttributes * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreSupplierRelationships * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreSupplier *)doCopyId:(NSString *)id attributes:(MiamCoreSupplierAttributes * _Nullable)attributes relationships:(MiamCoreSupplierRelationships * _Nullable)relationships __attribute__((swift_name("doCopy(id:attributes:relationships:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreSupplierAttributes * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) MiamCoreSupplierRelationships * _Nullable relationships __attribute__((swift_name("relationships")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Supplier.Companion")))
@interface MiamCoreSupplierCompanion : MiamCoreAttributesField
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithT:(id<MiamCoreKotlinKClass>)t __attribute__((swift_name("init(t:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreSupplierCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SupplierAttributes")))
@interface MiamCoreSupplierAttributes : MiamCoreAttributes
- (instancetype)initWithName:(NSString * _Nullable)name languageId:(NSString * _Nullable)languageId __attribute__((swift_name("init(name:languageId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreSupplierAttributesCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreSupplierAttributes *)doCopyName:(NSString * _Nullable)name languageId:(NSString * _Nullable)languageId __attribute__((swift_name("doCopy(name:languageId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable languageId __attribute__((swift_name("languageId")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SupplierAttributes.Companion")))
@interface MiamCoreSupplierAttributesCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreSupplierAttributesCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SupplierNotificationWrapper")))
@interface MiamCoreSupplierNotificationWrapper : MiamCoreBase
- (instancetype)initWithToken:(NSString *)token status:(NSString *)status price:(NSString * _Nullable)price __attribute__((swift_name("init(token:status:price:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreSupplierNotificationWrapperCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreSupplierNotificationWrapper *)doCopyToken:(NSString *)token status:(NSString *)status price:(NSString * _Nullable)price __attribute__((swift_name("doCopy(token:status:price:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable price __attribute__((swift_name("price")));
@property (readonly) NSString *status __attribute__((swift_name("status")));
@property (readonly) NSString *token __attribute__((swift_name("token")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SupplierNotificationWrapper.Companion")))
@interface MiamCoreSupplierNotificationWrapperCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreSupplierNotificationWrapperCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SupplierRelationships")))
@interface MiamCoreSupplierRelationships : MiamCoreRelationships
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)supplierRelationships __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreSupplierRelationships *shared __attribute__((swift_name("shared")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MiamCoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MiamCoreKotlinArray<id<MiamCoreKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Tag")))
@interface MiamCoreTag : MiamCoreRecord
- (instancetype)initWithId:(NSString *)id attributes:(MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable)attributes json_relationships:(MiamCoreKotlinx_serialization_jsonJsonElement * _Nullable)json_relationships includedRecords:(NSArray<MiamCoreRecord *> *)includedRecords __attribute__((swift_name("init(id:attributes:json_relationships:includedRecords:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreTagCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreTagAttributes * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreTagRelationships * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreTag *)doCopyId:(NSString *)id attributes:(MiamCoreTagAttributes * _Nullable)attributes relationships:(MiamCoreTagRelationships * _Nullable)relationships __attribute__((swift_name("doCopy(id:attributes:relationships:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreTagAttributes * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) MiamCoreTagRelationships * _Nullable relationships __attribute__((swift_name("relationships")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Tag.Companion")))
@interface MiamCoreTagCompanion : MiamCoreAttributesField
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithT:(id<MiamCoreKotlinKClass>)t __attribute__((swift_name("init(t:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreTagCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TagAttributes")))
@interface MiamCoreTagAttributes : MiamCoreAttributes
- (instancetype)initWithTagTypeId:(NSString *)tagTypeId name:(NSString *)name iconUrl:(NSString * _Nullable)iconUrl pictureUrl:(NSString * _Nullable)pictureUrl __attribute__((swift_name("init(tagTypeId:name:iconUrl:pictureUrl:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreTagAttributesCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreTagAttributes *)doCopyTagTypeId:(NSString *)tagTypeId name:(NSString *)name iconUrl:(NSString * _Nullable)iconUrl pictureUrl:(NSString * _Nullable)pictureUrl __attribute__((swift_name("doCopy(tagTypeId:name:iconUrl:pictureUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable iconUrl __attribute__((swift_name("iconUrl")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable pictureUrl __attribute__((swift_name("pictureUrl")));
@property (readonly) NSString *tagTypeId __attribute__((swift_name("tagTypeId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TagAttributes.Companion")))
@interface MiamCoreTagAttributesCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreTagAttributesCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TagRelationships")))
@interface MiamCoreTagRelationships : MiamCoreRelationships
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)tagRelationships __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreTagRelationships *shared __attribute__((swift_name("shared")));
- (void)buildFromIncludedIncludedRecords:(NSArray<MiamCoreRecord *> *)includedRecords __attribute__((swift_name("buildFromIncluded(includedRecords:)")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MiamCoreKotlinArray<id<MiamCoreKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TagTypes")))
@interface MiamCoreTagTypes : MiamCoreKotlinEnum<MiamCoreTagTypes *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MiamCoreTagTypes *diet __attribute__((swift_name("diet")));
@property (class, readonly) MiamCoreTagTypes *ingredient __attribute__((swift_name("ingredient")));
@property (class, readonly) MiamCoreTagTypes *equipment __attribute__((swift_name("equipment")));
+ (MiamCoreKotlinArray<MiamCoreTagTypes *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketFakeFactory")))
@interface MiamCoreBasketFakeFactory : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)basketFakeFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreBasketFakeFactory *shared __attribute__((swift_name("shared")));
- (MiamCoreBasket *)createBasketId:(NSString *)id attributes:(MiamCoreBasketAttributes *)attributes relationships:(MiamCoreBasketRelationships * _Nullable)relationships __attribute__((swift_name("createBasket(id:attributes:relationships:)")));
- (MiamCoreBasketAttributes *)createBasketAttributes __attribute__((swift_name("createBasketAttributes()")));
- (MiamCoreBasketRelationships *)createBasketRelationships __attribute__((swift_name("createBasketRelationships()")));
- (MiamCoreBasketEntry *)createEntryId:(NSString *)id attributes:(MiamCoreBasketEntryAttributes * _Nullable)attributes relationships:(MiamCoreBasketEntryRelationships * _Nullable)relationships __attribute__((swift_name("createEntry(id:attributes:relationships:)")));
- (MiamCoreBasketEntryAttributes *)createEntryAttributes __attribute__((swift_name("createEntryAttributes()")));
- (MiamCoreBasketEntryRelationships *)createEntryRelationships __attribute__((swift_name("createEntryRelationships()")));
@property (readonly) NSString *FAKE_BASKET_ID __attribute__((swift_name("FAKE_BASKET_ID")));
@property (readonly) NSString *FAKE_ENTRY_ID __attribute__((swift_name("FAKE_ENTRY_ID")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GroceriesEntryFakeFactory")))
@interface MiamCoreGroceriesEntryFakeFactory : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)groceriesEntryFakeFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreGroceriesEntryFakeFactory *shared __attribute__((swift_name("shared")));
- (MiamCoreGroceriesEntry *)createId:(NSString *)id attributes:(MiamCoreGroceriesEntryAttributes * _Nullable)attributes relationships:(MiamCoreGroceriesEntryRelationships * _Nullable)relationships __attribute__((swift_name("create(id:attributes:relationships:)")));
- (MiamCoreGroceriesEntryAttributes *)createGroceriesEntryAttributesName:(NSString *)name __attribute__((swift_name("createGroceriesEntryAttributes(name:)")));
@property (readonly) NSString *FAKE_ID __attribute__((swift_name("FAKE_ID")));
@property (readonly) NSString *FAKE_NAME __attribute__((swift_name("FAKE_NAME")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GroceriesListFakeFactory")))
@interface MiamCoreGroceriesListFakeFactory : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)groceriesListFakeFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreGroceriesListFakeFactory *shared __attribute__((swift_name("shared")));
- (MiamCoreGroceriesList *)createId:(NSString *)id attributes:(MiamCoreGroceriesListAttributes * _Nullable)attributes relationships:(MiamCoreGroceriesListRelationships * _Nullable)relationships __attribute__((swift_name("create(id:attributes:relationships:)")));
- (MiamCoreGroceriesListAttributes *)createAttributes __attribute__((swift_name("createAttributes()")));
@property (readonly) NSString *FAKE_ID __attribute__((swift_name("FAKE_ID")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IngredientFakeFactory")))
@interface MiamCoreIngredientFakeFactory : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)ingredientFakeFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreIngredientFakeFactory *shared __attribute__((swift_name("shared")));
- (MiamCoreIngredient *)createId:(NSString *)id attributes:(MiamCoreIngredientAttributes * _Nullable)attributes relationships:(MiamCoreIngredientRelationships * _Nullable)relationships __attribute__((swift_name("create(id:attributes:relationships:)")));
- (MiamCoreIngredientAttributes *)createAttributesName:(NSString *)name __attribute__((swift_name("createAttributes(name:)")));
@property (readonly) NSString *FAKE_ID __attribute__((swift_name("FAKE_ID")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItemFakeFactory")))
@interface MiamCoreItemFakeFactory : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)itemFakeFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreItemFakeFactory *shared __attribute__((swift_name("shared")));
- (MiamCoreItem *)createId:(NSString *)id attributes:(MiamCoreItemAttributes * _Nullable)attributes relationships:(MiamCoreItemRelationships * _Nullable)relationships __attribute__((swift_name("create(id:attributes:relationships:)")));
- (MiamCoreItemAttributes *)createAttributesName:(NSString *)name __attribute__((swift_name("createAttributes(name:)")));
@property (readonly) NSString *FAKE_ID __attribute__((swift_name("FAKE_ID")));
@property (readonly) NSString *FAKE_NAME __attribute__((swift_name("FAKE_NAME")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PackageFakeFactory")))
@interface MiamCorePackageFakeFactory : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)packageFakeFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCorePackageFakeFactory *shared __attribute__((swift_name("shared")));
- (MiamCorePackage *)createId:(NSString *)id attributes:(MiamCorePackageAttributes * _Nullable)attributes relationships:(MiamCorePackageRelationships * _Nullable)relationships __attribute__((swift_name("create(id:attributes:relationships:)")));
- (MiamCorePackageAttributes *)createAttributesTitle:(NSString *)title __attribute__((swift_name("createAttributes(title:)")));
@property (readonly) NSString *FAKE_ID __attribute__((swift_name("FAKE_ID")));
@property (readonly) NSString *FAKE_TITLE __attribute__((swift_name("FAKE_TITLE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PointOfSaleFakeFactory")))
@interface MiamCorePointOfSaleFakeFactory : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)pointOfSaleFakeFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCorePointOfSaleFakeFactory *shared __attribute__((swift_name("shared")));
- (MiamCorePointOfSale *)createId:(NSString *)id __attribute__((swift_name("create(id:)")));
@property (readonly) NSString *FAKE_ID __attribute__((swift_name("FAKE_ID")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeFakeFactory")))
@interface MiamCoreRecipeFakeFactory : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)recipeFakeFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreRecipeFakeFactory *shared __attribute__((swift_name("shared")));
- (MiamCoreRecipe *)createId:(NSString *)id attributes:(MiamCoreRecipeAttributes * _Nullable)attributes relationships:(MiamCoreRecipeRelationships * _Nullable)relationships __attribute__((swift_name("create(id:attributes:relationships:)")));
- (MiamCoreRecipeAttributes *)createAdvancedAttributes __attribute__((swift_name("createAdvancedAttributes()")));
- (MiamCoreRecipeAttributes *)createAttributesTitle:(NSString *)title mediaUrl:(NSString *)mediaUrl __attribute__((swift_name("createAttributes(title:mediaUrl:)")));
- (MiamCoreRecipeRelationships *)createRelationshipsIngredients:(MiamCoreIngredientListRelationship *)ingredients __attribute__((swift_name("createRelationships(ingredients:)")));
@property (readonly) NSString *FAKE_ID __attribute__((swift_name("FAKE_ID")));
@property (readonly) NSString *FAKE_TITLE __attribute__((swift_name("FAKE_TITLE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeLikeFakeFactory")))
@interface MiamCoreRecipeLikeFakeFactory : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)recipeLikeFakeFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreRecipeLikeFakeFactory *shared __attribute__((swift_name("shared")));
- (MiamCoreRecipeLike *)createId:(NSString *)id attributes:(MiamCoreRecipeLikeAttributes * _Nullable)attributes relationships:(MiamCoreRecipeLikeRelationships * _Nullable)relationships __attribute__((swift_name("create(id:attributes:relationships:)")));
- (MiamCoreRecipeLikeAttributes *)createAttributesIsPast:(BOOL)isPast recipeId:(int32_t)recipeId __attribute__((swift_name("createAttributes(isPast:recipeId:)")));
@property (readonly) NSString *FAKE_ID __attribute__((swift_name("FAKE_ID")));
@property (readonly) NSString *FAKE_TITLE __attribute__((swift_name("FAKE_TITLE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeStepFakeFactory")))
@interface MiamCoreRecipeStepFakeFactory : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)recipeStepFakeFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreRecipeStepFakeFactory *shared __attribute__((swift_name("shared")));
- (MiamCoreRecipeStep *)createId:(NSString *)id attributes:(MiamCoreRecipeStepAttributes * _Nullable)attributes relationships:(MiamCoreRecipeStepRelationships * _Nullable)relationships __attribute__((swift_name("create(id:attributes:relationships:)")));
- (MiamCoreRecipeStepAttributes *)createAttributesStepNumber:(int32_t)stepNumber title:(NSString *)title stepDescription:(NSString * _Nullable)stepDescription mediaUrl:(NSString * _Nullable)mediaUrl __attribute__((swift_name("createAttributes(stepNumber:title:stepDescription:mediaUrl:)")));
@property (readonly) NSString *FAKE_ID __attribute__((swift_name("FAKE_ID")));
@property (readonly) NSString *FAKE_TITLE __attribute__((swift_name("FAKE_TITLE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlockFakeFactory")))
@interface MiamCoreSponsorBlockFakeFactory : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sponsorBlockFakeFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreSponsorBlockFakeFactory *shared __attribute__((swift_name("shared")));
- (MiamCoreSponsorBlock *)createId:(NSString *)id attributes:(MiamCoreSponsorBlockAttributes * _Nullable)attributes relationships:(MiamCoreSponsorBlockRelationships * _Nullable)relationships __attribute__((swift_name("create(id:attributes:relationships:)")));
- (MiamCoreSponsorBlockAttributes *)createAttributesPosition:(int32_t)position height:(int32_t)height width:(int32_t)width videoUrl:(NSString * _Nullable)videoUrl pictureUrl:(NSString * _Nullable)pictureUrl content:(NSString * _Nullable)content backgroundColor:(NSString * _Nullable)backgroundColor __attribute__((swift_name("createAttributes(position:height:width:videoUrl:pictureUrl:content:backgroundColor:)")));
@property (readonly) NSString *FAKE_ID __attribute__((swift_name("FAKE_ID")));
@property (readonly) NSString *FAKE_NAME __attribute__((swift_name("FAKE_NAME")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorBlockTypeFakeFactory")))
@interface MiamCoreSponsorBlockTypeFakeFactory : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sponsorBlockTypeFakeFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreSponsorBlockTypeFakeFactory *shared __attribute__((swift_name("shared")));
- (MiamCoreSponsorBlockType *)createId:(NSString *)id attributes:(MiamCoreSponsorBlockTypeAttributes * _Nullable)attributes relationships:(MiamCoreSponsorBlockTypeRelationships * _Nullable)relationships __attribute__((swift_name("create(id:attributes:relationships:)")));
- (MiamCoreSponsorBlockTypeAttributes *)createAttributesName:(NSString *)name __attribute__((swift_name("createAttributes(name:)")));
@property (readonly) NSString *FAKE_ID __attribute__((swift_name("FAKE_ID")));
@property (readonly) NSString *FAKE_NAME __attribute__((swift_name("FAKE_NAME")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorFakeFactory")))
@interface MiamCoreSponsorFakeFactory : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sponsorFakeFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreSponsorFakeFactory *shared __attribute__((swift_name("shared")));
- (MiamCoreSponsor *)createId:(NSString *)id attributes:(MiamCoreSponsorAttributes * _Nullable)attributes relationships:(MiamCoreSponsorRelationships * _Nullable)relationships __attribute__((swift_name("create(id:attributes:relationships:)")));
- (MiamCoreSponsorAttributes *)createAttributesName:(NSString *)name logoUrl:(NSString *)logoUrl __attribute__((swift_name("createAttributes(name:logoUrl:)")));
@property (readonly) NSString *FAKE_ID __attribute__((swift_name("FAKE_ID")));
@property (readonly) NSString *FAKE_NAME __attribute__((swift_name("FAKE_NAME")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SupplierFakeFactory")))
@interface MiamCoreSupplierFakeFactory : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)supplierFakeFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreSupplierFakeFactory *shared __attribute__((swift_name("shared")));
- (MiamCoreSupplier *)createId:(NSString *)id attributes:(MiamCoreSupplierAttributes * _Nullable)attributes __attribute__((swift_name("create(id:attributes:)")));
- (MiamCoreSupplierAttributes *)createAttributes __attribute__((swift_name("createAttributes()")));
@property (readonly) NSString *FAKE_ID __attribute__((swift_name("FAKE_ID")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TagFakeFactory")))
@interface MiamCoreTagFakeFactory : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)tagFakeFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreTagFakeFactory *shared __attribute__((swift_name("shared")));
- (MiamCoreTag *)createId:(NSString *)id attributes:(MiamCoreTagAttributes * _Nullable)attributes __attribute__((swift_name("create(id:attributes:)")));
- (MiamCoreTagAttributes *)createAttributesName:(NSString *)name __attribute__((swift_name("createAttributes(name:)")));
@property (readonly) NSString *FAKE_ID __attribute__((swift_name("FAKE_ID")));
@property (readonly) NSString *FAKE_NAME __attribute__((swift_name("FAKE_NAME")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustomDurationSerializer")))
@interface MiamCoreCustomDurationSerializer : MiamCoreBase <MiamCoreKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)customDurationSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreCustomDurationSerializer *shared __attribute__((swift_name("shared")));
- (id)deserializeDecoder:(id<MiamCoreKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<MiamCoreKotlinx_serialization_coreEncoder>)encoder value:(id)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MiamCoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("BasketEntryRepository")))
@protocol MiamCoreBasketEntryRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateBasketEntryBasketEntry:(MiamCoreBasketEntry *)basketEntry completionHandler:(void (^)(MiamCoreBasketEntry * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateBasketEntry(basketEntry:completionHandler:)")));
@end

__attribute__((swift_name("BasketRepository")))
@protocol MiamCoreBasketRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFromListAndPosListId:(NSString *)listId posId:(NSString *)posId completionHandler:(void (^)(MiamCoreBasket * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getFromListAndPos(listId:posId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateBasketBasket:(MiamCoreBasket *)basket completionHandler:(void (^)(MiamCoreBasket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateBasket(basket:completionHandler:)")));
@end

__attribute__((swift_name("GroceriesEntryRepository")))
@protocol MiamCoreGroceriesEntryRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateGrocerieEntryGe:(MiamCoreGroceriesEntry *)ge completionHandler:(void (^)(MiamCoreGroceriesEntry * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateGrocerieEntry(ge:completionHandler:)")));
@end

__attribute__((swift_name("GroceriesListRepository")))
@protocol MiamCoreGroceriesListRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addRecipesGroceriesListId:(NSString *)groceriesListId recipesInfos:(NSArray<MiamCoreRecipeInfos *> *)recipesInfos completionHandler:(void (^)(MiamCoreGroceriesList * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addRecipes(groceriesListId:recipesInfos:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCurrentWithCompletionHandler:(void (^)(MiamCoreGroceriesList * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCurrent(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)resetWithCompletionHandler:(void (^)(MiamCoreGroceriesList * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("reset(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateGroceriesListGl:(MiamCoreGroceriesList *)gl completionHandler:(void (^)(MiamCoreGroceriesList * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateGroceriesList(gl:completionHandler:)")));
@end

__attribute__((swift_name("PricingRepository")))
@protocol MiamCorePricingRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipePriceRecipeId:(NSString *)recipeId posId:(NSString *)posId serves:(MiamCoreInt * _Nullable)serves completionHandler:(void (^)(MiamCorePricing * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipePrice(recipeId:posId:serves:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PricingRepositoryImp")))
@interface MiamCorePricingRepositoryImp : MiamCoreBase <MiamCorePricingRepository>
- (instancetype)initWithPriceDataSource:(id<MiamCorePricingDataSource>)priceDataSource __attribute__((swift_name("init(priceDataSource:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipePriceRecipeId:(NSString *)recipeId posId:(NSString *)posId serves:(MiamCoreInt * _Nullable)serves completionHandler:(void (^)(MiamCorePricing * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipePrice(recipeId:posId:serves:completionHandler:)")));
@property (readonly) id<MiamCorePricingDataSource> priceDataSource __attribute__((swift_name("priceDataSource")));
@end

__attribute__((swift_name("RecipeRepository")))
@protocol MiamCoreRecipeRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipeByIdRecipeId:(NSString *)recipeId included:(NSArray<NSString *> * _Nullable)included completionHandler:(void (^)(MiamCoreRecipe * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipeById(recipeId:included:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipeNumberOfResultFilters:(NSDictionary<NSString *, NSString *> *)filters completionHandler:(void (^)(MiamCoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipeNumberOfResult(filters:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipeSuggestionSupplierId:(NSString *)supplierId criteria:(MiamCoreSuggestionsCriteria *)criteria pointOfSale:(NSString *)pointOfSale guestCount:(int32_t)guestCount completionHandler:(void (^)(MiamCoreRecipe * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipeSuggestion(supplierId:criteria:pointOfSale:guestCount:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipeSuggestionsSupplierId:(NSString *)supplierId criteria:(MiamCoreSuggestionsCriteria *)criteria size:(int32_t)size pointOfSale:(NSString *)pointOfSale guestCount:(int32_t)guestCount completionHandler:(void (^)(NSArray<MiamCoreRecipe *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipeSuggestions(supplierId:criteria:size:pointOfSale:guestCount:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipeWithAvailableIngredientsNumberOfResultFilters:(NSDictionary<NSString *, NSString *> *)filters posId:(NSString *)posId guestCount:(int32_t)guestCount completionHandler:(void (^)(MiamCoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipeWithAvailableIngredientsNumberOfResult(filters:posId:guestCount:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipesByIdsRecipeIds:(NSArray<NSString *> *)recipeIds included:(NSArray<NSString *> * _Nullable)included completionHandler:(void (^)(NSArray<MiamCoreRecipe *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipesByIds(recipeIds:included:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipesForBudgetConstraintPointOfSale:(NSString *)pointOfSale budget:(int32_t)budget mealCount:(int32_t)mealCount guestCount:(int32_t)guestCount completionHandler:(void (^)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipesForBudgetConstraint(pointOfSale:budget:mealCount:guestCount:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipesMaxCountForBudgetConstraintPointOfSale:(NSString *)pointOfSale budget:(int32_t)budget guestCount:(int32_t)guestCount completionHandler:(void (^)(MiamCoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipesMaxCountForBudgetConstraint(pointOfSale:budget:guestCount:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeRepositoryImp")))
@interface MiamCoreRecipeRepositoryImp : MiamCoreBase <MiamCoreRecipeRepository>
- (instancetype)initWithRecipeDataSource:(id<MiamCoreRecipeDataSource>)recipeDataSource __attribute__((swift_name("init(recipeDataSource:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreRecipeRepositoryImpCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipeByIdRecipeId:(NSString *)recipeId included:(NSArray<NSString *> * _Nullable)included completionHandler:(void (^)(MiamCoreRecipe * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipeById(recipeId:included:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipeNumberOfResultFilters:(NSDictionary<NSString *, NSString *> *)filters completionHandler:(void (^)(MiamCoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipeNumberOfResult(filters:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipeSuggestionSupplierId:(NSString *)supplierId criteria:(MiamCoreSuggestionsCriteria *)criteria pointOfSale:(NSString *)pointOfSale guestCount:(int32_t)guestCount completionHandler:(void (^)(MiamCoreRecipe * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipeSuggestion(supplierId:criteria:pointOfSale:guestCount:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipeSuggestionsSupplierId:(NSString *)supplierId criteria:(MiamCoreSuggestionsCriteria *)criteria size:(int32_t)size pointOfSale:(NSString *)pointOfSale guestCount:(int32_t)guestCount completionHandler:(void (^)(NSArray<MiamCoreRecipe *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipeSuggestions(supplierId:criteria:size:pointOfSale:guestCount:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipeWithAvailableIngredientsNumberOfResultFilters:(NSDictionary<NSString *, NSString *> *)filters posId:(NSString *)posId guestCount:(int32_t)guestCount completionHandler:(void (^)(MiamCoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipeWithAvailableIngredientsNumberOfResult(filters:posId:guestCount:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipesFilters:(NSDictionary<NSString *, NSString *> *)filters included:(NSArray<NSString *> *)included pageSize:(int32_t)pageSize pageNumber:(int32_t)pageNumber sort:(MiamCoreRecipeSort *)sort completionHandler:(void (^)(NSArray<MiamCoreRecipe *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipes(filters:included:pageSize:pageNumber:sort:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipesByIdsRecipeIds:(NSArray<NSString *> *)recipeIds included:(NSArray<NSString *> * _Nullable)included completionHandler:(void (^)(NSArray<MiamCoreRecipe *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipesByIds(recipeIds:included:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipesForBudgetConstraintPointOfSale:(NSString *)pointOfSale budget:(int32_t)budget mealCount:(int32_t)mealCount guestCount:(int32_t)guestCount completionHandler:(void (^)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipesForBudgetConstraint(pointOfSale:budget:mealCount:guestCount:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipesMaxCountForBudgetConstraintPointOfSale:(NSString *)pointOfSale budget:(int32_t)budget guestCount:(int32_t)guestCount completionHandler:(void (^)(MiamCoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipesMaxCountForBudgetConstraint(pointOfSale:budget:guestCount:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipesWithAvailableIngredientsFilters:(NSDictionary<NSString *, NSString *> *)filters included:(NSArray<NSString *> *)included pageSize:(int32_t)pageSize pageNumber:(int32_t)pageNumber sort:(MiamCoreRecipeSort *)sort pointOfSale:(NSString *)pointOfSale guestCount:(int32_t)guestCount completionHandler:(void (^)(NSArray<MiamCoreRecipe *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipesWithAvailableIngredients(filters:included:pageSize:pageNumber:sort:pointOfSale:guestCount:completionHandler:)")));
@property (readonly) id<MiamCoreRecipeDataSource> recipeDataSource __attribute__((swift_name("recipeDataSource")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeRepositoryImp.Companion")))
@interface MiamCoreRecipeRepositoryImpCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreRecipeRepositoryImpCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t DEFAULT_PAGESIZE __attribute__((swift_name("DEFAULT_PAGESIZE")));
@property (readonly) int32_t FIRST_PAGE __attribute__((swift_name("FIRST_PAGE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeSort")))
@interface MiamCoreRecipeSort : MiamCoreKotlinEnum<MiamCoreRecipeSort *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MiamCoreRecipeSort *noSort __attribute__((swift_name("noSort")));
@property (class, readonly) MiamCoreRecipeSort *byPositionInPackage __attribute__((swift_name("byPositionInPackage")));
@property (class, readonly) MiamCoreRecipeSort *byComputedPrice __attribute__((swift_name("byComputedPrice")));
@property (class, readonly) MiamCoreRecipeSort *byPrice __attribute__((swift_name("byPrice")));
+ (MiamCoreKotlinArray<MiamCoreRecipeSort *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *sortName __attribute__((swift_name("sortName")));
@end

__attribute__((swift_name("SupplierRepository")))
@protocol MiamCoreSupplierRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getSupplierSupplierId:(NSString *)supplierId completionHandler:(void (^)(MiamCoreSupplier * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getSupplier(supplierId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)notifyConfirmBasketBasketToken:(NSString *)basketToken completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("notifyConfirmBasket(basketToken:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)notifyPaidBasketBasketToken:(NSString *)basketToken price:(NSString *)price completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("notifyPaidBasket(basketToken:price:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Client")))
@interface MiamCoreClient : MiamCoreBase
- (instancetype)initWithUserStore:(id<MiamCoreUserStore>)userStore pointOfSaleStore:(MiamCorePointOfSaleStore *)pointOfSaleStore __attribute__((swift_name("init(userStore:pointOfSaleStore:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("PricingDataSource")))
@protocol MiamCorePricingDataSource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipePriceIdRecipe:(NSString *)idRecipe idPos:(NSString *)idPos serves:(MiamCoreInt * _Nullable)serves completionHandler:(void (^)(MiamCorePricing * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipePrice(idRecipe:idPos:serves:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PricingDataSourceImp")))
@interface MiamCorePricingDataSourceImp : MiamCoreBase <MiamCorePricingDataSource>
- (instancetype)initWithClient:(MiamCoreClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCorePricingDataSourceImpCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipePriceIdRecipe:(NSString *)idRecipe idPos:(NSString *)idPos serves:(MiamCoreInt * _Nullable)serves completionHandler:(void (^)(MiamCorePricing * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipePrice(idRecipe:idPos:serves:completionHandler:)")));
@property (readonly) MiamCoreClient *client __attribute__((swift_name("client")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PricingDataSourceImp.Companion")))
@interface MiamCorePricingDataSourceImpCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCorePricingDataSourceImpCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("RecipeDataSource")))
@protocol MiamCoreRecipeDataSource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipeByIdId:(NSString *)id included:(NSArray<NSString *> * _Nullable)included completionHandler:(void (^)(MiamCoreRecipe * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipeById(id:included:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipeByIdsRecipesIds:(NSArray<NSString *> *)recipesIds included:(NSArray<NSString *> * _Nullable)included pageSize:(int32_t)pageSize completionHandler:(void (^)(NSArray<MiamCoreRecipe *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipeByIds(recipesIds:included:pageSize:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipeByIdsChunkRecipesIds:(NSArray<NSString *> *)recipesIds included:(NSArray<NSString *> * _Nullable)included pageSize:(int32_t)pageSize completionHandler:(void (^)(NSArray<MiamCoreRecipe *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipeByIdsChunk(recipesIds:included:pageSize:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipeForBudgetConstraintPointOfSale:(NSString *)pointOfSale budget:(int32_t)budget guestCount:(int32_t)guestCount mealcount:(int32_t)mealcount completionHandler:(void (^)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipeForBudgetConstraint(pointOfSale:budget:guestCount:mealcount:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipeNumberOfResultFilters:(NSDictionary<NSString *, NSString *> *)filters completionHandler:(void (^)(MiamCoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipeNumberOfResult(filters:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipeSuggestionsSupplierId:(NSString *)supplierId size:(MiamCoreInt * _Nullable)size criteria:(MiamCoreSuggestionsCriteria *)criteria included:(NSArray<NSString *> *)included pointOfSale:(NSString *)pointOfSale guestCount:(int32_t)guestCount completionHandler:(void (^)(NSArray<MiamCoreRecipe *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipeSuggestions(supplierId:size:criteria:included:pointOfSale:guestCount:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipeWithAvailableIngredientsNumberOfResultFilters:(NSDictionary<NSString *, NSString *> *)filters posId:(NSString *)posId guestCount:(int32_t)guestCount completionHandler:(void (^)(MiamCoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipeWithAvailableIngredientsNumberOfResult(filters:posId:guestCount:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipesFilters:(NSDictionary<NSString *, NSString *> *)filters included:(NSArray<NSString *> *)included pageSize:(int32_t)pageSize pageNumber:(int32_t)pageNumber sort:(MiamCoreRecipeSort *)sort completionHandler:(void (^)(NSArray<MiamCoreRecipe *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipes(filters:included:pageSize:pageNumber:sort:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipesMaxCountForBudgetConstraintPointOfSale:(NSString *)pointOfSale budget:(int32_t)budget guestCount:(int32_t)guestCount completionHandler:(void (^)(MiamCoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipesMaxCountForBudgetConstraint(pointOfSale:budget:guestCount:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipesWithAvailableIngredientsFilters:(NSDictionary<NSString *, NSString *> *)filters included:(NSArray<NSString *> *)included pageSize:(int32_t)pageSize pageNumber:(int32_t)pageNumber sort:(MiamCoreRecipeSort *)sort pointOfSale:(NSString *)pointOfSale guestCount:(int32_t)guestCount completionHandler:(void (^)(NSArray<MiamCoreRecipe *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipesWithAvailableIngredients(filters:included:pageSize:pageNumber:sort:pointOfSale:guestCount:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeFilter")))
@interface MiamCoreRecipeFilter : MiamCoreKotlinEnum<MiamCoreRecipeFilter *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MiamCoreRecipeFilter *packages __attribute__((swift_name("packages")));
@property (class, readonly) MiamCoreRecipeFilter *difficulty __attribute__((swift_name("difficulty")));
@property (class, readonly) MiamCoreRecipeFilter *cost __attribute__((swift_name("cost")));
@property (class, readonly) MiamCoreRecipeFilter *totalTime __attribute__((swift_name("totalTime")));
@property (class, readonly) MiamCoreRecipeFilter *search __attribute__((swift_name("search")));
@property (class, readonly) MiamCoreRecipeFilter *liked __attribute__((swift_name("liked")));
@property (class, readonly) MiamCoreRecipeFilter *active __attribute__((swift_name("active")));
@property (class, readonly) MiamCoreRecipeFilter *includeTags __attribute__((swift_name("includeTags")));
@property (class, readonly) MiamCoreRecipeFilter *excludeTags __attribute__((swift_name("excludeTags")));
+ (MiamCoreKotlinArray<MiamCoreRecipeFilter *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *filterName __attribute__((swift_name("filterName")));
@end

__attribute__((swift_name("BaseViewModel")))
@interface MiamCoreBaseViewModel<Event, State, Effect> : MiamCoreMainExecutor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)addListenerKey:(NSString *)key listener:(id<MiamCoreKotlinx_coroutines_coreJob>)listener __attribute__((swift_name("addListener(key:listener:)")));
- (State)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)handleEventEvent:(Event)event __attribute__((swift_name("handleEvent(event:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)registerListeners __attribute__((swift_name("registerListeners()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)setEffectBuilder:(Effect (^)(void))builder __attribute__((swift_name("setEffect(builder:)")));
- (void)setEventEvent:(Event)event __attribute__((swift_name("setEvent(event:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)setStateReduce:(State (^)(State))reduce __attribute__((swift_name("setState(reduce:)")));
@property (readonly) State currentState __attribute__((swift_name("currentState")));
@property (readonly) id<MiamCoreKotlinx_coroutines_coreFlow> effect __attribute__((swift_name("effect")));
@property (readonly) id<MiamCoreKotlinx_coroutines_coreSharedFlow> event __attribute__((swift_name("event")));
@property (readonly) State initialState __attribute__((swift_name("initialState")));
@property (readonly) id<MiamCoreKotlinx_coroutines_coreStateFlow> uiState __attribute__((swift_name("uiState")));
@end

__attribute__((swift_name("LikeButtonViewModel")))
@interface MiamCoreLikeButtonViewModel : MiamCoreBaseViewModel<MiamCoreRecipeLikeContractEvent *, MiamCoreRecipeLikeContractState *, MiamCoreRecipeLikeContractEffect *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MiamCoreRecipeLikeContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)handleEventEvent:(MiamCoreRecipeLikeContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
- (void)registerListeners __attribute__((swift_name("registerListeners()")));
- (void)setRecipeRecipeId:(NSString *)recipeId __attribute__((swift_name("setRecipe(recipeId:)")));
- (void)toggleLike __attribute__((swift_name("toggleLike()")));
@end

__attribute__((swift_name("RecipeLikeContract")))
@protocol MiamCoreRecipeLikeContract
@required
@end

__attribute__((swift_name("UiEffect")))
@protocol MiamCoreUiEffect
@required
@end

__attribute__((swift_name("RecipeLikeContractEffect")))
@interface MiamCoreRecipeLikeContractEffect : MiamCoreBase <MiamCoreUiEffect>
@end

__attribute__((swift_name("UiEvent")))
@protocol MiamCoreUiEvent
@required
@end

__attribute__((swift_name("RecipeLikeContractEvent")))
@interface MiamCoreRecipeLikeContractEvent : MiamCoreBase <MiamCoreUiEvent>
@end

__attribute__((swift_name("UiState")))
@protocol MiamCoreUiState
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeLikeContractState")))
@interface MiamCoreRecipeLikeContractState : MiamCoreBase <MiamCoreUiState>
- (instancetype)initWithRecipeId:(NSString * _Nullable)recipeId isLiked:(MiamCoreBasicUiState<MiamCoreBoolean *> *)isLiked __attribute__((swift_name("init(recipeId:isLiked:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreBasicUiState<MiamCoreBoolean *> *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRecipeLikeContractState *)doCopyRecipeId:(NSString * _Nullable)recipeId isLiked:(MiamCoreBasicUiState<MiamCoreBoolean *> *)isLiked __attribute__((swift_name("doCopy(recipeId:isLiked:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreBasicUiState<MiamCoreBoolean *> *isLiked __attribute__((swift_name("isLiked")));
@property (readonly) NSString * _Nullable recipeId __attribute__((swift_name("recipeId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QuantityFormatter")))
@interface MiamCoreQuantityFormatter : MiamCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MiamCoreQuantityFormatterDefault *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QuantityFormatter.default")))
@interface MiamCoreQuantityFormatterDefault : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreQuantityFormatterDefault *shared __attribute__((swift_name("shared")));
- (NSString *)fracValue:(float)value maxdenominator:(int32_t)maxdenominator __attribute__((swift_name("frac(value:maxdenominator:)")));
- (NSString *)pluralizeUnit:(NSString *)unit __attribute__((swift_name("pluralize(unit:)")));
- (NSString *)readableFloatNumberValue:(float)value unit:(NSString * _Nullable)unit __attribute__((swift_name("readableFloatNumber(value:unit:)")));
- (float)realQuantitiesQuantity:(NSString *)quantity currentGuest:(int32_t)currentGuest recipeGuest:(int32_t)recipeGuest __attribute__((swift_name("realQuantities(quantity:currentGuest:recipeGuest:)")));
- (NSString *)render_fracOriginal_value:(float)original_value num:(float)num denom:(float)denom __attribute__((swift_name("render_frac(original_value:num:denom:)")));
- (NSString *)singularizeUnit:(NSString *)unit __attribute__((swift_name("singularize(unit:)")));
@end

__attribute__((swift_name("BasketPreviewContract")))
@protocol MiamCoreBasketPreviewContract
@required
@end

__attribute__((swift_name("BasketPreviewContractEffect")))
@interface MiamCoreBasketPreviewContractEffect : MiamCoreBase <MiamCoreUiEffect>
@end

__attribute__((swift_name("BasketPreviewContractEvent")))
@interface MiamCoreBasketPreviewContractEvent : MiamCoreBase <MiamCoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketPreviewContractEvent.AddEntry")))
@interface MiamCoreBasketPreviewContractEventAddEntry : MiamCoreBasketPreviewContractEvent
- (instancetype)initWithEntry:(MiamCoreBasketEntry *)entry __attribute__((swift_name("init(entry:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreBasketEntry *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreBasketPreviewContractEventAddEntry *)doCopyEntry:(MiamCoreBasketEntry *)entry __attribute__((swift_name("doCopy(entry:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreBasketEntry *entry __attribute__((swift_name("entry")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketPreviewContractEvent.CloseItemSelector")))
@interface MiamCoreBasketPreviewContractEventCloseItemSelector : MiamCoreBasketPreviewContractEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)closeItemSelector __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreBasketPreviewContractEventCloseItemSelector *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketPreviewContractEvent.KillJob")))
@interface MiamCoreBasketPreviewContractEventKillJob : MiamCoreBasketPreviewContractEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)killJob __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreBasketPreviewContractEventKillJob *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketPreviewContractEvent.OpenItemSelector")))
@interface MiamCoreBasketPreviewContractEventOpenItemSelector : MiamCoreBasketPreviewContractEvent
- (instancetype)initWithBpl:(MiamCoreBasketPreviewLine *)bpl __attribute__((swift_name("init(bpl:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreBasketPreviewLine *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreBasketPreviewContractEventOpenItemSelector *)doCopyBpl:(MiamCoreBasketPreviewLine *)bpl __attribute__((swift_name("doCopy(bpl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreBasketPreviewLine *bpl __attribute__((swift_name("bpl")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketPreviewContractEvent.RemoveRecipe")))
@interface MiamCoreBasketPreviewContractEventRemoveRecipe : MiamCoreBasketPreviewContractEvent
- (instancetype)initWithRecipeId:(NSString *)recipeId __attribute__((swift_name("init(recipeId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreBasketPreviewContractEventRemoveRecipe *)doCopyRecipeId:(NSString *)recipeId __attribute__((swift_name("doCopy(recipeId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *recipeId __attribute__((swift_name("recipeId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketPreviewContractEvent.ReplaceItem")))
@interface MiamCoreBasketPreviewContractEventReplaceItem : MiamCoreBasketPreviewContractEvent
- (instancetype)initWithEntry:(MiamCoreBasketEntry *)entry itemId:(int32_t)itemId __attribute__((swift_name("init(entry:itemId:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreBasketEntry *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreBasketPreviewContractEventReplaceItem *)doCopyEntry:(MiamCoreBasketEntry *)entry itemId:(int32_t)itemId __attribute__((swift_name("doCopy(entry:itemId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreBasketEntry *entry __attribute__((swift_name("entry")));
@property (readonly) int32_t itemId __attribute__((swift_name("itemId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketPreviewContractEvent.SetLines")))
@interface MiamCoreBasketPreviewContractEventSetLines : MiamCoreBasketPreviewContractEvent
- (instancetype)initWithNewlines:(MiamCoreBasketPreviewLine *)newlines __attribute__((swift_name("init(newlines:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreBasketPreviewLine *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreBasketPreviewContractEventSetLines *)doCopyNewlines:(MiamCoreBasketPreviewLine *)newlines __attribute__((swift_name("doCopy(newlines:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreBasketPreviewLine *newlines __attribute__((swift_name("newlines")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketPreviewContractEvent.SetRecipeId")))
@interface MiamCoreBasketPreviewContractEventSetRecipeId : MiamCoreBasketPreviewContractEvent
- (instancetype)initWithNewRecipeId:(int32_t)newRecipeId __attribute__((swift_name("init(newRecipeId:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreBasketPreviewContractEventSetRecipeId *)doCopyNewRecipeId:(int32_t)newRecipeId __attribute__((swift_name("doCopy(newRecipeId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly, getter=doNewRecipeId) int32_t newRecipeId __attribute__((swift_name("newRecipeId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketPreviewContractEvent.ToggleLine")))
@interface MiamCoreBasketPreviewContractEventToggleLine : MiamCoreBasketPreviewContractEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)toggleLine __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreBasketPreviewContractEventToggleLine *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketPreviewContractState")))
@interface MiamCoreBasketPreviewContractState : MiamCoreBase <MiamCoreUiState>
- (instancetype)initWithRecipeId:(MiamCoreInt * _Nullable)recipeId showLines:(BOOL)showLines line:(MiamCoreBasicUiState<MiamCoreBasketPreviewLine *> *)line bpl:(MiamCoreBasketPreviewLine * _Nullable)bpl isReloading:(BOOL)isReloading updatingBasketEntryId:(NSString * _Nullable)updatingBasketEntryId job:(id<MiamCoreKotlinx_coroutines_coreJob> _Nullable)job __attribute__((swift_name("init(recipeId:showLines:line:bpl:isReloading:updatingBasketEntryId:job:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreInt * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreBasicUiState<MiamCoreBasketPreviewLine *> *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreBasketPreviewLine * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<MiamCoreKotlinx_coroutines_coreJob> _Nullable)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreBasketPreviewContractState *)doCopyRecipeId:(MiamCoreInt * _Nullable)recipeId showLines:(BOOL)showLines line:(MiamCoreBasicUiState<MiamCoreBasketPreviewLine *> *)line bpl:(MiamCoreBasketPreviewLine * _Nullable)bpl isReloading:(BOOL)isReloading updatingBasketEntryId:(NSString * _Nullable)updatingBasketEntryId job:(id<MiamCoreKotlinx_coroutines_coreJob> _Nullable)job __attribute__((swift_name("doCopy(recipeId:showLines:line:bpl:isReloading:updatingBasketEntryId:job:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreBasketPreviewLine * _Nullable bpl __attribute__((swift_name("bpl")));
@property (readonly) BOOL isReloading __attribute__((swift_name("isReloading")));
@property (readonly) id<MiamCoreKotlinx_coroutines_coreJob> _Nullable job __attribute__((swift_name("job")));
@property (readonly) MiamCoreBasicUiState<MiamCoreBasketPreviewLine *> *line __attribute__((swift_name("line")));
@property (readonly) MiamCoreInt * _Nullable recipeId __attribute__((swift_name("recipeId")));
@property (readonly) BOOL showLines __attribute__((swift_name("showLines")));
@property (readonly) NSString * _Nullable updatingBasketEntryId __attribute__((swift_name("updatingBasketEntryId")));
@end

__attribute__((swift_name("BasketPreviewViewModel")))
@interface MiamCoreBasketPreviewViewModel : MiamCoreBaseViewModel<MiamCoreBasketPreviewContractEvent *, MiamCoreBasketPreviewContractState *, MiamCoreBasketPreviewContractEffect *>
- (instancetype)initWithRecipeId:(NSString * _Nullable)recipeId __attribute__((swift_name("init(recipeId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MiamCoreBasketPreviewContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)handleEventEvent:(MiamCoreBasketPreviewContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
- (void)registerListeners __attribute__((swift_name("registerListeners()")));
- (void)removeBasketEntryEntry:(MiamCoreBasketEntry *)entry __attribute__((swift_name("removeBasketEntry(entry:)")));
- (void)updateBasketEntryEntry:(MiamCoreBasketEntry *)entry finalQty:(int32_t)finalQty __attribute__((swift_name("updateBasketEntry(entry:finalQty:)")));
- (void)updateGuestOnUpdateGuest:(void (^)(MiamCoreInt *))onUpdateGuest guestCount:(int32_t)guestCount __attribute__((swift_name("updateGuest(onUpdateGuest:guestCount:)")));
@property (readonly) id<MiamCoreKotlinx_coroutines_coreMutableStateFlow> isReloadingFullRecipe __attribute__((swift_name("isReloadingFullRecipe")));
@property (readonly) NSString * _Nullable recipeId __attribute__((swift_name("recipeId")));
@property (readonly) id<MiamCoreKotlinx_coroutines_coreMutableStateFlow> updatingBasketEntryId __attribute__((swift_name("updatingBasketEntryId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketPreviewViewModel.LineUpdateState")))
@interface MiamCoreBasketPreviewViewModelLineUpdateState : MiamCoreBase <MiamCoreState>
- (instancetype)initWithLineUpdates:(NSArray<MiamCoreBasketEntry *> *)lineUpdates __attribute__((swift_name("init(lineUpdates:)"))) __attribute__((objc_designated_initializer));
- (NSArray<MiamCoreBasketEntry *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreBasketPreviewViewModelLineUpdateState *)doCopyLineUpdates:(NSArray<MiamCoreBasketEntry *> *)lineUpdates __attribute__((swift_name("doCopy(lineUpdates:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<MiamCoreBasketEntry *> *lineUpdates __attribute__((swift_name("lineUpdates")));
@end

__attribute__((swift_name("ItemSelectorContract")))
@protocol MiamCoreItemSelectorContract
@required
@end

__attribute__((swift_name("ItemSelectorContractEffect")))
@interface MiamCoreItemSelectorContractEffect : MiamCoreBase <MiamCoreUiEffect>
@end

__attribute__((swift_name("ItemSelectorContractEvent")))
@interface MiamCoreItemSelectorContractEvent : MiamCoreBase <MiamCoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItemSelectorContractEvent.ReturnToBasketPreview")))
@interface MiamCoreItemSelectorContractEventReturnToBasketPreview : MiamCoreItemSelectorContractEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)returnToBasketPreview __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreItemSelectorContractEventReturnToBasketPreview *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItemSelectorContractEvent.SetItemList")))
@interface MiamCoreItemSelectorContractEventSetItemList : MiamCoreItemSelectorContractEvent
- (instancetype)initWithItems:(NSArray<MiamCoreBasketPreviewLine *> *)items __attribute__((swift_name("init(items:)"))) __attribute__((objc_designated_initializer));
- (NSArray<MiamCoreBasketPreviewLine *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreItemSelectorContractEventSetItemList *)doCopyItems:(NSArray<MiamCoreBasketPreviewLine *> *)items __attribute__((swift_name("doCopy(items:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<MiamCoreBasketPreviewLine *> *items __attribute__((swift_name("items")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItemSelectorContractEvent.SetReplaceItemInPreview")))
@interface MiamCoreItemSelectorContractEventSetReplaceItemInPreview : MiamCoreItemSelectorContractEvent
- (instancetype)initWithReplace:(void (^)(MiamCoreBasketEntry *))replace __attribute__((swift_name("init(replace:)"))) __attribute__((objc_designated_initializer));
- (void (^)(MiamCoreBasketEntry *))component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreItemSelectorContractEventSetReplaceItemInPreview *)doCopyReplace:(void (^)(MiamCoreBasketEntry *))replace __attribute__((swift_name("doCopy(replace:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^replace)(MiamCoreBasketEntry *) __attribute__((swift_name("replace")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItemSelectorContractEvent.SetReturnToBasketPreview")))
@interface MiamCoreItemSelectorContractEventSetReturnToBasketPreview : MiamCoreItemSelectorContractEvent
- (instancetype)initWithReturnToPreview:(void (^)(void))returnToPreview __attribute__((swift_name("init(returnToPreview:)"))) __attribute__((objc_designated_initializer));
- (void (^)(void))component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreItemSelectorContractEventSetReturnToBasketPreview *)doCopyReturnToPreview:(void (^)(void))returnToPreview __attribute__((swift_name("doCopy(returnToPreview:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^returnToPreview)(void) __attribute__((swift_name("returnToPreview")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItemSelectorContractState")))
@interface MiamCoreItemSelectorContractState : MiamCoreBase <MiamCoreUiState>
- (instancetype)initWithSelectedItem:(MiamCoreBasicUiState<MiamCoreBasketPreviewLine *> *)selectedItem items:(NSArray<MiamCoreBasketPreviewLine *> *)items replaceItemInPreview:(void (^)(MiamCoreBasketEntry *))replaceItemInPreview returnToPreview:(void (^)(void))returnToPreview __attribute__((swift_name("init(selectedItem:items:replaceItemInPreview:returnToPreview:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreBasicUiState<MiamCoreBasketPreviewLine *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<MiamCoreBasketPreviewLine *> *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (void (^)(MiamCoreBasketEntry *))component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (void (^)(void))component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreItemSelectorContractState *)doCopySelectedItem:(MiamCoreBasicUiState<MiamCoreBasketPreviewLine *> *)selectedItem items:(NSArray<MiamCoreBasketPreviewLine *> *)items replaceItemInPreview:(void (^)(MiamCoreBasketEntry *))replaceItemInPreview returnToPreview:(void (^)(void))returnToPreview __attribute__((swift_name("doCopy(selectedItem:items:replaceItemInPreview:returnToPreview:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<MiamCoreBasketPreviewLine *> *items __attribute__((swift_name("items")));
@property (readonly) void (^replaceItemInPreview)(MiamCoreBasketEntry *) __attribute__((swift_name("replaceItemInPreview")));
@property (readonly) void (^returnToPreview)(void) __attribute__((swift_name("returnToPreview")));
@property (readonly) MiamCoreBasicUiState<MiamCoreBasketPreviewLine *> *selectedItem __attribute__((swift_name("selectedItem")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItemSelectorInstance")))
@interface MiamCoreItemSelectorInstance : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)itemSelectorInstance __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreItemSelectorInstance *shared __attribute__((swift_name("shared")));
@property (readonly) MiamCoreItemSelectorViewModel *instance __attribute__((swift_name("instance")));
@end

__attribute__((swift_name("ItemSelectorViewModel")))
@interface MiamCoreItemSelectorViewModel : MiamCoreBaseViewModel<MiamCoreItemSelectorContractEvent *, MiamCoreItemSelectorContractState *, MiamCoreItemSelectorContractEffect *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)chooseSelectedItem:(MiamCoreBasketPreviewLine *)selectedItem index:(int32_t)index __attribute__((swift_name("choose(selectedItem:index:)")));
- (MiamCoreItemSelectorContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)handleEventEvent:(MiamCoreItemSelectorContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
- (void)setSelectedItemItem:(MiamCoreBasketPreviewLine *)item __attribute__((swift_name("setSelectedItem(item:)")));
@end

__attribute__((swift_name("FavoritePageContract")))
@protocol MiamCoreFavoritePageContract
@required
@end

__attribute__((swift_name("FavoritePageContractEffect")))
@interface MiamCoreFavoritePageContractEffect : MiamCoreBase <MiamCoreUiEffect>
@end

__attribute__((swift_name("FavoritePageContractEvent")))
@interface MiamCoreFavoritePageContractEvent : MiamCoreBase <MiamCoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FavoritePageContractEvent.LoadPage")))
@interface MiamCoreFavoritePageContractEventLoadPage : MiamCoreFavoritePageContractEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)loadPage __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreFavoritePageContractEventLoadPage *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FavoritePageContractState")))
@interface MiamCoreFavoritePageContractState : MiamCoreBase <MiamCoreUiState>
- (instancetype)initWithFavoritesRecipes:(MiamCoreBasicUiState<NSArray<MiamCoreRecipe *> *> *)favoritesRecipes currentPage:(int32_t)currentPage isFetchingNewPage:(BOOL)isFetchingNewPage noMoreData:(BOOL)noMoreData __attribute__((swift_name("init(favoritesRecipes:currentPage:isFetchingNewPage:noMoreData:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreBasicUiState<NSArray<MiamCoreRecipe *> *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreFavoritePageContractState *)doCopyFavoritesRecipes:(MiamCoreBasicUiState<NSArray<MiamCoreRecipe *> *> *)favoritesRecipes currentPage:(int32_t)currentPage isFetchingNewPage:(BOOL)isFetchingNewPage noMoreData:(BOOL)noMoreData __attribute__((swift_name("doCopy(favoritesRecipes:currentPage:isFetchingNewPage:noMoreData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t currentPage __attribute__((swift_name("currentPage")));
@property (readonly) MiamCoreBasicUiState<NSArray<MiamCoreRecipe *> *> *favoritesRecipes __attribute__((swift_name("favoritesRecipes")));
@property (readonly) BOOL isFetchingNewPage __attribute__((swift_name("isFetchingNewPage")));
@property (readonly) BOOL noMoreData __attribute__((swift_name("noMoreData")));
@end

__attribute__((swift_name("FavoritePageViewModel")))
@interface MiamCoreFavoritePageViewModel : MiamCoreBaseViewModel<MiamCoreFavoritePageContractEvent *, MiamCoreFavoritePageContractState *, MiamCoreFavoritePageContractEffect *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MiamCoreFavoritePageViewModelCompanion *companion __attribute__((swift_name("companion")));
- (MiamCoreFavoritePageContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)handleEventEvent:(MiamCoreFavoritePageContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
- (void)registerListeners __attribute__((swift_name("registerListeners()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FavoritePageViewModel.Companion")))
@interface MiamCoreFavoritePageViewModelCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreFavoritePageViewModelCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSDictionary<NSString *, NSString *> *FILTERS __attribute__((swift_name("FILTERS")));
@end

__attribute__((swift_name("MyMealContract")))
@protocol MiamCoreMyMealContract
@required
@end

__attribute__((swift_name("MyMealContractEffect")))
@interface MiamCoreMyMealContractEffect : MiamCoreBase <MiamCoreUiEffect>
@end

__attribute__((swift_name("MyMealContractEvent")))
@interface MiamCoreMyMealContractEvent : MiamCoreBase <MiamCoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MyMealContractEvent.RemoveRecipe")))
@interface MiamCoreMyMealContractEventRemoveRecipe : MiamCoreMyMealContractEvent
- (instancetype)initWithRecipeId:(NSString *)recipeId __attribute__((swift_name("init(recipeId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreMyMealContractEventRemoveRecipe *)doCopyRecipeId:(NSString *)recipeId __attribute__((swift_name("doCopy(recipeId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *recipeId __attribute__((swift_name("recipeId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MyMealContractState")))
@interface MiamCoreMyMealContractState : MiamCoreBase <MiamCoreUiState>
- (instancetype)initWithLines:(MiamCoreBasicUiState<NSArray<MiamCoreBasketPreviewLine *> *> *)lines bpls:(NSArray<MiamCoreBasketPreviewLine *> * _Nullable)bpls __attribute__((swift_name("init(lines:bpls:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreBasicUiState<NSArray<MiamCoreBasketPreviewLine *> *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<MiamCoreBasketPreviewLine *> * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreMyMealContractState *)doCopyLines:(MiamCoreBasicUiState<NSArray<MiamCoreBasketPreviewLine *> *> *)lines bpls:(NSArray<MiamCoreBasketPreviewLine *> * _Nullable)bpls __attribute__((swift_name("doCopy(lines:bpls:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<MiamCoreBasketPreviewLine *> * _Nullable bpls __attribute__((swift_name("bpls")));
@property (readonly) MiamCoreBasicUiState<NSArray<MiamCoreBasketPreviewLine *> *> *lines __attribute__((swift_name("lines")));
@end

__attribute__((swift_name("MyMealViewModel")))
@interface MiamCoreMyMealViewModel : MiamCoreBaseViewModel<MiamCoreMyMealContractEvent *, MiamCoreMyMealContractState *, MiamCoreMyMealContractEffect *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MiamCoreMyMealContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)handleEventEvent:(MiamCoreMyMealContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)registerListeners __attribute__((swift_name("registerListeners()")));
@end

__attribute__((swift_name("PricingContract")))
@protocol MiamCorePricingContract
@required
@end

__attribute__((swift_name("PricingContractEffect")))
@interface MiamCorePricingContractEffect : MiamCoreBase <MiamCoreUiEffect>
@end

__attribute__((swift_name("PricingContractEvent")))
@interface MiamCorePricingContractEvent : MiamCoreBase <MiamCoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PricingContractState")))
@interface MiamCorePricingContractState : MiamCoreBase <MiamCoreUiState>
- (instancetype)initWithPrice:(MiamCoreBasicUiState<MiamCorePricing *> *)price recipeId:(NSString * _Nullable)recipeId guestNumber:(MiamCoreInt * _Nullable)guestNumber __attribute__((swift_name("init(price:recipeId:guestNumber:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreBasicUiState<MiamCorePricing *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreInt * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCorePricingContractState *)doCopyPrice:(MiamCoreBasicUiState<MiamCorePricing *> *)price recipeId:(NSString * _Nullable)recipeId guestNumber:(MiamCoreInt * _Nullable)guestNumber __attribute__((swift_name("doCopy(price:recipeId:guestNumber:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreInt * _Nullable guestNumber __attribute__((swift_name("guestNumber")));
@property (readonly) MiamCoreBasicUiState<MiamCorePricing *> *price __attribute__((swift_name("price")));
@property (readonly) NSString * _Nullable recipeId __attribute__((swift_name("recipeId")));
@end

__attribute__((swift_name("RecipePricingViewModel")))
@interface MiamCoreRecipePricingViewModel : MiamCoreBaseViewModel<MiamCorePricingContractEvent *, MiamCorePricingContractState *, MiamCorePricingContractEffect *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MiamCorePricingContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)handleEventEvent:(MiamCorePricingContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
- (id<MiamCoreKotlinx_coroutines_coreJob>)listenBasketChanges __attribute__((swift_name("listenBasketChanges()")));
- (void)registerListeners __attribute__((swift_name("registerListeners()")));
- (void)setRecipeRecipeId:(NSString *)recipeId guestNumber:(int32_t)guestNumber __attribute__((swift_name("setRecipe(recipeId:guestNumber:)")));
- (void)setRecipeForMealPlannerRecipeId:(NSString *)recipeId __attribute__((swift_name("setRecipeForMealPlanner(recipeId:)")));
@end

__attribute__((swift_name("RecipeListPageContract")))
@protocol MiamCoreRecipeListPageContract
@required
@end

__attribute__((swift_name("RecipeListPageContractEffect")))
@interface MiamCoreRecipeListPageContractEffect : MiamCoreBase <MiamCoreUiEffect>
@end

__attribute__((swift_name("RecipeListPageContractEvent")))
@interface MiamCoreRecipeListPageContractEvent : MiamCoreBase <MiamCoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeListPageContractEvent.InitPage")))
@interface MiamCoreRecipeListPageContractEventInitPage : MiamCoreRecipeListPageContractEvent
- (instancetype)initWithTitle:(NSString *)title __attribute__((swift_name("init(title:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRecipeListPageContractEventInitPage *)doCopyTitle:(NSString *)title __attribute__((swift_name("doCopy(title:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeListPageContractEvent.LoadPage")))
@interface MiamCoreRecipeListPageContractEventLoadPage : MiamCoreRecipeListPageContractEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)loadPage __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreRecipeListPageContractEventLoadPage *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeListPageContractState")))
@interface MiamCoreRecipeListPageContractState : MiamCoreBase <MiamCoreUiState>
- (instancetype)initWithRecipes:(MiamCoreBasicUiState<NSArray<MiamCoreRecipe *> *> *)recipes title:(NSString *)title filter:(NSDictionary<NSString *, NSString *> *)filter currentPage:(int32_t)currentPage isFetchingNewPage:(BOOL)isFetchingNewPage noMoreData:(BOOL)noMoreData __attribute__((swift_name("init(recipes:title:filter:currentPage:isFetchingNewPage:noMoreData:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreBasicUiState<NSArray<MiamCoreRecipe *> *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSDictionary<NSString *, NSString *> *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRecipeListPageContractState *)doCopyRecipes:(MiamCoreBasicUiState<NSArray<MiamCoreRecipe *> *> *)recipes title:(NSString *)title filter:(NSDictionary<NSString *, NSString *> *)filter currentPage:(int32_t)currentPage isFetchingNewPage:(BOOL)isFetchingNewPage noMoreData:(BOOL)noMoreData __attribute__((swift_name("doCopy(recipes:title:filter:currentPage:isFetchingNewPage:noMoreData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t currentPage __attribute__((swift_name("currentPage")));
@property (readonly) NSDictionary<NSString *, NSString *> *filter __attribute__((swift_name("filter")));
@property (readonly) BOOL isFetchingNewPage __attribute__((swift_name("isFetchingNewPage")));
@property (readonly) BOOL noMoreData __attribute__((swift_name("noMoreData")));
@property (readonly) MiamCoreBasicUiState<NSArray<MiamCoreRecipe *> *> *recipes __attribute__((swift_name("recipes")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeListPageViewModel")))
@interface MiamCoreRecipeListPageViewModel : MiamCoreBaseViewModel<MiamCoreRecipeListPageContractEvent *, MiamCoreRecipeListPageContractState *, MiamCoreRecipeListPageContractEffect *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)canLoad __attribute__((swift_name("canLoad()")));
- (MiamCoreRecipeListPageContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)handleEventEvent:(MiamCoreRecipeListPageContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
- (void)registerListeners __attribute__((swift_name("registerListeners()")));
@end

__attribute__((swift_name("MyMealButtonContract")))
@protocol MiamCoreMyMealButtonContract
@required
@end

__attribute__((swift_name("MyMealButtonContractEffect")))
@interface MiamCoreMyMealButtonContractEffect : MiamCoreBase <MiamCoreUiEffect>
@end

__attribute__((swift_name("MyMealButtonContractEvent")))
@interface MiamCoreMyMealButtonContractEvent : MiamCoreBase <MiamCoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MyMealButtonContractState")))
@interface MiamCoreMyMealButtonContractState : MiamCoreBase <MiamCoreUiState>
- (instancetype)initWithRecipeCount:(MiamCoreBasicUiState<MiamCoreInt *> *)recipeCount __attribute__((swift_name("init(recipeCount:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreBasicUiState<MiamCoreInt *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreMyMealButtonContractState *)doCopyRecipeCount:(MiamCoreBasicUiState<MiamCoreInt *> *)recipeCount __attribute__((swift_name("doCopy(recipeCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreBasicUiState<MiamCoreInt *> *recipeCount __attribute__((swift_name("recipeCount")));
@end

__attribute__((swift_name("MyMealButtonViewModel")))
@interface MiamCoreMyMealButtonViewModel : MiamCoreBaseViewModel<MiamCoreMyMealButtonContractEvent *, MiamCoreMyMealButtonContractState *, MiamCoreMyMealButtonContractEffect *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MiamCoreMyMealButtonContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)handleEventEvent:(MiamCoreMyMealButtonContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
- (void)registerListeners __attribute__((swift_name("registerListeners()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PreferencesContent")))
@interface MiamCorePreferencesContent : MiamCoreKotlinEnum<MiamCorePreferencesContent *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MiamCorePreferencesContent *allPrefrences __attribute__((swift_name("allPrefrences")));
@property (class, readonly) MiamCorePreferencesContent *searchPrefrerences __attribute__((swift_name("searchPrefrerences")));
+ (MiamCoreKotlinArray<MiamCorePreferencesContent *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("PreferencesContract")))
@protocol MiamCorePreferencesContract
@required
@end

__attribute__((swift_name("PreferencesContractEffect")))
@interface MiamCorePreferencesContractEffect : MiamCoreBase <MiamCoreUiEffect>
@end

__attribute__((swift_name("PreferencesContractEvent")))
@interface MiamCorePreferencesContractEvent : MiamCoreBase <MiamCoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PreferencesContractState")))
@interface MiamCorePreferencesContractState : MiamCoreBase <MiamCoreUiState>
- (instancetype)initWithBasicState:(MiamCoreBasicUiState<MiamCorePreferencesContent *> *)basicState diets:(NSArray<MiamCoreCheckableTag *> *)diets ingredients:(NSArray<MiamCoreCheckableTag *> *)ingredients equipments:(NSArray<MiamCoreCheckableTag *> *)equipments recipesFound:(int32_t)recipesFound guests:(MiamCoreInt * _Nullable)guests __attribute__((swift_name("init(basicState:diets:ingredients:equipments:recipesFound:guests:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreBasicUiState<MiamCorePreferencesContent *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<MiamCoreCheckableTag *> *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<MiamCoreCheckableTag *> *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<MiamCoreCheckableTag *> *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreInt * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCorePreferencesContractState *)doCopyBasicState:(MiamCoreBasicUiState<MiamCorePreferencesContent *> *)basicState diets:(NSArray<MiamCoreCheckableTag *> *)diets ingredients:(NSArray<MiamCoreCheckableTag *> *)ingredients equipments:(NSArray<MiamCoreCheckableTag *> *)equipments recipesFound:(int32_t)recipesFound guests:(MiamCoreInt * _Nullable)guests __attribute__((swift_name("doCopy(basicState:diets:ingredients:equipments:recipesFound:guests:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreBasicUiState<MiamCorePreferencesContent *> *basicState __attribute__((swift_name("basicState")));
@property (readonly) NSArray<MiamCoreCheckableTag *> *diets __attribute__((swift_name("diets")));
@property (readonly) NSArray<MiamCoreCheckableTag *> *equipments __attribute__((swift_name("equipments")));
@property (readonly) MiamCoreInt * _Nullable guests __attribute__((swift_name("guests")));
@property (readonly) NSArray<MiamCoreCheckableTag *> *ingredients __attribute__((swift_name("ingredients")));
@property (readonly) int32_t recipesFound __attribute__((swift_name("recipesFound")));
@end

__attribute__((swift_name("PreferencesEffect")))
@interface MiamCorePreferencesEffect : MiamCoreBase <MiamCoreEffect>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PreferencesEffect.PreferencesChanged")))
@interface MiamCorePreferencesEffectPreferencesChanged : MiamCorePreferencesEffect
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)preferencesChanged __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCorePreferencesEffectPreferencesChanged *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PreferencesEffect.PreferencesLoaded")))
@interface MiamCorePreferencesEffectPreferencesLoaded : MiamCorePreferencesEffect
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)preferencesLoaded __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCorePreferencesEffectPreferencesLoaded *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PreferencesViewModelInstance")))
@interface MiamCorePreferencesViewModelInstance : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)preferencesViewModelInstance __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCorePreferencesViewModelInstance *shared __attribute__((swift_name("shared")));
@property (readonly) MiamCoreSingletonPreferencesViewModel *instance __attribute__((swift_name("instance")));
@end

__attribute__((swift_name("SingletonPreferencesViewModel")))
@interface MiamCoreSingletonPreferencesViewModel : MiamCoreBaseViewModel<MiamCorePreferencesContractEvent *, MiamCorePreferencesContractState *, MiamCorePreferencesContractEffect *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MiamCoreSingletonPreferencesViewModelCompanion *companion __attribute__((swift_name("companion")));
- (void)addIngredientPreferenceTag:(MiamCoreTag *)tag __attribute__((swift_name("addIngredientPreference(tag:)")));
- (void)applyPreferences __attribute__((swift_name("applyPreferences()")));
- (void)back __attribute__((swift_name("back()")));
- (void)changeGlobalGuestNumberOfGuest:(int32_t)numberOfGuest __attribute__((swift_name("changeGlobalGuest(numberOfGuest:)")));
- (MiamCorePreferencesContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (NSDictionary<NSString *, NSString *> *)getPreferences __attribute__((swift_name("getPreferences()")));
- (int32_t)globalGuestCountOrDefaultDefaultValue:(int32_t)defaultValue __attribute__((swift_name("globalGuestCountOrDefault(defaultValue:)")));
- (void)goToAllPref __attribute__((swift_name("goToAllPref()")));
- (void)goToSearchPrefAndPushRoute __attribute__((swift_name("goToSearchPrefAndPushRoute()")));
- (MiamCoreInt * _Nullable)guestOrNullFromLocal __attribute__((swift_name("guestOrNullFromLocal()")));
- (void)handleEventEvent:(MiamCorePreferencesContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
- (id<MiamCoreKotlinx_coroutines_coreFlow>)observeSideEffect __attribute__((swift_name("observeSideEffect()")));
- (void)resetPreferences __attribute__((swift_name("resetPreferences()")));
- (void)togglePreferenceTagIdToToggle:(NSString *)tagIdToToggle __attribute__((swift_name("togglePreference(tagIdToToggle:)")));
@property (readonly) NSArray<MiamCoreCheckableTag *> *allTags __attribute__((swift_name("allTags")));
@property (readonly) BOOL isInit __attribute__((swift_name("isInit")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SingletonPreferencesViewModel.Companion")))
@interface MiamCoreSingletonPreferencesViewModelCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreSingletonPreferencesViewModelCompanion *shared __attribute__((swift_name("shared")));
- (MiamCorePreferencesContractState *)getInitialPref __attribute__((swift_name("getInitialPref()")));
@property (readonly) NSString *LOCAL_DIET_KEY __attribute__((swift_name("LOCAL_DIET_KEY")));
@property (readonly) NSString *LOCAL_EQUIPMENT_KEY __attribute__((swift_name("LOCAL_EQUIPMENT_KEY")));
@property (readonly) NSString *LOCAL_GUEST_KEY __attribute__((swift_name("LOCAL_GUEST_KEY")));
@property (readonly) NSString *LOCAL_INGREDIENT_KEY __attribute__((swift_name("LOCAL_INGREDIENT_KEY")));
@property (readonly) NSArray<NSString *> *defaultIngredientTagIds __attribute__((swift_name("defaultIngredientTagIds")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouterContent")))
@interface MiamCoreRouterContent : MiamCoreKotlinEnum<MiamCoreRouterContent *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MiamCoreRouterContent *recipeDetail __attribute__((swift_name("recipeDetail")));
@property (class, readonly) MiamCoreRouterContent *recipeHelper __attribute__((swift_name("recipeHelper")));
@property (class, readonly) MiamCoreRouterContent *recipeSponsor __attribute__((swift_name("recipeSponsor")));
@property (class, readonly) MiamCoreRouterContent *basketPreview __attribute__((swift_name("basketPreview")));
@property (class, readonly) MiamCoreRouterContent *itemsSelector __attribute__((swift_name("itemsSelector")));
@property (class, readonly) MiamCoreRouterContent *empty __attribute__((swift_name("empty")));
+ (MiamCoreKotlinArray<MiamCoreRouterContent *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("RouterOutletContract")))
@protocol MiamCoreRouterOutletContract
@required
@end

__attribute__((swift_name("RouterOutletContractEffect")))
@interface MiamCoreRouterOutletContractEffect : MiamCoreBase <MiamCoreUiEffect>
@end

__attribute__((swift_name("RouterOutletContractEvent")))
@interface MiamCoreRouterOutletContractEvent : MiamCoreBase <MiamCoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouterOutletContractEvent.GoToDetail")))
@interface MiamCoreRouterOutletContractEventGoToDetail : MiamCoreRouterOutletContractEvent
- (instancetype)initWithVm:(MiamCoreRecipeViewModel *)vm withFooter:(BOOL)withFooter __attribute__((swift_name("init(vm:withFooter:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreRecipeViewModel *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRouterOutletContractEventGoToDetail *)doCopyVm:(MiamCoreRecipeViewModel *)vm withFooter:(BOOL)withFooter __attribute__((swift_name("doCopy(vm:withFooter:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreRecipeViewModel *vm __attribute__((swift_name("vm")));
@property (readonly) BOOL withFooter __attribute__((swift_name("withFooter")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouterOutletContractEvent.GoToHelper")))
@interface MiamCoreRouterOutletContractEventGoToHelper : MiamCoreRouterOutletContractEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)goToHelper __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreRouterOutletContractEventGoToHelper *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouterOutletContractEvent.GoToItemSelector")))
@interface MiamCoreRouterOutletContractEventGoToItemSelector : MiamCoreRouterOutletContractEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)goToItemSelector __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreRouterOutletContractEventGoToItemSelector *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouterOutletContractEvent.GoToPreview")))
@interface MiamCoreRouterOutletContractEventGoToPreview : MiamCoreRouterOutletContractEvent
- (instancetype)initWithRecipeId:(NSString *)recipeId vm:(MiamCoreRecipeViewModel *)vm __attribute__((swift_name("init(recipeId:vm:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRecipeViewModel *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRouterOutletContractEventGoToPreview *)doCopyRecipeId:(NSString *)recipeId vm:(MiamCoreRecipeViewModel *)vm __attribute__((swift_name("doCopy(recipeId:vm:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *recipeId __attribute__((swift_name("recipeId")));
@property (readonly) MiamCoreRecipeViewModel *vm __attribute__((swift_name("vm")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouterOutletContractEvent.GoToSponsor")))
@interface MiamCoreRouterOutletContractEventGoToSponsor : MiamCoreRouterOutletContractEvent
- (instancetype)initWithSponsor:(MiamCoreSponsor *)sponsor __attribute__((swift_name("init(sponsor:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreSponsor *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRouterOutletContractEventGoToSponsor *)doCopySponsor:(MiamCoreSponsor *)sponsor __attribute__((swift_name("doCopy(sponsor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreSponsor *sponsor __attribute__((swift_name("sponsor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouterOutletContractEvent.OpenDialog")))
@interface MiamCoreRouterOutletContractEventOpenDialog : MiamCoreRouterOutletContractEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)openDialog __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreRouterOutletContractEventOpenDialog *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouterOutletContractEvent.Previous")))
@interface MiamCoreRouterOutletContractEventPrevious : MiamCoreRouterOutletContractEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)previous __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreRouterOutletContractEventPrevious *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouterOutletContractState")))
@interface MiamCoreRouterOutletContractState : MiamCoreBase <MiamCoreUiState>
- (instancetype)initWithContent:(MiamCoreRouterContent *)content rvm:(MiamCoreRecipeViewModel * _Nullable)rvm recipeId:(NSString * _Nullable)recipeId sponsor:(MiamCoreSponsor * _Nullable)sponsor isOpen:(BOOL)isOpen showFooter:(BOOL)showFooter __attribute__((swift_name("init(content:rvm:recipeId:sponsor:isOpen:showFooter:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreRouterContent *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRecipeViewModel * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreSponsor * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRouterOutletContractState *)doCopyContent:(MiamCoreRouterContent *)content rvm:(MiamCoreRecipeViewModel * _Nullable)rvm recipeId:(NSString * _Nullable)recipeId sponsor:(MiamCoreSponsor * _Nullable)sponsor isOpen:(BOOL)isOpen showFooter:(BOOL)showFooter __attribute__((swift_name("doCopy(content:rvm:recipeId:sponsor:isOpen:showFooter:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreRouterContent *content __attribute__((swift_name("content")));
@property (readonly) BOOL isOpen __attribute__((swift_name("isOpen")));
@property (readonly) NSString * _Nullable recipeId __attribute__((swift_name("recipeId")));
@property (readonly) MiamCoreRecipeViewModel * _Nullable rvm __attribute__((swift_name("rvm")));
@property (readonly) BOOL showFooter __attribute__((swift_name("showFooter")));
@property (readonly) MiamCoreSponsor * _Nullable sponsor __attribute__((swift_name("sponsor")));
@end

__attribute__((swift_name("RouterOutletViewModel")))
@interface MiamCoreRouterOutletViewModel : MiamCoreBaseViewModel<MiamCoreRouterOutletContractEvent *, MiamCoreRouterOutletContractState *, MiamCoreRouterOutletContractEffect *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MiamCoreRouterOutletContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)goToDetailVmRecipe:(MiamCoreRecipeViewModel *)vmRecipe showDetailsFooter:(BOOL)showDetailsFooter __attribute__((swift_name("goToDetail(vmRecipe:showDetailsFooter:)")));
- (void)handleEventEvent:(MiamCoreRouterOutletContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
@end

__attribute__((swift_name("PreferencesSearchContract")))
@protocol MiamCorePreferencesSearchContract
@required
@end

__attribute__((swift_name("PreferencesSearchContractEffect")))
@interface MiamCorePreferencesSearchContractEffect : MiamCoreBase <MiamCoreUiEffect>
@end

__attribute__((swift_name("PreferencesSearchContractEvent")))
@interface MiamCorePreferencesSearchContractEvent : MiamCoreBase <MiamCoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PreferencesSearchContractState")))
@interface MiamCorePreferencesSearchContractState : MiamCoreBase <MiamCoreUiState>
- (instancetype)initWithSearchProposal:(MiamCoreBasicUiState<NSArray<MiamCoreTag *> *> *)searchProposal __attribute__((swift_name("init(searchProposal:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreBasicUiState<NSArray<MiamCoreTag *> *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCorePreferencesSearchContractState *)doCopySearchProposal:(MiamCoreBasicUiState<NSArray<MiamCoreTag *> *> *)searchProposal __attribute__((swift_name("doCopy(searchProposal:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreBasicUiState<NSArray<MiamCoreTag *> *> *searchProposal __attribute__((swift_name("searchProposal")));
@end

__attribute__((swift_name("PreferencesSearchViewModel")))
@interface MiamCorePreferencesSearchViewModel : MiamCoreBaseViewModel<MiamCorePreferencesSearchContractEvent *, MiamCorePreferencesSearchContractState *, MiamCorePreferencesSearchContractEffect *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MiamCorePreferencesSearchContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)handleEventEvent:(MiamCorePreferencesSearchContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
- (void)resetState __attribute__((swift_name("resetState()")));
- (void)searchSearch:(NSString *)search __attribute__((swift_name("search(search:)")));
@end

__attribute__((swift_name("RecipeCarouselContract")))
@protocol MiamCoreRecipeCarouselContract
@required
@end

__attribute__((swift_name("RecipeCarouselContractEffect")))
@interface MiamCoreRecipeCarouselContractEffect : MiamCoreBase <MiamCoreUiEffect>
@end

__attribute__((swift_name("RecipeCarouselContractEvent")))
@interface MiamCoreRecipeCarouselContractEvent : MiamCoreBase <MiamCoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeCarouselContractEvent.GetRecipeSuggestionsFromCriteria")))
@interface MiamCoreRecipeCarouselContractEventGetRecipeSuggestionsFromCriteria : MiamCoreRecipeCarouselContractEvent
- (instancetype)initWithCriteria:(MiamCoreSuggestionsCriteria *)criteria numberOfResult:(int32_t)numberOfResult __attribute__((swift_name("init(criteria:numberOfResult:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreSuggestionsCriteria *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRecipeCarouselContractEventGetRecipeSuggestionsFromCriteria *)doCopyCriteria:(MiamCoreSuggestionsCriteria *)criteria numberOfResult:(int32_t)numberOfResult __attribute__((swift_name("doCopy(criteria:numberOfResult:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreSuggestionsCriteria *criteria __attribute__((swift_name("criteria")));
@property (readonly) int32_t numberOfResult __attribute__((swift_name("numberOfResult")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeCarouselContractEvent.GetRecipeSuggestionsFromId")))
@interface MiamCoreRecipeCarouselContractEventGetRecipeSuggestionsFromId : MiamCoreRecipeCarouselContractEvent
- (instancetype)initWithProductId:(NSString *)productId numberOfResult:(int32_t)numberOfResult __attribute__((swift_name("init(productId:numberOfResult:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRecipeCarouselContractEventGetRecipeSuggestionsFromId *)doCopyProductId:(NSString *)productId numberOfResult:(int32_t)numberOfResult __attribute__((swift_name("doCopy(productId:numberOfResult:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t numberOfResult __attribute__((swift_name("numberOfResult")));
@property (readonly) NSString *productId __attribute__((swift_name("productId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeCarouselContractState")))
@interface MiamCoreRecipeCarouselContractState : MiamCoreBase <MiamCoreUiState>
- (instancetype)initWithSuggestions:(MiamCoreBasicUiState<NSArray<MiamCoreRecipe *> *> *)suggestions __attribute__((swift_name("init(suggestions:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreBasicUiState<NSArray<MiamCoreRecipe *> *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRecipeCarouselContractState *)doCopySuggestions:(MiamCoreBasicUiState<NSArray<MiamCoreRecipe *> *> *)suggestions __attribute__((swift_name("doCopy(suggestions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreBasicUiState<NSArray<MiamCoreRecipe *> *> *suggestions __attribute__((swift_name("suggestions")));
@end

__attribute__((swift_name("RecipeCarouselViewModel")))
@interface MiamCoreRecipeCarouselViewModel : MiamCoreBaseViewModel<MiamCoreRecipeCarouselContractEvent *, MiamCoreRecipeCarouselContractState *, MiamCoreRecipeCarouselContractEffect *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MiamCoreRecipeCarouselContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)handleEventEvent:(MiamCoreRecipeCarouselContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
@end

__attribute__((swift_name("FilterEffect")))
@interface MiamCoreFilterEffect : MiamCoreBase <MiamCoreEffect>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FilterEffect.OnUpdate")))
@interface MiamCoreFilterEffectOnUpdate : MiamCoreFilterEffect
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onUpdate __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreFilterEffectOnUpdate *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FilterViewModelInstance")))
@interface MiamCoreFilterViewModelInstance : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)filterViewModelInstance __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreFilterViewModelInstance *shared __attribute__((swift_name("shared")));
@property (readonly) MiamCoreSingletonFilterViewModel *instance __attribute__((swift_name("instance")));
@end

__attribute__((swift_name("SingletonFilterContract")))
@protocol MiamCoreSingletonFilterContract
@required
@end

__attribute__((swift_name("SingletonFilterContractEffect")))
@interface MiamCoreSingletonFilterContractEffect : MiamCoreBase <MiamCoreUiEffect>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SingletonFilterContractEffect.OnUpdate")))
@interface MiamCoreSingletonFilterContractEffectOnUpdate : MiamCoreSingletonFilterContractEffect
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onUpdate __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreSingletonFilterContractEffectOnUpdate *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("SingletonFilterContractEvent")))
@interface MiamCoreSingletonFilterContractEvent : MiamCoreBase <MiamCoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SingletonFilterContractEvent.OnCostFilterChanged")))
@interface MiamCoreSingletonFilterContractEventOnCostFilterChanged : MiamCoreSingletonFilterContractEvent
- (instancetype)initWithCostFilter:(MiamCoreCatalogFilterOptions *)costFilter __attribute__((swift_name("init(costFilter:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreCatalogFilterOptions *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreSingletonFilterContractEventOnCostFilterChanged *)doCopyCostFilter:(MiamCoreCatalogFilterOptions *)costFilter __attribute__((swift_name("doCopy(costFilter:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreCatalogFilterOptions *costFilter __attribute__((swift_name("costFilter")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SingletonFilterContractEvent.OnDifficultyChanged")))
@interface MiamCoreSingletonFilterContractEventOnDifficultyChanged : MiamCoreSingletonFilterContractEvent
- (instancetype)initWithDifficulty:(MiamCoreCatalogFilterOptions *)difficulty __attribute__((swift_name("init(difficulty:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreCatalogFilterOptions *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreSingletonFilterContractEventOnDifficultyChanged *)doCopyDifficulty:(MiamCoreCatalogFilterOptions *)difficulty __attribute__((swift_name("doCopy(difficulty:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreCatalogFilterOptions *difficulty __attribute__((swift_name("difficulty")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SingletonFilterContractEvent.OnTimeFilterChanged")))
@interface MiamCoreSingletonFilterContractEventOnTimeFilterChanged : MiamCoreSingletonFilterContractEvent
- (instancetype)initWithTimeFilter:(MiamCoreCatalogFilterOptions *)timeFilter __attribute__((swift_name("init(timeFilter:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreCatalogFilterOptions *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreSingletonFilterContractEventOnTimeFilterChanged *)doCopyTimeFilter:(MiamCoreCatalogFilterOptions *)timeFilter __attribute__((swift_name("doCopy(timeFilter:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreCatalogFilterOptions *timeFilter __attribute__((swift_name("timeFilter")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SingletonFilterContractState")))
@interface MiamCoreSingletonFilterContractState : MiamCoreBase <MiamCoreUiState>
- (instancetype)initWithNumberOfResult:(int32_t)numberOfResult difficulty:(NSArray<MiamCoreCatalogFilterOptions *> *)difficulty cost:(NSArray<MiamCoreCatalogFilterOptions *> *)cost time:(NSArray<MiamCoreCatalogFilterOptions *> *)time searchString:(NSString * _Nullable)searchString isFavorite:(BOOL)isFavorite category:(NSString * _Nullable)category __attribute__((swift_name("init(numberOfResult:difficulty:cost:time:searchString:isFavorite:category:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<MiamCoreCatalogFilterOptions *> *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<MiamCoreCatalogFilterOptions *> *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<MiamCoreCatalogFilterOptions *> *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreSingletonFilterContractState *)doCopyNumberOfResult:(int32_t)numberOfResult difficulty:(NSArray<MiamCoreCatalogFilterOptions *> *)difficulty cost:(NSArray<MiamCoreCatalogFilterOptions *> *)cost time:(NSArray<MiamCoreCatalogFilterOptions *> *)time searchString:(NSString * _Nullable)searchString isFavorite:(BOOL)isFavorite category:(NSString * _Nullable)category __attribute__((swift_name("doCopy(numberOfResult:difficulty:cost:time:searchString:isFavorite:category:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable category __attribute__((swift_name("category")));
@property (readonly) NSArray<MiamCoreCatalogFilterOptions *> *cost __attribute__((swift_name("cost")));
@property (readonly) NSArray<MiamCoreCatalogFilterOptions *> *difficulty __attribute__((swift_name("difficulty")));
@property (readonly) BOOL isFavorite __attribute__((swift_name("isFavorite")));
@property (readonly) int32_t numberOfResult __attribute__((swift_name("numberOfResult")));
@property (readonly) NSString * _Nullable searchString __attribute__((swift_name("searchString")));
@property (readonly) NSArray<MiamCoreCatalogFilterOptions *> *time __attribute__((swift_name("time")));
@end

__attribute__((swift_name("SingletonFilterViewModel")))
@interface MiamCoreSingletonFilterViewModel : MiamCoreBaseViewModel<MiamCoreSingletonFilterContractEvent *, MiamCoreSingletonFilterContractState *, MiamCoreSingletonFilterContractEffect *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MiamCoreSingletonFilterViewModelCompanion *companion __attribute__((swift_name("companion")));
- (void)applyFilter __attribute__((swift_name("applyFilter()")));
- (void)clear __attribute__((swift_name("clear()")));
- (MiamCoreSingletonFilterContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (int32_t)getActiveFilterCount __attribute__((swift_name("getActiveFilterCount()")));
- (void)getRecipeCount __attribute__((swift_name("getRecipeCount()")));
- (NSDictionary<NSString *, NSString *> *)getSelectedFilters __attribute__((swift_name("getSelectedFilters()")));
- (void)handleEventEvent:(MiamCoreSingletonFilterContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
- (id<MiamCoreKotlinx_coroutines_coreFlow>)observeSideEffect __attribute__((swift_name("observeSideEffect()")));
- (void)setCatCatId:(NSString *)catId __attribute__((swift_name("setCat(catId:)")));
- (void)setFavorite __attribute__((swift_name("setFavorite()")));
- (void)setSearchStringSearchString:(NSString *)searchString __attribute__((swift_name("setSearchString(searchString:)")));
- (void)setSearchStringAndApplySearchString:(NSString *)searchString __attribute__((swift_name("setSearchStringAndApply(searchString:)")));
@property (readonly) id<MiamCoreKotlinx_coroutines_coreCoroutineExceptionHandler> coroutineHandler __attribute__((swift_name("coroutineHandler")));
@property (readonly) MiamCoreRecipeRepositoryImp *recipeRepositoryImp __attribute__((swift_name("recipeRepositoryImp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SingletonFilterViewModel.Companion")))
@interface MiamCoreSingletonFilterViewModelCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreSingletonFilterViewModelCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MiamCoreSingletonFilterContractState *filterState __attribute__((swift_name("filterState")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SingletonMealPlannerFilterViewModel")))
@interface MiamCoreSingletonMealPlannerFilterViewModel : MiamCoreSingletonFilterViewModel
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)getRecipeCount __attribute__((swift_name("getRecipeCount()")));
- (NSDictionary<NSString *, NSString *> *)getSelectedFilters __attribute__((swift_name("getSelectedFilters()")));
@end

__attribute__((swift_name("BasketTagContract")))
@protocol MiamCoreBasketTagContract
@required
@end

__attribute__((swift_name("BasketTagContractEffect")))
@interface MiamCoreBasketTagContractEffect : MiamCoreBase <MiamCoreUiEffect>
@end

__attribute__((swift_name("BasketTagContractEvent")))
@interface MiamCoreBasketTagContractEvent : MiamCoreBase <MiamCoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketTagContractEvent.SetRetailerProductId")))
@interface MiamCoreBasketTagContractEventSetRetailerProductId : MiamCoreBasketTagContractEvent
- (instancetype)initWithProductId:(NSString *)productId __attribute__((swift_name("init(productId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreBasketTagContractEventSetRetailerProductId *)doCopyProductId:(NSString *)productId __attribute__((swift_name("doCopy(productId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *productId __attribute__((swift_name("productId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketTagContractState")))
@interface MiamCoreBasketTagContractState : MiamCoreBase <MiamCoreUiState>
- (instancetype)initWithRecipeList:(MiamCoreBasicUiState<NSArray<MiamCoreRecipe *> *> *)recipeList __attribute__((swift_name("init(recipeList:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreBasicUiState<NSArray<MiamCoreRecipe *> *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreBasketTagContractState *)doCopyRecipeList:(MiamCoreBasicUiState<NSArray<MiamCoreRecipe *> *> *)recipeList __attribute__((swift_name("doCopy(recipeList:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreBasicUiState<NSArray<MiamCoreRecipe *> *> *recipeList __attribute__((swift_name("recipeList")));
@end

__attribute__((swift_name("BasketTagViewModel")))
@interface MiamCoreBasketTagViewModel : MiamCoreBaseViewModel<MiamCoreBasketTagContractEvent *, MiamCoreBasketTagContractState *, MiamCoreBasketTagContractEffect *>
- (instancetype)initWithVmRouter:(MiamCoreRouterOutletViewModel *)vmRouter __attribute__((swift_name("init(vmRouter:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MiamCoreBasketTagContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)goToDetailRecipe:(MiamCoreRecipe *)recipe __attribute__((swift_name("goToDetail(recipe:)")));
- (void)handleEventEvent:(MiamCoreBasketTagContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
@end

__attribute__((swift_name("SponsorDetailsContract")))
@protocol MiamCoreSponsorDetailsContract
@required
@end

__attribute__((swift_name("SponsorDetailsContractEffect")))
@interface MiamCoreSponsorDetailsContractEffect : MiamCoreBase <MiamCoreUiEffect>
@end

__attribute__((swift_name("SponsorDetailsContractEvent")))
@interface MiamCoreSponsorDetailsContractEvent : MiamCoreBase <MiamCoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorDetailsContractState")))
@interface MiamCoreSponsorDetailsContractState : MiamCoreBase <MiamCoreUiState>
- (instancetype)initWithSponsorBlocks:(MiamCoreBasicUiState<NSArray<MiamCoreSponsorBlock *> *> *)sponsorBlocks sponsor:(MiamCoreSponsor * _Nullable)sponsor __attribute__((swift_name("init(sponsorBlocks:sponsor:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreBasicUiState<NSArray<MiamCoreSponsorBlock *> *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreSponsor * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreSponsorDetailsContractState *)doCopySponsorBlocks:(MiamCoreBasicUiState<NSArray<MiamCoreSponsorBlock *> *> *)sponsorBlocks sponsor:(MiamCoreSponsor * _Nullable)sponsor __attribute__((swift_name("doCopy(sponsorBlocks:sponsor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreSponsor * _Nullable sponsor __attribute__((swift_name("sponsor")));
@property (readonly) MiamCoreBasicUiState<NSArray<MiamCoreSponsorBlock *> *> *sponsorBlocks __attribute__((swift_name("sponsorBlocks")));
@end

__attribute__((swift_name("SponsorDetailsViewModel")))
@interface MiamCoreSponsorDetailsViewModel : MiamCoreBaseViewModel<MiamCoreSponsorDetailsContractEvent *, MiamCoreSponsorDetailsContractState *, MiamCoreSponsorDetailsContractEffect *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MiamCoreSponsorDetailsContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)fetchSponsorBlockByIdsSponsor:(MiamCoreSponsor *)sponsor __attribute__((swift_name("fetchSponsorBlockByIds(sponsor:)")));
- (void)handleEventEvent:(MiamCoreSponsorDetailsContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
@end

__attribute__((swift_name("RecipeContract")))
@protocol MiamCoreRecipeContract
@required
@end

__attribute__((swift_name("RecipeContractEffect")))
@interface MiamCoreRecipeContractEffect : MiamCoreBase <MiamCoreUiEffect>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeContractEffect.Disliked")))
@interface MiamCoreRecipeContractEffectDisliked : MiamCoreRecipeContractEffect
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)disliked __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreRecipeContractEffectDisliked *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeContractEffect.HideCard")))
@interface MiamCoreRecipeContractEffectHideCard : MiamCoreRecipeContractEffect
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)hideCard __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreRecipeContractEffectHideCard *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("RecipeContractEvent")))
@interface MiamCoreRecipeContractEvent : MiamCoreBase <MiamCoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeContractEvent.Error")))
@interface MiamCoreRecipeContractEventError : MiamCoreRecipeContractEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)error __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreRecipeContractEventError *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeContractEvent.OnAddRecipe")))
@interface MiamCoreRecipeContractEventOnAddRecipe : MiamCoreRecipeContractEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onAddRecipe __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreRecipeContractEventOnAddRecipe *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeContractEvent.SetActiveStep")))
@interface MiamCoreRecipeContractEventSetActiveStep : MiamCoreRecipeContractEvent
- (instancetype)initWithStepIndex:(int32_t)stepIndex __attribute__((swift_name("init(stepIndex:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRecipeContractEventSetActiveStep *)doCopyStepIndex:(int32_t)stepIndex __attribute__((swift_name("doCopy(stepIndex:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t stepIndex __attribute__((swift_name("stepIndex")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeContractEvent.ShowIngredient")))
@interface MiamCoreRecipeContractEventShowIngredient : MiamCoreRecipeContractEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)showIngredient __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreRecipeContractEventShowIngredient *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeContractEvent.ShowSteps")))
@interface MiamCoreRecipeContractEventShowSteps : MiamCoreRecipeContractEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)showSteps __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreRecipeContractEventShowSteps *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipeContractState")))
@interface MiamCoreRecipeContractState : MiamCoreBase <MiamCoreUiState>
- (instancetype)initWithRecipeState:(MiamCoreBasicUiState<MiamCoreRecipe *> *)recipeState recipe:(MiamCoreRecipe * _Nullable)recipe headerText:(NSString *)headerText guest:(int32_t)guest guestUpdating:(BOOL)guestUpdating isInCart:(BOOL)isInCart analyticsEventSent:(BOOL)analyticsEventSent isPriceDisplayed:(BOOL)isPriceDisplayed isInViewport:(BOOL)isInViewport tabState:(MiamCoreTabEnum *)tabState activeStep:(int32_t)activeStep recipeLoaded:(BOOL)recipeLoaded likeIsEnable:(BOOL)likeIsEnable show_event_sent:(BOOL)show_event_sent __attribute__((swift_name("init(recipeState:recipe:headerText:guest:guestUpdating:isInCart:analyticsEventSent:isPriceDisplayed:isInViewport:tabState:activeStep:recipeLoaded:likeIsEnable:show_event_sent:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreBasicUiState<MiamCoreRecipe *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreTabEnum *)component10 __attribute__((swift_name("component10()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component11 __attribute__((swift_name("component11()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component12 __attribute__((swift_name("component12()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component13 __attribute__((swift_name("component13()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component14 __attribute__((swift_name("component14()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRecipe * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRecipeContractState *)doCopyRecipeState:(MiamCoreBasicUiState<MiamCoreRecipe *> *)recipeState recipe:(MiamCoreRecipe * _Nullable)recipe headerText:(NSString *)headerText guest:(int32_t)guest guestUpdating:(BOOL)guestUpdating isInCart:(BOOL)isInCart analyticsEventSent:(BOOL)analyticsEventSent isPriceDisplayed:(BOOL)isPriceDisplayed isInViewport:(BOOL)isInViewport tabState:(MiamCoreTabEnum *)tabState activeStep:(int32_t)activeStep recipeLoaded:(BOOL)recipeLoaded likeIsEnable:(BOOL)likeIsEnable show_event_sent:(BOOL)show_event_sent __attribute__((swift_name("doCopy(recipeState:recipe:headerText:guest:guestUpdating:isInCart:analyticsEventSent:isPriceDisplayed:isInViewport:tabState:activeStep:recipeLoaded:likeIsEnable:show_event_sent:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (MiamCoreRecipeContractState *)refreshFromGlGroceriesListStore:(id<MiamCoreGroceriesListStore>)groceriesListStore __attribute__((swift_name("refreshFromGl(groceriesListStore:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t activeStep __attribute__((swift_name("activeStep")));
@property (readonly) BOOL analyticsEventSent __attribute__((swift_name("analyticsEventSent")));
@property (readonly) int32_t guest __attribute__((swift_name("guest")));
@property (readonly) BOOL guestUpdating __attribute__((swift_name("guestUpdating")));
@property (readonly) NSString *headerText __attribute__((swift_name("headerText")));
@property (readonly) BOOL isInCart __attribute__((swift_name("isInCart")));
@property (readonly) BOOL isInViewport __attribute__((swift_name("isInViewport")));
@property (readonly) BOOL isPriceDisplayed __attribute__((swift_name("isPriceDisplayed")));
@property (readonly) BOOL likeIsEnable __attribute__((swift_name("likeIsEnable")));
@property (readonly) MiamCoreRecipe * _Nullable recipe __attribute__((swift_name("recipe")));
@property (readonly) BOOL recipeLoaded __attribute__((swift_name("recipeLoaded")));
@property (readonly) MiamCoreBasicUiState<MiamCoreRecipe *> *recipeState __attribute__((swift_name("recipeState")));
@property (readonly) BOOL show_event_sent __attribute__((swift_name("show_event_sent")));
@property (readonly) MiamCoreTabEnum *tabState __attribute__((swift_name("tabState")));
@end

__attribute__((swift_name("RecipeViewModel")))
@interface MiamCoreRecipeViewModel : MiamCoreBaseViewModel<MiamCoreRecipeContractEvent *, MiamCoreRecipeContractState *, MiamCoreRecipeContractEffect *>
- (instancetype)initWithRouterVM:(MiamCoreRouterOutletViewModel *)routerVM __attribute__((swift_name("init(routerVM:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MiamCoreRecipeContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)fetchRecipeRecipeId:(NSString *)recipeId included:(NSArray<NSString *> * _Nullable)included __attribute__((swift_name("fetchRecipe(recipeId:included:)")));
- (void)goToDetailShowDetailsFooter:(BOOL)showDetailsFooter __attribute__((swift_name("goToDetail(showDetailsFooter:)")));
- (void)handleEventEvent:(MiamCoreRecipeContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
- (void)registerListeners __attribute__((swift_name("registerListeners()")));
- (void)setRecipeRecipe:(MiamCoreRecipe *)recipe __attribute__((swift_name("setRecipe(recipe:)")));
- (void)setRecipeFromSuggestionCriteria:(MiamCoreSuggestionsCriteria *)criteria __attribute__((swift_name("setRecipeFromSuggestion(criteria:)")));
- (void)unsetRecipe __attribute__((swift_name("unsetRecipe()")));
- (void)updateGuestNbGuest:(int32_t)nbGuest __attribute__((swift_name("updateGuest(nbGuest:)")));
@property (readonly) NSString * _Nullable recipeId __attribute__((swift_name("recipeId")));
@property (readonly) MiamCoreRouterOutletViewModel *routerVM __attribute__((swift_name("routerVM")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TabEnum")))
@interface MiamCoreTabEnum : MiamCoreKotlinEnum<MiamCoreTabEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MiamCoreTabEnum *ingredient __attribute__((swift_name("ingredient")));
@property (class, readonly) MiamCoreTabEnum *step __attribute__((swift_name("step")));
+ (MiamCoreKotlinArray<MiamCoreTabEnum *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CatalogContent")))
@interface MiamCoreCatalogContent : MiamCoreKotlinEnum<MiamCoreCatalogContent *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MiamCoreCatalogContent *wordSearch __attribute__((swift_name("wordSearch")));
@property (class, readonly) MiamCoreCatalogContent *filterSearch __attribute__((swift_name("filterSearch")));
@property (class, readonly) MiamCoreCatalogContent *categoriesList __attribute__((swift_name("categoriesList")));
@property (class, readonly) MiamCoreCatalogContent *category __attribute__((swift_name("category")));
@property (class, readonly) MiamCoreCatalogContent *favorite __attribute__((swift_name("favorite")));
+ (MiamCoreKotlinArray<MiamCoreCatalogContent *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("CatalogContract")))
@protocol MiamCoreCatalogContract
@required
@end

__attribute__((swift_name("CatalogContractEffect")))
@interface MiamCoreCatalogContractEffect : MiamCoreBase <MiamCoreUiEffect>
@end

__attribute__((swift_name("CatalogContractEvent")))
@interface MiamCoreCatalogContractEvent : MiamCoreBase <MiamCoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CatalogContractEvent.GoBack")))
@interface MiamCoreCatalogContractEventGoBack : MiamCoreCatalogContractEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)goBack __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreCatalogContractEventGoBack *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CatalogContractEvent.GoToFavorite")))
@interface MiamCoreCatalogContractEventGoToFavorite : MiamCoreCatalogContractEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)goToFavorite __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreCatalogContractEventGoToFavorite *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CatalogContractState")))
@interface MiamCoreCatalogContractState : MiamCoreBase <MiamCoreUiState>
- (instancetype)initWithCategories:(MiamCoreBasicUiState<NSArray<MiamCorePackage *> *> *)categories content:(MiamCoreCatalogContent *)content dialogIsOpen:(BOOL)dialogIsOpen dialogContent:(MiamCoreDialogContent *)dialogContent enableFilters:(BOOL)enableFilters enablePreferences:(BOOL)enablePreferences openedCategoryId:(NSString *)openedCategoryId openedCategoryTitle:(NSString *)openedCategoryTitle subtitle:(NSString * _Nullable)subtitle __attribute__((swift_name("init(categories:content:dialogIsOpen:dialogContent:enableFilters:enablePreferences:openedCategoryId:openedCategoryTitle:subtitle:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreBasicUiState<NSArray<MiamCorePackage *> *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreCatalogContent *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreDialogContent *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreCatalogContractState *)doCopyCategories:(MiamCoreBasicUiState<NSArray<MiamCorePackage *> *> *)categories content:(MiamCoreCatalogContent *)content dialogIsOpen:(BOOL)dialogIsOpen dialogContent:(MiamCoreDialogContent *)dialogContent enableFilters:(BOOL)enableFilters enablePreferences:(BOOL)enablePreferences openedCategoryId:(NSString *)openedCategoryId openedCategoryTitle:(NSString *)openedCategoryTitle subtitle:(NSString * _Nullable)subtitle __attribute__((swift_name("doCopy(categories:content:dialogIsOpen:dialogContent:enableFilters:enablePreferences:openedCategoryId:openedCategoryTitle:subtitle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreBasicUiState<NSArray<MiamCorePackage *> *> *categories __attribute__((swift_name("categories")));
@property (readonly) MiamCoreCatalogContent *content __attribute__((swift_name("content")));
@property (readonly) MiamCoreDialogContent *dialogContent __attribute__((swift_name("dialogContent")));
@property (readonly) BOOL dialogIsOpen __attribute__((swift_name("dialogIsOpen")));
@property (readonly) BOOL enableFilters __attribute__((swift_name("enableFilters")));
@property (readonly) BOOL enablePreferences __attribute__((swift_name("enablePreferences")));
@property (readonly) NSString *openedCategoryId __attribute__((swift_name("openedCategoryId")));
@property (readonly) NSString *openedCategoryTitle __attribute__((swift_name("openedCategoryTitle")));
@property (readonly) NSString * _Nullable subtitle __attribute__((swift_name("subtitle")));
@end

__attribute__((swift_name("CatalogViewModel")))
@interface MiamCoreCatalogViewModel : MiamCoreBaseViewModel<MiamCoreCatalogContractEvent *, MiamCoreCatalogContractState *, MiamCoreCatalogContractEffect *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MiamCoreCatalogViewModelCompanion *companion __attribute__((swift_name("companion")));
- (void)close __attribute__((swift_name("close()")));
- (MiamCoreCatalogContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)enableFiltersEnable:(BOOL)enable __attribute__((swift_name("enableFilters(enable:)")));
- (void)enablePreferencesEnable:(BOOL)enable __attribute__((swift_name("enablePreferences(enable:)")));
- (void)goToCategoriesList __attribute__((swift_name("goToCategoriesList()")));
- (void)goToCategoryCategoryId:(NSString *)categoryId categoryTitle:(NSString *)categoryTitle subtitle:(NSString * _Nullable)subtitle __attribute__((swift_name("goToCategory(categoryId:categoryTitle:subtitle:)")));
- (void)handleEventEvent:(MiamCoreCatalogContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
- (void)onSimpleSearchContent:(MiamCoreCatalogContent *)content __attribute__((swift_name("onSimpleSearch(content:)")));
- (void)openFilter __attribute__((swift_name("openFilter()")));
- (void)openPreferences __attribute__((swift_name("openPreferences()")));
- (void)openSearch __attribute__((swift_name("openSearch()")));
- (void)pushInitialRoute __attribute__((swift_name("pushInitialRoute()")));
- (void)registerListeners __attribute__((swift_name("registerListeners()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CatalogViewModel.Companion")))
@interface MiamCoreCatalogViewModelCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreCatalogViewModelCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *CATEGORIES_LIST_TITLE __attribute__((swift_name("CATEGORIES_LIST_TITLE")));
@property (readonly) NSString *FAVORITE_LIST_TITLE __attribute__((swift_name("FAVORITE_LIST_TITLE")));
@property (readonly) NSString *FILTER_LIST_TITLE __attribute__((swift_name("FILTER_LIST_TITLE")));
@property (readonly) NSString *RECIPE_LIST_TITLE __attribute__((swift_name("RECIPE_LIST_TITLE")));
@property (readonly) NSString *SEARCH_LIST_TITLE __attribute__((swift_name("SEARCH_LIST_TITLE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DialogContent")))
@interface MiamCoreDialogContent : MiamCoreKotlinEnum<MiamCoreDialogContent *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MiamCoreDialogContent *filter __attribute__((swift_name("filter")));
@property (class, readonly) MiamCoreDialogContent *preferences __attribute__((swift_name("preferences")));
@property (class, readonly) MiamCoreDialogContent *search __attribute__((swift_name("search")));
+ (MiamCoreKotlinArray<MiamCoreDialogContent *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExecutorHelper")))
@interface MiamCoreExecutorHelper : MiamCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MiamCoreExecutorHelperCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExecutorHelper.Companion")))
@interface MiamCoreExecutorHelperCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreExecutorHelperCompanion *shared __attribute__((swift_name("shared")));
- (void)cancelRunningJobJob:(id<MiamCoreKotlinx_coroutines_coreJob> _Nullable)job __attribute__((swift_name("cancelRunningJob(job:)")));
- (id<MiamCoreKotlinx_coroutines_coreJob>)emptyJob __attribute__((swift_name("emptyJob()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlterQuantityBasketEntry")))
@interface MiamCoreAlterQuantityBasketEntry : MiamCoreBase
- (instancetype)initWithId:(NSString *)id delatQty:(int32_t)delatQty __attribute__((swift_name("init(id:delatQty:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreAlterQuantityBasketEntry *)doCopyId:(NSString *)id delatQty:(int32_t)delatQty __attribute__((swift_name("doCopy(id:delatQty:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t delatQty __attribute__((swift_name("delatQty")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end

__attribute__((swift_name("BasicUiState")))
@interface MiamCoreBasicUiState<__covariant T> : MiamCoreBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasicUiStateEmpty")))
@interface MiamCoreBasicUiStateEmpty : MiamCoreBasicUiState<MiamCoreKotlinNothing *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)empty __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreBasicUiStateEmpty *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasicUiStateError")))
@interface MiamCoreBasicUiStateError : MiamCoreBasicUiState<MiamCoreKotlinNothing *>
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreBasicUiStateError *)doCopyMessage:(NSString * _Nullable)message __attribute__((swift_name("doCopy(message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasicUiStateIdle")))
@interface MiamCoreBasicUiStateIdle : MiamCoreBasicUiState<MiamCoreKotlinNothing *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)idle __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreBasicUiStateIdle *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasicUiStateLoading")))
@interface MiamCoreBasicUiStateLoading : MiamCoreBasicUiState<MiamCoreKotlinNothing *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)loading __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreBasicUiStateLoading *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasicUiStateSuccess")))
@interface MiamCoreBasicUiStateSuccess<T> : MiamCoreBasicUiState<T>
- (instancetype)initWithData:(T _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreBasicUiStateSuccess<T> *)doCopyData:(T _Nullable)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable data __attribute__((swift_name("data")));
@end

__attribute__((swift_name("BasketAction")))
@interface MiamCoreBasketAction : MiamCoreBase <MiamCoreAction>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketAction.AddBasketEntry")))
@interface MiamCoreBasketActionAddBasketEntry : MiamCoreBasketAction
- (instancetype)initWithEntry:(MiamCoreBasketEntry *)entry __attribute__((swift_name("init(entry:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreBasketEntry *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreBasketActionAddBasketEntry *)doCopyEntry:(MiamCoreBasketEntry *)entry __attribute__((swift_name("doCopy(entry:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreBasketEntry *entry __attribute__((swift_name("entry")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketAction.ConfirmBasket")))
@interface MiamCoreBasketActionConfirmBasket : MiamCoreBasketAction
- (instancetype)initWithPrice:(NSString *)price __attribute__((swift_name("init(price:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreBasketActionConfirmBasket *)doCopyPrice:(NSString *)price __attribute__((swift_name("doCopy(price:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *price __attribute__((swift_name("price")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketAction.RefreshBasket")))
@interface MiamCoreBasketActionRefreshBasket : MiamCoreBasketAction
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)refreshBasket __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreBasketActionRefreshBasket *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketAction.RemoveEntry")))
@interface MiamCoreBasketActionRemoveEntry : MiamCoreBasketAction
- (instancetype)initWithEntry:(MiamCoreBasketEntry *)entry __attribute__((swift_name("init(entry:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreBasketEntry *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreBasketActionRemoveEntry *)doCopyEntry:(MiamCoreBasketEntry *)entry __attribute__((swift_name("doCopy(entry:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreBasketEntry *entry __attribute__((swift_name("entry")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketAction.ReplaceSelectedItem")))
@interface MiamCoreBasketActionReplaceSelectedItem : MiamCoreBasketAction
- (instancetype)initWithBasketEntry:(MiamCoreBasketEntry *)basketEntry itemId:(int32_t)itemId __attribute__((swift_name("init(basketEntry:itemId:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreBasketEntry *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreBasketActionReplaceSelectedItem *)doCopyBasketEntry:(MiamCoreBasketEntry *)basketEntry itemId:(int32_t)itemId __attribute__((swift_name("doCopy(basketEntry:itemId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreBasketEntry *basketEntry __attribute__((swift_name("basketEntry")));
@property (readonly) int32_t itemId __attribute__((swift_name("itemId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketAction.UpdateBasketEntries")))
@interface MiamCoreBasketActionUpdateBasketEntries : MiamCoreBasketAction
- (instancetype)initWithBasketEntries:(NSArray<MiamCoreBasketEntry *> *)basketEntries __attribute__((swift_name("init(basketEntries:)"))) __attribute__((objc_designated_initializer));
- (NSArray<MiamCoreBasketEntry *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreBasketActionUpdateBasketEntries *)doCopyBasketEntries:(NSArray<MiamCoreBasketEntry *> *)basketEntries __attribute__((swift_name("doCopy(basketEntries:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<MiamCoreBasketEntry *> *basketEntries __attribute__((swift_name("basketEntries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketAction.UpdateBasketEntriesDiff")))
@interface MiamCoreBasketActionUpdateBasketEntriesDiff : MiamCoreBasketAction
- (instancetype)initWithBasketEntriesDiff:(NSArray<MiamCoreAlterQuantityBasketEntry *> *)basketEntriesDiff __attribute__((swift_name("init(basketEntriesDiff:)"))) __attribute__((objc_designated_initializer));
- (NSArray<MiamCoreAlterQuantityBasketEntry *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreBasketActionUpdateBasketEntriesDiff *)doCopyBasketEntriesDiff:(NSArray<MiamCoreAlterQuantityBasketEntry *> *)basketEntriesDiff __attribute__((swift_name("doCopy(basketEntriesDiff:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<MiamCoreAlterQuantityBasketEntry *> *basketEntriesDiff __attribute__((swift_name("basketEntriesDiff")));
@end

__attribute__((swift_name("BasketEffect")))
@interface MiamCoreBasketEffect : MiamCoreBase <MiamCoreEffect>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketEffect.BasketConfirmed")))
@interface MiamCoreBasketEffectBasketConfirmed : MiamCoreBasketEffect
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)basketConfirmed __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreBasketEffectBasketConfirmed *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketEffect.BasketPreviewChange")))
@interface MiamCoreBasketEffectBasketPreviewChange : MiamCoreBasketEffect
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)basketPreviewChange __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreBasketEffectBasketPreviewChange *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketState")))
@interface MiamCoreBasketState : MiamCoreBase <MiamCoreState>
- (instancetype)initWithBasket:(MiamCoreBasket * _Nullable)basket basketPreview:(NSArray<MiamCoreBasketPreviewLine *> * _Nullable)basketPreview entriesCount:(MiamCoreInt * _Nullable)entriesCount recipeCount:(MiamCoreInt * _Nullable)recipeCount totalPrice:(MiamCoreDouble * _Nullable)totalPrice __attribute__((swift_name("init(basket:basketPreview:entriesCount:recipeCount:totalPrice:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreBasket * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<MiamCoreBasketPreviewLine *> * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreInt * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreInt * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreDouble * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreBasketState *)doCopyBasket:(MiamCoreBasket * _Nullable)basket basketPreview:(NSArray<MiamCoreBasketPreviewLine *> * _Nullable)basketPreview entriesCount:(MiamCoreInt * _Nullable)entriesCount recipeCount:(MiamCoreInt * _Nullable)recipeCount totalPrice:(MiamCoreDouble * _Nullable)totalPrice __attribute__((swift_name("doCopy(basket:basketPreview:entriesCount:recipeCount:totalPrice:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreBasket * _Nullable basket __attribute__((swift_name("basket")));
@property (readonly) NSArray<MiamCoreBasketPreviewLine *> * _Nullable basketPreview __attribute__((swift_name("basketPreview")));
@property (readonly) MiamCoreInt * _Nullable entriesCount __attribute__((swift_name("entriesCount")));
@property (readonly) MiamCoreInt * _Nullable recipeCount __attribute__((swift_name("recipeCount")));
@property (readonly) MiamCoreDouble * _Nullable totalPrice __attribute__((swift_name("totalPrice")));
@end

__attribute__((swift_name("BasketStore")))
@protocol MiamCoreBasketStore <MiamCoreStore>
@required
- (NSArray<MiamCoreBasketEntry *> * _Nullable)activeEntries __attribute__((swift_name("activeEntries()")));
- (BOOL)basketIsEmpty __attribute__((swift_name("basketIsEmpty()")));
- (void)fastRemoveRecipeFromBplRecipeId:(NSString *)recipeId __attribute__((swift_name("fastRemoveRecipeFromBpl(recipeId:)")));
- (MiamCoreBasket * _Nullable)getBasket __attribute__((swift_name("getBasket()")));
- (BOOL)recipeInBasketRecipeId:(NSString *)recipeId __attribute__((swift_name("recipeInBasket(recipeId:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketStoreImp")))
@interface MiamCoreBasketStoreImp : MiamCoreBase <MiamCoreBasketStore, MiamCoreKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSArray<MiamCoreBasketEntry *> * _Nullable)activeEntries __attribute__((swift_name("activeEntries()")));
- (BOOL)basketIsEmpty __attribute__((swift_name("basketIsEmpty()")));
- (id<MiamCoreKotlinx_coroutines_coreJob>)dispatchAction:(MiamCoreBasketAction *)action __attribute__((swift_name("dispatch(action:)")));
- (void)fastRemoveRecipeFromBplRecipeId:(NSString *)recipeId __attribute__((swift_name("fastRemoveRecipeFromBpl(recipeId:)")));
- (MiamCoreBasket * _Nullable)getBasket __attribute__((swift_name("getBasket()")));
- (id<MiamCoreKotlinx_coroutines_coreFlow>)observeSideEffect __attribute__((swift_name("observeSideEffect()")));
- (id<MiamCoreKotlinx_coroutines_coreStateFlow>)observeState __attribute__((swift_name("observeState()")));
- (BOOL)recipeInBasketRecipeId:(NSString *)recipeId __attribute__((swift_name("recipeInBasket(recipeId:)")));
@property (readonly) id<MiamCoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<MiamCoreKotlinx_coroutines_coreMutableStateFlow> state __attribute__((swift_name("state")));
@end

__attribute__((swift_name("GroceriesListAction")))
@interface MiamCoreGroceriesListAction : MiamCoreBase <MiamCoreAction>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GroceriesListAction.AlterRecipeList")))
@interface MiamCoreGroceriesListActionAlterRecipeList : MiamCoreGroceriesListAction
- (instancetype)initWithRecipeId:(NSString *)recipeId guests:(int32_t)guests __attribute__((swift_name("init(recipeId:guests:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreGroceriesListActionAlterRecipeList *)doCopyRecipeId:(NSString *)recipeId guests:(int32_t)guests __attribute__((swift_name("doCopy(recipeId:guests:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t guests __attribute__((swift_name("guests")));
@property (readonly) NSString *recipeId __attribute__((swift_name("recipeId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GroceriesListAction.RefreshGroceriesList")))
@interface MiamCoreGroceriesListActionRefreshGroceriesList : MiamCoreGroceriesListAction
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)refreshGroceriesList __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreGroceriesListActionRefreshGroceriesList *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GroceriesListAction.RemoveRecipe")))
@interface MiamCoreGroceriesListActionRemoveRecipe : MiamCoreGroceriesListAction
- (instancetype)initWithRecipeId:(NSString *)recipeId __attribute__((swift_name("init(recipeId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreGroceriesListActionRemoveRecipe *)doCopyRecipeId:(NSString *)recipeId __attribute__((swift_name("doCopy(recipeId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *recipeId __attribute__((swift_name("recipeId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GroceriesListAction.ResetGroceriesList")))
@interface MiamCoreGroceriesListActionResetGroceriesList : MiamCoreGroceriesListAction
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)resetGroceriesList __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreGroceriesListActionResetGroceriesList *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("GroceriesListEffect")))
@interface MiamCoreGroceriesListEffect : MiamCoreBase <MiamCoreEffect>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GroceriesListEffect.GroceriesListLoaded")))
@interface MiamCoreGroceriesListEffectGroceriesListLoaded : MiamCoreGroceriesListEffect
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)groceriesListLoaded __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreGroceriesListEffectGroceriesListLoaded *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GroceriesListEffect.RecipeAdded")))
@interface MiamCoreGroceriesListEffectRecipeAdded : MiamCoreGroceriesListEffect
- (instancetype)initWithRecipeId:(NSString *)recipeId guests:(int32_t)guests __attribute__((swift_name("init(recipeId:guests:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreGroceriesListEffectRecipeAdded *)doCopyRecipeId:(NSString *)recipeId guests:(int32_t)guests __attribute__((swift_name("doCopy(recipeId:guests:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t guests __attribute__((swift_name("guests")));
@property (readonly) NSString *recipeId __attribute__((swift_name("recipeId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GroceriesListEffect.RecipeCountChanged")))
@interface MiamCoreGroceriesListEffectRecipeCountChanged : MiamCoreGroceriesListEffect
- (instancetype)initWithNewRecipeCount:(int32_t)newRecipeCount __attribute__((swift_name("init(newRecipeCount:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreGroceriesListEffectRecipeCountChanged *)doCopyNewRecipeCount:(int32_t)newRecipeCount __attribute__((swift_name("doCopy(newRecipeCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly, getter=doNewRecipeCount) int32_t newRecipeCount __attribute__((swift_name("newRecipeCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GroceriesListEffect.RecipeRemoved")))
@interface MiamCoreGroceriesListEffectRecipeRemoved : MiamCoreGroceriesListEffect
- (instancetype)initWithRecipeId:(NSString *)recipeId __attribute__((swift_name("init(recipeId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreGroceriesListEffectRecipeRemoved *)doCopyRecipeId:(NSString *)recipeId __attribute__((swift_name("doCopy(recipeId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *recipeId __attribute__((swift_name("recipeId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GroceriesListState")))
@interface MiamCoreGroceriesListState : MiamCoreBase <MiamCoreState>
- (instancetype)initWithGroceriesList:(MiamCoreGroceriesList * _Nullable)groceriesList __attribute__((swift_name("init(groceriesList:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreGroceriesList * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreGroceriesListState *)doCopyGroceriesList:(MiamCoreGroceriesList * _Nullable)groceriesList __attribute__((swift_name("doCopy(groceriesList:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreGroceriesList * _Nullable groceriesList __attribute__((swift_name("groceriesList")));
@property (readonly) int32_t recipeCount __attribute__((swift_name("recipeCount")));
@end

__attribute__((swift_name("GroceriesListStore")))
@protocol MiamCoreGroceriesListStore <MiamCoreStore>
@required
- (MiamCoreGroceriesList * _Nullable)getGroceriesList __attribute__((swift_name("getGroceriesList()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setGroceriesListGroceriesList:(MiamCoreGroceriesList *)groceriesList completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("setGroceriesList(groceriesList:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GroceriesListStoreImpl")))
@interface MiamCoreGroceriesListStoreImpl : MiamCoreBase <MiamCoreGroceriesListStore, MiamCoreKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<MiamCoreKotlinx_coroutines_coreJob>)dispatchAction:(MiamCoreGroceriesListAction *)action __attribute__((swift_name("dispatch(action:)")));
- (MiamCoreGroceriesList * _Nullable)getGroceriesList __attribute__((swift_name("getGroceriesList()")));
- (id<MiamCoreKotlinx_coroutines_coreFlow>)observeSideEffect __attribute__((swift_name("observeSideEffect()")));
- (id<MiamCoreKotlinx_coroutines_coreStateFlow>)observeState __attribute__((swift_name("observeState()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setGroceriesListGroceriesList:(MiamCoreGroceriesList *)groceriesList completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("setGroceriesList(groceriesList:completionHandler:)")));
- (void)updateStateIfChangedNewState:(MiamCoreGroceriesListState *)newState __attribute__((swift_name("updateStateIfChanged(newState:)")));
@property (readonly) id<MiamCoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<MiamCoreKotlinx_coroutines_coreMutableStateFlow> state __attribute__((swift_name("state")));
@end

__attribute__((swift_name("LikeEffect")))
@interface MiamCoreLikeEffect : MiamCoreBase <MiamCoreEffect>
@property (readonly) NSString *recipeId __attribute__((swift_name("recipeId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LikeEffect.Disliked")))
@interface MiamCoreLikeEffectDisliked : MiamCoreLikeEffect
- (instancetype)initWithRecipeId:(NSString *)recipeId __attribute__((swift_name("init(recipeId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreLikeEffectDisliked *)doCopyRecipeId:(NSString *)recipeId __attribute__((swift_name("doCopy(recipeId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *recipeId __attribute__((swift_name("recipeId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LikeEffect.Liked")))
@interface MiamCoreLikeEffectLiked : MiamCoreLikeEffect
- (instancetype)initWithRecipe:(MiamCoreRecipe *)recipe __attribute__((swift_name("init(recipe:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreRecipe *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreLikeEffectLiked *)doCopyRecipe:(MiamCoreRecipe *)recipe __attribute__((swift_name("doCopy(recipe:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreRecipe *recipe __attribute__((swift_name("recipe")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LikeStore")))
@interface MiamCoreLikeStore : MiamCoreBase <MiamCoreKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchAndGetRecipeLikesRecipeIds:(NSArray<NSString *> *)recipeIds completionHandler:(void (^)(NSArray<MiamCoreRecipeLike *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchAndGetRecipeLikes(recipeIds:completionHandler:)")));
- (id<MiamCoreKotlinx_coroutines_coreFlow>)observeSideEffect __attribute__((swift_name("observeSideEffect()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)toggleLikeRecipeId:(NSString *)recipeId completionHandler:(void (^)(MiamCoreRecipeLike * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("toggleLike(recipeId:completionHandler:)")));
@property (readonly) id<MiamCoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LikeStoreInstance")))
@interface MiamCoreLikeStoreInstance : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)likeStoreInstance __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreLikeStoreInstance *shared __attribute__((swift_name("shared")));
@property (readonly) MiamCoreLikeStore *instance __attribute__((swift_name("instance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MealPlannerState")))
@interface MiamCoreMealPlannerState : MiamCoreBase <MiamCoreState>
- (instancetype)initWithRecipesId:(NSArray<id> *)recipesId __attribute__((swift_name("init(recipesId:)"))) __attribute__((objc_designated_initializer));
- (NSArray<id> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreMealPlannerState *)doCopyRecipesId:(NSArray<id> *)recipesId __attribute__((swift_name("doCopy(recipesId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> *recipesId __attribute__((swift_name("recipesId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MealPlannerStore")))
@interface MiamCoreMealPlannerStore : MiamCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (int32_t)currentRecipeCount __attribute__((swift_name("currentRecipeCount()")));
@property (readonly) id<MiamCoreKotlinx_coroutines_coreStateFlow> state __attribute__((swift_name("state")));
@end

__attribute__((swift_name("PointOfSaleAction")))
@interface MiamCorePointOfSaleAction : MiamCoreBase <MiamCoreAction>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PointOfSaleAction.SetExtId")))
@interface MiamCorePointOfSaleActionSetExtId : MiamCorePointOfSaleAction
- (instancetype)initWithExtId:(NSString * _Nullable)extId __attribute__((swift_name("init(extId:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCorePointOfSaleActionSetExtId *)doCopyExtId:(NSString * _Nullable)extId __attribute__((swift_name("doCopy(extId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable extId __attribute__((swift_name("extId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PointOfSaleAction.SetSupplierId")))
@interface MiamCorePointOfSaleActionSetSupplierId : MiamCorePointOfSaleAction
- (instancetype)initWithSupplierId:(NSString *)supplierId __attribute__((swift_name("init(supplierId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCorePointOfSaleActionSetSupplierId *)doCopySupplierId:(NSString *)supplierId __attribute__((swift_name("doCopy(supplierId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *supplierId __attribute__((swift_name("supplierId")));
@end

__attribute__((swift_name("PointOfSaleEffect")))
@interface MiamCorePointOfSaleEffect : MiamCoreBase <MiamCoreEffect>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PointOfSaleState")))
@interface MiamCorePointOfSaleState : MiamCoreBase <MiamCoreState>
- (instancetype)initWithIdSupplier:(NSString * _Nullable)idSupplier extIdPointOfSale:(NSString * _Nullable)extIdPointOfSale idPointOfSale:(NSString * _Nullable)idPointOfSale origin:(NSString * _Nullable)origin currentJob:(id<MiamCoreKotlinx_coroutines_coreJob> _Nullable)currentJob __attribute__((swift_name("init(idSupplier:extIdPointOfSale:idPointOfSale:origin:currentJob:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<MiamCoreKotlinx_coroutines_coreJob> _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCorePointOfSaleState *)doCopyIdSupplier:(NSString * _Nullable)idSupplier extIdPointOfSale:(NSString * _Nullable)extIdPointOfSale idPointOfSale:(NSString * _Nullable)idPointOfSale origin:(NSString * _Nullable)origin currentJob:(id<MiamCoreKotlinx_coroutines_coreJob> _Nullable)currentJob __attribute__((swift_name("doCopy(idSupplier:extIdPointOfSale:idPointOfSale:origin:currentJob:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<MiamCoreKotlinx_coroutines_coreJob> _Nullable currentJob __attribute__((swift_name("currentJob")));
@property (readonly) NSString * _Nullable extIdPointOfSale __attribute__((swift_name("extIdPointOfSale")));
@property (readonly) NSString * _Nullable idPointOfSale __attribute__((swift_name("idPointOfSale")));
@property (readonly) NSString * _Nullable idSupplier __attribute__((swift_name("idSupplier")));
@property (readonly) NSString * _Nullable origin __attribute__((swift_name("origin")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PointOfSaleStore")))
@interface MiamCorePointOfSaleStore : MiamCoreBase <MiamCoreStore, MiamCoreKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<MiamCoreKotlinx_coroutines_coreJob>)dispatchAction:(MiamCorePointOfSaleAction *)action __attribute__((swift_name("dispatch(action:)")));
- (NSString * _Nullable)getPosId __attribute__((swift_name("getPosId()")));
- (NSString *)getProviderOrigin __attribute__((swift_name("getProviderOrigin()")));
- (id<MiamCoreKotlinx_coroutines_coreFlow>)observeSideEffect __attribute__((swift_name("observeSideEffect()")));
- (id<MiamCoreKotlinx_coroutines_coreStateFlow>)observeState __attribute__((swift_name("observeState()")));
- (BOOL)samePosExtId:(NSString * _Nullable)extId __attribute__((swift_name("samePos(extId:)")));
- (BOOL)sameSupplierSupplierId:(NSString *)supplierId __attribute__((swift_name("sameSupplier(supplierId:)")));
- (void)setMiamOriginMiamOrigin:(NSString *)miamOrigin __attribute__((swift_name("setMiamOrigin(miamOrigin:)")));
- (void)setOriginOrigin:(NSString *)origin __attribute__((swift_name("setOrigin(origin:)")));
@property (readonly) id<MiamCoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<MiamCoreKotlinx_coroutines_coreMutableStateFlow> miamOrigin __attribute__((swift_name("miamOrigin")));
@property (readonly) id<MiamCoreKotlinx_coroutines_coreMutableStateFlow> state __attribute__((swift_name("state")));
@property (readonly) NSString * _Nullable supplierId __attribute__((swift_name("supplierId")));
@end

__attribute__((swift_name("UserAction")))
@interface MiamCoreUserAction : MiamCoreBase <MiamCoreAction>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserAction.RefreshUser")))
@interface MiamCoreUserActionRefreshUser : MiamCoreUserAction
- (instancetype)initWithIdUser:(NSString * _Nullable)idUser __attribute__((swift_name("init(idUser:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreUserActionRefreshUser *)doCopyIdUser:(NSString * _Nullable)idUser __attribute__((swift_name("doCopy(idUser:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable idUser __attribute__((swift_name("idUser")));
@end

__attribute__((swift_name("UserEffect")))
@interface MiamCoreUserEffect : MiamCoreBase <MiamCoreEffect>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserState")))
@interface MiamCoreUserState : MiamCoreBase <MiamCoreState>
- (instancetype)initWithUserId:(NSString * _Nullable)userId sessionId:(NSString * _Nullable)sessionId profilingAllowed:(BOOL)profilingAllowed likeIsEnable:(BOOL)likeIsEnable __attribute__((swift_name("init(userId:sessionId:profilingAllowed:likeIsEnable:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreUserState *)doCopyUserId:(NSString * _Nullable)userId sessionId:(NSString * _Nullable)sessionId profilingAllowed:(BOOL)profilingAllowed likeIsEnable:(BOOL)likeIsEnable __attribute__((swift_name("doCopy(userId:sessionId:profilingAllowed:likeIsEnable:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL likeIsEnable __attribute__((swift_name("likeIsEnable")));
@property (readonly) BOOL profilingAllowed __attribute__((swift_name("profilingAllowed")));
@property (readonly) NSString * _Nullable sessionId __attribute__((swift_name("sessionId")));
@property (readonly) NSString * _Nullable userId __attribute__((swift_name("userId")));
@end

__attribute__((swift_name("UserStore")))
@protocol MiamCoreUserStore <MiamCoreStore>
@required
- (BOOL)ProfilingForbiden __attribute__((swift_name("ProfilingForbiden()")));
- (int32_t)getAndIncreaseMealPlannerUsesCount __attribute__((swift_name("getAndIncreaseMealPlannerUsesCount()")));
- (NSString * _Nullable)getSessionId __attribute__((swift_name("getSessionId()")));
- (void)refreshUserUserId:(NSString * _Nullable)userId __attribute__((swift_name("refreshUser(userId:)")));
- (BOOL)sameSessionSessionId:(NSString *)sessionId __attribute__((swift_name("sameSession(sessionId:)")));
- (BOOL)sameUserUserId:(NSString * _Nullable)userId __attribute__((swift_name("sameUser(userId:)")));
- (void)setEnableLikeIsEnable:(BOOL)isEnable __attribute__((swift_name("setEnableLike(isEnable:)")));
- (void)setProfilingAllowedAllowance:(BOOL)allowance __attribute__((swift_name("setProfilingAllowed(allowance:)")));
- (void)setSessionIdSessionId:(NSString *)sessionId __attribute__((swift_name("setSessionId(sessionId:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserStoreImpl")))
@interface MiamCoreUserStoreImpl : MiamCoreBase <MiamCoreUserStore, MiamCoreKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithGroceriesListStore:(id<MiamCoreGroceriesListStore>)groceriesListStore __attribute__((swift_name("init(groceriesListStore:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreUserStoreImplCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)ProfilingForbiden __attribute__((swift_name("ProfilingForbiden()")));
- (id<MiamCoreKotlinx_coroutines_coreJob>)dispatchAction:(MiamCoreUserAction *)action __attribute__((swift_name("dispatch(action:)")));
- (int32_t)getAndIncreaseMealPlannerUsesCount __attribute__((swift_name("getAndIncreaseMealPlannerUsesCount()")));
- (NSString * _Nullable)getSessionId __attribute__((swift_name("getSessionId()")));
- (id<MiamCoreKotlinx_coroutines_coreFlow>)observeSideEffect __attribute__((swift_name("observeSideEffect()")));
- (id<MiamCoreKotlinx_coroutines_coreStateFlow>)observeState __attribute__((swift_name("observeState()")));
- (void)refreshUserUserId:(NSString * _Nullable)userId __attribute__((swift_name("refreshUser(userId:)")));
- (BOOL)sameSessionSessionId:(NSString *)sessionId __attribute__((swift_name("sameSession(sessionId:)")));
- (BOOL)sameUserUserId:(NSString * _Nullable)userId __attribute__((swift_name("sameUser(userId:)")));
- (void)setEnableLikeIsEnable:(BOOL)isEnable __attribute__((swift_name("setEnableLike(isEnable:)")));
- (void)setProfilingAllowedAllowance:(BOOL)allowance __attribute__((swift_name("setProfilingAllowed(allowance:)")));
- (void)setSessionIdSessionId:(NSString *)sessionId __attribute__((swift_name("setSessionId(sessionId:)")));
@property (readonly) id<MiamCoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<MiamCoreKotlinx_coroutines_coreMutableStateFlow> state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserStoreImpl.Companion")))
@interface MiamCoreUserStoreImplCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreUserStoreImplCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("CatalogCategory")))
@interface MiamCoreCatalogCategory : MiamCoreBase
- (instancetype)initWithId:(NSString *)id title:(NSString *)title __attribute__((swift_name("init(id:title:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContextHandler")))
@interface MiamCoreContextHandler : MiamCoreBase <MiamCoreKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)emitReadiness __attribute__((swift_name("emitReadiness()")));
- (MiamCoreKMMContext * _Nullable)getContextOrNull __attribute__((swift_name("getContextOrNull()")));
- (void)gotAnError __attribute__((swift_name("gotAnError()")));
- (void)doInitMiamBase64_key:(NSString *)base64_key __attribute__((swift_name("doInitMiam(base64_key:)")));
- (BOOL)isReady __attribute__((swift_name("isReady()")));
- (id<MiamCoreKotlinx_coroutines_coreFlow>)observeReadyEvent __attribute__((swift_name("observeReadyEvent()")));
- (void)onReadyEventCallback:(void (^)(MiamCoreReadyEvent *))callback __attribute__((swift_name("onReadyEvent(callback:)")));
- (void)setContextContext:(MiamCoreKMMContext *)context __attribute__((swift_name("setContext(context:)")));
@property (readonly) id<MiamCoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<MiamCoreKotlinx_coroutines_coreMutableStateFlow> state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContextHandlerInstance")))
@interface MiamCoreContextHandlerInstance : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)contextHandlerInstance __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreContextHandlerInstance *shared __attribute__((swift_name("shared")));
@property (readonly) MiamCoreContextHandler *instance __attribute__((swift_name("instance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContextHandlerState")))
@interface MiamCoreContextHandlerState : MiamCoreBase <MiamCoreState>
- (instancetype)initWithIsInError:(BOOL)isInError applicationContext:(MiamCoreKMMContext * _Nullable)applicationContext __attribute__((swift_name("init(isInError:applicationContext:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreKMMContext * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreContextHandlerState *)doCopyIsInError:(BOOL)isInError applicationContext:(MiamCoreKMMContext * _Nullable)applicationContext __attribute__((swift_name("doCopy(isInError:applicationContext:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreKMMContext * _Nullable applicationContext __attribute__((swift_name("applicationContext")));
@property (readonly) BOOL isInError __attribute__((swift_name("isInError")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GroceriesListHandler")))
@interface MiamCoreGroceriesListHandler : MiamCoreBase <MiamCoreKotlinx_coroutines_coreCoroutineScope>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)groceriesListHandler __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreGroceriesListHandler *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_coroutines_coreFlow>)getRecipeCountChangeFlow __attribute__((swift_name("getRecipeCountChangeFlow()")));
- (void)onRecipeCountChangeUpdateRecipeCount:(void (^)(MiamCoreInt *))updateRecipeCount __attribute__((swift_name("onRecipeCountChange(updateRecipeCount:)")));
- (id<MiamCoreKotlinx_coroutines_coreJob>)resetGroceriesList __attribute__((swift_name("resetGroceriesList()"))) __attribute__((deprecated("")));
@property (readonly) id<MiamCoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogHandler")))
@interface MiamCoreLogHandler : MiamCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MiamCoreLogHandlerCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogHandler.Companion")))
@interface MiamCoreLogHandlerCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreLogHandlerCompanion *shared __attribute__((swift_name("shared")));
- (void)doInitDebug:(void (^)(NSString *))debug info:(void (^)(NSString *))info warn:(void (^)(NSString *))warn error:(void (^)(NSString *))error __attribute__((swift_name("doInit(debug:info:warn:error:)")));
@property void (^debug)(NSString *) __attribute__((swift_name("debug")));
@property void (^error)(NSString *) __attribute__((swift_name("error")));
@property void (^info)(NSString *) __attribute__((swift_name("info")));
@property void (^warn)(NSString *) __attribute__((swift_name("warn")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PointOfSaleHandler")))
@interface MiamCorePointOfSaleHandler : MiamCoreBase <MiamCoreKotlinx_coroutines_coreCoroutineScope>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)pointOfSaleHandler __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCorePointOfSaleHandler *shared __attribute__((swift_name("shared")));
- (void)getCatalogCategoriesSetLocalCategories:(void (^)(NSArray<MiamCoreCatalogCategory *> *))setLocalCategories __attribute__((swift_name("getCatalogCategories(setLocalCategories:)")));
- (void)setSupplierSupplierId:(int32_t)supplierId __attribute__((swift_name("setSupplier(supplierId:)"))) __attribute__((deprecated("setSupplier and setSupplierOrigin are replace by a unique method initMiam")));
- (void)setSupplierOriginOrigin:(NSString *)origin __attribute__((swift_name("setSupplierOrigin(origin:)"))) __attribute__((deprecated("setSupplier and setSupplierOrigin are replace by a unique method initMiam")));
- (void)updateStoreIdStoreId:(NSString * _Nullable)storeId __attribute__((swift_name("updateStoreId(storeId:)")));
@property (readonly) id<MiamCoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property MiamCoreBoolean *(^isAvailable)(void) __attribute__((swift_name("isAvailable")));
@end

__attribute__((swift_name("ReadyEvent")))
@interface MiamCoreReadyEvent : MiamCoreBase <MiamCoreEffect>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReadyEvent.isNotReady")))
@interface MiamCoreReadyEventIsNotReady : MiamCoreReadyEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)isNotReady __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreReadyEventIsNotReady *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReadyEvent.isReady")))
@interface MiamCoreReadyEventIsReady : MiamCoreReadyEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)isReady __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreReadyEventIsReady *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ToasterHandler")))
@interface MiamCoreToasterHandler : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)toasterHandler __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreToasterHandler *shared __attribute__((swift_name("shared")));
- (void)onAddRecipe __attribute__((swift_name("onAddRecipe()")));
- (void)onLikeRecipe __attribute__((swift_name("onLikeRecipe()")));
- (void)onSuccessMessage:(NSString *)message __attribute__((swift_name("onSuccess(message:)")));
- (void)setOnAddRecipeTextMessage:(NSString *)message __attribute__((swift_name("setOnAddRecipeText(message:)")));
- (void)setOnLikeRecipeTextMessage:(NSString *)message __attribute__((swift_name("setOnLikeRecipeText(message:)")));
- (void)setOnSuccessSuccessToasterCallBack:(void (^)(NSString *))successToasterCallBack __attribute__((swift_name("setOnSuccess(successToasterCallBack:)")));
@property (readonly) id<MiamCoreKotlinx_coroutines_coreMutableStateFlow> state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ToasterState")))
@interface MiamCoreToasterState : MiamCoreBase <MiamCoreState>
- (instancetype)initWithOnSuccess:(void (^)(NSString *))onSuccess onAddRecipeText:(NSString *)onAddRecipeText onLikeRecipeText:(NSString *)onLikeRecipeText __attribute__((swift_name("init(onSuccess:onAddRecipeText:onLikeRecipeText:)"))) __attribute__((objc_designated_initializer));
- (void (^)(NSString *))component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreToasterState *)doCopyOnSuccess:(void (^)(NSString *))onSuccess onAddRecipeText:(NSString *)onAddRecipeText onLikeRecipeText:(NSString *)onLikeRecipeText __attribute__((swift_name("doCopy(onSuccess:onAddRecipeText:onLikeRecipeText:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *onAddRecipeText __attribute__((swift_name("onAddRecipeText")));
@property (readonly) NSString *onLikeRecipeText __attribute__((swift_name("onLikeRecipeText")));
@property (readonly) void (^onSuccess)(NSString *) __attribute__((swift_name("onSuccess")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserHandler")))
@interface MiamCoreUserHandler : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)userHandler __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreUserHandler *shared __attribute__((swift_name("shared")));
- (void)setEnableLikeIsEnable:(BOOL)isEnable __attribute__((swift_name("setEnableLike(isEnable:)")));
- (void)setProfilingAllowedAllowance:(BOOL)allowance __attribute__((swift_name("setProfilingAllowed(allowance:)")));
- (void)updateUserIdUserId:(NSString * _Nullable)userId __attribute__((swift_name("updateUserId(userId:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketComparator")))
@interface MiamCoreBasketComparator : MiamCoreBase
- (instancetype)initWithExtIdToComparisonItem:(NSDictionary<NSString *, MiamCoreBasketComparisonItem *> *)extIdToComparisonItem __attribute__((swift_name("init(extIdToComparisonItem:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, MiamCoreBasketComparisonItem *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreBasketComparator *)doCopyExtIdToComparisonItem:(NSDictionary<NSString *, MiamCoreBasketComparisonItem *> *)extIdToComparisonItem __attribute__((swift_name("doCopy(extIdToComparisonItem:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (MiamCoreBasketComparator *)doInitRetailerBasket:(NSArray<MiamCoreRetailerProduct *> *)retailerBasket miamActiveBasket:(NSArray<MiamCoreBasketEntry *> *)miamActiveBasket __attribute__((swift_name("doInit(retailerBasket:miamActiveBasket:)")));
- (NSMutableArray<MiamCoreRetailerProduct *> *)resolveFromMiamNewBasketComparator:(MiamCoreBasketComparator *)newBasketComparator __attribute__((swift_name("resolveFromMiam(newBasketComparator:)")));
- (NSArray<MiamCoreAlterQuantityBasketEntry *> *)resolveFromRetailerNewComparator:(MiamCoreBasketComparator *)newComparator __attribute__((swift_name("resolveFromRetailer(newComparator:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MiamCoreBasketComparator *)updateReceivedFromMiamMiamActiveBasket:(NSArray<MiamCoreBasketEntry *> *)miamActiveBasket __attribute__((swift_name("updateReceivedFromMiam(miamActiveBasket:)")));
- (MiamCoreBasketComparator *)updateReceivedFromRetailerRetailerBasket:(NSArray<MiamCoreRetailerProduct *> *)retailerBasket __attribute__((swift_name("updateReceivedFromRetailer(retailerBasket:)")));
@property (readonly) NSDictionary<NSString *, MiamCoreBasketComparisonItem *> *extIdToComparisonItem __attribute__((swift_name("extIdToComparisonItem")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketComparatorData")))
@interface MiamCoreBasketComparatorData : MiamCoreBase
- (instancetype)initWithExtIdToComparisonItem:(MiamCoreMutableDictionary<NSString *, MiamCoreBasketComparisonItem *> *)extIdToComparisonItem __attribute__((swift_name("init(extIdToComparisonItem:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreMutableDictionary<NSString *, MiamCoreBasketComparisonItem *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreBasketComparatorData *)doCopyExtIdToComparisonItem:(MiamCoreMutableDictionary<NSString *, MiamCoreBasketComparisonItem *> *)extIdToComparisonItem __attribute__((swift_name("doCopy(extIdToComparisonItem:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)doInitRetailerBasket:(NSArray<MiamCoreRetailerProduct *> *)retailerBasket miamActiveBasket:(NSArray<MiamCoreBasketEntry *> *)miamActiveBasket __attribute__((swift_name("doInit(retailerBasket:miamActiveBasket:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)updateMapFromMiamMiamActiveBasket:(NSArray<MiamCoreBasketEntry *> *)miamActiveBasket __attribute__((swift_name("updateMapFromMiam(miamActiveBasket:)")));
- (void)updateMapFromRetailerRetailerBasket:(NSArray<MiamCoreRetailerProduct *> *)retailerBasket __attribute__((swift_name("updateMapFromRetailer(retailerBasket:)")));
@property (readonly) MiamCoreMutableDictionary<NSString *, MiamCoreBasketComparisonItem *> *extIdToComparisonItem __attribute__((swift_name("extIdToComparisonItem")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketComparisonItem")))
@interface MiamCoreBasketComparisonItem : MiamCoreBase
- (instancetype)initWithRetailerId:(NSString *)retailerId miamBasketEntryIds:(NSDictionary<NSString *, MiamCoreInt *> *)miamBasketEntryIds retailerProduct:(MiamCoreRetailerProduct *)retailerProduct __attribute__((swift_name("init(retailerId:miamBasketEntryIds:retailerProduct:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreBasketComparisonItem *)addMiamEntryBasketEntry:(MiamCoreBasketEntry *)basketEntry __attribute__((swift_name("addMiamEntry(basketEntry:)")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSDictionary<NSString *, MiamCoreInt *> *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRetailerProduct *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreBasketComparisonItem *)doCopyRetailerId:(NSString *)retailerId miamBasketEntryIds:(NSDictionary<NSString *, MiamCoreInt *> *)miamBasketEntryIds retailerProduct:(MiamCoreRetailerProduct *)retailerProduct __attribute__((swift_name("doCopy(retailerId:miamBasketEntryIds:retailerProduct:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSArray<MiamCoreAlterQuantityBasketEntry *> *)miamProductRemoved __attribute__((swift_name("miamProductRemoved()")));
- (MiamCoreRetailerProduct * _Nullable)retailerProductAddedOrUpdatedFromMiamPreviousCompItem:(MiamCoreBasketComparisonItem * _Nullable)previousCompItem __attribute__((swift_name("retailerProductAddedOrUpdatedFromMiam(previousCompItem:)")));
- (MiamCoreRetailerProduct * _Nullable)retailerProductsRemovedFromMiamNewCompItem:(MiamCoreBasketComparisonItem * _Nullable)newCompItem __attribute__((swift_name("retailerProductsRemovedFromMiam(newCompItem:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *firstBasketEntryId __attribute__((swift_name("firstBasketEntryId")));
@property (readonly) NSDictionary<NSString *, MiamCoreInt *> *miamBasketEntryIds __attribute__((swift_name("miamBasketEntryIds")));
@property (readonly) int32_t miamQuantity __attribute__((swift_name("miamQuantity")));
@property (readonly) NSString *retailerId __attribute__((swift_name("retailerId")));
@property (readonly) MiamCoreRetailerProduct *retailerProduct __attribute__((swift_name("retailerProduct")));
@property (readonly) int32_t retailerQuantity __attribute__((swift_name("retailerQuantity")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketHandler")))
@interface MiamCoreBasketHandler : MiamCoreBase <MiamCoreKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)basketChangeMiamActiveBasket:(NSArray<MiamCoreBasketEntry *> *)miamActiveBasket __attribute__((swift_name("basketChange(miamActiveBasket:)")));
- (void)clear __attribute__((swift_name("clear()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)handlePaymentTotalAmount:(double)totalAmount __attribute__((swift_name("handlePayment(totalAmount:)")));
- (BOOL)isReady __attribute__((swift_name("isReady()")));
- (void)pushProductsToMiamBasketRetailerBasket:(NSArray<MiamCoreRetailerProduct *> *)retailerBasket __attribute__((swift_name("pushProductsToMiamBasket(retailerBasket:)")));
- (void)setListenToRetailerBasketFunc:(void (^)(void))func __attribute__((swift_name("setListenToRetailerBasket(func:)")));
- (void)setPriceBookKeyPriceBookKey:(NSString *)priceBookKey __attribute__((swift_name("setPriceBookKey(priceBookKey:)")));
- (void)setPushProductsToRetailerBasketFunc:(void (^)(NSArray<MiamCoreRetailerProduct *> *))func __attribute__((swift_name("setPushProductsToRetailerBasket(func:)")));
@property (readonly) id<MiamCoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasketHandlerInstance")))
@interface MiamCoreBasketHandlerInstance : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)basketHandlerInstance __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreBasketHandlerInstance *shared __attribute__((swift_name("shared")));
@property (readonly) MiamCoreBasketHandler *instance __attribute__((swift_name("instance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorDetailState")))
@interface MiamCoreSponsorDetailState : MiamCoreBase <MiamCoreUiState>
- (instancetype)initWithSponsorBlocks:(MiamCoreBasicUiState<NSArray<MiamCoreSponsorBlock *> *> *)sponsorBlocks sponsor:(MiamCoreSponsor * _Nullable)sponsor __attribute__((swift_name("init(sponsorBlocks:sponsor:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreBasicUiState<NSArray<MiamCoreSponsorBlock *> *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreSponsor * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreSponsorDetailState *)doCopySponsorBlocks:(MiamCoreBasicUiState<NSArray<MiamCoreSponsorBlock *> *> *)sponsorBlocks sponsor:(MiamCoreSponsor * _Nullable)sponsor __attribute__((swift_name("doCopy(sponsorBlocks:sponsor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreSponsor * _Nullable sponsor __attribute__((swift_name("sponsor")));
@property (readonly) MiamCoreBasicUiState<NSArray<MiamCoreSponsorBlock *> *> *sponsorBlocks __attribute__((swift_name("sponsorBlocks")));
@end

__attribute__((swift_name("SponsorDetailViewModel")))
@protocol MiamCoreSponsorDetailViewModel
@required
- (void)fetchSponsorBlockByIdsSponsor:(MiamCoreSponsor *)sponsor __attribute__((swift_name("fetchSponsorBlockByIds(sponsor:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SponsorDetailViewModelImpl")))
@interface MiamCoreSponsorDetailViewModelImpl : MiamCoreBase <MiamCoreKotlinx_coroutines_coreCoroutineScope, MiamCoreSponsorDetailViewModel>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)fetchSponsorBlockByIdsSponsor:(MiamCoreSponsor *)sponsor __attribute__((swift_name("fetchSponsorBlockByIds(sponsor:)")));
@property (readonly) id<MiamCoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<MiamCoreKotlinx_coroutines_coreStateFlow> state __attribute__((swift_name("state")));
@end

__attribute__((swift_name("MealPlannerRecapContract")))
@protocol MiamCoreMealPlannerRecapContract
@required
@end

__attribute__((swift_name("MealPlannerRecapContractEffect")))
@interface MiamCoreMealPlannerRecapContractEffect : MiamCoreBase <MiamCoreUiEffect>
@end

__attribute__((swift_name("MealPlannerRecapContractEvent")))
@interface MiamCoreMealPlannerRecapContractEvent : MiamCoreBase <MiamCoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MealPlannerRecapContractState")))
@interface MiamCoreMealPlannerRecapContractState : MiamCoreBase <MiamCoreUiState>
- (instancetype)initWithTotalPrice:(double)totalPrice numberOfMeals:(int32_t)numberOfMeals __attribute__((swift_name("init(totalPrice:numberOfMeals:)"))) __attribute__((objc_designated_initializer));
- (double)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreMealPlannerRecapContractState *)doCopyTotalPrice:(double)totalPrice numberOfMeals:(int32_t)numberOfMeals __attribute__((swift_name("doCopy(totalPrice:numberOfMeals:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t numberOfMeals __attribute__((swift_name("numberOfMeals")));
@property (readonly) double totalPrice __attribute__((swift_name("totalPrice")));
@end

__attribute__((swift_name("MealPlannerRecapViewModel")))
@interface MiamCoreMealPlannerRecapViewModel : MiamCoreBaseViewModel<MiamCoreMealPlannerRecapContractEvent *, MiamCoreMealPlannerRecapContractState *, MiamCoreMealPlannerRecapContractEffect *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MiamCoreMealPlannerRecapContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)handleEventEvent:(MiamCoreMealPlannerRecapContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
@end

__attribute__((swift_name("RecipesPageViewModel")))
@interface MiamCoreRecipesPageViewModel : MiamCoreBaseViewModel<MiamCoreRecipesPageContractEvent *, MiamCoreRecipesPageContractState *, MiamCoreRecipesPageContractEffect *>
- (instancetype)initWithFilterInstance:(MiamCoreSingletonFilterViewModel *)filterInstance clearFilter:(BOOL)clearFilter __attribute__((swift_name("init(filterInstance:clearFilter:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MiamCoreRecipesPageContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)handleEventEvent:(MiamCoreRecipesPageContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
- (void)loadPage __attribute__((swift_name("loadPage()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)loadPageForce:(BOOL)force __attribute__((swift_name("loadPage(force:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSArray<MiamCoreRecipe *> *)postFilterRecipesList:(NSArray<MiamCoreRecipe *> *)recipesList __attribute__((swift_name("postFilter(recipesList:)")));
- (void)registerListeners __attribute__((swift_name("registerListeners()")));
@property (readonly) MiamCoreSingletonFilterViewModel *filterInstance __attribute__((swift_name("filterInstance")));
@end

__attribute__((swift_name("MealPlannerReplaceRecipePageViewModel")))
@interface MiamCoreMealPlannerReplaceRecipePageViewModel : MiamCoreRecipesPageViewModel
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithFilterInstance:(MiamCoreSingletonFilterViewModel *)filterInstance clearFilter:(BOOL)clearFilter __attribute__((swift_name("init(filterInstance:clearFilter:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)addRecipeToMealPlannerRecipeId:(NSString *)recipeId index:(int32_t)index __attribute__((swift_name("addRecipeToMealPlanner(recipeId:index:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSArray<MiamCoreRecipe *> *)postFilterRecipesList:(NSArray<MiamCoreRecipe *> *)recipesList __attribute__((swift_name("postFilter(recipesList:)")));
- (void)registerListeners __attribute__((swift_name("registerListeners()")));
- (void)searchInput:(NSString *)input __attribute__((swift_name("search(input:)")));
@end

__attribute__((swift_name("MealPlannerFormContract")))
@protocol MiamCoreMealPlannerFormContract
@required
@end

__attribute__((swift_name("MealPlannerFormContractEffect")))
@interface MiamCoreMealPlannerFormContractEffect : MiamCoreBase <MiamCoreUiEffect>
@end

__attribute__((swift_name("MealPlannerFormContractEvent")))
@interface MiamCoreMealPlannerFormContractEvent : MiamCoreBase <MiamCoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MealPlannerFormContractState")))
@interface MiamCoreMealPlannerFormContractState : MiamCoreBase <MiamCoreUiState>
- (instancetype)initWithBudget:(int32_t)budget numberOfGuests:(int32_t)numberOfGuests numberOfMeals:(int32_t)numberOfMeals recipeMaxCount:(int32_t)recipeMaxCount uiState:(MiamCoreComponentUiState *)uiState __attribute__((swift_name("init(budget:numberOfGuests:numberOfMeals:recipeMaxCount:uiState:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreComponentUiState *)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreMealPlannerFormContractState *)doCopyBudget:(int32_t)budget numberOfGuests:(int32_t)numberOfGuests numberOfMeals:(int32_t)numberOfMeals recipeMaxCount:(int32_t)recipeMaxCount uiState:(MiamCoreComponentUiState *)uiState __attribute__((swift_name("doCopy(budget:numberOfGuests:numberOfMeals:recipeMaxCount:uiState:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t budget __attribute__((swift_name("budget")));
@property (readonly) int32_t numberOfGuests __attribute__((swift_name("numberOfGuests")));
@property (readonly) int32_t numberOfMeals __attribute__((swift_name("numberOfMeals")));
@property (readonly) int32_t recipeMaxCount __attribute__((swift_name("recipeMaxCount")));
@property (readonly) MiamCoreComponentUiState *uiState __attribute__((swift_name("uiState")));
@end

__attribute__((swift_name("MealPlannerFormViewModel")))
@interface MiamCoreMealPlannerFormViewModel : MiamCoreBaseViewModel<MiamCoreMealPlannerFormContractEvent *, MiamCoreMealPlannerFormContractState *, MiamCoreMealPlannerFormContractEffect *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MiamCoreMealPlannerFormContractState *)createInitialState __attribute__((swift_name("createInitialState()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipesForBudgetConstraintBudget:(int32_t)budget mealCount:(int32_t)mealCount guestCount:(int32_t)guestCount completionHandler:(void (^)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipesForBudgetConstraint(budget:mealCount:guestCount:completionHandler:)")));
- (void)getRecipesMaxCountForBudgetConstraintBudget:(int32_t)budget guestCount:(int32_t)guestCount __attribute__((swift_name("getRecipesMaxCountForBudgetConstraint(budget:guestCount:)")));
- (void)handleEventEvent:(MiamCoreMealPlannerFormContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
- (void)onInitComponent __attribute__((swift_name("onInitComponent()")));
- (void)setBudgetAmount:(int32_t)amount __attribute__((swift_name("setBudget(amount:)")));
- (void)setNumberOfGuestsAmount:(int32_t)amount __attribute__((swift_name("setNumberOfGuests(amount:)")));
- (void)setNumberOfMealsMealCount:(int32_t)mealCount __attribute__((swift_name("setNumberOfMeals(mealCount:)")));
@property (readonly) MiamCoreMealPlannerStore *mealPlannerStore __attribute__((swift_name("mealPlannerStore")));
@property (readonly) id<MiamCoreKotlinx_coroutines_coreFlow> recipeCountFlow __attribute__((swift_name("recipeCountFlow")));
@end

__attribute__((swift_name("DefaultBasketPreviewViewModel")))
@interface MiamCoreDefaultBasketPreviewViewModel : MiamCoreBaseViewModel<MiamCoreDefaultBasketPreviewContractEvent *, MiamCoreDefaultBasketPreviewContractState *, MiamCoreDefaultBasketPreviewContractEffect *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MiamCoreDefaultBasketPreviewContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)handleEventEvent:(MiamCoreDefaultBasketPreviewContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));
- (void)onExceptionRaisedException:(MiamCoreKotlinThrowable *)exception __attribute__((swift_name("onExceptionRaised(exception:)")));
- (void)registerListeners __attribute__((swift_name("registerListeners()")));
- (void)removeRecipeIndex:(int32_t)index basketPreviewLines:(NSArray<MiamCoreBasketPreviewLine *> *)basketPreviewLines __attribute__((swift_name("removeRecipe(index:basketPreviewLines:)")));
@end

__attribute__((swift_name("MealPlannerBasketPreviewViewModel")))
@interface MiamCoreMealPlannerBasketPreviewViewModel : MiamCoreDefaultBasketPreviewViewModel
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MiamCoreDefaultBasketPreviewContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)onClickFinalize __attribute__((swift_name("onClickFinalize()")));
@property (readonly) int32_t budget __attribute__((swift_name("budget")));
@end

__attribute__((swift_name("MealPlannerMealsContract")))
@protocol MiamCoreMealPlannerMealsContract
@required
@end

__attribute__((swift_name("MealPlannerMealsContractEffect")))
@interface MiamCoreMealPlannerMealsContractEffect : MiamCoreBase <MiamCoreUiEffect>
@end

__attribute__((swift_name("MealPlannerMealsContractEvent")))
@interface MiamCoreMealPlannerMealsContractEvent : MiamCoreBase <MiamCoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MealPlannerMealsContractState")))
@interface MiamCoreMealPlannerMealsContractState : MiamCoreBase <MiamCoreUiState>
- (instancetype)initWithMeals:(MiamCoreBasicUiState<NSArray<id> *> *)meals totalPrice:(double)totalPrice numberOfMeal:(int32_t)numberOfMeal availablePosition:(NSArray<MiamCoreInt *> *)availablePosition __attribute__((swift_name("init(meals:totalPrice:numberOfMeal:availablePosition:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreBasicUiState<NSArray<id> *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (double)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<MiamCoreInt *> *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreMealPlannerMealsContractState *)doCopyMeals:(MiamCoreBasicUiState<NSArray<id> *> *)meals totalPrice:(double)totalPrice numberOfMeal:(int32_t)numberOfMeal availablePosition:(NSArray<MiamCoreInt *> *)availablePosition __attribute__((swift_name("doCopy(meals:totalPrice:numberOfMeal:availablePosition:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<MiamCoreInt *> *availablePosition __attribute__((swift_name("availablePosition")));
@property (readonly) MiamCoreBasicUiState<NSArray<id> *> *meals __attribute__((swift_name("meals")));
@property (readonly) int32_t numberOfMeal __attribute__((swift_name("numberOfMeal")));
@property (readonly) double totalPrice __attribute__((swift_name("totalPrice")));
@end

__attribute__((swift_name("MealPlannerMealsViewModel")))
@interface MiamCoreMealPlannerMealsViewModel : MiamCoreBaseViewModel<MiamCoreMealPlannerMealsContractEvent *, MiamCoreMealPlannerMealsContractState *, MiamCoreMealPlannerMealsContractEffect *>
- (instancetype)initWithPriceRepository:(id<MiamCorePricingRepository>)priceRepository __attribute__((swift_name("init(priceRepository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)addRecipesToGroceriesList __attribute__((swift_name("addRecipesToGroceriesList()")));
- (void)calculAvailableBudgetOnNavigateToReplaceRecipeTotalPrice:(double)totalPrice recipeToReplacePrice:(MiamCoreDouble * _Nullable)recipeToReplacePrice __attribute__((swift_name("calculAvailableBudgetOnNavigateToReplaceRecipe(totalPrice:recipeToReplacePrice:)")));
- (MiamCoreMealPlannerMealsContractState *)createInitialState __attribute__((swift_name("createInitialState()")));
- (void)handleEventEvent:(MiamCoreMealPlannerMealsContractEvent *)event __attribute__((swift_name("handleEvent(event:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)onPullToRefreshWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("onPullToRefresh(completionHandler:)")));
- (void)registerListeners __attribute__((swift_name("registerListeners()")));
- (void)removeRecipeRecipeIndex:(int32_t)recipeIndex __attribute__((swift_name("removeRecipe(recipeIndex:)")));
@end

__attribute__((swift_name("RecipesPageContract")))
@protocol MiamCoreRecipesPageContract
@required
@end

__attribute__((swift_name("RecipesPageContractEffect")))
@interface MiamCoreRecipesPageContractEffect : MiamCoreBase <MiamCoreUiEffect>
@end

__attribute__((swift_name("RecipesPageContractEvent")))
@interface MiamCoreRecipesPageContractEvent : MiamCoreBase <MiamCoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecipesPageContractState")))
@interface MiamCoreRecipesPageContractState : MiamCoreBase <MiamCoreUiState>
- (instancetype)initWithRecipes:(MiamCoreBasicUiState<NSArray<MiamCoreRecipe *> *> *)recipes isFetchingNewPage:(BOOL)isFetchingNewPage __attribute__((swift_name("init(recipes:isFetchingNewPage:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreBasicUiState<NSArray<MiamCoreRecipe *> *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreRecipesPageContractState *)doCopyRecipes:(MiamCoreBasicUiState<NSArray<MiamCoreRecipe *> *> *)recipes isFetchingNewPage:(BOOL)isFetchingNewPage __attribute__((swift_name("doCopy(recipes:isFetchingNewPage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isFetchingNewPage __attribute__((swift_name("isFetchingNewPage")));
@property (readonly) MiamCoreBasicUiState<NSArray<MiamCoreRecipe *> *> *recipes __attribute__((swift_name("recipes")));
@end

__attribute__((swift_name("DefaultBasketPreviewContract")))
@protocol MiamCoreDefaultBasketPreviewContract
@required
@end

__attribute__((swift_name("DefaultBasketPreviewContractEffect")))
@interface MiamCoreDefaultBasketPreviewContractEffect : MiamCoreBase <MiamCoreUiEffect>
@end

__attribute__((swift_name("DefaultBasketPreviewContractEvent")))
@interface MiamCoreDefaultBasketPreviewContractEvent : MiamCoreBase <MiamCoreUiEvent>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultBasketPreviewContractState")))
@interface MiamCoreDefaultBasketPreviewContractState : MiamCoreBase <MiamCoreUiState>
- (instancetype)initWithLines:(MiamCoreBasicUiState<NSArray<MiamCoreBasketPreviewLine *> *> *)lines totalPrice:(double)totalPrice productCount:(int32_t)productCount __attribute__((swift_name("init(lines:totalPrice:productCount:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreBasicUiState<NSArray<MiamCoreBasketPreviewLine *> *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (double)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreDefaultBasketPreviewContractState *)doCopyLines:(MiamCoreBasicUiState<NSArray<MiamCoreBasketPreviewLine *> *> *)lines totalPrice:(double)totalPrice productCount:(int32_t)productCount __attribute__((swift_name("doCopy(lines:totalPrice:productCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreBasicUiState<NSArray<MiamCoreBasketPreviewLine *> *> *lines __attribute__((swift_name("lines")));
@property (readonly) int32_t productCount __attribute__((swift_name("productCount")));
@property (readonly) double totalPrice __attribute__((swift_name("totalPrice")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BudgetRepository")))
@interface MiamCoreBudgetRepository : MiamCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MiamCoreBudgetRepositoryCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BudgetRepository.Companion")))
@interface MiamCoreBudgetRepositoryCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreBudgetRepositoryCompanion *shared __attribute__((swift_name("shared")));
@property double availableBudget __attribute__((swift_name("availableBudget")));
@property int32_t budget __attribute__((swift_name("budget")));
@property int32_t guestCount __attribute__((swift_name("guestCount")));
@property int32_t mealCount __attribute__((swift_name("mealCount")));
@end

__attribute__((swift_name("SponsorBlockRepository")))
@protocol MiamCoreSponsorBlockRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getSponsorBlocksBySponsorIdSponsorId:(NSString *)sponsorId completionHandler:(void (^)(NSArray<MiamCoreSponsorBlock *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getSponsorBlocksBySponsorId(sponsorId:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Localisation")))
@interface MiamCoreLocalisation : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)localisation __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreLocalisation *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Localisation.Basket")))
@interface MiamCoreLocalisationBasket : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)basket __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreLocalisationBasket *shared __attribute__((swift_name("shared")));
- (MiamCoreI18n *)ownedProductsNumberOfProducts:(int32_t)numberOfProducts __attribute__((swift_name("ownedProducts(numberOfProducts:)")));
- (MiamCoreI18n *)removedProductsNumberOfProducts:(int32_t)numberOfProducts __attribute__((swift_name("removedProducts(numberOfProducts:)")));
- (MiamCoreI18n *)unavailableProductsNumberOfProducts:(int32_t)numberOfProducts __attribute__((swift_name("unavailableProducts(numberOfProducts:)")));
@property (readonly) MiamCoreI18n *addProduct __attribute__((swift_name("addProduct")));
@property (readonly) MiamCoreI18n *continueShopping __attribute__((swift_name("continueShopping")));
@property (readonly) MiamCoreI18n *moreDetails __attribute__((swift_name("moreDetails")));
@property (readonly) MiamCoreI18n *person __attribute__((swift_name("person")));
@property (readonly) MiamCoreI18n *recipeAdded __attribute__((swift_name("recipeAdded")));
@property (readonly) MiamCoreI18n *removeRecipe __attribute__((swift_name("removeRecipe")));
@property (readonly) MiamCoreI18n *swapProduct __attribute__((swift_name("swapProduct")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Localisation.Budget")))
@interface MiamCoreLocalisationBudget : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)budget __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreLocalisationBudget *shared __attribute__((swift_name("shared")));
@property (readonly) MiamCoreI18n *addMealIdea __attribute__((swift_name("addMealIdea")));
@property (readonly) MiamCoreI18n *myBudget __attribute__((swift_name("myBudget")));
@property (readonly) MiamCoreI18n *myBudgetSubtext __attribute__((swift_name("myBudgetSubtext")));
@property (readonly) MiamCoreI18n *numberOfGuestsTitle __attribute__((swift_name("numberOfGuestsTitle")));
@property (readonly) MiamCoreI18n *numberOfMealsTitle __attribute__((swift_name("numberOfMealsTitle")));
@property (readonly) MiamCoreI18n *planMealsTitle __attribute__((swift_name("planMealsTitle")));
@property (readonly) MiamCoreI18n *recipeCollectionTitle __attribute__((swift_name("recipeCollectionTitle")));
@property (readonly) MiamCoreI18n *replaceItem __attribute__((swift_name("replaceItem")));
@property (readonly) MiamCoreI18n *searchForRecipe __attribute__((swift_name("searchForRecipe")));
@property (readonly) MiamCoreI18n *totalBudgetTitle __attribute__((swift_name("totalBudgetTitle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Localisation.Catalog")))
@interface MiamCoreLocalisationCatalog : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)catalog __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreLocalisationCatalog *shared __attribute__((swift_name("shared")));
- (MiamCoreI18n *)showResultsNumberOfResults:(int32_t)numberOfResults __attribute__((swift_name("showResults(numberOfResults:)")));
@property (readonly) MiamCoreI18n *browseRecipes __attribute__((swift_name("browseRecipes")));
@property (readonly) MiamCoreI18n *costPerPerson __attribute__((swift_name("costPerPerson")));
@property (readonly) MiamCoreI18n *difficulty __attribute__((swift_name("difficulty")));
@property (readonly) MiamCoreI18n *favoriteTitle __attribute__((swift_name("favoriteTitle")));
@property (readonly) MiamCoreI18n *filtersTitle __attribute__((swift_name("filtersTitle")));
@property (readonly) MiamCoreI18n *loadingText __attribute__((swift_name("loadingText")));
@property (readonly) MiamCoreI18n *noRecipeFound __attribute__((swift_name("noRecipeFound")));
@property (readonly) MiamCoreI18n *preferencesNoResult __attribute__((swift_name("preferencesNoResult")));
@property (readonly) MiamCoreI18n *preferencesTryAnother __attribute__((swift_name("preferencesTryAnother")));
@property (readonly) MiamCoreI18n *preparationTime __attribute__((swift_name("preparationTime")));
@property (readonly) MiamCoreI18n *removeFilters __attribute__((swift_name("removeFilters")));
@property (readonly) MiamCoreI18n *searchPlaceholder __attribute__((swift_name("searchPlaceholder")));
@property (readonly) MiamCoreI18n *searchPrefix __attribute__((swift_name("searchPrefix")));
@property (readonly) MiamCoreI18n *searchTitle __attribute__((swift_name("searchTitle")));
@property (readonly) MiamCoreI18n *showAll __attribute__((swift_name("showAll")));
@property (readonly) MiamCoreI18n *title __attribute__((swift_name("title")));
@property (readonly) MiamCoreI18n *tryAnotherSearch __attribute__((swift_name("tryAnotherSearch")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Localisation.Counter")))
@interface MiamCoreLocalisationCounter : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)counter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreLocalisationCounter *shared __attribute__((swift_name("shared")));
@property (readonly) MiamCoreI18n *persons __attribute__((swift_name("persons")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Localisation.Error")))
@interface MiamCoreLocalisationError : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)error __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreLocalisationError *shared __attribute__((swift_name("shared")));
@property (readonly) MiamCoreI18n *generic __attribute__((swift_name("generic")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Localisation.Favorites")))
@interface MiamCoreLocalisationFavorites : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)favorites __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreLocalisationFavorites *shared __attribute__((swift_name("shared")));
@property (readonly) MiamCoreI18n *goToCatalog __attribute__((swift_name("goToCatalog")));
@property (readonly) MiamCoreI18n *noFavorites __attribute__((swift_name("noFavorites")));
@property (readonly) MiamCoreI18n *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Localisation.Filters")))
@interface MiamCoreLocalisationFilters : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)filters __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreLocalisationFilters *shared __attribute__((swift_name("shared")));
@property (readonly) MiamCoreI18n *betweenFiveAndTenEuros __attribute__((swift_name("betweenFiveAndTenEuros")));
@property (readonly) MiamCoreI18n *lessThanAnHour __attribute__((swift_name("lessThanAnHour")));
@property (readonly) MiamCoreI18n *lessThanFifteenMinutes __attribute__((swift_name("lessThanFifteenMinutes")));
@property (readonly) MiamCoreI18n *lessThanFiveEuros __attribute__((swift_name("lessThanFiveEuros")));
@property (readonly) MiamCoreI18n *lessThanThirteenMinutes __attribute__((swift_name("lessThanThirteenMinutes")));
@property (readonly) MiamCoreI18n *lessThanTwoHours __attribute__((swift_name("lessThanTwoHours")));
@property (readonly) MiamCoreI18n *moreThanTenEuros __attribute__((swift_name("moreThanTenEuros")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Localisation.ItemSelector")))
@interface MiamCoreLocalisationItemSelector : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)itemSelector __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreLocalisationItemSelector *shared __attribute__((swift_name("shared")));
@property (readonly) MiamCoreI18n *inBasket __attribute__((swift_name("inBasket")));
@property (readonly) MiamCoreI18n *replaceProduct __attribute__((swift_name("replaceProduct")));
@property (readonly) MiamCoreI18n *select __attribute__((swift_name("select")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Localisation.MyMeals")))
@interface MiamCoreLocalisationMyMeals : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)myMeals __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreLocalisationMyMeals *shared __attribute__((swift_name("shared")));
- (MiamCoreI18n *)mealsAddedNumberOfMeals:(int32_t)numberOfMeals __attribute__((swift_name("mealsAdded(numberOfMeals:)")));
@property (readonly) MiamCoreI18n *goToCatalog __attribute__((swift_name("goToCatalog")));
@property (readonly) MiamCoreI18n *noMealIdeaInBasket __attribute__((swift_name("noMealIdeaInBasket")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Localisation.Preferences")))
@interface MiamCoreLocalisationPreferences : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)preferences __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreLocalisationPreferences *shared __attribute__((swift_name("shared")));
@property (readonly) MiamCoreI18n *addTag __attribute__((swift_name("addTag")));
@property (readonly) MiamCoreI18n *cancel __attribute__((swift_name("cancel")));
@property (readonly) MiamCoreI18n *cookingEquipmentSubtitle __attribute__((swift_name("cookingEquipmentSubtitle")));
@property (readonly) MiamCoreI18n *cookingEquipmentTitle __attribute__((swift_name("cookingEquipmentTitle")));
@property (readonly) MiamCoreI18n *dietSubtitle __attribute__((swift_name("dietSubtitle")));
@property (readonly) MiamCoreI18n *dietTitle __attribute__((swift_name("dietTitle")));
@property (readonly) MiamCoreI18n *numberOfGuests __attribute__((swift_name("numberOfGuests")));
@property (readonly) MiamCoreI18n *searchPlaceholder __attribute__((swift_name("searchPlaceholder")));
@property (readonly) MiamCoreI18n *searchTitle __attribute__((swift_name("searchTitle")));
@property (readonly) MiamCoreI18n *tastesSubtitle __attribute__((swift_name("tastesSubtitle")));
@property (readonly) MiamCoreI18n *tastesTitle __attribute__((swift_name("tastesTitle")));
@property (readonly) MiamCoreI18n *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Localisation.Price")))
@interface MiamCoreLocalisationPrice : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)price __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreLocalisationPrice *shared __attribute__((swift_name("shared")));
@property (readonly) MiamCoreI18n *currency __attribute__((swift_name("currency")));
@property (readonly) MiamCoreI18n *perGuest __attribute__((swift_name("perGuest")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Localisation.Recipe")))
@interface MiamCoreLocalisationRecipe : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)recipe __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreLocalisationRecipe *shared __attribute__((swift_name("shared")));
- (MiamCoreI18n *)numberOfIngredientsNumberOfIngredients:(int32_t)numberOfIngredients __attribute__((swift_name("numberOfIngredients(numberOfIngredients:)")));
@property (readonly) MiamCoreI18n *add __attribute__((swift_name("add")));
@property (readonly) MiamCoreI18n *added __attribute__((swift_name("added")));
@property (readonly) MiamCoreI18n *cookTime __attribute__((swift_name("cookTime")));
@property (readonly) MiamCoreI18n *flag __attribute__((swift_name("flag")));
@property (readonly) MiamCoreI18n *highDifficulty __attribute__((swift_name("highDifficulty")));
@property (readonly) MiamCoreI18n *lowDifficulty __attribute__((swift_name("lowDifficulty")));
@property (readonly) MiamCoreI18n *mediumDifficulty __attribute__((swift_name("mediumDifficulty")));
@property (readonly) MiamCoreI18n *preparationTime __attribute__((swift_name("preparationTime")));
@property (readonly) MiamCoreI18n *restingTime __attribute__((swift_name("restingTime")));
@property (readonly) MiamCoreI18n *showBasketPreview __attribute__((swift_name("showBasketPreview")));
@property (readonly) MiamCoreI18n *showDetails __attribute__((swift_name("showDetails")));
@property (readonly) MiamCoreI18n *steps __attribute__((swift_name("steps")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Localisation.SponsorBanner")))
@interface MiamCoreLocalisationSponsorBanner : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sponsorBanner __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreLocalisationSponsorBanner *shared __attribute__((swift_name("shared")));
@property (readonly) MiamCoreI18n *sponsorBannerMoreInfo __attribute__((swift_name("sponsorBannerMoreInfo")));
@property (readonly) MiamCoreI18n *sponsorBannerSpeach __attribute__((swift_name("sponsorBannerSpeach")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Localisation.Tag")))
@interface MiamCoreLocalisationTag : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)tag __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreLocalisationTag *shared __attribute__((swift_name("shared")));
@property (readonly) MiamCoreI18n *postRecipeCount __attribute__((swift_name("postRecipeCount")));
@property (readonly) MiamCoreI18n *preRecipeCount __attribute__((swift_name("preRecipeCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MiamDI")))
@interface MiamCoreMiamDI : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)miamDI __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreMiamDI *shared __attribute__((swift_name("shared")));
@property (readonly) MiamCoreBasketHandler *basketHandler __attribute__((swift_name("basketHandler")));
@property (readonly) MiamCoreContextHandler *contextHandler __attribute__((swift_name("contextHandler")));
@property (readonly) MiamCoreItemSelectorViewModel *itemSelectorViewModel __attribute__((swift_name("itemSelectorViewModel")));
@property (readonly) MiamCoreSingletonFilterViewModel *mealPlannerRecipeFilterViewModel __attribute__((swift_name("mealPlannerRecipeFilterViewModel")));
@property (readonly) MiamCoreSingletonPreferencesViewModel *preferencesViewModel __attribute__((swift_name("preferencesViewModel")));
@property (readonly) MiamCorePricingRepositoryImp *pricingRepository __attribute__((swift_name("pricingRepository")));
@property (readonly) MiamCoreSingletonFilterViewModel *recipeFilterViewModel __attribute__((swift_name("recipeFilterViewModel")));
@property (readonly) MiamCoreRecipeRepositoryImp *recipeRepository __attribute__((swift_name("recipeRepository")));
@property (readonly) MiamCoreRouteService *routeService __attribute__((swift_name("routeService")));
@property (readonly) MiamCoreToasterHandler *toasterHandler __attribute__((swift_name("toasterHandler")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ComponentUiState")))
@interface MiamCoreComponentUiState : MiamCoreKotlinEnum<MiamCoreComponentUiState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MiamCoreComponentUiState *success __attribute__((swift_name("success")));
@property (class, readonly) MiamCoreComponentUiState *error __attribute__((swift_name("error")));
@property (class, readonly) MiamCoreComponentUiState *loading __attribute__((swift_name("loading")));
@property (class, readonly) MiamCoreComponentUiState *empty __attribute__((swift_name("empty")));
@property (class, readonly) MiamCoreComponentUiState *idle __attribute__((swift_name("idle")));
+ (MiamCoreKotlinArray<MiamCoreComponentUiState *> *)values __attribute__((swift_name("values()")));
@end

@interface MiamCoreKMMContext (Extensions)
- (NSArray<NSString *> * _Nullable)getArrayOrNullKey:(NSString *)key __attribute__((swift_name("getArrayOrNull(key:)")));
- (MiamCoreDouble * _Nullable)getDoubleOrNullKey:(NSString *)key __attribute__((swift_name("getDoubleOrNull(key:)")));
- (MiamCoreInt * _Nullable)getIntOrNullKey:(NSString *)key __attribute__((swift_name("getIntOrNull(key:)")));
- (NSString * _Nullable)getStringOrNullKey:(NSString *)key __attribute__((swift_name("getStringOrNull(key:)")));
- (void)putArrayKey:(NSString *)key value:(NSArray<NSString *> *)value __attribute__((swift_name("putArray(key:value:)")));
- (void)putDoubleKey:(NSString *)key value:(double)value __attribute__((swift_name("putDouble(key:value:)")));
- (void)putIntKey:(NSString *)key value:(int32_t)value __attribute__((swift_name("putInt(key:value:)")));
- (void)putStringKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("putString(key:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IosGetCustomResourcesKt")))
@interface MiamCoreIosGetCustomResourcesKt : MiamCoreBase
+ (MiamCoreResourcesPluralsResource * _Nullable)customized:(id<MiamCoreI18nResource>)receiver __attribute__((swift_name("customized(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("I18nResourceExtKt")))
@interface MiamCoreI18nResourceExtKt : MiamCoreBase
+ (MiamCoreI18n *)i18n:(id<MiamCoreI18nResource>)receiver __attribute__((swift_name("i18n(_:)")));
+ (id<MiamCoreResourcesStringDesc>)asStringDesc:(id<MiamCoreI18nResource>)receiver __attribute__((swift_name("asStringDesc(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoinKt")))
@interface MiamCoreKoinKt : MiamCoreBase
+ (MiamCoreKoin_coreKoinApplication *)doInitKoinAppDeclaration:(void (^)(MiamCoreKoin_coreKoinApplication *))appDeclaration __attribute__((swift_name("doInitKoin(appDeclaration:)"))) __attribute__((unavailable("This is no more useful to work with Miam SDK, you can use the DI framework you'd like.")));
@property (class, readonly) MiamCoreKoin_coreModule *dispatcherModule __attribute__((swift_name("dispatcherModule"))) __attribute__((unavailable("This is no more useful to work with Miam SDK, you can use the DI framework you'd like.")));
@property (class, readonly) MiamCoreKoin_coreModule *repositoryModule __attribute__((swift_name("repositoryModule"))) __attribute__((unavailable("This is no more useful to work with Miam SDK, you can use the DI framework you'd like.")));
@property (class, readonly) MiamCoreKoin_coreModule *servicesModule __attribute__((swift_name("servicesModule"))) __attribute__((unavailable("This is no more useful to work with Miam SDK, you can use the DI framework you'd like.")));
@property (class, readonly) MiamCoreKoin_coreModule *storeModule __attribute__((swift_name("storeModule"))) __attribute__((unavailable("This is no more useful to work with Miam SDK, you can use the DI framework you'd like.")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WrappingKt")))
@interface MiamCoreWrappingKt : MiamCoreBase
+ (id _Nullable)dualLetP1:(id _Nullable)p1 p2:(id _Nullable)p2 block:(id _Nullable (^)(id, id))block __attribute__((swift_name("dualLet(p1:p2:block:)")));
+ (id _Nullable)letElseP:(id _Nullable)p block:(id _Nullable (^)(id _Nullable))block elseBlock:(id _Nullable (^)(void))elseBlock __attribute__((swift_name("letElse(p:block:elseBlock:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DoubleExtensionKt")))
@interface MiamCoreDoubleExtensionKt : MiamCoreBase
+ (NSString *)formatDecimal:(double)receiver maxFractionDigits:(int32_t)maxFractionDigits __attribute__((swift_name("formatDecimal(_:maxFractionDigits:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecordKt")))
@interface MiamCoreRecordKt : MiamCoreBase
+ (int32_t)getIntValueOrThrow:(NSDictionary<NSString *, MiamCoreKotlinx_serialization_jsonJsonElement *> *)receiver attribute:(NSString *)attribute __attribute__((swift_name("getIntValueOrThrow(_:attribute:)")));
+ (NSString * _Nullable)getStringValueOrNull:(NSDictionary<NSString *, MiamCoreKotlinx_serialization_jsonJsonElement *> *)receiver attribute:(NSString *)attribute __attribute__((swift_name("getStringValueOrNull(_:attribute:)")));
+ (NSString *)getStringValueOrThrow:(NSDictionary<NSString *, MiamCoreKotlinx_serialization_jsonJsonElement *> *)receiver attribute:(NSString *)attribute __attribute__((swift_name("getStringValueOrThrow(_:attribute:)")));
@property (class, readonly) MiamCoreKotlinx_serialization_jsonJson *jsonFormat __attribute__((swift_name("jsonFormat")));
@end

__attribute__((swift_name("KotlinException")))
@interface MiamCoreKotlinException : MiamCoreKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MiamCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MiamCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface MiamCoreKotlinRuntimeException : MiamCoreKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MiamCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MiamCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface MiamCoreKotlinIllegalStateException : MiamCoreKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MiamCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MiamCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface MiamCoreKotlinCancellationException : MiamCoreKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MiamCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MiamCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol MiamCoreKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResourcesPluralsResource")))
@interface MiamCoreResourcesPluralsResource : MiamCoreBase
- (instancetype)initWithResourceId:(NSString *)resourceId bundle:(NSBundle *)bundle __attribute__((swift_name("init(resourceId:bundle:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSBundle *bundle __attribute__((swift_name("bundle")));
@property (readonly) NSString *resourceId __attribute__((swift_name("resourceId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface MiamCoreKotlinArray<T> : MiamCoreBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(MiamCoreInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<MiamCoreKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResourcesStringResource")))
@interface MiamCoreResourcesStringResource : MiamCoreBase
- (instancetype)initWithResourceId:(NSString *)resourceId bundle:(NSBundle *)bundle __attribute__((swift_name("init(resourceId:bundle:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSBundle *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreResourcesStringResource *)doCopyResourceId:(NSString *)resourceId bundle:(NSBundle *)bundle __attribute__((swift_name("doCopy(resourceId:bundle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSBundle *bundle __attribute__((swift_name("bundle")));
@property (readonly) NSString *resourceId __attribute__((swift_name("resourceId")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol MiamCoreKotlinx_coroutines_coreSharedFlow <MiamCoreKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol MiamCoreKotlinx_coroutines_coreStateFlow <MiamCoreKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreMutableSharedFlow")))
@protocol MiamCoreKotlinx_coroutines_coreMutableSharedFlow <MiamCoreKotlinx_coroutines_coreSharedFlow, MiamCoreKotlinx_coroutines_coreFlowCollector>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(id _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@property (readonly) id<MiamCoreKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreMutableStateFlow")))
@protocol MiamCoreKotlinx_coroutines_coreMutableStateFlow <MiamCoreKotlinx_coroutines_coreStateFlow, MiamCoreKotlinx_coroutines_coreMutableSharedFlow>
@required
- (BOOL)compareAndSetExpect:(id _Nullable)expect update:(id _Nullable)update __attribute__((swift_name("compareAndSet(expect:update:)")));
- (void)setValue:(id _Nullable)value __attribute__((swift_name("setValue(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface MiamCoreKotlinEnumCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol MiamCoreKotlinx_coroutines_coreJob <MiamCoreKotlinCoroutineContextElement>
@required
- (id<MiamCoreKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<MiamCoreKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(MiamCoreKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (MiamCoreKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<MiamCoreKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(MiamCoreKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<MiamCoreKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(MiamCoreKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<MiamCoreKotlinx_coroutines_coreJob>)plusOther_:(id<MiamCoreKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<MiamCoreKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<MiamCoreKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol MiamCoreKotlinCoroutineContextKey
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol MiamCoreKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<MiamCoreKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface MiamCoreKotlinAbstractCoroutineContextKey<B, E> : MiamCoreBase <MiamCoreKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<MiamCoreKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<MiamCoreKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface MiamCoreKotlinx_coroutines_coreCoroutineDispatcherKey : MiamCoreKotlinAbstractCoroutineContextKey<id<MiamCoreKotlinContinuationInterceptor>, MiamCoreKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<MiamCoreKotlinCoroutineContextKey>)baseKey safeCast:(id<MiamCoreKotlinCoroutineContextElement> _Nullable (^)(id<MiamCoreKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol MiamCoreKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDeferred")))
@protocol MiamCoreKotlinx_coroutines_coreDeferred <MiamCoreKotlinx_coroutines_coreJob>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("await(completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (id _Nullable)getCompleted __attribute__((swift_name("getCompleted()")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (MiamCoreKotlinThrowable * _Nullable)getCompletionExceptionOrNull __attribute__((swift_name("getCompletionExceptionOrNull()")));
@property (readonly) id<MiamCoreKotlinx_coroutines_coreSelectClause1> onAwait __attribute__((swift_name("onAwait")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol MiamCoreKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol MiamCoreKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol MiamCoreKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol MiamCoreKotlinKClass <MiamCoreKotlinKDeclarationContainer, MiamCoreKotlinKAnnotatedElement, MiamCoreKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface MiamCoreKotlinx_serialization_jsonJsonElement : MiamCoreBase
@property (class, readonly, getter=companion) MiamCoreKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol MiamCoreKotlinx_serialization_coreEncoder
@required
- (id<MiamCoreKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<MiamCoreKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<MiamCoreKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<MiamCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<MiamCoreKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<MiamCoreKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<MiamCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<MiamCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<MiamCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) MiamCoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol MiamCoreKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<MiamCoreKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MiamCoreKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<MiamCoreKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) MiamCoreKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol MiamCoreKotlinx_serialization_coreDecoder
@required
- (id<MiamCoreKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<MiamCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<MiamCoreKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<MiamCoreKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<MiamCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (MiamCoreKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<MiamCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<MiamCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) MiamCoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineExceptionHandler")))
@protocol MiamCoreKotlinx_coroutines_coreCoroutineExceptionHandler <MiamCoreKotlinCoroutineContextElement>
@required
- (void)handleExceptionContext:(id<MiamCoreKotlinCoroutineContext>)context exception:(MiamCoreKotlinThrowable *)exception __attribute__((swift_name("handleException(context:exception:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface MiamCoreKotlinNothing : MiamCoreBase
@end

__attribute__((swift_name("ResourcesStringDesc")))
@protocol MiamCoreResourcesStringDesc
@required
- (NSString *)localized __attribute__((swift_name("localized()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinApplication")))
@interface MiamCoreKoin_coreKoinApplication : MiamCoreBase
@property (class, readonly, getter=companion) MiamCoreKoin_coreKoinApplicationCompanion *companion __attribute__((swift_name("companion")));
- (void)allowOverrideOverride:(BOOL)override __attribute__((swift_name("allowOverride(override:)")));
- (void)close __attribute__((swift_name("close()")));
- (void)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (MiamCoreKoin_coreKoinApplication *)loggerLogger:(MiamCoreKoin_coreLogger *)logger __attribute__((swift_name("logger(logger:)")));
- (MiamCoreKoin_coreKoinApplication *)modulesModules:(MiamCoreKotlinArray<MiamCoreKoin_coreModule *> *)modules __attribute__((swift_name("modules(modules:)")));
- (MiamCoreKoin_coreKoinApplication *)modulesModules_:(NSArray<MiamCoreKoin_coreModule *> *)modules __attribute__((swift_name("modules(modules_:)")));
- (MiamCoreKoin_coreKoinApplication *)modulesModules__:(MiamCoreKoin_coreModule *)modules __attribute__((swift_name("modules(modules__:)")));
- (MiamCoreKoin_coreKoinApplication *)printLoggerLevel:(MiamCoreKoin_coreLevel *)level __attribute__((swift_name("printLogger(level:)")));
- (MiamCoreKoin_coreKoinApplication *)propertiesValues:(NSDictionary<NSString *, id> *)values __attribute__((swift_name("properties(values:)")));
- (void)unloadModulesModules:(NSArray<MiamCoreKoin_coreModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
- (void)unloadModulesModule:(MiamCoreKoin_coreModule *)module __attribute__((swift_name("unloadModules(module:)")));
@property (readonly) MiamCoreKoin_coreKoin *koin __attribute__((swift_name("koin")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreModule")))
@interface MiamCoreKoin_coreModule : MiamCoreBase
- (instancetype)initWith_createdAtStart:(BOOL)_createdAtStart __attribute__((swift_name("init(_createdAtStart:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (MiamCoreKotlinPair<MiamCoreKoin_coreModule *, MiamCoreKoin_coreInstanceFactory<id> *> *)factoryQualifier:(id<MiamCoreKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(MiamCoreKoin_coreScope *, MiamCoreKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)includesModule:(MiamCoreKotlinArray<MiamCoreKoin_coreModule *> *)module __attribute__((swift_name("includes(module:)")));
- (void)includesModule_:(NSArray<MiamCoreKoin_coreModule *> *)module __attribute__((swift_name("includes(module_:)")));
- (NSArray<MiamCoreKoin_coreModule *> *)plusModules:(NSArray<MiamCoreKoin_coreModule *> *)modules __attribute__((swift_name("plus(modules:)")));
- (NSArray<MiamCoreKoin_coreModule *> *)plusModule:(MiamCoreKoin_coreModule *)module __attribute__((swift_name("plus(module:)")));
- (void)scopeQualifier:(id<MiamCoreKoin_coreQualifier>)qualifier scopeSet:(void (^)(MiamCoreKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(qualifier:scopeSet:)")));
- (void)scopeScopeSet:(void (^)(MiamCoreKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(scopeSet:)")));
- (MiamCoreKotlinPair<MiamCoreKoin_coreModule *, MiamCoreKoin_coreInstanceFactory<id> *> *)singleQualifier:(id<MiamCoreKoin_coreQualifier> _Nullable)qualifier createdAtStart:(BOOL)createdAtStart definition:(id _Nullable (^)(MiamCoreKoin_coreScope *, MiamCoreKoin_coreParametersHolder *))definition __attribute__((swift_name("single(qualifier:createdAtStart:definition:)")));
@property (readonly) MiamCoreMutableSet<MiamCoreKoin_coreSingleInstanceFactory<id> *> *eagerInstances __attribute__((swift_name("eagerInstances")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isLoaded __attribute__((swift_name("isLoaded")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialFormat")))
@protocol MiamCoreKotlinx_serialization_coreSerialFormat
@required
@property (readonly) MiamCoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreStringFormat")))
@protocol MiamCoreKotlinx_serialization_coreStringFormat <MiamCoreKotlinx_serialization_coreSerialFormat>
@required
- (id _Nullable)decodeFromStringDeserializer:(id<MiamCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NSString *)encodeToStringSerializer:(id<MiamCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_jsonJson")))
@interface MiamCoreKotlinx_serialization_jsonJson : MiamCoreBase <MiamCoreKotlinx_serialization_coreStringFormat>
@property (class, readonly, getter=companion) MiamCoreKotlinx_serialization_jsonJsonDefault *companion __attribute__((swift_name("companion")));
- (id _Nullable)decodeFromJsonElementDeserializer:(id<MiamCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer element:(MiamCoreKotlinx_serialization_jsonJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));
- (id _Nullable)decodeFromStringDeserializer:(id<MiamCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (MiamCoreKotlinx_serialization_jsonJsonElement *)encodeToJsonElementSerializer:(id<MiamCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));
- (NSString *)encodeToStringSerializer:(id<MiamCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
- (MiamCoreKotlinx_serialization_jsonJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) MiamCoreKotlinx_serialization_jsonJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) MiamCoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol MiamCoreKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol MiamCoreKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol MiamCoreKotlinx_coroutines_coreChildHandle <MiamCoreKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(MiamCoreKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<MiamCoreKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol MiamCoreKotlinx_coroutines_coreChildJob <MiamCoreKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<MiamCoreKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol MiamCoreKotlinSequence
@required
- (id<MiamCoreKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol MiamCoreKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<MiamCoreKotlinx_coroutines_coreSelectInstance>)select block:(id<MiamCoreKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause1")))
@protocol MiamCoreKotlinx_coroutines_coreSelectClause1
@required
- (void)registerSelectClause1Select:(id<MiamCoreKotlinx_coroutines_coreSelectInstance>)select block:(id<MiamCoreKotlinSuspendFunction1>)block __attribute__((swift_name("registerSelectClause1(select:block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface MiamCoreKotlinx_serialization_jsonJsonElementCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol MiamCoreKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<MiamCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<MiamCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<MiamCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<MiamCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<MiamCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<MiamCoreKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<MiamCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<MiamCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<MiamCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<MiamCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MiamCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<MiamCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MiamCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<MiamCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<MiamCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<MiamCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<MiamCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) MiamCoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface MiamCoreKotlinx_serialization_coreSerializersModule : MiamCoreBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<MiamCoreKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MiamCoreKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<MiamCoreKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<MiamCoreKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MiamCoreKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MiamCoreKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MiamCoreKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MiamCoreKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol MiamCoreKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface MiamCoreKotlinx_serialization_coreSerialKind : MiamCoreBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol MiamCoreKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<MiamCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<MiamCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<MiamCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<MiamCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<MiamCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<MiamCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<MiamCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<MiamCoreKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<MiamCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<MiamCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<MiamCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<MiamCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MiamCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<MiamCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MiamCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<MiamCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<MiamCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<MiamCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) MiamCoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinApplication.Companion")))
@interface MiamCoreKoin_coreKoinApplicationCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreKoin_coreKoinApplicationCompanion *shared __attribute__((swift_name("shared")));
- (MiamCoreKoin_coreKoinApplication *)doInit __attribute__((swift_name("doInit()")));
@end

__attribute__((swift_name("Koin_coreLogger")))
@interface MiamCoreKoin_coreLogger : MiamCoreBase
- (instancetype)initWithLevel:(MiamCoreKoin_coreLevel *)level __attribute__((swift_name("init(level:)"))) __attribute__((objc_designated_initializer));
- (void)debugMsg:(NSString *)msg __attribute__((swift_name("debug(msg:)")));
- (void)errorMsg:(NSString *)msg __attribute__((swift_name("error(msg:)")));
- (void)infoMsg:(NSString *)msg __attribute__((swift_name("info(msg:)")));
- (BOOL)isAtLvl:(MiamCoreKoin_coreLevel *)lvl __attribute__((swift_name("isAt(lvl:)")));
- (void)logLvl:(MiamCoreKoin_coreLevel *)lvl msg:(NSString *(^)(void))msg __attribute__((swift_name("log(lvl:msg:)")));
- (void)logLevel:(MiamCoreKoin_coreLevel *)level msg:(NSString *)msg __attribute__((swift_name("log(level:msg:)")));
@property MiamCoreKoin_coreLevel *level __attribute__((swift_name("level")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreLevel")))
@interface MiamCoreKoin_coreLevel : MiamCoreKotlinEnum<MiamCoreKoin_coreLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MiamCoreKoin_coreLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) MiamCoreKoin_coreLevel *info __attribute__((swift_name("info")));
@property (class, readonly) MiamCoreKoin_coreLevel *error __attribute__((swift_name("error")));
@property (class, readonly) MiamCoreKoin_coreLevel *none __attribute__((swift_name("none")));
+ (MiamCoreKotlinArray<MiamCoreKoin_coreLevel *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoin")))
@interface MiamCoreKoin_coreKoin : MiamCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));
- (void)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (MiamCoreKoin_coreScope *)createScopeT:(id<MiamCoreKoin_coreKoinScopeComponent>)t __attribute__((swift_name("createScope(t:)")));
- (MiamCoreKoin_coreScope *)createScopeScopeId:(NSString *)scopeId __attribute__((swift_name("createScope(scopeId:)")));
- (MiamCoreKoin_coreScope *)createScopeScopeId:(NSString *)scopeId source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:source:)")));
- (MiamCoreKoin_coreScope *)createScopeScopeId:(NSString *)scopeId qualifier:(id<MiamCoreKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:qualifier:source:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<MiamCoreKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<MiamCoreKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (void)deleteScopeScopeId:(NSString *)scopeId __attribute__((swift_name("deleteScope(scopeId:)")));
- (id _Nullable)getClazz:(id<MiamCoreKotlinKClass>)clazz qualifier:(id<MiamCoreKoin_coreQualifier> _Nullable)qualifier parameters:(MiamCoreKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (id)getQualifier:(id<MiamCoreKoin_coreQualifier> _Nullable)qualifier parameters:(MiamCoreKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (MiamCoreKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getOrCreateScope(scopeId:)")));
- (MiamCoreKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId qualifier:(id<MiamCoreKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("getOrCreateScope(scopeId:qualifier:source:)")));
- (id _Nullable)getOrNullClazz:(id<MiamCoreKotlinKClass>)clazz qualifier:(id<MiamCoreKoin_coreQualifier> _Nullable)qualifier parameters:(MiamCoreKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getOrNullQualifier:(id<MiamCoreKoin_coreQualifier> _Nullable)qualifier parameters:(MiamCoreKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (MiamCoreKoin_coreScope *)getScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getScope(scopeId:)")));
- (MiamCoreKoin_coreScope * _Nullable)getScopeOrNullScopeId:(NSString *)scopeId __attribute__((swift_name("getScopeOrNull(scopeId:)")));
- (id<MiamCoreKotlinLazy>)injectQualifier:(id<MiamCoreKoin_coreQualifier> _Nullable)qualifier mode:(MiamCoreKotlinLazyThreadSafetyMode *)mode parameters:(MiamCoreKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<MiamCoreKotlinLazy>)injectOrNullQualifier:(id<MiamCoreKoin_coreQualifier> _Nullable)qualifier mode:(MiamCoreKotlinLazyThreadSafetyMode *)mode parameters:(MiamCoreKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (void)loadModulesModules:(NSArray<MiamCoreKoin_coreModule *> *)modules allowOverride:(BOOL)allowOverride __attribute__((swift_name("loadModules(modules:allowOverride:)")));
- (void)setPropertyKey:(NSString *)key value:(id)value __attribute__((swift_name("setProperty(key:value:)")));
- (void)setupLoggerLogger:(MiamCoreKoin_coreLogger *)logger __attribute__((swift_name("setupLogger(logger:)")));
- (void)unloadModulesModules:(NSArray<MiamCoreKoin_coreModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
@property (readonly) MiamCoreKoin_coreInstanceRegistry *instanceRegistry __attribute__((swift_name("instanceRegistry")));
@property (readonly) MiamCoreKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) MiamCoreKoin_corePropertyRegistry *propertyRegistry __attribute__((swift_name("propertyRegistry")));
@property (readonly) MiamCoreKoin_coreScopeRegistry *scopeRegistry __attribute__((swift_name("scopeRegistry")));
@end

__attribute__((swift_name("Koin_coreLockable")))
@interface MiamCoreKoin_coreLockable : MiamCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Koin_coreInstanceFactory")))
@interface MiamCoreKoin_coreInstanceFactory<T> : MiamCoreKoin_coreLockable
- (instancetype)initWithBeanDefinition:(MiamCoreKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) MiamCoreKoin_coreInstanceFactoryCompanion *companion __attribute__((swift_name("companion")));
- (T _Nullable)createContext:(MiamCoreKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(MiamCoreKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(MiamCoreKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(MiamCoreKoin_coreInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@property (readonly) MiamCoreKoin_coreBeanDefinition<T> *beanDefinition __attribute__((swift_name("beanDefinition")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface MiamCoreKotlinPair<__covariant A, __covariant B> : MiamCoreBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (A _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (B _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end

__attribute__((swift_name("Koin_coreQualifier")))
@protocol MiamCoreKoin_coreQualifier
@required
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScope")))
@interface MiamCoreKoin_coreScope : MiamCoreKoin_coreLockable
- (instancetype)initWithScopeQualifier:(id<MiamCoreKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(MiamCoreKoin_coreKoin *)_koin __attribute__((swift_name("init(scopeQualifier:id:isRoot:_koin:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)close __attribute__((swift_name("close()")));
- (id<MiamCoreKoin_coreQualifier>)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreKoin_coreScope *)doCopyScopeQualifier:(id<MiamCoreKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(MiamCoreKoin_coreKoin *)_koin __attribute__((swift_name("doCopy(scopeQualifier:id:isRoot:_koin:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<MiamCoreKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<MiamCoreKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id _Nullable)getClazz:(id<MiamCoreKotlinKClass>)clazz qualifier:(id<MiamCoreKoin_coreQualifier> _Nullable)qualifier parameters:(MiamCoreKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (id)getQualifier:(id<MiamCoreKoin_coreQualifier> _Nullable)qualifier parameters:(MiamCoreKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (NSArray<id> *)getAllClazz:(id<MiamCoreKotlinKClass>)clazz __attribute__((swift_name("getAll(clazz:)")));
- (MiamCoreKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
- (id _Nullable)getOrNullClazz:(id<MiamCoreKotlinKClass>)clazz qualifier:(id<MiamCoreKoin_coreQualifier> _Nullable)qualifier parameters:(MiamCoreKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getOrNullQualifier:(id<MiamCoreKoin_coreQualifier> _Nullable)qualifier parameters:(MiamCoreKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (id _Nullable)getPropertyOrNullKey:(NSString *)key __attribute__((swift_name("getPropertyOrNull(key:)")));
- (MiamCoreKoin_coreScope *)getScopeScopeID:(NSString *)scopeID __attribute__((swift_name("getScope(scopeID:)")));
- (id _Nullable)getSource __attribute__((swift_name("getSource()"))) __attribute__((deprecated("No need to use getSource(). You can an use get() directly.")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<MiamCoreKotlinLazy>)injectQualifier:(id<MiamCoreKoin_coreQualifier> _Nullable)qualifier mode:(MiamCoreKotlinLazyThreadSafetyMode *)mode parameters:(MiamCoreKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<MiamCoreKotlinLazy>)injectOrNullQualifier:(id<MiamCoreKoin_coreQualifier> _Nullable)qualifier mode:(MiamCoreKotlinLazyThreadSafetyMode *)mode parameters:(MiamCoreKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (BOOL)isNotClosed __attribute__((swift_name("isNotClosed()")));
- (void)linkToScopes:(MiamCoreKotlinArray<MiamCoreKoin_coreScope *> *)scopes __attribute__((swift_name("linkTo(scopes:)")));
- (void)registerCallbackCallback:(id<MiamCoreKoin_coreScopeCallback>)callback __attribute__((swift_name("registerCallback(callback:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)unlinkScopes:(MiamCoreKotlinArray<MiamCoreKoin_coreScope *> *)scopes __attribute__((swift_name("unlink(scopes:)")));
@property (readonly) NSMutableArray<MiamCoreKoin_coreParametersHolder *> *_parameterStack __attribute__((swift_name("_parameterStack")));
@property id _Nullable _source __attribute__((swift_name("_source")));
@property (readonly) BOOL closed __attribute__((swift_name("closed")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isRoot __attribute__((swift_name("isRoot")));
@property (readonly) MiamCoreKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) id<MiamCoreKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end

__attribute__((swift_name("Koin_coreParametersHolder")))
@interface MiamCoreKoin_coreParametersHolder : MiamCoreBase
- (instancetype)initWith_values:(NSMutableArray<id> *)_values __attribute__((swift_name("init(_values:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreKoin_coreParametersHolderCompanion *companion __attribute__((swift_name("companion")));
- (MiamCoreKoin_coreParametersHolder *)addValue:(id)value __attribute__((swift_name("add(value:)")));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (id _Nullable)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (id _Nullable)component5 __attribute__((swift_name("component5()")));
- (id _Nullable)elementAtI:(int32_t)i clazz:(id<MiamCoreKotlinKClass>)clazz __attribute__((swift_name("elementAt(i:clazz:)")));
- (id)get __attribute__((swift_name("get()")));
- (id _Nullable)getI:(int32_t)i __attribute__((swift_name("get(i:)")));
- (id _Nullable)getOrNull __attribute__((swift_name("getOrNull()")));
- (id _Nullable)getOrNullClazz:(id<MiamCoreKotlinKClass>)clazz __attribute__((swift_name("getOrNull(clazz:)")));
- (MiamCoreKoin_coreParametersHolder *)insertIndex:(int32_t)index value:(id)value __attribute__((swift_name("insert(index:value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isNotEmpty __attribute__((swift_name("isNotEmpty()")));
- (void)setI:(int32_t)i t:(id _Nullable)t __attribute__((swift_name("set(i:t:)")));
- (int32_t)size __attribute__((swift_name("size()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeDSL")))
@interface MiamCoreKoin_coreScopeDSL : MiamCoreBase
- (instancetype)initWithScopeQualifier:(id<MiamCoreKoin_coreQualifier>)scopeQualifier module:(MiamCoreKoin_coreModule *)module __attribute__((swift_name("init(scopeQualifier:module:)"))) __attribute__((objc_designated_initializer));
- (MiamCoreKotlinPair<MiamCoreKoin_coreModule *, MiamCoreKoin_coreInstanceFactory<id> *> *)factoryQualifier:(id<MiamCoreKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(MiamCoreKoin_coreScope *, MiamCoreKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (MiamCoreKotlinPair<MiamCoreKoin_coreModule *, MiamCoreKoin_coreInstanceFactory<id> *> *)scopedQualifier:(id<MiamCoreKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(MiamCoreKoin_coreScope *, MiamCoreKoin_coreParametersHolder *))definition __attribute__((swift_name("scoped(qualifier:definition:)")));
- (MiamCoreKotlinPair<MiamCoreKoin_coreModule *, MiamCoreKoin_coreInstanceFactory<id> *> *)singleQualifier:(id<MiamCoreKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(MiamCoreKoin_coreScope *, MiamCoreKoin_coreParametersHolder *))definition __attribute__((swift_name("single(qualifier:definition:)"))) __attribute__((unavailable("Can't use Single in a scope. Use Scoped instead")));
@property (readonly) MiamCoreKoin_coreModule *module __attribute__((swift_name("module")));
@property (readonly) id<MiamCoreKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreSingleInstanceFactory")))
@interface MiamCoreKoin_coreSingleInstanceFactory<T> : MiamCoreKoin_coreInstanceFactory<T>
- (instancetype)initWithBeanDefinition:(MiamCoreKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)createContext:(MiamCoreKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(MiamCoreKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(MiamCoreKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(MiamCoreKoin_coreInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJson.Default")))
@interface MiamCoreKotlinx_serialization_jsonJsonDefault : MiamCoreKotlinx_serialization_jsonJson
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreKotlinx_serialization_jsonJsonDefault *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonConfiguration")))
@interface MiamCoreKotlinx_serialization_jsonJsonConfiguration : MiamCoreBase
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property (readonly) BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));
@property (readonly) NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));
@property (readonly) BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));
@property (readonly) BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL explicitNulls __attribute__((swift_name("explicitNulls")));
@property (readonly) BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property (readonly) BOOL isLenient __attribute__((swift_name("isLenient")));
@property (readonly) BOOL prettyPrint __attribute__((swift_name("prettyPrint")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property (readonly) BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property (readonly) BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol MiamCoreKotlinx_coroutines_coreParentJob <MiamCoreKotlinx_coroutines_coreJob>
@required
- (MiamCoreKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol MiamCoreKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<MiamCoreKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(MiamCoreKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(MiamCoreKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<MiamCoreKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol MiamCoreKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol MiamCoreKotlinSuspendFunction0 <MiamCoreKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol MiamCoreKotlinSuspendFunction1 <MiamCoreKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol MiamCoreKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<MiamCoreKotlinKClass>)kClass provider:(id<MiamCoreKotlinx_serialization_coreKSerializer> (^)(NSArray<id<MiamCoreKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<MiamCoreKotlinKClass>)kClass serializer:(id<MiamCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<MiamCoreKotlinKClass>)baseClass actualClass:(id<MiamCoreKotlinKClass>)actualClass actualSerializer:(id<MiamCoreKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<MiamCoreKotlinKClass>)baseClass defaultDeserializerProvider:(id<MiamCoreKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)polymorphicDefaultDeserializerBaseClass:(id<MiamCoreKotlinKClass>)baseClass defaultDeserializerProvider:(id<MiamCoreKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)polymorphicDefaultSerializerBaseClass:(id<MiamCoreKotlinKClass>)baseClass defaultSerializerProvider:(id<MiamCoreKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("Koin_coreKoinComponent")))
@protocol MiamCoreKoin_coreKoinComponent
@required
- (MiamCoreKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
@end

__attribute__((swift_name("Koin_coreKoinScopeComponent")))
@protocol MiamCoreKoin_coreKoinScopeComponent <MiamCoreKoin_coreKoinComponent>
@required
- (void)closeScope __attribute__((swift_name("closeScope()")));
@property (readonly) MiamCoreKoin_coreScope *scope __attribute__((swift_name("scope")));
@end

__attribute__((swift_name("KotlinLazy")))
@protocol MiamCoreKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLazyThreadSafetyMode")))
@interface MiamCoreKotlinLazyThreadSafetyMode : MiamCoreKotlinEnum<MiamCoreKotlinLazyThreadSafetyMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MiamCoreKotlinLazyThreadSafetyMode *synchronized __attribute__((swift_name("synchronized")));
@property (class, readonly) MiamCoreKotlinLazyThreadSafetyMode *publication __attribute__((swift_name("publication")));
@property (class, readonly) MiamCoreKotlinLazyThreadSafetyMode *none __attribute__((swift_name("none")));
+ (MiamCoreKotlinArray<MiamCoreKotlinLazyThreadSafetyMode *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceRegistry")))
@interface MiamCoreKoin_coreInstanceRegistry : MiamCoreBase
- (instancetype)initWith_koin:(MiamCoreKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)saveMappingAllowOverride:(BOOL)allowOverride mapping:(NSString *)mapping factory:(MiamCoreKoin_coreInstanceFactory<id> *)factory logWarning:(BOOL)logWarning __attribute__((swift_name("saveMapping(allowOverride:mapping:factory:logWarning:)")));
- (int32_t)size __attribute__((swift_name("size()")));
@property (readonly) MiamCoreKoin_coreKoin *_koin __attribute__((swift_name("_koin")));
@property (readonly) NSDictionary<NSString *, MiamCoreKoin_coreInstanceFactory<id> *> *instances __attribute__((swift_name("instances")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_corePropertyRegistry")))
@interface MiamCoreKoin_corePropertyRegistry : MiamCoreBase
- (instancetype)initWith_koin:(MiamCoreKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (void)savePropertiesProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("saveProperties(properties:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry")))
@interface MiamCoreKoin_coreScopeRegistry : MiamCoreBase
- (instancetype)initWith_koin:(MiamCoreKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MiamCoreKoin_coreScopeRegistryCompanion *companion __attribute__((swift_name("companion")));
- (void)loadScopesModules:(NSSet<MiamCoreKoin_coreModule *> *)modules __attribute__((swift_name("loadScopes(modules:)")));
@property (readonly) MiamCoreKoin_coreScope *rootScope __attribute__((swift_name("rootScope")));
@property (readonly) NSSet<id<MiamCoreKoin_coreQualifier>> *scopeDefinitions __attribute__((swift_name("scopeDefinitions")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreBeanDefinition")))
@interface MiamCoreKoin_coreBeanDefinition<T> : MiamCoreBase
- (instancetype)initWithScopeQualifier:(id<MiamCoreKoin_coreQualifier>)scopeQualifier primaryType:(id<MiamCoreKotlinKClass>)primaryType qualifier:(id<MiamCoreKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(MiamCoreKoin_coreScope *, MiamCoreKoin_coreParametersHolder *))definition kind:(MiamCoreKoin_coreKind *)kind secondaryTypes:(NSArray<id<MiamCoreKotlinKClass>> *)secondaryTypes __attribute__((swift_name("init(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)"))) __attribute__((objc_designated_initializer));
- (id<MiamCoreKoin_coreQualifier>)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<MiamCoreKotlinKClass>)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<MiamCoreKoin_coreQualifier> _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (T _Nullable (^)(MiamCoreKoin_coreScope *, MiamCoreKoin_coreParametersHolder *))component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreKoin_coreKind *)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<id<MiamCoreKotlinKClass>> *)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreKoin_coreBeanDefinition<T> *)doCopyScopeQualifier:(id<MiamCoreKoin_coreQualifier>)scopeQualifier primaryType:(id<MiamCoreKotlinKClass>)primaryType qualifier:(id<MiamCoreKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(MiamCoreKoin_coreScope *, MiamCoreKoin_coreParametersHolder *))definition kind:(MiamCoreKoin_coreKind *)kind secondaryTypes:(NSArray<id<MiamCoreKotlinKClass>> *)secondaryTypes __attribute__((swift_name("doCopy(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)hasTypeClazz:(id<MiamCoreKotlinKClass>)clazz __attribute__((swift_name("hasType(clazz:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isClazz:(id<MiamCoreKotlinKClass>)clazz qualifier:(id<MiamCoreKoin_coreQualifier> _Nullable)qualifier scopeDefinition:(id<MiamCoreKoin_coreQualifier>)scopeDefinition __attribute__((swift_name("is(clazz:qualifier:scopeDefinition:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property MiamCoreKoin_coreCallbacks<T> *callbacks __attribute__((swift_name("callbacks")));
@property (readonly) T _Nullable (^definition)(MiamCoreKoin_coreScope *, MiamCoreKoin_coreParametersHolder *) __attribute__((swift_name("definition")));
@property (readonly) MiamCoreKoin_coreKind *kind __attribute__((swift_name("kind")));
@property (readonly) id<MiamCoreKotlinKClass> primaryType __attribute__((swift_name("primaryType")));
@property id<MiamCoreKoin_coreQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) id<MiamCoreKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@property NSArray<id<MiamCoreKotlinKClass>> *secondaryTypes __attribute__((swift_name("secondaryTypes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceFactoryCompanion")))
@interface MiamCoreKoin_coreInstanceFactoryCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreKoin_coreInstanceFactoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ERROR_SEPARATOR __attribute__((swift_name("ERROR_SEPARATOR")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceContext")))
@interface MiamCoreKoin_coreInstanceContext : MiamCoreBase
- (instancetype)initWithKoin:(MiamCoreKoin_coreKoin *)koin scope:(MiamCoreKoin_coreScope *)scope parameters:(MiamCoreKoin_coreParametersHolder * _Nullable)parameters __attribute__((swift_name("init(koin:scope:parameters:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MiamCoreKoin_coreKoin *koin __attribute__((swift_name("koin")));
@property (readonly) MiamCoreKoin_coreParametersHolder * _Nullable parameters __attribute__((swift_name("parameters")));
@property (readonly) MiamCoreKoin_coreScope *scope __attribute__((swift_name("scope")));
@end

__attribute__((swift_name("Koin_coreScopeCallback")))
@protocol MiamCoreKoin_coreScopeCallback
@required
- (void)onScopeCloseScope:(MiamCoreKoin_coreScope *)scope __attribute__((swift_name("onScopeClose(scope:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreParametersHolder.Companion")))
@interface MiamCoreKoin_coreParametersHolderCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreKoin_coreParametersHolderCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t MAX_PARAMS __attribute__((swift_name("MAX_PARAMS")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface MiamCoreKotlinx_coroutines_coreAtomicDesc : MiamCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(MiamCoreKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(MiamCoreKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
@property MiamCoreKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface MiamCoreKotlinx_coroutines_coreOpDescriptor : MiamCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(MiamCoreKotlinx_coroutines_coreOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreKotlinx_coroutines_coreAtomicOp<id> * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.PrepareOp")))
@interface MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp : MiamCoreKotlinx_coroutines_coreOpDescriptor
- (instancetype)initWithAffected:(MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next desc:(MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *)desc __attribute__((swift_name("init(affected:next:desc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) MiamCoreKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@property (readonly) MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode *next __attribute__((swift_name("next")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry.Companion")))
@interface MiamCoreKoin_coreScopeRegistryCompanion : MiamCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MiamCoreKoin_coreScopeRegistryCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKind")))
@interface MiamCoreKoin_coreKind : MiamCoreKotlinEnum<MiamCoreKoin_coreKind *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MiamCoreKoin_coreKind *singleton __attribute__((swift_name("singleton")));
@property (class, readonly) MiamCoreKoin_coreKind *factory __attribute__((swift_name("factory")));
@property (class, readonly) MiamCoreKoin_coreKind *scoped __attribute__((swift_name("scoped")));
+ (MiamCoreKotlinArray<MiamCoreKoin_coreKind *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreCallbacks")))
@interface MiamCoreKoin_coreCallbacks<T> : MiamCoreBase
- (instancetype)initWithOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("init(onClose:)"))) __attribute__((objc_designated_initializer));
- (void (^ _Nullable)(T _Nullable))component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (MiamCoreKoin_coreCallbacks<T> *)doCopyOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("doCopy(onClose:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^ _Nullable onClose)(T _Nullable) __attribute__((swift_name("onClose")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface MiamCoreKotlinx_coroutines_coreAtomicOp<__contravariant T> : MiamCoreKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) MiamCoreKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) id _Nullable consensus __attribute__((swift_name("consensus")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode")))
@interface MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode : MiamCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node condition:(MiamCoreBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(MiamCoreBoolean *(^)(MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(MiamCoreBoolean *(^)(MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate condition:(MiamCoreBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeAddLastNode:(MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("describeAddLast(node:)")));
- (MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeRemoveFirst __attribute__((swift_name("describeRemoveFirst()")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(MiamCoreBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly, getter=next_) id next __attribute__((swift_name("next")));
@property (readonly) MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.AbstractAtomicDesc")))
@interface MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc : MiamCoreKotlinx_coroutines_coreAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(MiamCoreKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id _Nullable)failureAffected:(MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)finishOnSuccessAffected:(MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (id _Nullable)onPreparePrepareOp:(MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (void)onRemovedAffected:(MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("onRemoved(affected:)")));
- (id _Nullable)prepareOp:(MiamCoreKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)retryAffected:(MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(MiamCoreKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc")))
@interface MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T> : MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)queue node:(T)node __attribute__((swift_name("init(queue:node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)finishOnSuccessAffected:(MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)retryAffected:(MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(MiamCoreKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) T node __attribute__((swift_name("node")));
@property (readonly) MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode *originalNext __attribute__((swift_name("originalNext")));
@property (readonly) MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc")))
@interface MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T> : MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)queue __attribute__((swift_name("init(queue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id _Nullable)failureAffected:(MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)finishOnSuccessAffected:(MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)retryAffected:(MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(MiamCoreKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) MiamCoreKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
