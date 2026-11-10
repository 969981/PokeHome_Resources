/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006804b4; name: FUN_.text__006804b4
 */


undefined8 FUN__text__006804b4(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN__text__00685de4(param_1,*(undefined4 *)(param_2 + 1),
                              *(undefined4 *)((long)param_2 + 0xc));
  if (iVar1 != 0) {
    uVar2 = FUN__text__0067ad9c(*param_2,*(undefined4 *)(param_1 + 0xb8),3);
    return uVar2;
  }
  if (((*(int *)(param_1 + 0xbc) < 1) || (iVar1 = FUN__text__00685dc8(param_1), iVar1 == 0)) ||
     (uVar2 = FUN__text__00685d7c(param_1,4), -0x385 < (int)uVar2)) {
    uVar2 = 0;
  }
  return uVar2;
}


