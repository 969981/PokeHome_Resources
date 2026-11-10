/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067d4a4; name: FUN_.text__0067d4a4
 */


undefined8 FUN__text__0067d4a4(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar1 == 0) {
    uVar1 = *(uint *)(param_2 + 0x10);
    if (uVar1 != 0) {
      if (*(int *)(param_1 + 0x94c) <= (int)(uVar1 ^ 0x7fffffff)) {
        *(uint *)(param_1 + 0x94c) = *(int *)(param_1 + 0x94c) + uVar1;
LAB__text__0067d588:
        if ((*(code **)(param_1 + 0x7e8) == (code *)0x0) ||
           (iVar2 = (**(code **)(param_1 + 0x7e8))(param_1,param_2,*(undefined8 *)(param_1 + 0x8b8))
           , iVar2 == 0)) {
          return 0;
        }
        return 0xfffffc7a;
      }
      uVar4 = 0xfffffdf4;
      uVar5 = 0;
      goto LAB__text__0067d60c;
    }
LAB__text__0067d5f8:
    uVar5 = 0x7115d9;
  }
  else {
    if ((uVar1 & 1) == (uint)(*(char *)(param_1 + 0x9aa) == '\0')) {
      iVar2 = *(int *)(param_1 + 0x934);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x938);
    }
    if (iVar2 < (int)uVar1) {
      uVar5 = 0x714bbb;
    }
    else {
      lVar3 = FUN__text__00680914(param_1);
      if (lVar3 == 0) {
        return 0;
      }
      if ((*(byte *)(lVar3 + 0xe4) >> 1 & 1) != 0) {
        return 0;
      }
      if (*(int *)(lVar3 + 0xdc) == 5) {
        return 0;
      }
      if ((*(int *)(lVar3 + 0xdc) != 4) ||
         ((*(uint *)(lVar3 + 0xb8) != 0 &&
          ((*(uint *)(lVar3 + 0xb8) & 1) == (uint)(*(char *)(param_1 + 0x9aa) == '\0'))))) {
        uVar1 = *(uint *)(param_2 + 0x10);
        if (uVar1 != 0) {
          if ((int)(uVar1 ^ 0x7fffffff) < *(int *)(lVar3 + 0xbc)) {
            uVar4 = FUN__text__00680340(param_1,*(undefined4 *)(param_2 + 8),param_2,0xfffffdf4);
            return uVar4;
          }
          iVar2 = *(int *)(lVar3 + 0xbc) + uVar1;
          *(int *)(lVar3 + 0xbc) = iVar2;
          if (((0 < iVar2) && (iVar2 = FUN__text__00685dc8(lVar3), iVar2 != 0)) &&
             (uVar4 = FUN__text__00685d7c(lVar3,4), (int)uVar4 < -900)) {
            return uVar4;
          }
          goto LAB__text__0067d588;
        }
        goto LAB__text__0067d5f8;
      }
      uVar5 = 0x71beaa;
    }
  }
  uVar4 = 0xfffffe07;
LAB__text__0067d60c:
  uVar4 = FUN__text__0067c768(param_1,param_2,uVar4,uVar5);
  return uVar4;
}


