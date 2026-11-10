/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0049cd50; name: FUN_.text__0049cd50
 */


void FUN__text__0049cd50(long *param_1,ulong param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *__dest;
  int iVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  
  uVar5 = *(uint *)(param_1 + 0x22);
  if (uVar5 != 0) {
    iVar6 = 0;
    do {
      uVar2 = iVar6 + (uVar5 >> 1);
      uVar7 = *(ulong *)(param_1[0x21] +
                        (-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar2 << 4));
      if (uVar7 == param_2) {
        __dest = (long *)(param_1[0x21] + (long)(int)uVar2 * 0x10);
        iVar6 = (int)__dest[1];
        iVar3 = iVar6 + -1;
        if (iVar6 != 0 && iVar3 != 0) {
          *(int *)(__dest + 1) = iVar3;
          return;
        }
        uVar7 = (**(code **)(*param_1 + 0x290))(param_1);
        if ((uVar7 & 1) == 0) {
          lVar8 = *__dest;
          if (lVar8 != 0) {
            FUN__text__0049dbd4(lVar8);
          }
          lVar4 = *param_3;
          *param_3 = lVar8;
          if (lVar4 != 0) {
            FUN__text__0049dbf0();
          }
        }
        FUN__text__0049dbf0(*__dest);
        uVar5 = (int)param_1[0x22] - 1;
        plVar1 = (long *)(param_1[0x21] + (ulong)uVar5 * 0x10);
        if (__dest < plVar1) {
          memmove(__dest,__dest + 2,(ulong)(uint)((int)plVar1 - (int)__dest) & 0xfffffff0);
          uVar5 = (int)param_1[0x22] - 1;
        }
        *(uint *)(param_1 + 0x22) = uVar5;
        return;
      }
      if (uVar7 < param_2) {
        iVar6 = uVar2 + 1;
      }
      uVar2 = uVar5 - (uVar7 < param_2);
      uVar5 = uVar2 >> 1;
    } while (1 < uVar2);
  }
  return;
}


