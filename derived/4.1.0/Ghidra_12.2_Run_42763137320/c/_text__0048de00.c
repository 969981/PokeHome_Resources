/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048de00; name: FUN_.text__0048de00
 */


undefined8
FUN__text__0048de00(long *param_1,uint param_2,long param_3,long param_4,undefined4 *param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  if (param_3 == 0) {
    return 2;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 3));
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 != 0) {
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = param_2 / uVar1;
    }
    lVar8 = *(long *)(*param_1 + (ulong)(param_2 - uVar3 * uVar1) * 8);
    while( true ) {
      if (lVar8 == 0) goto LAB__text__0048dfc0;
      if (*(uint *)(lVar8 + 0x4c) == param_2) break;
      lVar8 = *(long *)(lVar8 + 0x68);
    }
    uVar3 = *(uint *)(lVar8 + 0x18);
    uVar1 = *(uint *)(lVar8 + 0x1c);
    lVar7 = *(long *)(lVar8 + 0x10);
    if (uVar3 < uVar1) {
      *(uint *)(lVar8 + 0x18) = uVar3 + 1;
      if (lVar7 == 0) goto LAB__text__0048dfe8;
      *(long *)(lVar7 + (ulong)uVar3 * 8) = param_3;
      goto joined_r0x0048dea0;
    }
    iVar2 = uVar1 + (uVar1 >> 1);
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    uVar1 = iVar2 + uVar1;
    if (lVar7 != 0) {
      lVar7 = FUN__text__00400fa0(0,lVar7);
      if (lVar7 != 0) goto LAB__text__0048df64;
      goto LAB__text__0048dfe8;
    }
    lVar7 = FUN__text__00400f80(0,(ulong)uVar1 << 3);
    if (lVar7 == 0) goto LAB__text__0048dfe8;
    lVar4 = *(long *)(lVar8 + 0x10);
    if ((lVar4 != 0) && (lVar4 != lVar7)) {
      if (uVar3 != 0) {
        if (uVar3 == 1) {
          uVar5 = 0;
        }
        else {
          uVar5 = 0;
          do {
            lVar4 = uVar5 * 8;
            uVar5 = uVar5 + 2;
            *(undefined8 *)(lVar7 + lVar4) = *(undefined8 *)(*(long *)(lVar8 + 0x10) + lVar4);
            ((undefined8 *)(lVar7 + lVar4))[1] =
                 *(undefined8 *)(*(long *)(lVar8 + 0x10) + lVar4 + 8);
          } while (((ulong)uVar3 & 0xfffffffe) != uVar5);
        }
        if ((uVar3 & 1) != 0) {
          *(undefined8 *)(lVar7 + uVar5 * 8) = *(undefined8 *)(*(long *)(lVar8 + 0x10) + uVar5 * 8);
        }
        lVar4 = *(long *)(lVar8 + 0x10);
      }
      FUN__text__00400fc0(0,lVar4);
    }
LAB__text__0048df64:
    *(long *)(lVar8 + 0x10) = lVar7;
    *(uint *)(lVar8 + 0x1c) = uVar1;
    if (uVar1 <= uVar3) {
LAB__text__0048dfe8:
      uVar6 = 2;
      goto LAB__text__0048dfc4;
    }
    uVar1 = *(uint *)(lVar8 + 0x18);
    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
    *(long *)(lVar7 + (ulong)uVar1 * 8) = param_3;
joined_r0x0048dea0:
    if ((param_4 != 0) && (*(long *)(lVar8 + 0x30) == 0)) {
      *(long *)(lVar8 + 0x30) = param_4;
      iVar2 = *(int *)(param_4 + 0x60);
      *(int *)(param_4 + 0x60) = iVar2 + 1;
      if ((iVar2 == 1) && (*(char *)(param_4 + 100) != '\0')) {
        FUN__text__004473d0(param_4);
      }
    }
    *param_5 = *(undefined4 *)(lVar8 + 0x60);
  }
LAB__text__0048dfc0:
  uVar6 = 1;
LAB__text__0048dfc4:
  nn::os::UnlockMutex((MutexType *)(param_1 + 3));
  return uVar6;
}


