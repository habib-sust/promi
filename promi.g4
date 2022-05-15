grammar promi;

program:  (expression EOL)* EOF;

expression:	expression ('*'|'/') expression  #mulSubExpression
    |	left=expression op=('+'|'-') right=expression      #addDivExpression
    |	INT                                  #primitiveExpression
    |	'(' expression ')'                   #parenEnclosedExpression
    ;

EOL : ';' ;
INT : [0-9]+ ;
WHITESPACE : [ \t\r\n] ->skip ;