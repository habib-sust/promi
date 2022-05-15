grammar promi;

program:  (statement)* EOF;

statement: expression EOL
            | returnStatement EOL
            | ifStatement
            ;
returnStatement: 'return' expr=expression;

ifStatement: ifBlock;
ifBlock: 'if' '(' cond=expression ')' blk=block;
block: '{' (statement) '}';

expression:	left=expression op=('*'|'/') right=expression           #mulSubExpression
    |	left=expression op=('+'|'-') right=expression               #addDivExpression
    |	left=expression op=(EQ|NE|LT|LTQ|GT|GTQ) right=expression   #comparisonExpression
    |	INT                                                         #primitiveExpression
    |	'(' expr=expression ')'                                     #parenEnclosedExpression
    ;

EQ : '==';
NE : '!=';
LT : '<';
LTQ : '<=';
GT : '>';
GTQ : '>=';

EOL : ';' ;
INT : [0-9]+ ;
WHITESPACE : [ \t\r\n] ->skip ;