/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00659ca8; name: FUN_.text__00659ca8
 */


long FUN__text__00659ca8(undefined1 *param_1,undefined8 *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  iVar2 = FUN__text__00656830(*param_1);
  if (iVar2 != 0) {
    iVar2 = 0;
    pcVar1 = param_1 + 1;
    do {
      pcVar4 = pcVar1;
      iVar2 = (uint)(byte)pcVar4[-1] + iVar2 * 10 + -0x30;
      iVar3 = FUN__text__00656830(*pcVar4);
      pcVar1 = pcVar4 + 1;
    } while (iVar3 != 0);
    if ((iVar2 != 0) && (*pcVar4 == '$')) {
      *param_2 = pcVar4 + 1;
      return (long)iVar2;
    }
  }
  return 0;
}


