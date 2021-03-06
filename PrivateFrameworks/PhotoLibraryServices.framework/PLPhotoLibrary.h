/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLFetchingAlbum, NSObject<PLAssetContainer>, PLGenericAlbum, NSCalendar, PLWStackedImageCache, NSSet, PLThumbnailManager, NSDictionary, NSArray, PLManagedObjectContext, NSMutableDictionary, PLManagedAlbum, NSMutableArray;

@interface PLPhotoLibrary : NSObject  {
    BOOL _listeningForITunesSyncing;
    BOOL _canTriggerDatabaseUpdate;
    struct __CFDictionary { } *_allPhotos;
    double _lastRemoteDataModification;
    int _databaseMigrationKind;
    PLThumbnailManager *_thumbnailManager;
    NSDictionary *_existingThumbnailEntries;
    PLGenericAlbum *_allImportedPhotosAlbum;
    PLGenericAlbum *_lastImportedPhotosAlbum;
    NSCalendar *_exifConversionCalendar;
    NSMutableDictionary *_photoStreamAlbumsByStreamID;
    NSMutableArray *_photoStreamAlbums;
    struct NSObject { Class x1; } *_allPhotoStreamPhotosAlbum;
    id _ptpDelegate;
    PLWStackedImageCache *_stackedImageCache;
    NSSet *_imageFileExtensions;
    NSSet *_rawImageFileExtensions;
    NSSet *_audioFileExtensions;
    NSSet *_extraVideoExtensions;
    unsigned int _lastFetchedGPSCount;
    unsigned int _insertedCountSinceLastFetchedGPSCount;
    unsigned int _deletedCountSinceLastFetchedGPSCount;
    unsigned int _newlyCompleteWithGPS;
    PLManagedAlbum *_cameraRollAlbum;
    PLFetchingAlbum *_cameraSessionAlbum;
    PLManagedAlbum *_savedAndInFlightAlbum;
    PLManagedObjectContext *managedObjectContext;
}

@property(retain) PLManagedObjectContext * managedObjectContext;
@property(readonly) PLThumbnailManager * thumbnailManager;
@property(readonly) NSObject<PLAssetContainer> * savedPhotosAlbum;
@property(readonly) NSArray * albums;
@property(readonly) NSArray * userAlbums;
@property(readonly) NSArray * imagePickerAlbums;
@property(readonly) NSArray * wallpaperAlbums;
@property(readonly) NSArray * eventAlbums;
@property(readonly) NSArray * faceAlbums;
@property(readonly) NSArray * placeAlbums;
@property(readonly) NSArray * photoStreamAlbums;
@property(readonly) NSArray * photoStreamAlbumsForPreferences;

+ (void)moveDatabasesAside;
+ (BOOL)processCanWriteSandboxForPath:(id)arg1;
+ (BOOL)processCanReadSandboxForPath:(id)arg1;
+ (id)iTunesSyncedAssetThumbnailsDirectory;
+ (id)simpleDCIMDirectory;
+ (id)videosPath;
+ (id)mediaFilesDirectoryURL;
+ (BOOL)needsToBeSyncedWithiTunesBecauseFormatIDsChanged;
+ (void)setImageWriterIsBusy:(BOOL)arg1;
+ (void)setMigratorIsBusy:(BOOL)arg1;
+ (void)_presentSqliteCorruptionErrorDialog;
+ (void)createPhotoStreamAlbumWithStreamID:(id)arg1 completionHandler:(id)arg2;
+ (id)assetsDataDirectory;
+ (id)photoStreamsDataDirectory;
+ (void)recoverFromCrashIfNeeded;
+ (void)handlePossibleCoreDataError:(id)arg1;
+ (BOOL)isApplicationWildcat;
+ (id)iTunesSyncedFaceAlbumThumbnailsDirectory;
+ (id)sqliteErrorIndicatorFilePath;
+ (id)iTunesSyncedAssetsDirectory;
+ (id)photoMetadataDirectoryURL;
+ (id)photoDataMiscDirectory;
+ (id)photoDataDirectoryURL;
+ (id)migrationIndicatorFilePath;
+ (id)persistedAlbumDataDirectoryURL;
+ (id)pathToAssetsToAlbumsMapping;
+ (id)imageWriterIndicatorFilePath;
+ (id)takingVideoIndicatorFilePath;
+ (id)dcimDirectoryURL;
+ (void)setPhotoStreamEnabled:(BOOL)arg1;
+ (void)setApplicationIsWildcat:(BOOL)arg1;
+ (void)_doFilesystemImportIfNeeded;
+ (id)iTunesPhotosDirectory;
+ (id)crashRecoveryIndicatorFilePaths;
+ (void)setSqliteErrorAndExitIfNecessary;
+ (BOOL)isRunningInStoreDemoMode;
+ (id)sharedInMemoryLibrary;
+ (id)dcimDirectory;
+ (id)photoDataDirectory;
+ (void)initializeGraphicsServices;
+ (id)calculatedDisplayableIndexesForAlbum:(struct NSObject { Class x1; }*)arg1 count:(unsigned int)arg2;
+ (void)setVideoCaptureIsBusy:(BOOL)arg1;
+ (struct NSObject { Class x1; }*)savedPhotosAlbum;
+ (id)sharedPhotoLibrary;

