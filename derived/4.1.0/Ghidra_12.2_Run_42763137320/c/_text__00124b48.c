/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00124b48; name: FUN_.text__00124b48
 */


undefined8 FUN__text__00124b48(long *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  iVar1 = (int)param_1[0xb8];
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0xb8) = 3;
    return 1;
  }
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0xb8) = 1;
    (**(code **)(*param_1 + 0x98))(param_1);
  }
  if (param_1[0x13] == 0) {
    uVar2 = 1;
    lVar4 = param_1[0x17];
  }
  else {
    uVar2 = FUN__text__00127390();
    lVar4 = param_1[0x17];
  }
  if (lVar4 != 0) {
    uVar3 = FUN__text__001155b0();
    uVar2 = uVar2 & uVar3;
  }
  if (((uVar2 & 1) == 0) ||
     (((param_1[0xb9] != 0 && (uVar5 = FUN__text__00127d20(), (uVar5 & 1) == 0)) ||
      (uVar5 = (**(code **)(*param_1 + 0xa0))(param_1), (uVar5 & 1) == 0)))) {
    return 0;
  }
  if (param_1[0xb9] != 0) {
    FUN__text__00127d70();
  }
  (**(code **)(*param_1 + 0xa8))(param_1);
  *(undefined4 *)(param_1 + 0xb8) = 2;
  return 0;
}


