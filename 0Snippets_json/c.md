
copy all of these and paste in C snippts. 

{
	// Place your snippets for c here. Each snippet is defined under a snippet name and has a prefix, body and 
	// description. The prefix is what is used to trigger the snippet and the body will be expanded and inserted. Possible variables are:
	// $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. Placeholders with the 
	// same ids are connected.
	// Example:
	"c boilerplate": {
		"prefix": "c boiler",
		"body": [
			"#include<stdio.h>\n",
			"int main(){",
			"\t$1",
			"\treturn 0;",
			"}",
			
			
		],
		"description": "The C Language boilerplate"
	},

	"print":{
		"prefix": "pr",
		"body": [
			"printf($1);"
		],
		"description": "print method"

		},

	"variable":{
		"prefix": "var",
		"body": [
			"int a = 20;$1"
		]
	},

	"sum":{
		"prefix": "sum",
		"body": [
			"int sum = a + b;$1"
		]
	}
}