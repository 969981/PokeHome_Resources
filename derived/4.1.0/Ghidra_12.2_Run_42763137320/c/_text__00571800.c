/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00571800; name: FUN_.text__00571800
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00571800(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  
  if ((*(char *)(*(long *)(param_1 + 0x10) + 0x20) == '\0') || (*(char *)(param_1 + 0x49) != '\0'))
  {
    return 0;
  }
  plVar3 = (long *)(**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))();
  if (plVar3 != (long *)0x0) {
    local_24 = 0;
    puVar1 = (undefined8 *)(param_1 + 0x28);
    local_30 = CONCAT44(0xffffffff,(undefined4)local_30);
    local_48 = 0x100000000;
    local_30 = local_30 & 0xffffffffffffff00;
    local_38 = 0;
    local_40 = (ulong)local_40._4_4_ << 0x20;
    iVar2 = (**(code **)(*plVar3 + 0x20))
                      (plVar3,*(long *)(param_1 + 0x10) + 0x20,&local_48,2,puVar1,0);
    if (iVar2 == 1) {
      uVar4 = FUN__text__00573ba0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                                  *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
                                  *(undefined2 *)(*(long *)(param_1 + 0x10) + 0x1c));
      if ((uVar4 & 1) != 0) {
        return 1;
      }
      (**(code **)(*(long *)*puVar1 + 0x10))();
      *puVar1 = 0;
    }
  }
  local_48 = _DAT_0070d38f;
  local_40 = _DAT_0070d397;
  local_38 = _DAT_0070d39f;
  local_30 = _DAT_0070d3a7;
  local_28 = 0x656c69;
  (**(code **)(**(long **)(param_1 + 0x18) + 0x48))(*(long **)(param_1 + 0x18),&local_48,2);
  *(undefined1 *)(param_1 + 0x49) = 1;
  return 0;
}


