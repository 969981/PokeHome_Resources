/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0049ccc8; name: FUN_.text__0049ccc8
 */


undefined8 FUN__text__0049ccc8(long *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x80))();
  uVar2 = 0x20000;
  if (iVar1 != 10 && iVar1 != 0) {
    uVar2 = 0;
  }
  *(uint *)((long)param_1 + 0xd2) = uVar2 | *(uint *)((long)param_1 + 0xd2) & 0xfffdffff;
  return 1;
}


