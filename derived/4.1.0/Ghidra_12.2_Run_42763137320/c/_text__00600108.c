/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00600108; name: FUN_.text__00600108
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN__text__00600108(undefined8 param_1,int param_2,ulong param_3,uint param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  ushort uVar3;
  short sVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  undefined8 local_6c;
  undefined4 local_64;
  
  uVar9 = param_3 & 0xffffffff;
  uVar1 = (uint)param_3 & 0xff;
  uVar5 = FUN__text__00631008();
  uVar6 = FUN__text__00631010(param_1);
  lVar2 = _DAT_008a5d78;
  if (((uVar1 != 6) && (uVar1 < 8)) &&
     (plVar11 = *(long **)(_DAT_008a5d78 + (param_3 & 0xff) * 8), plVar11 != (long *)0x0)) {
    plVar12 = plVar11 + 9;
    (**(code **)(*plVar12 + 0x10))(plVar12);
    uVar3 = (**(code **)(*plVar11 + 200))(plVar11,uVar5,uVar6);
    (**(code **)(*plVar12 + 0x18))(plVar12);
    if (uVar3 != 0) {
      plVar11 = *(long **)(lVar2 + (param_3 & 0xff) * 8);
      if (plVar11 != (long *)0x0) {
        iVar7 = 0;
        if (plVar11 != (long *)0x0) goto LAB__text__006001f8;
        do {
          iVar10 = 0;
          do {
            if (iVar10 == param_2) {
              return 1;
            }
            if (uVar3 - 1 == iVar7) goto LAB__text__0060025c;
            plVar11 = *(long **)(lVar2 + (param_3 & 0xff) * 8);
            iVar7 = iVar7 + 1;
            if (plVar11 == (long *)0x0) break;
LAB__text__006001f8:
            plVar12 = plVar11 + 9;
            (**(code **)(*plVar12 + 0x10))(plVar12);
            local_6c = 0;
            local_64 = 0;
            uVar8 = (**(code **)(*plVar11 + 0xd0))(plVar11,&local_6c,uVar5,uVar6,iVar7);
            iVar10 = (int)local_6c;
            (**(code **)(*plVar12 + 0x18))(plVar12);
          } while ((uVar8 & 1) != 0);
        } while( true );
      }
      if (param_2 == 0) {
        return 1;
      }
    }
  }
LAB__text__0060025c:
  if (((param_4 & 1) != 0) && (uVar8 = FUN__text__00635c70(param_1,uVar9), (uVar8 & 1) != 0)) {
    iVar7 = FUN__text__00632ed8(param_1,0,uVar9);
    if (iVar7 == param_2) {
      return 1;
    }
    iVar7 = FUN__text__00632ed8(param_1,1,uVar9);
    if (iVar7 == param_2) {
      return 1;
    }
    iVar7 = FUN__text__00632ed8(param_1,2,uVar9);
    if (iVar7 == param_2) {
      return 1;
    }
    iVar7 = FUN__text__00632ed8(param_1,3,uVar9);
    if (iVar7 == param_2) {
      return 1;
    }
  }
  if ((((param_5 & 1) != 0) && (uVar8 = FUN__text__00635c70(param_1,uVar9), (uVar8 & 1) != 0)) &&
     (uVar9 = FUN__text__00632e20(param_1,param_2,uVar9), (uVar9 & 1) != 0)) {
    return 1;
  }
  iVar7 = FUN__text__00631008(param_1);
  sVar4 = FUN__text__00631010(param_1);
  if (iVar7 < 0xac) {
    if ((iVar7 != 0x19) && (iVar7 != 0x1a)) {
      return 0;
    }
  }
  else if (iVar7 != 0xac) {
    if (iVar7 != 0x1df) {
      return 0;
    }
    if (param_2 < 0x13b) {
      if (param_2 == 0x38) {
        if (sVar4 == 2) {
          return 1;
        }
        return 0;
      }
      if (param_2 != 0x3b) {
        return 0;
      }
      if (sVar4 == 3) {
        return 1;
      }
      return 0;
    }
    if (param_2 == 0x1b5) {
      if (sVar4 == 5) {
        return 1;
      }
      return 0;
    }
    if (param_2 == 0x193) {
      if (sVar4 == 4) {
        return 1;
      }
      return 0;
    }
    if (param_2 != 0x13b) {
      return 0;
    }
    if (sVar4 == 1) {
      return 1;
    }
    return 0;
  }
  if (param_2 == 0x158) {
    return 1;
  }
  return 0;
}


