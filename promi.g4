grammar promi;

program:  (expression EOL | returnStatement EOL)* EOF;

returnStatement: 'return' expr=expression;

expression:	left=expression op=('*'|'/') right=expression   #mulSubExpression
    |	left=expression op=('+'|'-') right=expression       #addDivExpression
    |	INT                                                 #primitiveExpression
    |	'(' expr=expression ')'                             #parenEnclosedExpression
    ;

EOL : ';' ;
INT : [0-9]+ ;
WHITESPACE : [ \t\r\n] ->skip ;