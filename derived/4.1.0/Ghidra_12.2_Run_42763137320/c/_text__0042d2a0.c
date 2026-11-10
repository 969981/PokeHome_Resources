/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042d2a0; name: FUN_.text__0042d2a0
 */


void FUN__text__0042d2a0(long *param_1,uint param_2,long param_3,uint param_4)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  char *pcVar9;
  long lVar10;
  char *pcVar11;
  
  uVar4 = (**(code **)(*param_1 + 0x78))();
  if ((uVar4 & 1) == 0) {
    return;
  }
  (**(code **)(*param_1 + 0x50))(param_1);
  plVar5 = (long *)(**(code **)(*param_1 + 0x38))(param_1);
  if (*(uint *)(plVar5 + 1) == param_2) {
    if (param_2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      pcVar11 = (char *)(param_3 + 4);
      pcVar9 = (char *)(*plVar5 + 2);
      while ((*(short *)(pcVar9 + -2) == *(short *)(pcVar11 + -4) && (*pcVar9 == *pcVar11))) {
        uVar4 = uVar4 + 1;
        pcVar9 = pcVar9 + 4;
        pcVar11 = pcVar11 + 8;
        if (param_2 == uVar4) {
          return;
        }
      }
    }
    if ((uint)uVar4 == param_2) {
      return;
    }
  }
  if (*plVar5 != 0) {
    *(undefined4 *)(plVar5 + 1) = 0;
    FUN__text__00400fc0(0);
    *plVar5 = 0;
    *(undefined4 *)((long)plVar5 + 0xc) = 0;
  }
  if (param_2 != 0) {
    uVar2 = *(uint *)(plVar5 + 1);
    if (uVar2 <= param_2) {
      iVar3 = param_2 - *(uint *)((long)plVar5 + 0xc);
      if ((*(uint *)((long)plVar5 + 0xc) <= param_2 && iVar3 != 0) &&
         (uVar4 = FUN__text__0042efb0(plVar5,iVar3), (uVar4 & 1) == 0)) goto LAB__text__0042d464;
      if ((uVar2 < param_2) && (lVar10 = *plVar5, lVar10 != 0)) {
        lVar6 = ~(ulong)uVar2 + (ulong)param_2;
        lVar7 = (ulong)uVar2 << 2;
        while( true ) {
          if (lVar10 != 0) {
            puVar1 = (undefined2 *)(lVar10 + lVar7);
            *puVar1 = 0xffff;
            *(undefined1 *)(puVar1 + 1) = 2;
            *(byte *)((long)puVar1 + 3) = *(byte *)((long)puVar1 + 3) & 0xfe;
          }
          if (lVar6 == 0) break;
          lVar10 = *plVar5;
          lVar6 = lVar6 + -1;
          lVar7 = lVar7 + 4;
        }
      }
    }
    lVar10 = 0;
    *(uint *)(plVar5 + 1) = param_2;
    if (param_2 < 2) {
      param_2 = 1;
    }
    pbVar8 = (byte *)(param_3 + 5);
    do {
      *(short *)(*plVar5 + lVar10) = (short)*(undefined4 *)(pbVar8 + -5);
      *(byte *)(*plVar5 + lVar10 + 2) = pbVar8[-1];
      lVar7 = *plVar5 + lVar10;
      lVar10 = lVar10 + 4;
      *(byte *)(lVar7 + 3) = *(byte *)(lVar7 + 3) & 0xfe | *pbVar8;
      pbVar8 = pbVar8 + 8;
    } while ((ulong)param_2 * 4 != lVar10);
  }
LAB__text__0042d464:
  if ((param_4 & 1) == 0) {
    return;
  }
  FUN__text__0042d4a0(param_1);
  return;
}


