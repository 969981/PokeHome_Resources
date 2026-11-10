/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044c410; name: FUN_.text__0044c410
 */


byte FUN__text__0044c410(long param_1,long param_2)

{
  int iVar1;
  void *__dest;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  byte bVar12;
  ulong *__dest_00;
  long lVar13;
  long *plVar14;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  uVar3 = *(uint *)(param_1 + 0x28);
  if (uVar3 != 0) {
    puVar4 = *(ulong **)(param_1 + 0x20);
    puVar6 = puVar4 + (ulong)uVar3 * 3;
    __dest_00 = puVar4;
    do {
      while ((int)__dest_00[1] != 0) {
LAB__text__0044c450:
        __dest_00 = __dest_00 + 3;
        puVar6 = puVar4 + (ulong)uVar3 * 3;
        if (__dest_00 == puVar6) goto LAB__text__0044c5bc;
      }
      uVar5 = *__dest_00;
      uVar8 = *(uint *)(param_2 + 0x18);
      if (uVar8 != 0) {
        iVar9 = 0;
        do {
          iVar1 = iVar9 + (uVar8 >> 1);
          uVar11 = *(ulong *)(*(long *)(param_2 + 0x10) + (long)iVar1 * 8);
          if (uVar11 == uVar5) goto LAB__text__0044c450;
          if (uVar11 < uVar5) {
            iVar9 = iVar1 + 1;
          }
          uVar10 = uVar8 - (uVar11 < uVar5);
          uVar8 = uVar10 >> 1;
        } while (1 < uVar10);
      }
      if ((((uVar5 != 0xffffffffffffffff) && ((__dest_00 + -3 < puVar4 || (__dest_00[-3] != uVar5)))
           ) && ((puVar6 + -3 < __dest_00 + 3 || (__dest_00[3] != uVar5)))) &&
         (uVar8 = *(uint *)(param_1 + 0x48), uVar8 != 0)) {
        lVar7 = *(long *)(param_1 + 0x40);
        iVar9 = 0;
        uVar10 = uVar8;
        do {
          iVar1 = iVar9 + (uVar10 >> 1);
          uVar11 = *(ulong *)(lVar7 + (long)iVar1 * 8);
          if (uVar11 == uVar5) {
            uVar8 = uVar8 - 1;
            if ((long)iVar1 < (long)(ulong)uVar8) {
              __dest = (void *)(lVar7 + (long)iVar1 * 8);
              memmove(__dest,(void *)((long)__dest + 8),
                      (ulong)(((int)lVar7 + uVar8 * 8) - (int)__dest) & 0xfffffff8);
              uVar8 = *(int *)(param_1 + 0x48) - 1;
              puVar4 = *(ulong **)(param_1 + 0x20);
              uVar3 = *(uint *)(param_1 + 0x28);
            }
            *(uint *)(param_1 + 0x48) = uVar8;
            uVar3 = uVar3 - 1;
            puVar6 = puVar4 + (ulong)uVar3 * 3;
            goto joined_r0x0044c5b4;
          }
          if (uVar11 < uVar5) {
            iVar9 = iVar1 + 1;
          }
          uVar2 = uVar10 - (uVar11 < uVar5);
          uVar10 = uVar2 >> 1;
        } while (1 < uVar2);
      }
      uVar3 = uVar3 - 1;
      puVar6 = puVar4 + (ulong)uVar3 * 3;
joined_r0x0044c5b4:
      if (__dest_00 < puVar6) {
        memmove(__dest_00,__dest_00 + 3,(ulong)(uint)((int)puVar6 - (int)__dest_00));
        uVar3 = *(int *)(param_1 + 0x28) - 1;
        puVar4 = *(ulong **)(param_1 + 0x20);
      }
      *(uint *)(param_1 + 0x28) = uVar3;
      puVar6 = puVar4 + (ulong)uVar3 * 3;
    } while (__dest_00 != puVar6);
  }
LAB__text__0044c5bc:
  if (*(int *)(param_2 + 0x18) == 0) {
    bVar12 = 1;
  }
  else {
    plVar14 = *(long **)(param_2 + 0x10);
    bVar12 = 1;
    do {
      lVar13 = *plVar14;
      lVar7 = FUN__text__0044db10(param_1,lVar13,0,&uStack_52);
      if (lVar7 != 0 && lVar13 != -1) {
        if ((((long *)(lVar7 - 0x18U) < *(long **)(param_1 + 0x20)) ||
            (*(long *)(lVar7 - 0x18U) != lVar13)) &&
           ((*(long **)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x28) * 3 + -3 <
             (long *)(lVar7 + 0x18U) || (*(long *)(lVar7 + 0x18U) != lVar13)))) {
          FUN__text__0044b8a0(param_1 + 0x30,lVar13,&uStack_51);
        }
      }
      plVar14 = plVar14 + 1;
      bVar12 = lVar7 != 0 & bVar12;
    } while (plVar14 != (long *)(*(long *)(param_2 + 0x10) + (ulong)*(uint *)(param_2 + 0x18) * 8));
  }
  return bVar12;
}


