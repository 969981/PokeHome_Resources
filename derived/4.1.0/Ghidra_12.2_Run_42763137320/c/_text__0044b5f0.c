/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044b5f0; name: FUN_.text__0044b5f0
 */


undefined8 FUN__text__0044b5f0(long param_1,ulong param_2)

{
  int iVar1;
  void *__dest;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  
  uVar4 = *(uint *)(param_1 + 0x68);
  if (uVar4 == 0) {
    return 2;
  }
  lVar3 = *(long *)(param_1 + 0x60);
  iVar5 = 0;
  uVar6 = uVar4;
  do {
    iVar1 = iVar5 + (uVar6 >> 1);
    uVar7 = *(ulong *)(lVar3 + (long)iVar1 * 8);
    if (uVar7 == param_2) {
      uVar4 = uVar4 - 1;
      if ((long)iVar1 < (long)(ulong)uVar4) {
        __dest = (void *)(lVar3 + (long)iVar1 * 8);
        memmove(__dest,(void *)((long)__dest + 8),
                (ulong)(((int)lVar3 + uVar4 * 8) - (int)__dest) & 0xfffffff8);
        uVar4 = *(int *)(param_1 + 0x68) - 1;
      }
      *(uint *)(param_1 + 0x68) = uVar4;
      return 1;
    }
    if (uVar7 < param_2) {
      iVar5 = iVar1 + 1;
    }
    uVar2 = uVar6 - (uVar7 < param_2);
    uVar6 = uVar2 >> 1;
  } while (1 < uVar2);
  return 2;
}


