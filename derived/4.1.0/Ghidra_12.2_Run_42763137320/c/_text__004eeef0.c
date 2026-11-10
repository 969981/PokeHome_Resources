/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004eeef0; name: FUN_.text__004eeef0
 */


undefined8 FUN__text__004eeef0(undefined4 *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  undefined1 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  
  cVar5 = *(char *)*param_2;
  *param_2 = (char *)*param_2 + 1;
  uVar8 = 2;
  if (cVar5 == '\x01') {
    uVar8 = 3;
  }
  *(undefined1 *)(param_1 + 2) = uVar8;
  uVar3 = *(undefined4 *)*param_2;
  *param_2 = (undefined4 *)*param_2 + 1;
  param_1[1] = uVar3;
  uVar3 = *(undefined4 *)*param_2;
  *param_2 = (undefined4 *)*param_2 + 1;
  *param_1 = uVar3;
  if (*(long *)(param_1 + 4) != 0) {
    param_1[6] = 0;
    FUN__text__00400fc0(0);
    *(undefined8 *)(param_1 + 4) = 0;
    param_1[7] = 0;
  }
  uVar4 = *(uint *)*param_2;
  *param_2 = (uint *)*param_2 + 1;
  if ((uint)param_1[7] < uVar4) {
    if (*(long *)(param_1 + 4) == 0) {
      uVar12 = param_1[6];
      lVar6 = FUN__text__00400f80(0,(ulong)uVar4 << 2);
      if (lVar6 == 0) {
        return 2;
      }
      lVar7 = *(long *)(param_1 + 4);
      if ((lVar7 != 0) && (lVar7 != lVar6)) {
        if (uVar12 != 0) {
          if (uVar12 == 1) {
            uVar9 = 0;
          }
          else {
            uVar9 = 0;
            do {
              lVar7 = uVar9 * 4;
              uVar9 = uVar9 + 2;
              *(undefined4 *)(lVar6 + lVar7) = *(undefined4 *)(*(long *)(param_1 + 4) + lVar7);
              ((undefined4 *)(lVar6 + lVar7))[1] =
                   *(undefined4 *)(*(long *)(param_1 + 4) + lVar7 + 4);
            } while (((ulong)uVar12 & 0xfffffffe) != uVar9);
          }
          if ((uVar12 & 1) != 0) {
            *(undefined4 *)(lVar6 + uVar9 * 4) = *(undefined4 *)(*(long *)(param_1 + 4) + uVar9 * 4)
            ;
          }
          lVar7 = *(long *)(param_1 + 4);
        }
        FUN__text__00400fc0(0,lVar7);
      }
    }
    else {
      lVar6 = FUN__text__00400fa0(0);
      if (lVar6 == 0) {
        return 2;
      }
    }
    *(long *)(param_1 + 4) = lVar6;
    param_1[7] = uVar4;
  }
  if (uVar4 != 0) {
    uVar12 = 0;
    do {
      uVar13 = param_1[6];
      uVar2 = param_1[7];
      lVar6 = *(long *)(param_1 + 4);
      if (uVar2 <= uVar13) {
        iVar1 = uVar2 + (uVar2 >> 1);
        if (uVar2 == 0) {
          iVar1 = 1;
        }
        if (lVar6 == 0) {
          lVar6 = FUN__text__00400f80(0,(ulong)(iVar1 + uVar2) << 2);
          lVar7 = *(long *)(param_1 + 4);
          if ((lVar7 != 0) && (lVar7 != lVar6)) {
            if (uVar13 != 0) {
              if (uVar13 < 4) {
                uVar9 = 0;
              }
              else {
                uVar9 = 0;
                puVar11 = (undefined4 *)(lVar6 + 8);
                do {
                  lVar7 = uVar9 * 4;
                  uVar9 = uVar9 + 4;
                  puVar11[-2] = *(undefined4 *)(*(long *)(param_1 + 4) + lVar7);
                  puVar11[-1] = *(undefined4 *)(*(long *)(param_1 + 4) + lVar7 + 4);
                  *puVar11 = *(undefined4 *)(*(long *)(param_1 + 4) + lVar7 + 8);
                  puVar11[1] = *(undefined4 *)(*(long *)(param_1 + 4) + lVar7 + 0xc);
                  puVar11 = puVar11 + 4;
                } while (((ulong)uVar13 & 0xfffffffc) != uVar9);
              }
              uVar10 = (ulong)uVar13 & 3;
              if ((uVar13 & 3) != 0) {
                lVar7 = uVar9 << 2;
                do {
                  uVar10 = uVar10 - 1;
                  *(undefined4 *)(lVar6 + lVar7) = *(undefined4 *)(*(long *)(param_1 + 4) + lVar7);
                  lVar7 = lVar7 + 4;
                } while (uVar10 != 0);
              }
              lVar7 = *(long *)(param_1 + 4);
            }
            FUN__text__00400fc0(0,lVar7);
          }
        }
        else {
          lVar6 = FUN__text__00400fa0(0,lVar6);
        }
        uVar13 = param_1[6];
        *(long *)(param_1 + 4) = lVar6;
        param_1[7] = iVar1 + uVar2;
      }
      uVar12 = uVar12 + 1;
      param_1[6] = uVar13 + 1;
      uVar3 = *(undefined4 *)*param_2;
      *param_2 = (undefined4 *)*param_2 + 1;
      *(undefined4 *)(lVar6 + (ulong)uVar13 * 4) = uVar3;
    } while (uVar12 != uVar4);
  }
  return 1;
}


