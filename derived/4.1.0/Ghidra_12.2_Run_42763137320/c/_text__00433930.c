/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00433930; name: FUN_.text__00433930
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00433930(long param_1,ulong param_2)

{
  int iVar1;
  void *__dest;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar3 = *(uint *)(param_1 + 0x40);
  if (uVar3 == 0) {
    return;
  }
  iVar5 = 0;
  uVar8 = param_2 & 0xffffffffff;
  do {
    iVar1 = iVar5 + (uVar3 >> 1);
    uVar7 = *(ulong *)(*(long *)(param_1 + 0x38) + (long)iVar1 * 8) & 0xffffffffff;
    if (uVar7 == uVar8) {
      FUN__text__00434930(*_DAT_008a45f0,param_2,param_1);
      uVar3 = *(uint *)(param_1 + 0x40);
      if (uVar3 == 0) {
        return;
      }
      lVar4 = *(long *)(param_1 + 0x38);
      iVar5 = 0;
      uVar6 = uVar3;
      do {
        iVar1 = iVar5 + (uVar6 >> 1);
        uVar7 = *(ulong *)(lVar4 + (long)iVar1 * 8) & 0xffffffffff;
        if (uVar7 == uVar8) {
          uVar3 = uVar3 - 1;
          if ((long)iVar1 < (long)(ulong)uVar3) {
            __dest = (void *)(lVar4 + (long)iVar1 * 8);
            memmove(__dest,(void *)((long)__dest + 8),
                    (ulong)(((int)lVar4 + uVar3 * 8) - (int)__dest) & 0xfffffff8);
            uVar3 = *(int *)(param_1 + 0x40) - 1;
          }
          *(uint *)(param_1 + 0x40) = uVar3;
          return;
        }
        if (uVar7 < uVar8) {
          iVar5 = iVar1 + 1;
        }
        uVar2 = uVar6 - (uVar7 < uVar8);
        uVar6 = uVar2 >> 1;
      } while (1 < uVar2);
      return;
    }
    if (uVar7 < uVar8) {
      iVar5 = iVar1 + 1;
    }
    uVar6 = uVar3 - (uVar7 < uVar8);
    uVar3 = uVar6 >> 1;
  } while (1 < uVar6);
  return;
}


