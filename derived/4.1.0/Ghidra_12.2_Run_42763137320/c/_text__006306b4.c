/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006306b4; name: FUN_.text__006306b4
 */


void FUN__text__006306b4(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_40 [16];
  
  FUN__text__0060e784(auStack_40,param_1);
  lVar3 = FUN__text__0060e7e4(auStack_40);
  lVar4 = FUN__text__0060e7f8(auStack_40);
  iVar1 = *(int *)(lVar3 + 10);
  iVar2 = FUN__text__00630120(param_1);
  FUN__text__0063041c(param_1);
  if (iVar1 != iVar2) {
    *(undefined1 *)(lVar4 + 0xc) = 1;
  }
  FUN__text__0060e79c(auStack_40);
  return;
}


