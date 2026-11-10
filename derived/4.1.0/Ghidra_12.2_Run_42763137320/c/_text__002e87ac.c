/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002e87ac; name: FUN_.text__002e87ac
 */


undefined8
FUN__text__002e87ac(long param_1,undefined8 *param_2,uint param_3,uint param_4,uint param_5)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  long *plVar4;
  ushort uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *local_38;
  
  if (((param_3 < 0x20) && (param_4 < 0x1e)) &&
     (uVar3 = param_4 + param_3 * 0x1e,
     (*(ulong *)(param_1 + ((ulong)(uVar3 >> 3) & 0x1ffffff8) + 0x60) >> ((ulong)uVar3 & 0x3f) & 1)
     != 0)) {
    return 0;
  }
  FUN__text__002e8994(&local_38,*(undefined8 *)(param_1 + 8),*param_2);
  if ((param_5 & 1) == 0) {
    (**(code **)(*local_38 + 0x78))
              (local_38,*(long *)(param_1 + 0x9c0) + (ulong)param_3 * 0x2fd0 +
                        (ulong)param_4 * 0x198);
    plVar4 = local_38;
  }
  else {
    FUN__text__002ead30();
    plVar4 = local_38;
  }
  local_38 = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(plVar4[9] + 0x10))();
  }
  uVar6 = (**(code **)(*plVar4 + 0xa0))(plVar4);
  param_4 = param_4 + param_3 * 0x1e;
  if (0x3bf < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN__text__0011a180(0x7132d0);
  }
  lVar1 = param_1 + 0x60;
  uVar7 = (ulong)(param_4 >> 6);
  uVar8 = 1L << ((ulong)param_4 & 0x3f);
  if ((uVar6 & 1) == 0) {
    uVar8 = *(ulong *)(lVar1 + uVar7 * 8) | uVar8;
  }
  else {
    uVar8 = *(ulong *)(lVar1 + uVar7 * 8) & (uVar8 ^ 0xffffffffffffffff);
  }
  *(ulong *)(lVar1 + uVar7 * 8) = uVar8;
  (**(code **)(plVar4[9] + 0x18))(plVar4 + 9);
  plVar4 = local_38;
  if (local_38 != (long *)0x0) {
    (**(code **)(local_38[9] + 0x10))();
  }
  uVar5 = (**(code **)(*plVar4 + 0x50))(plVar4);
  if ((uVar5 != 0) && (uVar6 = (**(code **)(*plVar4 + 0x40))(plVar4,2), (uVar6 & 1) == 0)) {
    uVar2 = *(ushort *)(param_1 + 0x150 + (ulong)uVar5 * 2);
    if (uVar2 < 0x3c0) {
      *(ushort *)(param_1 + 0x150 + (ulong)uVar5 * 2) = uVar2 + 1;
    }
  }
  (**(code **)(plVar4[9] + 0x18))(plVar4 + 9);
  if (*(code **)(param_1 + 0x940) != (code *)0x0) {
    (**(code **)(param_1 + 0x940))(param_1 + 0x960);
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(local_38[9] + 0x18))();
  }
  return 1;
}


