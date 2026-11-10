/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c1580; name: FUN_.text__004c1580
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004c1580(long param_1,int param_2,long param_3,uint param_4,long param_5,
                        uint param_6,ulong param_7)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 local_80;
  long local_78 [3];
  
  if ((((param_3 != -1) && (param_2 != 0)) && (DAT_00aeab68 != 0)) &&
     ((lVar3 = FUN__text__00447b30(*_DAT_008a45e0,param_3), lVar3 != 0 && (DAT_00aeab68 != 0)))) {
    plVar6 = *(long **)(param_1 + 8);
    if (plVar6 == (long *)0x0) {
      if (param_4 == 0) {
        return;
      }
    }
    else {
      if (param_4 == 0) {
        do {
          if (((int)plVar6[7] == param_2) && (plVar6[2] == lVar3)) goto LAB__text__004c16e8;
          plVar6 = (long *)plVar6[1];
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          if ((((int)plVar6[7] == param_2) && (*(uint *)((long)plVar6 + 0x2c) == param_4)) &&
             (plVar6[2] == lVar3)) goto LAB__text__004c16e8;
          plVar6 = (long *)plVar6[1];
        } while (plVar6 != (long *)0x0);
      }
      if (param_4 == 0) {
        return;
      }
      if (DAT_00aeab68 == 0) {
        return;
      }
    }
    local_78[1] = 0;
    local_78[2] = (ulong)param_4 << 0x20;
    local_80 = 0x400000000;
    local_78[0] = 0;
    plVar6 = (long *)FUN__text__00400f80(0,0x78);
    if (plVar6 != (long *)0x0) {
      FUN__text__004c3590(plVar6,param_1,lVar3,&local_80,local_78,param_2,0);
      iVar2 = (**(code **)(*plVar6 + 0x10))(plVar6);
      if (iVar2 != 1) {
        FUN__text__00447104(plVar6);
        plVar6 = (long *)0x0;
      }
    }
    if (local_78[0] != 0) {
      FUN__text__0040c060();
    }
LAB__text__004c16e8:
    if ((plVar6 != (long *)0x0) && (param_6 != 0)) {
      if ((param_7 & 1) == 0) {
        uVar7 = 0;
        do {
          lVar3 = param_5 + (uVar7 & 0xffff) * 0x14;
          FUN__text__004c38a0(plVar6,lVar3,*(undefined4 *)(lVar3 + 0xc));
          uVar1 = (int)uVar7 + 1;
          uVar7 = (ulong)uVar1;
        } while ((uVar1 & 0xffff) < param_6);
      }
      else {
        uVar7 = 0;
        do {
          lVar3 = param_5 + (uVar7 & 0xffff) * 0x14;
          lVar8 = *(long *)(lVar3 + 0xc);
          if (((DAT_00aeab78 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_00aeab78), iVar2 != 0))
          {
            DAT_00aeab70 = *_DAT_008a4b68 * 0xe10;
            __cxa_guard_release(&DAT_00aeab78);
          }
          uVar5 = lVar8 - *(long *)(param_1 + 0x30);
          uVar4 = 0;
          if (uVar5 <= DAT_00aeab70) {
            uVar4 = (undefined4)uVar5;
          }
          FUN__text__004c38a0(plVar6,lVar3,uVar4);
          uVar1 = (int)uVar7 + 1;
          uVar7 = (ulong)uVar1;
        } while ((uVar1 & 0xffff) < param_6);
      }
    }
  }
  return;
}


