/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065f8d8; name: FUN_.text__0065f8d8
 */


int FUN__text__0065f8d8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                       uint param_5)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  char *__s;
  size_t sVar4;
  byte bVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long local_58;
  undefined8 local_38;
  
  lVar6 = *(long *)(param_2 + 8);
  uVar7 = *param_1;
  if (lVar6 == 1) {
    if ((param_5 & 1) != 0) {
      if (((*(uint *)((long)param_1 + 0x3fc) >> 8 & 1) != 0) &&
         (lVar6 = FUN__text__0065f248(param_1,0x71202e), lVar6 == 0)) goto LAB__text__0065fa88;
LAB__text__0065f97c:
      lVar8 = 0;
LAB__text__0065f980:
      *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 1;
      goto LAB__text__0065f98c;
    }
    if (((*(uint *)((long)param_1 + 0x3fc) >> 7 & 1) == 0) ||
       (lVar6 = FUN__text__0066c764(param_1,0x70e970), lVar6 != 0)) goto LAB__text__0065f97c;
LAB__text__0065fa88:
    bVar2 = (param_5 & 1) == 0;
    uVar9 = *param_1;
    lVar6 = 0x458;
    if (bVar2) {
      lVar6 = 0x470;
    }
    local_38 = 0;
    local_58 = 0;
    lVar8 = 0x188;
    if (bVar2) {
      lVar8 = 0x218;
    }
    lVar1 = 0x180;
    if (bVar2) {
      lVar1 = 0x210;
    }
    __s = (char *)FUN__text__00659a28(0x71d33b,*(undefined8 *)((long)param_1 + lVar1),
                                      *(undefined8 *)((long)param_1 + lVar8));
    if (__s != (char *)0x0) {
      sVar4 = strlen(__s);
      iVar3 = FUN__text__006563cc(uVar9,__s,sVar4,&local_58,&local_38);
      if (iVar3 != 0) {
LAB__text__0065fafc:
        FUN__text__006783e4(__s);
        return iVar3;
      }
      if (local_58 == 0) {
        iVar3 = 9;
        goto LAB__text__0065fafc;
      }
      FUN__text__006783e4(*(undefined8 *)((long)param_1 + lVar6));
      uVar9 = 0x71bba7;
      if ((param_5 & 1) == 0) {
        uVar9 = 0x70f683;
      }
      uVar9 = FUN__text__00659a28(0x70fcf3,uVar9,local_58);
      *(undefined8 *)((long)param_1 + lVar6) = uVar9;
      FUN__text__006783e4(local_58);
      if (*(long *)((long)param_1 + lVar6) == 0) {
        iVar3 = 0x1b;
        goto LAB__text__0065fafc;
      }
      FUN__text__006783e4(__s);
      lVar8 = 0x71985c;
      goto LAB__text__0065f980;
    }
LAB__text__0065fb08:
    iVar3 = 0x1b;
  }
  else {
    if (lVar6 == 2) {
      iVar3 = FUN__text__00656638(param_1,param_5 & 1);
      if (iVar3 != 0) {
        return iVar3;
      }
      lVar8 = 0x72064c;
LAB__text__0065f98c:
      lVar6 = *(long *)(param_2 + 8);
    }
    else {
      lVar8 = 0;
    }
    if (lVar6 == 0x40) {
      if ((((param_5 & 1) == 0) && (param_1[0x45] != 0)) &&
         (lVar6 = FUN__text__0066c764(param_1,0x70bc9f), lVar6 == 0)) {
        FUN__text__006783e4(param_1[0x8e]);
        lVar6 = FUN__text__00659a28(0x71763a,param_1[0x45]);
        param_1[0x8e] = lVar6;
        if (lVar6 == 0) goto LAB__text__0065fb08;
        lVar8 = 0x71f862;
      }
      *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 1;
    }
    if (lVar8 == 0) {
      bVar5 = *(byte *)(param_2 + 0x18) & 0xfd;
    }
    else {
      bVar2 = (param_5 & 1) == 0;
      lVar6 = 0x180;
      if (bVar2) {
        lVar6 = 0x210;
      }
      uVar9 = 0x719905;
      if (bVar2) {
        uVar9 = 0x7135de;
      }
      lVar1 = 0x70f683;
      if (*(long *)((long)param_1 + lVar6) != 0) {
        lVar1 = *(long *)((long)param_1 + lVar6);
      }
      FUN__text__00666f74(uVar7,0x7135bd,uVar9,lVar8,lVar1);
      bVar5 = ((*(byte *)(param_2 + 0x18) & 1) << 1 | *(byte *)(param_2 + 0x18) & 0xfd) ^ 2;
    }
    iVar3 = 0;
    *(byte *)(param_2 + 0x18) = bVar5;
  }
  return iVar3;
}


