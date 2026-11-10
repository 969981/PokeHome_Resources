/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fef00; name: FUN_.text__003fef00
 */


undefined8
FUN__text__003fef00(long param_1,ulong *param_2,ulong param_3,uint param_4,ulong param_5,
                   undefined4 param_6)

{
  void *__dest;
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  ulong *puVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  
  if (*(char *)(param_1 + 0x358) == '\0') {
    uVar3 = 1;
    goto LAB__text__003ff278;
  }
  uVar12 = *(uint *)(param_1 + 0x30);
  uVar13 = (ulong)uVar12;
  if (uVar12 == 0) {
    if (param_4 != 0xffffffff) {
      lVar11 = *(long *)(param_1 + 0x28);
      uVar5 = 0;
      if (*(int *)(param_1 + 0x34) != 0) goto LAB__text__003fefec;
LAB__text__003ff020:
      iVar7 = uVar5 + (uVar5 >> 1);
      if (uVar5 == 0) {
        iVar7 = 1;
      }
      uVar5 = iVar7 + uVar5;
      if (lVar11 == 0) {
        lVar11 = FUN__text__00400f80(7,(ulong)uVar5 << 3);
        if (lVar11 != 0) {
          lVar4 = *(long *)(param_1 + 0x28);
          if ((lVar4 != 0) && (lVar4 != lVar11)) {
            if (uVar12 != 0) {
              if (uVar12 == 1) {
                uVar10 = 0;
              }
              else {
                uVar10 = 0;
                do {
                  lVar4 = uVar10 * 8;
                  uVar10 = uVar10 + 2;
                  *(undefined8 *)(lVar11 + lVar4) =
                       *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar4);
                  ((undefined8 *)(lVar11 + lVar4))[1] =
                       *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar4 + 8);
                } while ((uVar13 & 0xfffffffe) != uVar10);
              }
              if ((uVar12 & 1) != 0) {
                *(undefined8 *)(lVar11 + uVar10 * 8) =
                     *(undefined8 *)(*(long *)(param_1 + 0x28) + uVar10 * 8);
              }
              lVar4 = *(long *)(param_1 + 0x28);
            }
            FUN__text__00400fc0(7,lVar4);
          }
          goto LAB__text__003ff0e0;
        }
      }
      else {
        lVar11 = FUN__text__00400fa0(7,lVar11);
        if (lVar11 != 0) {
LAB__text__003ff0e0:
          *(long *)(param_1 + 0x28) = lVar11;
          *(uint *)(param_1 + 0x34) = uVar5;
          if (uVar12 < uVar5) {
            uVar10 = (ulong)*(uint *)(param_1 + 0x30);
            *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) + 1;
            goto LAB__text__003ff0fc;
          }
        }
      }
    }
