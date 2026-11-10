/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00656638; name: FUN_.text__00656638
 */


int FUN__text__00656638(long *param_1,ulong param_2,undefined8 param_3,char *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  char *pcVar8;
  byte bVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar10 = *param_1;
  bVar6 = (param_2 & 1) != 0;
  plVar1 = param_1 + 0x8e;
  if (bVar6) {
    plVar1 = param_1 + 0x8b;
  }
  plVar2 = param_1 + 0x43;
  if (bVar6) {
    plVar2 = param_1 + 0x31;
  }
  lVar12 = *plVar2;
  plVar2 = param_1 + 0x42;
  if (bVar6) {
    plVar2 = param_1 + 0x30;
  }
  lVar11 = *plVar2;
  lVar3 = lVar10 + 0x1248;
  plVar2 = (long *)(lVar10 + 0x11c8);
  if (bVar6) {
    lVar3 = lVar10 + 0x1268;
    plVar2 = (long *)(lVar10 + 0x1208);
  }
  FUN__text__006783e4(*plVar1);
  *plVar1 = 0;
  lVar4 = 0x70f683;
  if (lVar11 != 0) {
    lVar4 = lVar11;
  }
  lVar11 = 0x70f683;
  if (lVar12 != 0) {
    lVar11 = lVar12;
  }
  if (*plVar2 == 0) {
    bVar9 = *(byte *)(lVar3 + 0x18) & 0xfe;
LAB__text__006567a8:
    iVar7 = 0;
    *(byte *)(lVar3 + 0x18) = bVar9;
  }
  else {
    if (((*(byte *)(lVar3 + 0x18) >> 2 & 1) == 0) ||
       (pcVar8 = strchr(param_4,0x3f), pcVar8 == (char *)0x0)) {
      lVar12 = FUN__text__00678404(param_4);
    }
    else {
      lVar12 = FUN__text__00659a28(0x715479,(long)pcVar8 - (long)param_4,param_4);
    }
    if (lVar12 != 0) {
      local_70 = 0;
      local_68 = 0;
      iVar7 = FUN__text__00675d14(lVar10,lVar4,lVar11,param_3,lVar12,plVar2,&local_68,&local_70);
      FUN__text__006783e4(lVar12);
      if (iVar7 != 0) {
        return iVar7;
      }
      uVar5 = 0x71bba7;
      if ((param_2 & 1) == 0) {
        uVar5 = 0x70f683;
      }
      lVar10 = FUN__text__00659a28(0x716da8,uVar5,local_68);
      *plVar1 = lVar10;
      FUN__text__006783e4(local_68);
      if (*plVar1 != 0) {
        bVar9 = *(byte *)(lVar3 + 0x18) | 1;
        goto LAB__text__006567a8;
      }
    }
    iVar7 = 0x1b;
  }
  return iVar7;
}


