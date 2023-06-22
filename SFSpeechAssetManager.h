/* Generated by RuntimeBrowser
   Platform: iOS 15.7.3 (19H307) arm64
   Image: /System/Library/Frameworks/Speech.framework/Speech (1)
 */

@interface SFSpeechAssetManager : NSObject

+ (id)_assetQueryForLanguage:(id)arg1;
+ (id)assetPathForLanguage:(id)arg1;
+ (id)configParametersForVoicemailWithLanguage:(id)arg1;
+ (void)fetchAssetsForLanguage:(id)arg1 progress:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)fetchAssetsForLanguage:(id)arg1 urgent:(bool)arg2 forceUpgrade:(bool)arg3 detailedProgress:(id /* block */)arg4 completion:(id /* block */)arg5;
+ (void)fetchAssetsForLanguage:(id)arg1 urgent:(bool)arg2 forceUpgrade:(bool)arg3 progress:(id /* block */)arg4 completion:(id /* block */)arg5;
+ (void)fetchAssetsForLanguage:(id)arg1 urgent:(bool)arg2 progress:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (id)fetchMAAssetPathForInstalledLanguage:(id)arg1;
+ (id)installedLanguages;
+ (void)installedLanguagesWithCompletion:(id /* block */)arg1;
+ (void)promoteAssets;
+ (void)purgeAssetsForLanguage:(id)arg1 error:(id*)arg2;
+ (void)setAssetsAsProvisional;

@end
