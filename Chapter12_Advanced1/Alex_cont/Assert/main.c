#include <assert.h>
#include <stdio.h>

/*Die Assert Funktion aus dem Header asser.h ist
speziell für entwicklungs Phasen da es ist eine Funktion die zur Ausführungszeit
Fehler wieder gibt.
Wenn zum Beispiel gewisse Parameter gegeben sein müssen ist der wert den der
Funktion Übergeben wird unwahr wie hier i == j wird zur Laufzeit ein Fehler zurückgegeben.

assertion "i == j" failed: file "d:\Programmieren\C_Learning\Chapter12_Advanced1\Alex_cont\Assert\main.c", line 12, function: main
      0 [main] outDebug 49 cygwin_exception::open_stackdumpfile: Dumping stack trace to outDebug.exe.stackdump

*/
#ifndef NDEBUG
#define DEBUG
#endif


int function( int val)
{
    return val * 2;
}

int main()
{

int i = 2;
int j = 2;

assert(i == j);

#ifdef DEBUG
assert(function(2) == 5);
#endif

    return 0;
}
