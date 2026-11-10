/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b8dd0; name: FUN_.text__003b8dd0
 */


void FUN__text__003b8dd0(undefined8 *param_1,undefined4 param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)*param_1;
  lVar3 = ((long *)*param_1)[1];
  if ((lVar2 == lVar3) || (*(char *)(lVar2 + 8) != '\0')) {
    lVar4 = 0;
    if (lVar2 != lVar3) {
      lVar4 = lVar2;
    }
    *(undefined4 *)(lVar4 + 0xc) = param_2;
    *(undefined1 *)(lVar4 + 8) = 0;
    return;
  }
  do {
    lVar4 = lVar2 + 0x18;
    pcVar1 = (char *)(lVar2 + 0x20);
    lVar2 = lVar4;
  } while (*pcVar1 == '\0');
  lVar2 = 0;
  if (lVar4 != lVar3) {
    lVar2 = lVar4;
  }
  *(undefined4 *)(lVar2 + 0xc) = param_2;
  *(undefined1 *)(lVar2 + 8) = 0;
  return;
}


