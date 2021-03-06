/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSMutableArray, NSDictionary;



@interface ASArray : ASItem <ASParsingWithSubItems, ASParsingFrontingBasicType>
{
    NSMutableArray *_items;
    NSDictionary *_subclassRuleSet;
}

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;

- (id)initWithSubclassRuleSet:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)asParseRules;
- (void)addItem:(id)arg1;
- (id)commonValue;

@end
