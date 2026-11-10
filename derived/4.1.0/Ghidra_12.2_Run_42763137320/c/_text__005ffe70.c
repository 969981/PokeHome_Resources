/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005ffe70; name: FUN_.text__005ffe70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN__text__005ffe70(undefined4 param_1,undefined4 param_2,int param_3,byte param_4)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 local_6c;
  undefined4 local_64;
  
  lVar1 = _DAT_008a5d78;
  if (((param_4 != 6) && (param_4 < 8)) &&
     (plVar6 = *(long **)(_DAT_008a5d78 + (ulong)param_4 * 8), plVar6 != (long *)0x0)) {
    plVar8 = plVar6 + 9;
    (**(code **)(*plVar8 + 0x10))(plVar8);
    uVar4 = (**(code **)(*plVar6 + 200))(plVar6,param_1,param_2);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    if (uVar4 != 0) {
      uVar9 = (ulong)param_4;
      plVar6 = *(long **)(lVar1 + uVar9 * 8);
      if (plVar6 != (long *)0x0) {
        iVar7 = 0;
        if (plVar6 == (long *)0x0) goto LAB__text__005fffa0;
        while( true ) {
          plVar8 = plVar6 + 9;
          (**(code **)(*plVar8 + 0x10))(plVar8);
          local_6c = 0;
          local_64 = 0;
          uVar5 = (**(code **)(*plVar6 + 0xd0))(plVar6,&local_6c,param_1,param_2,iVar7);
          iVar2 = (int)local_6c;
          (**(code **)(*plVar8 + 0x18))(plVar8);
          if ((uVar5 & 1) == 0) goto LAB__text__005fffa0;
          if (iVar2 == param_3) break;
          while( true ) {
            if (uVar4 - 1 == iVar7) {
              return 0x65;
            }
            plVar6 = *(long **)(lVar1 + uVar9 * 8);
            iVar7 = iVar7 + 1;
            if (plVar6 != (long *)0x0) break;
LAB__text__005fffa0:
            if (param_3 == 0) goto LAB__text__005fffbc;
          }
        }
LAB__text__005fffbc:
        plVar6 = *(long **)(lVar1 + uVar9 * 8);
        if (plVar6 != (long *)0x0) {
          plVar8 = plVar6 + 9;
          (**(code **)(*plVar8 + 0x10))(plVar8);
          local_6c = 0;
          local_64 = 0;
          uVar9 = (**(code **)(*plVar6 + 0xd0))(plVar6,&local_6c,param_1,param_2,iVar7);
          uVar3 = local_64;
          (**(code **)(*plVar8 + 0x18))(plVar8);
          if ((uVar9 & 1) != 0) {
            return uVar3;
          }
        }
      }
    }
  }
  return 0x65;
}


