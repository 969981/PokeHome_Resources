/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063321c; name: FUN_.text__0063321c
 */


void FUN__text__0063321c(long param_1)

{
  int iVar1;
  
  iVar1 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),0,*(undefined1 *)(param_1 + 0x54));
  if (iVar1 == 0) {
    FUN__text__00633624(param_1,0,1);
    FUN__text__00633624(param_1,1,2);
    FUN__text__00633624(param_1,2,3);
    iVar1 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),1,*(undefined1 *)(param_1 + 0x54));
  }
  else {
    iVar1 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),1,*(undefined1 *)(param_1 + 0x54));
  }
  if (iVar1 == 0) {
    FUN__text__00633624(param_1,1,2);
    FUN__text__00633624(param_1,2,3);
    iVar1 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),2,*(undefined1 *)(param_1 + 0x54));
  }
  else {
    iVar1 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),2,*(undefined1 *)(param_1 + 0x54));
  }
  if (iVar1 == 0) {
    FUN__text__00633624(param_1,2,3);
    return;
  }
  return;
}


