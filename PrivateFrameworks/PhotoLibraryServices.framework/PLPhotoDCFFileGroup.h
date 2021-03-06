/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSMutableSet, NSString, PLPhotoDCFDirectory, NSDate;

@interface PLPhotoDCFFileGroup : PLPhotoDCFObject  {
    id _delegate;
    PLPhotoDCFDirectory *_directory;
    NSString *_directoryPath;
    NSString *_prebakedThumbnailPath;
    NSString *_videoFileExtension;
    NSMutableSet *_extensions;
    NSDate *_date;
    NSString *_preferredExtension;
    unsigned int _hash;
    unsigned int _hashComputed : 1;
    unsigned int _addedExtensions : 1;
    unsigned int _writeIsPending : 1;
}

+ (id)allMetadataFileExtensions;
+ (struct CGImage { }*)createThumbnailOfImage:(struct CGImage { }*)arg1 format:(int)arg2 fullPath:(id)arg3 orientation:(int)arg4 outThumbnailData:(id*)arg5;

- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (void)dealloc;
- (void)createWildcatThumbnailsFromImage:(struct CGImage { }*)arg1 orientation:(int)arg2 options:(id)arg3 delegate:(id)arg4;
- (BOOL)isWritePending;
- (BOOL)hasPrebakedWildcatThumbnails;
- (BOOL)hasPrebakedPortraitScrubberThumbnails;
- (BOOL)hasPrebakedLandscapeScrubberThumbnails;
- (BOOL)hasPrebakedThumbnail;
- (BOOL)hasThumbnail;
- (id)pathForThumbnailFile;
- (void)createMetadataDirectoryIfNecessary;
- (id)pathForMetadataWithGroupName;
- (id)pathForContainingDirectory;
- (id)extensions;
- (void)forceAddExtensionsFromMetadataDirectory;
- (BOOL)isValidImage;
- (BOOL)hasObsoleteFiles;
- (void)deleteObsoleteFiles;
- (id)imageSourceTypeHint;
- (id)videoPreviewFilename;
- (id)lowResolutionFilename;
- (id)prebakedWildcatThumbnailsFilename;
- (id)prebakedPortraitScrubberThumbnailsFilename;
- (id)prebakedLandscapeScrubberThumbnailsFilename;
- (id)thumbnailFilename;
- (void)addExtensionsFromMetadataDirectory;
- (id)pathForFullSizeImage;
- (BOOL)hasVideoFile;
- (id)pathForGroupWithoutExtension;
- (id)prebakedThumbnailFilename;
- (id)pathForMetadata;
- (void)setWriteIsPending:(BOOL)arg1;
- (void)deleteFiles;
- (id)initWithName:(id)arg1 number:(int)arg2 directory:(id)arg3;
- (id)pathForLowResolutionFile;
- (id)pathForPrebakedWildcatThumbnailsFile;
- (id)directory;
- (id)pathForPrebakedThumbnail;
- (int)compare:(id)arg1;
- (BOOL)isValid;
- (void)setDate:(id)arg1;
- (id)date;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)pathForTrimmedVideoFile;
- (id)pathForPrebakedPortraitScrubberThumbnails;
- (id)pathForPrebakedLandscapeScrubberThumbnails;
- (id)pathForVideoPreviewFile;
- (void)addExtension:(id)arg1;
- (id)pathForVideoFile;

@end
