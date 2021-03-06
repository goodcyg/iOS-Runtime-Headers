/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

@interface PLAccountingQualificationRuleManager : PLAccountingRuleManager {
    NSMutableDictionary *_qualificationIDToQualificationRules;
    NSRegularExpression *_regex;
    NSMutableDictionary *_rootNodeIDToQualificationRules;
}

@property (nonatomic, retain) NSMutableDictionary *qualificationIDToQualificationRules;
@property (nonatomic, retain) NSMutableDictionary *rootNodeIDToQualificationRules;

+ (id)rulesEntryKey;
+ (id)rulesPath;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)indexRule:(id)arg1;
- (id)qualificationIDToQualificationRules;
- (id)qualificationRulesForQualificationID:(id)arg1;
- (id)qualificationRulesForRootNodeID:(id)arg1;
- (id)regex;
- (id)rootNodeIDToQualificationRules;
- (id)ruleWithString:(id)arg1 withEntryDate:(id)arg2;
- (void)setQualificationIDToQualificationRules:(id)arg1;
- (void)setRegex:(id)arg1;
- (void)setRootNodeIDToQualificationRules:(id)arg1;

@end
