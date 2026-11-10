/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00500c70; name: FUN_.text__00500c70
 */


void FUN__text__00500c70(undefined8 param_1,long param_2,ulong param_3,long *param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ushort *__dest;
  ulong uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  
  uVar9 = param_3 & 0xffffffff;
  if (*(char *)(param_2 + 0x35) == '\0') {
    uVar4 = FUN__text__004cdaa8(param_5,uVar9);
    if ((uVar4 & 1) == 0) {
      FUN__text__004cda84(param_5,uVar9);
      *(short *)(param_5 + 0x12) = *(short *)(param_5 + 0x12) + -1;
    }
    if (*(short *)(param_2 + 0x38) != 0) {
      lVar10 = *(long *)(param_5 + 0x18);
      *(short *)(param_5 + 0x10) = *(short *)(param_5 + 0x10) + -1;
      uVar2 = *(uint *)(param_5 + 0x20);
      uVar4 = (ulong)uVar2;
      uVar8 = *(uint *)(param_5 + 0x24);
      if (uVar2 < uVar8) {
        *(uint *)(param_5 + 0x20) = uVar2 + 1;
        if (lVar10 == 0) goto LAB__text__005010a8;
      }
      else {
        iVar6 = uVar8 + (uVar8 >> 1);
        if (uVar8 == 0) {
          iVar6 = 1;
        }
        uVar8 = iVar6 + uVar8;
        if (lVar10 == 0) {
          lVar10 = FUN__text__00400f80(0,(ulong)uVar8 << 1);
          if (lVar10 == 0) goto LAB__text__005010a8;
          lVar5 = *(long *)(param_5 + 0x18);
          if ((lVar5 != 0) && (lVar5 != lVar10)) {
            if (uVar2 != 0) {
              if (uVar2 == 1) {
                uVar7 = 0;
              }
              else {
                uVar7 = 0;
                do {
                  lVar5 = uVar7 * 2;
                  uVar7 = uVar7 + 2;
                  *(undefined2 *)(lVar10 + lVar5) =
                       *(undefined2 *)(*(long *)(param_5 + 0x18) + lVar5);
                  ((undefined2 *)(lVar10 + lVar5))[1] =
                       *(undefined2 *)(*(long *)(param_5 + 0x18) + lVar5 + 2);
                } while ((uVar4 & 0xfffffffe) != uVar7);
              }
              if ((uVar2 & 1) != 0) {
                *(undefined2 *)(lVar10 + uVar7 * 2) =
                     *(undefined2 *)(*(long *)(param_5 + 0x18) + uVar7 * 2);
              }
              lVar5 = *(long *)(param_5 + 0x18);
            }
            FUN__text__00400fc0(0,lVar5);
          }
        }
        else {
          lVar10 = FUN__text__00400fa0(0,lVar10);
          if (lVar10 == 0) goto LAB__text__005010a8;
        }
        *(long *)(param_5 + 0x18) = lVar10;
        *(uint *)(param_5 + 0x24) = uVar8;
        if (uVar8 <= uVar2) goto LAB__text__005010a8;
        uVar4 = (ulong)*(uint *)(param_5 + 0x20);
        *(uint *)(param_5 + 0x20) = *(uint *)(param_5 + 0x20) + 1;
      }
      *(short *)(lVar10 + uVar4 * 2) = (short)param_3;
      FUN__text__004cdb00(param_5,uVar9);
      *(int *)(param_5 + 0xc) =
           *(int *)(param_5 + 0xc) - *(int *)(*(long *)(*param_4 + (param_3 & 0xffff) * 8) + 0x1c);
      uVar8 = *(ushort *)(param_4 + 1) - 1 & 0xffff;
      uVar2 = (uint)*(ushort *)(param_2 + 0x38);
      if (uVar8 <= *(ushort *)(param_2 + 0x38)) {
        uVar2 = uVar8;
      }
      if (uVar2 < *(uint *)(param_5 + 0x20)) {
        uVar3 = **(ushort **)(param_5 + 0x18);
        FUN__text__004cdb24(param_5,(ulong)uVar3);
        iVar6 = *(int *)(*(long *)(*param_4 + (ulong)uVar3 * 8) + 0x1c);
        *(short *)(param_5 + 0x10) = *(short *)(param_5 + 0x10) + 1;
        *(int *)(param_5 + 0xc) = *(int *)(param_5 + 0xc) + iVar6;
        uVar8 = *(uint *)(param_5 + 0x20);
        if (1 < uVar8) {
          memmove(*(void **)(param_5 + 0x18),(void *)((long)*(void **)(param_5 + 0x18) + 2),
                  (ulong)(uVar8 * 2 - 2));
          uVar8 = *(uint *)(param_5 + 0x20);
        }
        *(uint *)(param_5 + 0x20) = uVar8 - 1;
        return;
      }
    }
  }
  else {
    uVar3 = *(ushort *)(param_2 + 0x38);
    iVar6 = *(int *)(*(long *)(*param_4 + (param_3 & 0xffff) * 8) + 0x1c);
    *(short *)(param_5 + 0x10) = *(short *)(param_5 + 0x10) + -1;
    uVar8 = (uint)uVar3;
    if (uVar3 < 2) {
      uVar8 = 1;
    }
    *(int *)(param_5 + 0xc) = *(int *)(param_5 + 0xc) - iVar6;
    *(short *)(param_5 + 0x12) = *(short *)(param_5 + 0x12) + -1;
    FUN__text__004cda84(param_5,uVar9);
    uVar1 = *(uint *)(param_5 + 0x20);
    uVar4 = (ulong)uVar1;
    uVar2 = *(uint *)(param_5 + 0x24);
    lVar10 = *(long *)(param_5 + 0x18);
    if (uVar1 < uVar2) {
      *(uint *)(param_5 + 0x20) = uVar1 + 1;
      if (lVar10 == 0) goto LAB__text__005010a8;
    }
    else {
      iVar6 = uVar2 + (uVar2 >> 1);
      if (uVar2 == 0) {
        iVar6 = 1;
      }
      uVar2 = iVar6 + uVar2;
      if (lVar10 == 0) {
        lVar10 = FUN__text__00400f80(0,(ulong)uVar2 << 1);
        if (lVar10 == 0) goto LAB__text__005010a8;
        lVar5 = *(long *)(param_5 + 0x18);
        if ((lVar5 != 0) && (lVar5 != lVar10)) {
          if (uVar1 != 0) {
            if (uVar1 == 1) {
              uVar7 = 0;
            }
            else {
              uVar7 = 0;
              do {
                lVar5 = uVar7 * 2;
                uVar7 = uVar7 + 2;
                *(undefined2 *)(lVar10 + lVar5) = *(undefined2 *)(*(long *)(param_5 + 0x18) + lVar5)
                ;
                ((undefined2 *)(lVar10 + lVar5))[1] =
                     *(undefined2 *)(*(long *)(param_5 + 0x18) + lVar5 + 2);
              } while ((uVar4 & 0xfffffffe) != uVar7);
            }
            if ((uVar1 & 1) != 0) {
              *(undefined2 *)(lVar10 + uVar7 * 2) =
                   *(undefined2 *)(*(long *)(param_5 + 0x18) + uVar7 * 2);
            }
            lVar5 = *(long *)(param_5 + 0x18);
          }
          FUN__text__00400fc0(0,lVar5);
        }
      }
      else {
        lVar10 = FUN__text__00400fa0(0,lVar10);
        if (lVar10 == 0) goto LAB__text__005010a8;
      }
      *(long *)(param_5 + 0x18) = lVar10;
      *(uint *)(param_5 + 0x24) = uVar2;
      if (uVar2 <= uVar1) {
LAB__text__005010a8:
        *(undefined2 *)(param_5 + 0x12) = 0;
        return;
      }
      uVar4 = (ulong)*(uint *)(param_5 + 0x20);
      *(uint *)(param_5 + 0x20) = *(uint *)(param_5 + 0x20) + 1;
    }
    *(short *)(lVar10 + uVar4 * 2) = (short)uVar9;
    FUN__text__004cdb00(param_5,uVar9);
    uVar2 = *(ushort *)(param_4 + 1) - 1 & 0xffff;
    uVar1 = *(uint *)(param_5 + 0x20);
    if (uVar2 <= uVar8) {
      uVar8 = uVar2;
    }
    if (uVar8 < uVar1) {
      __dest = *(ushort **)(param_5 + 0x18);
      uVar9 = (ulong)*__dest;
      if (uVar1 < 2) {
        iVar6 = 0;
      }
      else {
        memmove(__dest,__dest + 1,(ulong)(uVar1 * 2 - 2));
        iVar6 = *(int *)(param_5 + 0x20) + -1;
      }
      *(int *)(param_5 + 0x20) = iVar6;
      FUN__text__004cdb24(param_5,uVar9);
      uVar4 = FUN__text__004cdaa8(param_5,uVar9);
      if ((uVar4 & 1) == 0) {
        *(int *)(param_5 + 0xc) =
             *(int *)(param_5 + 0xc) + *(int *)(*(long *)(*param_4 + uVar9 * 8) + 0x1c);
        *(short *)(param_5 + 0x10) = *(short *)(param_5 + 0x10) + 1;
      }
    }
  }
  return;
}


