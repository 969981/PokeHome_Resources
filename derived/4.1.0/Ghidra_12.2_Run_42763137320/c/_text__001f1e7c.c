/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001f1e7c; name: FUN_.text__001f1e7c
 */


undefined8 FUN__text__001f1e7c(long param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 0x270) == 0) {
    uVar1 = FUN__text__00132134(*(undefined8 *)(param_1 + 200));
    uVar4 = 1;
    if ((uVar1 & 1) != 0) {
      lVar2 = FUN__text__00321ac0();
      *(undefined1 *)(lVar2 + 0x9a36) = 1;
      FUN__text__00321dc0();
      *(undefined4 *)(param_1 + 0x270) = 1;
      return 1;
    }
  }
  else {
    iVar3 = 0x1e;
    if (*(int *)(param_1 + 0x274) < 0x1e) {
      iVar3 = *(int *)(param_1 + 0x274) + 1;
    }
    *(int *)(param_1 + 0x274) = iVar3;
    uVar1 = FUN__text__003221c0();
    uVar4 = 1;
    if (((uVar1 & 1) != 0) && (0x1d < *(int *)(param_1 + 0x274))) {
      lVar2 = FUN__text__00321ac0();
      uVar4 = 0;
      *(undefined1 *)(lVar2 + 0x9a36) = 0;
    }
  }
  return uVar4;
}


