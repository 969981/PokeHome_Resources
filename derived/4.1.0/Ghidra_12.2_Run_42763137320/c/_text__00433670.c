/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00433670; name: FUN_.text__00433670
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00433670(long param_1,ulong param_2)

{
  int iVar1;
  void *__dest;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  char local_14 [4];
  
  local_14[0] = '\0';
  lVar4 = FUN__text__00433760((long *)(param_1 + 0x38),param_2,local_14);
  if ((((lVar4 != 0) && (local_14[0] == '\0')) &&
      (iVar3 = FUN__text__004345d0(*_DAT_008a45f0,param_2,param_1), iVar3 != 1)) &&
     (uVar5 = *(uint *)(param_1 + 0x40), uVar5 != 0)) {
    lVar4 = *(long *)(param_1 + 0x38);
    iVar3 = 0;
    param_2 = param_2 & 0xffffffffff;
    uVar6 = uVar5;
    do {
      iVar1 = iVar3 + (uVar6 >> 1);
      uVar7 = *(ulong *)(lVar4 + (long)iVar1 * 8) & 0xffffffffff;
      if (uVar7 == param_2) {
        uVar5 = uVar5 - 1;
        if ((long)iVar1 < (long)(ulong)uVar5) {
          __dest = (void *)(lVar4 + (long)iVar1 * 8);
          memmove(__dest,(void *)((long)__dest + 8),
                  (ulong)(((int)lVar4 + uVar5 * 8) - (int)__dest) & 0xfffffff8);
          uVar5 = *(int *)(param_1 + 0x40) - 1;
        }
        *(uint *)(param_1 + 0x40) = uVar5;
        return;
      }
      if (uVar7 < param_2) {
        iVar3 = iVar1 + 1;
      }
      uVar2 = uVar6 - (uVar7 < param_2);
      uVar6 = uVar2 >> 1;
    } while (1 < uVar2);
  }
  return;
}


