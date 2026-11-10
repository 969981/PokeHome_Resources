/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00404df0; name: FUN_.text__00404df0
 */


long FUN__text__00404df0(int param_1,long param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long local_58;
  
  uVar5 = param_3 + 0x80U >> (*(ulong *)(&DAT_00ae8a48 + (long)param_1 * 0x638) & 0x3f);
  if (((&DAT_00ae8a40)[(long)param_1 * 199] - 1 & param_3 + 0x80U) != 0) {
    uVar5 = uVar5 + 1;
  }
  uVar2 = uVar5 >> 1;
  if (uVar5 < 3) {
    uVar2 = 0;
  }
  uVar2 = uVar2 + uVar5;
  if (0x1f < uVar2) {
    uVar2 = 0x20;
  }
  plVar7 = (long *)(param_2 + uVar5 * 0x108 + 0xb18);
  uVar6 = uVar5;
  do {
    plVar1 = (long *)(param_2 + 0xbd8);
    if (uVar6 != 1) {
      plVar1 = plVar7;
    }
    lVar4 = *plVar1;
    if (lVar4 != 0) {
      *plVar1 = lVar4 + -1;
      lVar4 = plVar1[lVar4];
      if (lVar4 != 0) goto LAB__text__00404f1c;
    }
    local_58 = 0;
    if (uVar6 == 1) {
      FUN__text__00404130(param_1,param_2,&local_58);
      lVar4 = local_58;
joined_r0x00404ee4:
      if (lVar4 != 0) goto LAB__text__00404f1c;
    }
    else {
      FUN__text__00404130(param_1,param_2,0);
      lVar4 = *plVar7;
      if (lVar4 != 0) {
        *plVar7 = lVar4 + -1;
        lVar4 = plVar7[lVar4];
        goto joined_r0x00404ee4;
      }
    }
    if ((uVar6 <= *(uint *)(param_2 + 0xd00)) &&
       (lVar4 = FUN__text__004048c0(param_1,param_2,uVar6), lVar4 != 0)) goto LAB__text__00404f1c;
    uVar6 = uVar6 + 1;
    plVar7 = plVar7 + 0x21;
  } while (uVar6 <= uVar2);
  lVar4 = FUN__text__004048c0(param_1,param_2,uVar5);
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
LAB__text__00404f1c:
    *(long *)(lVar4 + 0x40) = param_2;
    *(undefined4 *)(lVar4 + 0xc) = 0x7e;
    uVar3 = 0;
    if (*(long *)(param_2 + 0x3110) != 0) {
      *(long *)(*(long *)(param_2 + 0x3110) + 0x50) = lVar4;
      uVar3 = *(undefined8 *)(param_2 + 0x3110);
    }
    *(undefined8 *)(lVar4 + 0x48) = uVar3;
    *(long *)(param_2 + 0x3110) = lVar4;
    lVar4 = lVar4 + 0x80;
    *(long *)(param_2 + 0xce8) = *(long *)(param_2 + 0xce8) + 1;
  }
  return lVar4;
}