LAB__text__003ff270:
    uVar3 = 2;
  }
  else {
    lVar11 = *(long *)(param_1 + 0x28);
    uVar5 = uVar12 - 1;
    iVar7 = 0;
    uVar8 = uVar5;
    do {
      while( true ) {
        iVar2 = uVar8 - iVar7;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        uVar1 = iVar7 + (iVar2 >> 1);
        puVar9 = *(ulong **)(lVar11 + (ulong)uVar1 * 8);
        if ((uint)param_2[4] < (uint)puVar9[4]) break;
        if ((uint)param_2[4] <= (uint)puVar9[4]) {
          if (*puVar9 < *param_2) break;
          if (*puVar9 <= *param_2) {
            if (param_2[1] < puVar9[1]) break;
            if (param_2[1] <= puVar9[1]) {
              if (param_4 != 0xffffffff) {
                uVar13 = (ulong)uVar1;
                goto LAB__text__003ff10c;
              }
              if (uVar1 + 1 < uVar12) {
                __dest = (void *)(lVar11 + (ulong)uVar1 * 8);
                memmove(__dest,(void *)((long)__dest + 8),(ulong)((uVar12 + ~uVar1) * 8));
                uVar5 = *(int *)(param_1 + 0x30) - 1;
              }
              *(uint *)(param_1 + 0x30) = uVar5;
              goto LAB__text__003ff270;
            }
          }
        }
        iVar7 = uVar1 + 1;
        if ((int)uVar8 < iVar7) goto LAB__text__003fefd8;
      }
      uVar8 = uVar1 - 1;
    } while (iVar7 <= (int)uVar8);
LAB__text__003fefd8:
    if (param_4 == 0xffffffff) goto LAB__text__003ff270;
    uVar5 = *(uint *)(param_1 + 0x34);
    if (uVar5 <= uVar12) goto LAB__text__003ff020;
LAB__text__003fefec:
    *(uint *)(param_1 + 0x30) = uVar12 + 1;
    uVar10 = uVar13;
    if (lVar11 == 0) goto LAB__text__003ff270;
LAB__text__003ff0fc:
    *(ulong **)(lVar11 + uVar10 * 8) = param_2;
    lVar11 = *(long *)(param_1 + 0x28);
    uVar5 = *(int *)(param_1 + 0x30) - 1;
LAB__text__003ff10c:
    uVar12 = 0;
    do {
      while( true ) {
        iVar7 = uVar5 - uVar12;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 1;
        }
        uVar8 = uVar12 + (iVar7 >> 1);
        puVar9 = *(ulong **)(lVar11 + (ulong)uVar8 * 8);
        if (param_4 < (uint)puVar9[4]) break;
        if (param_4 <= (uint)puVar9[4]) {
          if (*puVar9 < param_5) break;
          if (*puVar9 <= param_5) {
            if (param_2[1] < puVar9[1]) break;
            if (param_2[1] <= puVar9[1]) {
              uVar5 = uVar8;
              uVar12 = uVar8;
              goto LAB__text__003ff188;
            }
          }
        }
        uVar12 = uVar8 + 1;
        if ((int)uVar5 < (int)uVar12) goto LAB__text__003ff188;
      }
      uVar5 = uVar8 - 1;
    } while ((int)uVar12 <= (int)uVar5);
LAB__text__003ff188:
    if ((int)uVar5 <= (int)uVar12) {
      uVar5 = uVar12;
    }
    uVar12 = (uint)uVar13;
    uVar6 = *(undefined8 *)(lVar11 + uVar13 * 8);
    if (uVar12 < uVar5) {
      uVar5 = uVar5 - 1;
      if (uVar12 < uVar5) {
        do {
          iVar7 = (int)uVar13;
          uVar12 = iVar7 + 1;
          *(undefined8 *)(*(long *)(param_1 + 0x28) + uVar13 * 8) =
               *(undefined8 *)(*(long *)(param_1 + 0x28) + (ulong)uVar12 * 8);
          uVar13 = (ulong)uVar12;
        } while (iVar7 + 2U <= uVar5);
      }
    }
    else if (uVar12 - uVar5 != 0) {
      uVar10 = uVar13;
      if ((uVar12 - uVar5 & 1) != 0) {
        uVar10 = uVar13 - 1;
        *(undefined8 *)(*(long *)(param_1 + 0x28) + uVar13 * 8) =
             *(undefined8 *)(*(long *)(param_1 + 0x28) + (uVar10 & 0xffffffff) * 8);
      }
      if (uVar12 != uVar5 + 1) {
        do {
          iVar7 = (int)uVar10;
          lVar11 = uVar10 * 8;
          uVar10 = uVar10 - 2;
          *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar11) =
               *(undefined8 *)(*(long *)(param_1 + 0x28) + (ulong)(iVar7 - 1) * 8);
          *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar11 + -8) =
               *(undefined8 *)(*(long *)(param_1 + 0x28) + (uVar10 & 0xffffffff) * 8);
        } while (uVar5 < (uint)uVar10);
      }
    }
    uVar3 = 1;
    *(undefined8 *)(*(long *)(param_1 + 0x28) + (ulong)uVar5 * 8) = uVar6;
  }
  *(uint *)(param_2 + 4) = param_4;
LAB__text__003ff278:
  *param_2 = param_5;
  *(undefined4 *)(param_2 + 3) = param_6;
  param_2[2] = param_3;
  return uVar3;
}


