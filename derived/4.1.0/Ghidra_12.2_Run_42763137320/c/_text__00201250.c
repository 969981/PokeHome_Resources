/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00201250; name: FUN_.text__00201250
 */


void FUN__text__00201250(long *param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  
  lVar9 = *param_1;
  *(undefined4 *)(lVar9 + 0xa8 + (ulong)*(uint *)(param_1 + 1) * 4) =
       *(undefined4 *)(param_1[2] + (ulong)*param_2 * 4);
  iVar6 = *(int *)(lVar9 + 0xa8);
  uVar7 = (uint)(iVar6 != 0);
  if (*(int *)(lVar9 + 0xac) != 0) {
    uVar7 = uVar7 + 1;
  }
  if (*(int *)(lVar9 + 0xb0) != 0) {
    uVar7 = uVar7 + 1;
  }
  if (*(int *)(lVar9 + 0xb4) != 0) {
    uVar7 = uVar7 + 1;
  }
  if (uVar7 == 3) {
    if (iVar6 == 0) {
      lVar4 = 0;
      goto LAB__text__00201404;
    }
    if (*(int *)(lVar9 + 0xac) == 0) {
      lVar4 = 1;
      goto LAB__text__00201404;
    }
    if (*(int *)(lVar9 + 0xb0) != 0) goto LAB__text__002012bc;
    do {
      lVar4 = 2;
LAB__text__00201404:
      while( true ) {
        while( true ) {
          lVar1 = lVar4 + 1;
          lVar2 = lVar9 + 0xa8;
          *(undefined4 *)(lVar2 + lVar4 * 4) = *(undefined4 *)(lVar2 + lVar1 * 4);
          if (lVar1 != 3) {
            lVar3 = lVar4 + 2;
            *(undefined4 *)(lVar2 + lVar1 * 4) = *(undefined4 *)(lVar2 + lVar3 * 4);
            if (lVar3 != 3) {
              *(undefined4 *)(lVar9 + 0xa8 + lVar3 * 4) =
                   *(undefined4 *)(lVar9 + 0xa8 + lVar4 * 4 + 0xc);
            }
          }
          *(undefined4 *)(lVar9 + 0xb4) = 0;
          if (*(int *)(lVar9 + 0xa8) != 0) break;
          lVar4 = 0;
        }
        if (*(int *)(lVar9 + 0xac) != 0) break;
        lVar4 = 1;
      }
    } while (*(int *)(lVar9 + 0xb0) == 0);
    goto LAB__text__0020145c;
  }
  uVar5 = 0;
  if (iVar6 == 0) {
LAB__text__002012fc:
    if (uVar5 == uVar7) {
LAB__text__002012bc:
      FUN__text__001fb6f0(lVar9);
      return;
    }
  }
  else {
    if (*(int *)(lVar9 + 0xac) == 0) {
      uVar5 = 1;
      goto LAB__text__002012fc;
    }
    if (*(int *)(lVar9 + 0xb0) != 0) {
      if (*(int *)(lVar9 + 0xb4) == 0) goto LAB__text__00201360;
      goto LAB__text__002012bc;
    }
    uVar5 = 2;
    if (uVar7 == 2) goto LAB__text__002012bc;
  }
  uVar8 = (ulong)uVar5;
  lVar4 = lVar9 + 0xa8;
  lVar1 = uVar8 + 1;
  *(undefined4 *)(lVar4 + (ulong)uVar5 * 4) = *(undefined4 *)(lVar4 + lVar1 * 4);
  if (lVar1 != 3) {
    lVar2 = uVar8 + 2;
    *(undefined4 *)(lVar4 + lVar1 * 4) = *(undefined4 *)(lVar4 + lVar2 * 4);
    if (lVar2 != 3) {
      *(undefined4 *)(lVar9 + 0xa8 + lVar2 * 4) = *(undefined4 *)(lVar9 + 0xa8 + uVar8 * 4 + 0xc);
    }
  }
  while( true ) {
    iVar6 = *(int *)(lVar9 + 0xa8);
LAB__text__00201360:
    do {
      *(undefined4 *)(lVar9 + 0xb4) = 0;
      if (iVar6 == 0) {
        lVar4 = 0;
        if (uVar7 == 0) goto LAB__text__0020145c;
        goto LAB__text__002013a4;
      }
      if (*(int *)(lVar9 + 0xac) == 0) {
        lVar4 = 1;
        if (uVar7 == 1) goto LAB__text__0020145c;
        goto LAB__text__002013a4;
      }
    } while (*(int *)(lVar9 + 0xb0) != 0);
    lVar4 = 2;
    if (uVar7 == 2) break;
LAB__text__002013a4:
    lVar1 = lVar9 + 0xa8;
    lVar2 = lVar4 + 1;
    *(undefined4 *)(lVar1 + lVar4 * 4) = *(undefined4 *)(lVar1 + lVar2 * 4);
    if (lVar2 != 3) {
      lVar3 = lVar4 + 2;
      *(undefined4 *)(lVar1 + lVar2 * 4) = *(undefined4 *)(lVar1 + lVar3 * 4);
      if (lVar3 != 3) {
        *(undefined4 *)(lVar9 + 0xa8 + lVar3 * 4) = *(undefined4 *)(lVar9 + 0xa8 + lVar4 * 4 + 0xc);
      }
    }
  }
LAB__text__0020145c:
  FUN__text__0013dbf8(*(undefined8 *)(lVar9 + 0xd0));
  FUN__text__001fb6f0(lVar9);
  return;
}


