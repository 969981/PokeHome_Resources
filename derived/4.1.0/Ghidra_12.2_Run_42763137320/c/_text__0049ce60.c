/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0049ce60; name: FUN_.text__0049ce60
 */


undefined8 FUN__text__0049ce60(long param_1,ulong param_2)

{
  void *pvVar1;
  uint uVar2;
  void *__dest;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  
  uVar4 = *(uint *)(param_1 + 0x110);
  if (uVar4 != 0) {
    iVar5 = 0;
    do {
      uVar2 = iVar5 + (uVar4 >> 1);
      uVar6 = *(ulong *)(*(long *)(param_1 + 0x108) +
                        (-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar2 << 4));
      if (uVar6 == param_2) {
        __dest = (void *)(*(long *)(param_1 + 0x108) + (long)(int)uVar2 * 0x10);
        iVar5 = *(int *)((long)__dest + 8);
        iVar3 = iVar5 + -1;
        if (iVar5 != 0 && iVar3 != 0) {
          *(int *)((long)__dest + 8) = iVar3;
          return 1;
        }
        FUN__text__0049dbf0(param_2);
        uVar4 = *(int *)(param_1 + 0x110) - 1;
        pvVar1 = (void *)(*(long *)(param_1 + 0x108) + (ulong)uVar4 * 0x10);
        if (__dest < pvVar1) {
          memmove(__dest,(void *)((long)__dest + 0x10),
                  (ulong)(uint)((int)pvVar1 - (int)__dest) & 0xfffffff0);
          uVar4 = *(int *)(param_1 + 0x110) - 1;
        }
        *(uint *)(param_1 + 0x110) = uVar4;
        return 1;
      }
      if (uVar6 < param_2) {
        iVar5 = uVar2 + 1;
      }
      uVar2 = uVar4 - (uVar6 < param_2);
      uVar4 = uVar2 >> 1;
    } while (1 < uVar2);
  }
  return 1;
}


