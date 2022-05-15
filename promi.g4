grammar promi;

program:  (expression EOL)* ;

expression:	expression ('*'|'/') expression  #mulSubExpression
    |	expression ('+'|'-') expression      #addDivExpression
    |	INT                                  #primitiveExpression
    |	'(' expression ')'                   #parenEnclosedExpression
    ;

EOL : ';' ;
INT : [0-9]+ ;
WHITESPACE : [ \t\r\n] ->skip ;