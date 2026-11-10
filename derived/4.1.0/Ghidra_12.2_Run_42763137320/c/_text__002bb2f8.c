/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002bb2f8; name: FUN_.text__002bb2f8
 */


uint FUN__text__002bb2f8(long param_1,long *param_2,long *param_3,uint param_4,uint param_5)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  
  lVar9 = *param_3;
  if (lVar9 != 0) {
    plVar8 = (long *)(lVar9 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  if ((param_4 < 0x20) && (param_5 < 0x1e)) {
    FUN__text__005fc278(lVar9,param_1 + (ulong)param_4 * 0x2a30 + (ulong)param_5 * 0x168 + 0x60);
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
  }
  uVar3 = FUN__text__00631174(lVar9);
  (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  if ((uVar3 & 1) != 0) {
    FUN__text__005fc210(param_1 + (ulong)param_4 * 0x2a30 + (ulong)param_5 * 0x168 + 0x60,*param_2);
    lVar9 = *param_2;
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    uVar5 = FUN__text__00631174(lVar9);
    param_5 = param_5 + param_4 * 0x1e;
    if (0x3bf < param_5) {
                    /* WARNING: Subroutine does not return */
      FUN__text__0011a180(0x7132d0);
    }
    uVar6 = (ulong)(param_5 >> 6);
    lVar1 = param_1 + 0x54668;
    uVar7 = 1L << ((ulong)param_5 & 0x3f);
    if ((uVar5 & 1) == 0) {
      uVar7 = *(ulong *)(lVar1 + uVar6 * 8) | uVar7;
    }
    else {
      uVar7 = *(ulong *)(lVar1 + uVar6 * 8) & (uVar7 ^ 0xffffffffffffffff);
    }
    *(ulong *)(lVar1 + uVar6 * 8) = uVar7;
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    lVar9 = *param_2;
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    uVar4 = FUN__text__00631008(lVar9);
    if (uVar4 != 0) {
      uVar5 = FUN__text__00633b34(lVar9,2);
      if ((uVar5 & 1) == 0) {
        uVar2 = *(ushort *)(param_1 + 0x54758 + (ulong)uVar4 * 2);
        if (uVar2 < 0x3c0) {
          *(ushort *)(param_1 + 0x54758 + (ulong)uVar4 * 2) = uVar2 + 1;
        }
      }
    }
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    if (*(code **)(param_1 + 0x54f70) != (code *)0x0) {
      (**(code **)(param_1 + 0x54f70))(param_1 + 0x54f90);
    }
  }
  return uVar3 & 1;
}


