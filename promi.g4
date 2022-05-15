grammar promi;

program:  (expression EOL | returnStatement EOL)* EOF;

returnStatement: 'return' expr=expression;

expression:	expression ('*'|'/') expression             #mulSubExpression
    |	left=expression op=('+'|'-') right=expression   #addDivExpression
    |	INT                                             #primitiveExpression
    |	'(' expression ')'                              #parenEnclosedExpression
    ;

EOL : ';' ;
INT : [0-9]+ ;
WHITESPACE : [ \t\r\n] ->skip ;