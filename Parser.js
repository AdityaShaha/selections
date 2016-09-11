//Importing File System Module from Node .
var fs= require('fs');

var readme = fs.readFileSync('index.html','utf-8');

var lines = readme.split('\n');

for(var i in lines)
{
  lines[i].replace('/r','/');
}

//console.log(lines);
var subline = new Array();

var Print = new Array();

for( var i in lines)
{
  if(lines[i].match(/<[a-zA-z]*\sclass="[a-zA-z]*\s*[a-zA-z]*">\s+[a-zA-z\s]+[!.]*\s+<[/a-zA-z]*>\r/g))
    {
       subline = lines[i].match(/>\s+[a-zA-z\s]+[!.]*\s+</g);
       //console.log(subline);

       for(var j in subline)
       {
         if(subline[j].match(/[a-z\sA-z]+[!.]*/g) && subline[j].match(/[a-z\sA-z]+[!.]*/g)!=' ')
          Print.push(subline[j].match(/[a-z\sA-z]+[!.]*/g));
       }
    }
}

var FinalPrint = new Array();
// Removing Empty Strings from Array
for(var i in Print)
{
  for(var j in Print[i])
  {
    if(Print[i][j] != ' ')
    {
      FinalPrint.push(Print[i][j]);
    }
  }
}

for(var i in FinalPrint)
{
    console.log(FinalPrint[i]);
}
