/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019d9d8; name: FUN_.text__0019d9d8
 */


void FUN__text__0019d9d8(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *local_58;
  long *local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_38 = *(long *)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    local_28 = *(long *)(param_1 + 0x18);
    local_30 = lVar1;
    if (local_28 != 0) {
      FUN__text__0019e200(&local_58,*(undefined8 *)(local_38 + 8),&local_38);
      puVar2 = local_58;
      local_58 = (undefined8 *)0x0;
      puVar3 = *(undefined8 **)(param_1 + 0x188);
      *(undefined8 **)(param_1 + 0x188) = puVar2;
      if (puVar3 == (undefined8 *)0x0) {
        *(long **)(param_1 + 400) = local_50;
        *(undefined8 *)(param_1 + 0x198) = local_48;
        *(undefined8 *)(param_1 + 0x1a0) = local_40;
        FUN__text__001c8740(*(undefined8 *)(param_1 + 0x188));
        return;
      }
      (**(code **)*puVar3)(puVar3);
      (**(code **)(**(long **)(param_1 + 400) + 0x18))
                (*(long **)(param_1 + 400),puVar3,*(undefined8 *)(param_1 + 0x198),
                 *(undefined8 *)(param_1 + 0x1a0));
      puVar2 = local_58;
      local_58 = (undefined8 *)0x0;
      *(undefined8 *)(param_1 + 0x1a0) = local_40;
      *(long **)(param_1 + 400) = local_50;
      *(undefined8 *)(param_1 + 0x198) = local_48;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2);
        (**(code **)(*local_50 + 0x18))(local_50,puVar2,local_48,local_40);
      }
      FUN__text__001c8740(*(undefined8 *)(param_1 + 0x188));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}


