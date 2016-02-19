debugger;
var str = 'some = "10"; smm = 10';

var varInit = ['var', 'const', 'let'];

var statemantDelimiters = [';', '\n',];

var GLOB = {};

function typeDefinition(val) {
    if(val[0] === '\'' || val[0] === '\"') return 'string';
}

function makeInitialization(str, carret) {
    // console.log('var init', str, carret);
    for(var i = carret; i < str.length; i++) {

    }
}
function makeAssignation(statement) {
    console.log(GLOB);
    var LOP = '';
    var ROP = '';
    var flag = true;
    for (var i = 0; i < statement.length; i++) {
      if(statement[i] != ' ') {
        if(statement[i] == '=') flag = false, i++;
        flag ? LOP += statement[i] : ROP += statement[i];
      }
    }

    typeDefinition(ROP);
    GLOB[LOP] = ROP;
    // console.log(GLOB);
}

function statementParse(str, statement, carret) {
  for(var i = 0; i < statement.length; i++) {
      // find opperator
      if(statement[i] == '=') {
          makeAssignation(statement);
          // console.log('this is assignation');
      }
  }

  // for(var i = 0; i < varInit.length; i++) {
  //     if(varInit[i] == statement) {
  //       // makeInitialization(str, carret);
  //       // console.log('this is initialization');
  //     }
  // }
}

function stringParse(str) {
    var statement = '';
    for(var i = 0; i < str.length; i++) {
      if(str[i] == ';' || str[i] == '\n') {
          statementParse(str, statement, i);
          break;
      }
      statement += str[i];
    }
}

stringParse(str);
;some    =10; el=150; console.log(some);
