/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCMathRowExpression : SCRCMathArrayExpression

- (void)_addSpacingAndChild:(id)arg1 toResult:(id)arg2 nextChild:(id)arg3 previousChild:(id)arg4 numberOfOuterRadicals:(unsigned int)arg5 treePosition:(id)arg6;
- (id)_indexesOfCharactersInWords;
- (BOOL)beginsWithSpace;
- (BOOL)canBeUsedWithBase;
- (BOOL)canBeUsedWithRange;
- (id)childSpeakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned int)arg2 parentTreePosition:(id)arg3 childIndex:(unsigned int*)arg4;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned int)arg1 treePosition:(id)arg2;
- (BOOL)endsWithSpace;
- (unsigned int)fractionLevel;
- (int)integerValue;
- (BOOL)isFunctionName;
- (BOOL)isInteger;
- (BOOL)isNumber;
- (BOOL)isWordOrAbbreviation;
- (id)latexDescriptionInMathMode:(BOOL)arg1;
- (id)mathMLTag;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2;
- (id)speakableSummary;

@end