- (id)managedObjectContext;
- (id)init;
- (void)dealloc;
- (id)albumsForContentMode:(int)arg1;
- (void)_detachAuxDatabase;
- (void)_attachAuxDatabase;
- (id)fileExtensionsForPhoto:(id)arg1;
- (void)_notifyChangedPhotos:(id)arg1;
- (void)processSyncSaveJob:(id)arg1 albumMap:(id)arg2;
- (BOOL)isImageFileExtension:(id)arg1;
- (id)masterURLFromSidecarURLs:(id)arg1;
- (id)addDCIMEntryAtFileURL:(id)arg1 toEvent:(struct NSObject { Class x1; }*)arg2 sidecarFileInfo:(id)arg3 progress:(struct { id x1; float x2; struct __CFArray {} *x3; float x4; BOOL x5; id x6; }*)arg4 importSessionIdentifier:(id)arg5 isImported:(BOOL)arg6 previewImage:(id)arg7 thumbnailImage:(id)arg8 savedAssetType:(int)arg9 replacementUUID:(id)arg10 extendedInfo:(id)arg11 thumbnailsData:(struct __CFDictionary { }*)arg12 withUUID:(id)arg13;
- (void)modifyDCIMEntryForVideo:(id)arg1 progress:(struct { id x1; float x2; struct __CFArray {} *x3; float x4; BOOL x5; id x6; }*)arg2 previewImage:(id)arg3 thumbnailImage:(id)arg4;
- (void)modifyDCIMEntryForPhoto:(id)arg1;
- (id)photoWithPath:(id)arg1;
- (void)migrateSavedPhotoCaptureTimes;
- (id)imageForFormat:(int)arg1 forAsset:(id)arg2;
- (id)editableAlbums;
- (id)syncedAlbums;
- (void)_updateWithInsertedAssetsCount:(unsigned int)arg1 deletedCount:(unsigned int)arg2 updatedAssets:(id)arg3;
- (id)lastImportedPhotosAlbum;
- (id)allImportedPhotosAlbum;
- (void)recreateAlbumsFromMetadata;
- (BOOL)needsMigration;
- (id)managedObjectWithObjectID:(id)arg1;
- (void)_unloadExistingThumbnailEntries;
- (void)_loadExistingThumbnailEntries;
- (void)cleanupModelAfterRestoreFromiTunesBackup;
- (int)_orientationOfFileAtPath:(id)arg1;
- (int)_orientationAfterRotatingOrientation:(int)arg1 clockwiseByDegrees:(int)arg2 transposeCoordinatesOut:(BOOL*)arg3;
- (void)_migrationDidFinish;
- (void)_notifyProgress:(float)arg1;
- (void)prepareToMigrateDcimToDatabase;
- (id)_getGlobal:(id)arg1 userInfo:(id)arg2;
- (id)_setGlobal:(id)arg1 userInfo:(id)arg2;
- (struct NSObject { Class x1; }*)albumFromGroupURL:(id)arg1;
- (id)messagesPhotoFromAssetURL:(id)arg1;
- (id)assetURLForManagedPhoto:(id)arg1;
- (id)assetURLForPhoto:(id)arg1 extension:(id)arg2;
- (id)lastImportSessionUUID;
- (void)removeFromKnownPhotoStreamAlbums:(id)arg1;
- (void)addToKnownPhotoStreamAlbums:(id)arg1;
- (struct NSObject { Class x1; }*)allPhotoStreamPhotosAlbumIfItExists;
- (void)_addPhoto:(id)arg1 toEvent:(struct NSObject { Class x1; }*)arg2;
- (void)removePhotosFromAllAlbums:(id)arg1;
- (id)assetWithUUID:(id)arg1;
- (id)placeAlbums;
- (id)faceAlbums;
- (id)eventAlbums;
- (id)wallpaperAlbums;
- (id)userAlbums;
- (struct NSObject { Class x1; }*)eventWithName:(id)arg1 andImportSessionIdentifier:(id)arg2;
- (void)withDispatchGroup:(struct dispatch_group_s { }*)arg1 performBlock:(id)arg2;
- (void)withDispatchGroup:(struct dispatch_group_s { }*)arg1 performTransaction:(id)arg2;
- (void)updateThumbnailsForPhoto:(id)arg1 previewImage:(id)arg2 thumbnailImage:(id)arg3;
- (void)deleteAllImages;
- (void)_compactThumbnailTablesIfNecessary;
- (void)_deleteFilesAndEmptyDirectoriesAtPaths:(id)arg1;
- (BOOL)rotateCameraPhoto:(id)arg1 byDegrees:(int)arg2;
- (void)deleteImages:(id)arg1;
- (BOOL)hasAtLeastOneItem;
- (id)iTunesFaceImageForRecordID:(int)arg1 faceIndex:(int)arg2 size:(struct CGSize { float x1; float x2; })arg3 returnLocationInImage:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg4;
- (void)pictureWasChanged;
- (void)pictureWasDeletedNotification;
- (void)photoLibraryAvailableNotification;
- (void)photoLibraryRebuildingNotification;
- (void)photoLibraryCorruptNotification;
- (void)_notifyPhotoLibraryIsNoLongerAvailableOnMainThread;
- (id)_iTunesPhotos;
- (id)countOfAllPhotosAndVideos;
- (void)flushAlbums;
- (void)flushPhotoStreamAlbums;
- (void)flushDCIMAlbums;
- (BOOL)libraryIsAvailable;
- (id)imagePickerAlbums;
- (struct NSObject { Class x1; }*)iPadAllPhotosAlbumIfExists;
- (struct NSObject { Class x1; }*)allPhotosAlbumIfExists;
- (struct NSObject { Class x1; }*)albumWithUuid:(id)arg1;
- (BOOL)isAudioFileExtension:(id)arg1;
- (BOOL)isRawImageFileExtension:(id)arg1;
- (BOOL)isNonRawImageFileExtension:(id)arg1;
- (BOOL)isVideoFileExtension:(id)arg1;
- (void)_loadFileExtensionInformation;
- (int)priorityForFileExtension:(id)arg1;
- (id)newImageForDulcimerPhoto:(id)arg1 format:(int)arg2 outImageProperties:(const struct __CFDictionary {}**)arg3;
- (id)newImageForDulcimerPhoto:(id)arg1 format:(int)arg2;
- (struct NSObject { Class x1; }*)iPadAllPhotosAlbum;
- (struct NSObject { Class x1; }*)allPhotosAlbum;
- (void)_updateHasAtLeastOnePhotoWithGPSWithInsertedCount:(unsigned int)arg1 deletedCount:(unsigned int)arg2 updatedAssets:(id)arg3;
- (void)prepareDatabaseForOTAAssetsPhase;
- (void)_linkAsideAlbumMetadataForOTARestore;
- (void)_removeSyncedAlbumsInTransactionWithManagedObjectContext:(id)arg1;
- (void)_batchDeleteAssets:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)_allAssetsForDeletion:(id)arg1;
- (void)_calculatePendingItemCountsAfterOTARestoreWithMangedObjectContext:(id)arg1;
- (void)_safeSave:(id)arg1;
- (void)_removeOrphanedThumbnailEntries;
- (void)_deleteObsoleteMetadataFiles;
- (void)setGlobalValue:(id)arg1 forKey:(id)arg2;
- (void)setPhotoStreamEnabled:(BOOL)arg1;
- (id)_albumsContainingItems:(id)arg1 includeInFlightAlbum:(BOOL)arg2;
- (id)photoStreamAlbums;
- (id)photoStreamAlbumsForPreferences;
- (struct NSObject { Class x1; }*)allPhotoStreamPhotosAlbum;
- (void)withDispatchGroup:(struct dispatch_group_s { }*)arg1 performBlock:(id)arg2 completionHandler:(id)arg3;
- (void)withDispatchGroup:(struct dispatch_group_s { }*)arg1 performTransaction:(id)arg2 completionHandler:(id)arg3;
- (BOOL)_hasAtLeastOneItem:(BOOL)arg1;
- (void)pictureWasTakenOrChanged;
- (id)thumbnailManager;
- (void)_loadPhotoLibraryAfterMigration;
- (void)_releaseThumbnailManager;
- (void)loadDatabase;
- (id)initWithPath:(id)arg1 canTriggerDatabaseUpdate:(BOOL)arg2;
- (id)objectWithObjectID:(id)arg1;
- (void)performBlock:(id)arg1;
- (id)_init;
- (void)clientApplicationWillEnterForeground;
- (void)setManagedObjectContext:(id)arg1;
- (id)existingObjectWithID:(id)arg1 error:(id*)arg2;
- (unsigned int)concurrencyType;
- (void)cleanupForStoreDemoMode;
- (BOOL)hasAtLeastOnePhotoWithGPS;
- (struct NSObject { Class x1; }*)filesystemImportProgressAlbum;
- (struct NSObject { Class x1; }*)otaRestoreProgressAlbum;
- (struct NSObject { Class x1; }*)cameraSessionAlbumFromTimeInterval:(double)arg1;
- (id)albumListForContentMode:(int)arg1;
- (unsigned int)editableAlbumCount;
- (void)performBlock:(id)arg1 completionHandler:(id)arg2;
- (id)photoFromAssetURL:(id)arg1;
- (void)preheatImageDataForAssets:(id)arg1 format:(int)arg2;
- (struct NSObject { Class x1; }*)syncProgressAlbum;
- (id)dataForPhoto:(id)arg1 format:(int)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8;
- (BOOL)hasAtLeastOnePhoto;
- (BOOL)hasPhotoWithFileCreationDate:(id)arg1 fileName:(id)arg2 fileSize:(int)arg3;
- (id)masterFilenameFromSidecarFileInfo:(id)arg1;
- (void)setLastImportSessionUUID:(id)arg1;
- (id)globalValueForKey:(id)arg1;
- (struct NSObject { Class x1; }*)savedAndInFlightPhotosAlbum;
- (BOOL)multiplePhotoStreamsAvailable;
- (struct NSObject { Class x1; }*)eventAlbumContainingPhoto:(id)arg1;
- (BOOL)isPhotoInSavedPhotosAlbum:(id)arg1;
- (struct NSObject { Class x1; }*)savedPhotosAlbum;
- (id)albums;
- (id)assetURLForPhoto:(id)arg1;
- (void)performTransaction:(id)arg1;
- (BOOL)getPhotoCount:(unsigned int*)arg1 videoCount:(unsigned int*)arg2;
- (void)copyAssetToCameraRoll:(id)arg1 creationDate:(id)arg2 completionBlock:(id)arg3;
- (unsigned int)countOfAlbumsContainingItems:(id)arg1 includeInFlightAlbum:(BOOL)arg2;
- (void)performTransaction:(id)arg1 completionHandler:(id)arg2;
- (id)assetWithUUID:(id)arg1 inAlbum:(struct NSObject { Class x1; }*)arg2;

@end
