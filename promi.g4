grammar promi;

program:  (expression EOL | returnStatement EOL)* EOF;

returnStatement: 'return' expr=expression;

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