grammar promi;

program:  (expression EOL)* ;

expression:	expression ('*'|'/') expression
    |	expression ('+'|'-') expression
    |	INT
    |	'(' expression ')'
    ;

EOL : ';' ;
INT : [0-9]+ ;
WHITESPACE : [ \t\r\n] ->skip ;