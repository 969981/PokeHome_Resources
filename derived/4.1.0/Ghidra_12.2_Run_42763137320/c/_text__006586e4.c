/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006586e4; name: FUN_.text__006586e4
 */


void FUN__text__006586e4(char *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0;
  lVar3 = 0;
  do {
    cVar1 = param_1[lVar3];
    if ((cVar1 == '\"') || (cVar1 == '\\')) {
      lVar2 = lVar2 + 1;
    }
    else if (cVar1 == '\0') {
      lVar2 = FUN__text__006783d4(lVar2 + lVar3 + 1);
      if (lVar2 == 0) {
        return;
      }
      lVar3 = 0;
      do {
        cVar1 = *param_1;
        if ((cVar1 == '\"') || (cVar1 == '\\')) {
          *(undefined1 *)(lVar2 + lVar3) = 0x5c;
          lVar3 = lVar3 + 1;
          cVar1 = *param_1;
        }
        else if (cVar1 == '\0') {
          *(undefined1 *)(lVar2 + lVar3) = 0;
          return;
        }
        *(char *)(lVar2 + lVar3) = cVar1;
        lVar3 = lVar3 + 1;
        param_1 = param_1 + 1;
      } while( true );
    }
    lVar3 = lVar3 + 1;
  } while( true );
}


