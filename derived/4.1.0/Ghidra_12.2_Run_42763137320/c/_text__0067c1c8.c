/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067c1c8; name: FUN_.text__0067c1c8
 */


int FUN__text__0067c1c8(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar1 == 0) {
    uVar5 = 0x71e0ee;
LAB__text__0067c2dc:
    iVar3 = FUN__text__0067c768(param_1,param_2,0xfffffe07,uVar5);
    iVar2 = -0x67;
    if (iVar3 < -900) {
      iVar2 = iVar3;
    }
    return iVar2;
  }
  if (*(char *)(param_1 + 0x9aa) == '\0') {
    if ((uVar1 & 1) == 0) {
      iVar2 = *(int *)(param_1 + 0x938);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x934);
    }
    if ((int)uVar1 <= iVar2) {
      return -0x67;
    }
    uVar5 = 0x717878;
    goto LAB__text__0067c2dc;
  }
  if ((uVar1 & 1) == 0) {
    uVar5 = 0x71b2a9;
    goto LAB__text__0067c2dc;
  }
  if (*(int *)(param_1 + 0x938) < (int)uVar1) {
    *(uint *)(param_1 + 0x938) = uVar1;
    if ((ulong)*(uint *)(param_1 + 0x988) <= *(ulong *)(param_1 + 0x8f0)) {
      uVar5 = 0x71c883;
      goto LAB__text__0067c2dc;
    }
    if ((*(byte *)(param_1 + 0x9ab) & 5) != 0) {
      return -0x67;
    }
    iVar2 = *(int *)(param_2 + 8);
    if (*(int *)(param_2 + 0x18) != iVar2) {
      if (*(ulong *)(param_1 + 0x8f0) < (ulong)*(uint *)(param_1 + 0x9a0)) {
        lVar4 = FUN__text__0067a960(param_1,iVar2,0,(int *)(param_2 + 0x18),1,0);
        if (lVar4 == 0) {
          return -0x385;
        }
        iVar2 = FUN__text__0067b0bc(param_1);
        if (iVar2 < -900) {
          return iVar2;
        }
        *(undefined4 *)(param_1 + 0x93c) = *(undefined4 *)(param_1 + 0x938);
        if (*(code **)(param_1 + 0x820) == (code *)0x0) {
          return 0;
        }
        iVar3 = (**(code **)(param_1 + 0x820))(param_1,param_2,*(undefined8 *)(param_1 + 0x8b8));
        iVar2 = 0;
        if (iVar3 != 0) {
          iVar2 = -0x386;
        }
        if (iVar3 != -0x209) {
          iVar3 = iVar2;
        }
        return iVar3;
      }
      iVar2 = FUN__text__00680340(param_1,iVar2,param_2,0xfffffdeb);
      goto LAB__text__0067c2c0;
    }
    uVar6 = 0x71d5eb;
    uVar5 = 0xfffffe07;
  }
  else {
    lVar4 = FUN__text__00680914(param_1);
    if (lVar4 == 0) {
      return -0x67;
    }
    if ((*(byte *)(lVar4 + 0xe5) & 1) == 0) {
      return -0x67;
    }
    uVar6 = 0x712209;
    uVar5 = 0xfffffe02;
  }
  iVar2 = FUN__text__0067c768(param_1,param_2,uVar5,uVar6);
LAB__text__0067c2c0:
  iVar3 = -0x67;
  if (iVar2 < -900) {
    iVar3 = iVar2;
  }
  return iVar3;
}


