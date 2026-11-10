/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00585d90; name: FUN_.text__00585d90
 */


undefined8 FUN__text__00585d90(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  void *__s;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  *(uint *)(param_1 + 0x10) = param_2;
  lVar2 = FUN__text__00400f90(5,-(ulong)(param_2 >> 0x1f) & 0xfffffff000000000 | (ulong)param_2 << 4
                              ,0x10);
  *(long *)(param_1 + 0x20) = lVar2;
  if (lVar2 != 0) {
    *(long *)(param_1 + 0x28) = lVar2 + (long)(int)param_2 * 8;
    FUN__text__00587340();
    **(undefined8 **)(param_1 + 0x20) = 0;
    **(undefined8 **)(param_1 + 0x28) = 0;
    uVar3 = (long)*(int *)(param_1 + 0x10) *
            (long)(int)(*(uint *)(*(long *)(param_1 + 0x18) + 4) & 0xfffffffc) + 0xf;
    uVar6 = uVar3 & 0xfffffffffffffff0;
    __s = (void *)FUN__text__00400f90(5,uVar6,0x10);
    **(undefined8 **)(param_1 + 0x28) = __s;
    if (__s != (void *)0x0) {
      memset(__s,0,uVar3 & 0xfffffff0);
      *(undefined1 *)(param_1 + 0x48) = 1;
      if (0 < (int)param_2) {
        iVar1 = 0;
        if (param_2 != 0) {
          iVar1 = (int)uVar6 / (int)param_2;
        }
        uVar3 = (ulong)param_2 & 3;
        lVar2 = (long)iVar1;
        if (param_2 < 4) {
          uVar6 = 0;
        }
        else {
          uVar6 = 0;
          do {
            lVar5 = uVar6 * 8;
            uVar6 = uVar6 + 4;
            *(void **)(*(long *)(param_1 + 0x28) + lVar5) = __s;
            *(long *)(*(long *)(param_1 + 0x28) + lVar5 + 8) = (long)__s + lVar2;
            lVar4 = (long)__s + lVar2 + lVar2;
            *(long *)(*(long *)(param_1 + 0x28) + lVar5 + 0x10) = lVar4;
            lVar4 = lVar4 + lVar2;
            __s = (void *)(lVar4 + lVar2);
            *(long *)(*(long *)(param_1 + 0x28) + lVar5 + 0x18) = lVar4;
          } while (((ulong)param_2 & 0xfffffffc) != uVar6);
        }
        if ((param_2 & 3) != 0) {
          lVar4 = uVar6 << 3;
          do {
            uVar3 = uVar3 - 1;
            *(void **)(*(long *)(param_1 + 0x28) + lVar4) = __s;
            __s = (void *)((long)__s + lVar2);
            lVar4 = lVar4 + 8;
          } while (uVar3 != 0);
        }
      }
      *(undefined8 *)(param_1 + 0x38) = 0;
      return 0;
    }
  }
  return 0xffffffff;
}


