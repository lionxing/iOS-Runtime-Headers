/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSExpression : NSObject <NSCoding, NSCopying> {
    void *_reserved;
    unsigned int _expressionType;
}

+ (id)expressionForBlock:(id)arg1 arguments:(id)arg2;
+ (id)expressionForMinusSet:(id)arg1 with:(id)arg2;
+ (id)expressionForIntersectSet:(id)arg1 with:(id)arg2;
+ (id)expressionForUnionSet:(id)arg1 with:(id)arg2;
+ (id)expressionForTernaryWithPredicate:(id)arg1 trueExpression:(id)arg2 falseExpression:(id)arg3;
+ (id)expressionForVariableNameAssignment:(id)arg1 expression:(id)arg2;
+ (id)expressionForAggregate:(id)arg1;
+ (id)expressionForSymbolicString:(id)arg1;
+ (id)expressionWithFormat:(id)arg1;
+ (id)expressionWithFormat:(id)arg1 argumentArray:(id)arg2;
+ (id)expressionWithFormat:(id)arg1 arguments:(void*)arg2;
+ (id)expressionForSubquery:(id)arg1 usingIteratorVariable:(id)arg2 predicate:(id)arg3;
+ (id)expressionForVariable:(id)arg1;
+ (id)expressionForEvaluatedObject;
+ (id)expressionForConstantValue:(id)arg1;
+ (id)_newKeyPathExpressionForString:(id)arg1;
+ (id)expressionForKeyPath:(id)arg1;
+ (id)expressionForFunction:(id)arg1 selectorName:(id)arg2 arguments:(id)arg3;
+ (id)expressionForFunction:(id)arg1 arguments:(id)arg2;

- (BOOL)_shouldUseParensWithDescription;
- (id)expressionBlock;
- (id)subexpression;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)variable;
- (SEL)selector;
- (id)keyPath;
- (id)arguments;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)trueExpression;
- (id)falseExpression;
- (id)function;
- (id)initWithExpressionType:(unsigned int)arg1;
- (id)predicateFormat;
- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (void)acceptVisitor:(id)arg1 flags:(unsigned int)arg2;
- (id)rightExpression;
- (id)leftExpression;
- (unsigned int)expressionType;
- (id)constantValue;
- (id)operand;
- (id)collection;
- (id)predicate;
- (id)minimalFormInContext:(id)arg1;

@end
