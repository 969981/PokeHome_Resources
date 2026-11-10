/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047ce10; name: FUN_.text__0047ce10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN__text__0047ce10(int *param_1,undefined8 param_2,undefined4 param_3,uint param_4,byte param_5,
                   uint *param_6)

{
  char *pcVar1;
  ushort uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  
  if (*param_1 != 0) {
    return 2;
  }
  *(undefined8 *)(param_1 + 2) = param_2;
  *(short *)((long)param_1 + 0x22) = (short)param_3;
  param_1[10] = param_4;
  *(byte *)((long)param_1 + 0x2d) = param_5 & 1;
  lVar9 = *(long *)(param_6 + 2);
  if (lVar9 != 0) {
    plVar8 = *(long **)(param_1 + 4);
    if (plVar8 != (long *)0x0) {
      if (*(ushort *)(plVar8 + 2) - 1 == 0) {
        if (*plVar8 != 0) {
          *(undefined4 *)(plVar8 + 1) = 0;
          FUN__text__00400fc0(0);
          *plVar8 = 0;
          *(undefined4 *)((long)plVar8 + 0xc) = 0;
        }
        FUN__text__00400fc0(0,plVar8);
      }
      else {
        *(short *)(plVar8 + 2) = (short)(*(ushort *)(plVar8 + 2) - 1);
      }
    }
    *(long *)(param_1 + 4) = lVar9;
    *(short *)(lVar9 + 0x10) = *(short *)(lVar9 + 0x10) + 1;
    uVar5 = *param_6;
    *(short *)(param_1 + 8) = (short)uVar5;
    *(ulong *)(param_1 + 6) = *(long *)(param_1 + 2) + (ulong)(uVar5 & 0xffff) * 0x18;
    return 1;
  }
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 6) = param_2;
  lVar9 = FUN__text__0047d070(param_3);
  plVar8 = *(long **)(param_1 + 4);
  if (plVar8 != (long *)0x0) {
    if (*(ushort *)(plVar8 + 2) - 1 != 0) {
      *(short *)(plVar8 + 2) = (short)(*(ushort *)(plVar8 + 2) - 1);
      *(long *)(param_1 + 4) = lVar9;
      goto joined_r0x0047ceec;
    }
    if (*plVar8 != 0) {
      *(undefined4 *)(plVar8 + 1) = 0;
      FUN__text__00400fc0(0);
      *plVar8 = 0;
      *(undefined4 *)((long)plVar8 + 0xc) = 0;
    }
    FUN__text__00400fc0(0,plVar8);
  }
  *(long *)(param_1 + 4) = lVar9;
joined_r0x0047ceec:
  if (lVar9 != 0) {
    *(short *)(lVar9 + 0x10) = *(short *)(lVar9 + 0x10) + 1;
    plVar8 = *(long **)(param_1 + 4);
    if (plVar8 != (long *)0x0) {
      if ((param_4 & 1) == 0) {
        return 1;
      }
      lVar9 = *_DAT_008a45e8 * 0x5851f42d4c957f2d + 1;
      *_DAT_008a45e8 = lVar9;
      uVar2 = *(ushort *)((long)param_1 + 0x22);
      uVar3 = 0;
      uVar5 = (uint)((ulong)lVar9 >> 0x21);
      if (uVar2 != 0) {
        uVar3 = uVar5 / uVar2;
      }
      uVar5 = uVar5 - uVar3 * uVar2;
      uVar6 = (ulong)uVar5;
      *(short *)(param_1 + 8) = (short)uVar5;
      if ((*(byte *)(param_1 + 10) >> 1 & 1) != 0) {
        *(ulong *)(param_1 + 6) = *(long *)(param_1 + 2) + (ulong)uVar5 * 0x18;
      }
      uVar5 = *(uint *)(plVar8 + 1);
      if (uVar5 != 0) {
        uVar7 = 0;
        bVar4 = true;
        do {
          while (bVar4) {
            pcVar1 = (char *)(*plVar8 + uVar7);
            uVar7 = uVar7 + 1;
            bVar4 = *pcVar1 != '\0';
            if (uVar7 == uVar5) {
              if (*pcVar1 != '\0') {
                uVar6 = 0;
                do {
                  *(undefined1 *)(*plVar8 + uVar6) = 0;
                  uVar6 = uVar6 + 1;
                } while (uVar6 < *(uint *)(plVar8 + 1));
                plVar8 = *(long **)(param_1 + 4);
                uVar6 = (ulong)*(ushort *)(param_1 + 8);
              }
              goto LAB__text__0047d044;
            }
          }
          uVar7 = uVar7 + 1;
          bVar4 = false;
        } while (uVar7 != uVar5);
      }
LAB__text__0047d044:
      *(undefined1 *)(*plVar8 + (uVar6 & 0xffff)) = 1;
      return 1;
    }
  }
  return 2;
}


