/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableArray;

@interface NSSQLPredicateAnalyser : NSObject <NSPredicateVisitor> {
    BOOL _compoundPredicate;
    NSMutableArray *_keys;
    NSMutableArray *_allModifierPredicates;
    NSMutableArray *_setExpressions;
    NSMutableArray *_subqueries;
}


- (id)keypaths;
- (id)subqueries;
- (id)setExpressions;
- (void)visitPredicateOperator:(id)arg1;
- (id)allModifierPredicates;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (id)init;
- (void)dealloc;

@end