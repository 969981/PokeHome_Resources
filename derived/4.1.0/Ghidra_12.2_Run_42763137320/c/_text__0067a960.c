/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067a960; name: FUN_.text__0067a960
 */


long FUN__text__0067a960(long param_1,uint param_2,uint param_3,uint *param_4,int param_5,
                        undefined8 param_6)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint local_70 [4];
  
  lVar1 = param_1 + 0x890;
  lVar5 = FUN__text__00680914();
  if (lVar5 == 0) {
    lVar7 = FUN__text__006809d4(lVar1,0xe8);
    if (lVar7 == 0) {
      return 0;
    }
  }
  else {
    lVar7 = *(long *)(lVar5 + 0x90);
    lVar6 = *(long *)(lVar5 + 0x98);
    plVar2 = (long *)(param_1 + 0x8d0);
    if (lVar7 != 0) {
      plVar2 = (long *)(lVar7 + 0x98);
    }
    *plVar2 = lVar6;
    plVar2 = (long *)(param_1 + 0x8d8);
    if (lVar6 != 0) {
      plVar2 = (long *)(lVar6 + 0x90);
    }
    *plVar2 = lVar7;
    *(undefined8 *)(lVar5 + 0x90) = 0;
    *(undefined8 *)(lVar5 + 0x98) = 0;
    *(long *)(param_1 + 0x910) = *(long *)(param_1 + 0x910) + -1;
    iVar4 = FUN__text__00686028(lVar5);
    lVar7 = lVar5;
    if (iVar4 != 0) {
      return 0;
    }
  }
  local_70[2] = 0;
  local_70[0] = 0;
  local_70[1] = 0;
  if (*param_4 == 0) {
    lVar6 = 0;
LAB__text__0067aac0:
    param_3 = param_5 == 4 | param_3;
    if (lVar5 == 0) {
      FUN__text__00685a30(lVar7,param_2,param_3,param_5,param_4[1],*(undefined4 *)(param_1 + 0x970),
                          *(undefined4 *)(param_1 + 0x98c),param_6,lVar1);
      iVar4 = FUN__text__006807cc(param_1,lVar7);
      if (iVar4 != 0) {
        FUN__text__00685b28(lVar7);
LAB__text__0067ab64:
        FUN__text__006809e4(lVar1,lVar7);
        goto LAB__text__0067ac0c;
      }
    }
    else {
      *(char *)(lVar7 + 0xe4) = (char)param_3;
      *(int *)(lVar7 + 0xdc) = param_5;
      uVar3 = param_4[1];
      *(undefined8 *)(lVar7 + 0xa0) = param_6;
      *(uint *)(lVar7 + 0xd0) = uVar3;
    }
    if (param_5 == 5) {
      if (*(long *)(param_1 + 0x8d8) == 0) {
        *(long *)(param_1 + 0x8d0) = lVar7;
      }
      else {
        *(long *)(*(long *)(param_1 + 0x8d8) + 0x98) = lVar7;
        *(undefined8 *)(lVar7 + 0x90) = *(undefined8 *)(param_1 + 0x8d8);
      }
      *(long *)(param_1 + 0x8d8) = lVar7;
      *(long *)(param_1 + 0x910) = *(long *)(param_1 + 0x910) + 1;
    }
    else if (param_5 == 4) {
      if ((param_2 == 0) || (((param_2 ^ *(char *)(param_1 + 0x9aa) == '\0') & 1) != 0)) {
        FUN__text__00685b30(lVar7,2);
        *(long *)(param_1 + 0x8f8) = *(long *)(param_1 + 0x8f8) + 1;
      }
      else {
        FUN__text__00685b30(lVar7,1);
      }
    }
    else if ((param_2 == 0) || (((param_2 ^ *(char *)(param_1 + 0x9aa) == '\0') & 1) != 0)) {
      *(long *)(param_1 + 0x8f0) = *(long *)(param_1 + 0x8f0) + 1;
    }
    else {
      *(long *)(param_1 + 0x8e8) = *(long *)(param_1 + 0x8e8) + 1;
    }
    lVar1 = param_1 + 0x20;
    if (*param_4 != 0) {
      lVar1 = lVar6;
    }
    if ((char)param_4[2] == '\0') {
      FUN__text__00685ffc(lVar1,lVar7);
      goto LAB__text__0067ac20;
    }
    iVar4 = FUN__text__00685e74(lVar1,lVar7);
    if (iVar4 == 0) goto LAB__text__0067ac20;
  }
  else {
    lVar6 = FUN__text__00680914(param_1);
    if (lVar6 != 0) {
      iVar4 = FUN__text__006863d4(lVar6);
      if (iVar4 == 0) goto LAB__text__0067aab4;
      goto LAB__text__0067aac0;
    }
    uVar3 = *param_4;
    if (uVar3 == 0) {
LAB__text__0067aab4:
      param_4 = local_70;
      FUN__text__00679e88(local_70);
      goto LAB__text__0067aac0;
    }
    if ((uVar3 & 1) == (uint)(*(char *)(param_1 + 0x9aa) == '\0')) {
      iVar4 = *(int *)(param_1 + 0x934);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x938);
    }
    if ((int)uVar3 <= iVar4) goto LAB__text__0067aab4;
    FUN__text__00679e88(local_70);
    lVar6 = FUN__text__0067a960(param_1,*param_4,0,local_70,5,0);
    if (lVar6 != 0) goto LAB__text__0067aac0;
    if (lVar5 == 0) goto LAB__text__0067ab64;
  }
LAB__text__0067ac0c:
  lVar7 = 0;
LAB__text__0067ac20:
  return lVar7;
}


