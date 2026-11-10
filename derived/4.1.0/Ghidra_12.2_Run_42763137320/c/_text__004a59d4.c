/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a59d4; name: FUN_.text__004a59d4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__004a59d4(long param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  ushort local_5c [2];
  undefined1 local_58 [4];
  char local_54 [4];
  
  plVar2 = _DAT_008a4628;
  if (param_2 == 0) {
    iVar4 = 0x38;
  }
  else {
    lVar7 = 0;
    param_1 = param_1 + 8;
    bVar3 = true;
    do {
      bVar6 = bVar3;
      iVar4 = FUN__text__004aecec(param_1,local_54,1);
      if (iVar4 != 1) {
        return iVar4;
      }
      lVar1 = lVar7 * 3;
      *(bool *)(*plVar2 + lVar1) = local_54[0] != '\0';
      iVar4 = FUN__text__004aecec(param_1,local_58,1);
      local_5c[0] = 0;
      if (iVar4 != 1) {
        return iVar4;
      }
      iVar4 = FUN__text__004aecec(param_1,local_5c,2);
      if (iVar4 != 1) {
        return iVar4;
      }
      lVar5 = FUN__text__00400f80(0,(ulong)local_5c[0] * 0xc);
      if (lVar5 == 0) {
        return 0x34;
      }
      iVar4 = FUN__text__004aecec(param_1,lVar5,(uint)local_5c[0] * 0xc);
      if (iVar4 != 1) {
LAB__text__004a5c8c:
        FUN__text__00400fc0(0,lVar5);
        return iVar4;
      }
      FUN__text__004c7660(*plVar2,lVar7,0,local_5c[0],lVar5,local_58[0]);
      FUN__text__00400fc0(0,lVar5);
      iVar4 = FUN__text__004aecec(param_1,local_54,1);
      if (iVar4 != 1) {
        return iVar4;
      }
      *(bool *)(*plVar2 + lVar1 + 1) = local_54[0] != '\0';
      iVar4 = FUN__text__004aecec(param_1,local_58,1);
      local_5c[0] = 0;
      if (iVar4 != 1) {
        return iVar4;
      }
      iVar4 = FUN__text__004aecec(param_1,local_5c,2);
      if (iVar4 != 1) {
        return iVar4;
      }
      lVar5 = FUN__text__00400f80(0,(ulong)local_5c[0] * 0xc);
      if (lVar5 == 0) {
        return 0x34;
      }
      iVar4 = FUN__text__004aecec(param_1,lVar5,(uint)local_5c[0] * 0xc);
      if (iVar4 != 1) goto LAB__text__004a5c8c;
      FUN__text__004c7660(*plVar2,lVar7,1,local_5c[0],lVar5,local_58[0]);
      FUN__text__00400fc0(0,lVar5);
      iVar4 = FUN__text__004aecec(param_1,local_54,1);
      if (iVar4 != 1) {
        return iVar4;
      }
      *(bool *)(*plVar2 + lVar1 + 2) = local_54[0] != '\0';
      iVar4 = FUN__text__004aecec(param_1,local_58,1);
      local_5c[0] = 0;
      if (iVar4 != 1) {
        return iVar4;
      }
      iVar4 = FUN__text__004aecec(param_1,local_5c,2);
      if (iVar4 != 1) {
        return iVar4;
      }
      lVar5 = FUN__text__00400f80(0,(ulong)local_5c[0] * 0xc);
      if (lVar5 == 0) {
        return 0x34;
      }
      iVar4 = FUN__text__004aecec(param_1,lVar5,(uint)local_5c[0] * 0xc);
      if (iVar4 != 1) goto LAB__text__004a5c8c;
      FUN__text__004c7660(*plVar2,lVar7,2,local_5c[0],lVar5,local_58[0]);
      FUN__text__00400fc0(0,lVar5);
      lVar7 = 1;
      bVar3 = false;
    } while (bVar6);
    iVar4 = 1;
  }
  return iVar4;
}


