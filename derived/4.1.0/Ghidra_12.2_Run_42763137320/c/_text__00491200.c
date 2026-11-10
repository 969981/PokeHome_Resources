/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00491200; name: FUN_.text__00491200
 */


void FUN__text__00491200(long param_1,uint param_2)

{
  int iVar1;
  void *__dest;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar4 = *(uint *)(param_1 + 0x38);
  if (uVar4 != 0) {
    lVar3 = *(long *)(param_1 + 0x30);
    iVar5 = 0;
    uVar6 = uVar4;
    do {
      iVar1 = iVar5 + (uVar6 >> 1);
      uVar2 = *(uint *)(lVar3 + (long)iVar1 * 4);
      if (uVar2 == param_2) {
        uVar4 = uVar4 - 1;
        if ((long)iVar1 < (long)(ulong)uVar4) {
          __dest = (void *)(lVar3 + (long)iVar1 * 4);
          memmove(__dest,(void *)((long)__dest + 4),
                  (ulong)(((int)lVar3 + uVar4 * 4) - (int)__dest) & 0xfffffffc);
          uVar4 = *(int *)(param_1 + 0x38) - 1;
        }
        *(uint *)(param_1 + 0x38) = uVar4;
        return;
      }
      if (uVar2 < param_2) {
        iVar5 = iVar1 + 1;
      }
      uVar2 = uVar6 - (uVar2 < param_2);
      uVar6 = uVar2 >> 1;
    } while (1 < uVar2);
  }
  return;
}


