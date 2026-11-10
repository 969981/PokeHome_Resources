/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004394b0; name: FUN_.text__004394b0
 */


byte FUN__text__004394b0(long param_1,long *param_2,ulong *param_3)

{
  uint uVar1;
  void *__dest;
  char cVar2;
  ushort uVar3;
  byte bVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  
  uVar5 = *param_3;
  if (((((uVar5 != 0 || (int)param_3[1] != 0) || ((int)param_3[2] != 0)) || ((char)param_3[3] != -1)
       ) || (((char)param_3[4] != -1 || (param_3[5] != 0)))) &&
     (uVar6 = *(uint *)(param_1 + 0x10), uVar6 != 0)) {
    iVar7 = 0;
    do {
      uVar8 = iVar7 + (uVar6 >> 1);
      uVar9 = *(ulong *)(*(long *)(param_1 + 8) +
                        (-(ulong)(uVar8 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar8 << 5));
      if (uVar9 == uVar5) {
        lVar11 = *(long *)(param_1 + 8) + (long)(int)uVar8 * 0x20;
        bVar4 = FUN__text__004396d0(lVar11,param_2);
        if (*(char *)(lVar11 + 10) == '\0' && *(int *)(lVar11 + 0x18) == 0) {
          FUN__text__00438520(lVar11);
          uVar6 = *(uint *)(param_1 + 0x10);
          if (uVar6 != 0) {
            uVar5 = *param_3;
            iVar7 = 0;
            lVar11 = *(long *)(param_1 + 8);
            uVar8 = uVar6;
            do {
              uVar1 = iVar7 + (uVar8 >> 1);
              uVar9 = *(ulong *)(lVar11 + (-(ulong)(uVar1 >> 0x1f) & 0xffffffe000000000 |
                                          (ulong)uVar1 << 5));
              if (uVar9 == uVar5) {
                uVar6 = uVar6 - 1;
                if ((long)(int)uVar1 < (long)(ulong)uVar6) {
                  __dest = (void *)(lVar11 + (long)(int)uVar1 * 0x20);
                  memmove(__dest,(void *)((long)__dest + 0x20),
                          (ulong)(((int)lVar11 + uVar6 * 0x20) - (int)__dest) & 0xffffffe0);
                  uVar6 = *(int *)(param_1 + 0x10) - 1;
                }
                *(uint *)(param_1 + 0x10) = uVar6;
                return bVar4 & 1;
              }
              if (uVar9 < uVar5) {
                iVar7 = uVar1 + 1;
              }
              uVar1 = uVar8 - (uVar9 < uVar5);
              uVar8 = uVar1 >> 1;
            } while (1 < uVar1);
          }
        }
        goto LAB__text__004395c8;
      }
      if (uVar9 < uVar5) {
        iVar7 = uVar8 + 1;
      }
      uVar8 = uVar6 - (uVar9 < uVar5);
      uVar6 = uVar8 >> 1;
    } while (1 < uVar8);
  }
  if (*(char *)(param_1 + 4) == '\0') {
    return 0;
  }
  uVar3 = *(ushort *)(param_1 + 2);
  lVar11 = *param_2;
  plVar12 = (long *)(lVar11 + (ulong)uVar3 * 0x28);
  lVar10 = *plVar12;
  if (lVar10 != 0) {
    FUN__text__004360b8(lVar10);
    FUN__text__00400fc0(0x10,lVar10);
    *plVar12 = 0;
  }
  lVar11 = lVar11 + (ulong)uVar3 * 0x28;
  *(undefined4 *)(lVar11 + 0x10) = 0;
  *(byte *)(lVar11 + 0x18) = *(byte *)(lVar11 + 0x18) & 0xfe | 3 < *(byte *)(lVar11 + 0x18);
  *(short *)(lVar11 + 0x20) = (short)param_2[2];
  *(ushort *)(param_2 + 2) = uVar3;
  cVar2 = *(char *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = 0;
  bVar4 = cVar2 != '\0';
LAB__text__004395c8:
  return bVar4 & 1;
}


