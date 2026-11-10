/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0023ef38; name: FUN_.text__0023ef38
 */


undefined8 * FUN__text__0023ef38(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  long local_48;
  long local_28;
  
  uVar2 = tpidr_el0;
  uVar2 = uVar2 & 0xffffffffffffe000;
  if (*(long *)(uVar2 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,600,8);
  if (puVar1 == (undefined8 *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  local_28 = *param_3;
  *param_3 = 0;
  local_48 = *param_4;
  *param_4 = 0;
  FUN__text__0012566c(puVar1,&local_28,&local_48);
  *(undefined4 *)(puVar1 + 0x31) = 0;
  puVar1[0x32] = 0;
  puVar1[0x33] = 0;
  *(undefined4 *)(puVar1 + 0x34) = 0;
  puVar1[0x35] = 0;
  puVar1[0x36] = 0;
  *(undefined4 *)(puVar1 + 0x37) = 0;
  *(undefined4 *)(puVar1 + 0x3a) = 0;
  *(undefined4 *)(puVar1 + 0x3d) = 0;
  *(undefined4 *)(puVar1 + 0x40) = 0;
  *(undefined4 *)(puVar1 + 0x43) = 0;
  puVar1[0x42] = 0;
  puVar1[0x41] = 0;
  *(undefined4 *)(puVar1 + 0x46) = 0;
  puVar1[0x45] = 0;
  *puVar1 = 0x873ee8;
  puVar1[0x44] = 0;
  *(undefined4 *)(puVar1 + 0x49) = 0;
  puVar1[0x48] = 0;
  puVar1[0x47] = 0;
  puVar1[0x4a] = 0;
  puVar1[9] = 0x873f50;
  puVar1[10] = 0x873f90;
  puVar1[0x38] = 0;
  puVar1[0x39] = 0;
  puVar1[0x3b] = 0;
  puVar1[0x3c] = 0;
  puVar1[0x3e] = 0;
  puVar1[0x3f] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  puVar1[1] = param_2;
  puVar1[2] = puVar1;
  puVar1[3] = 600;
  puVar1[4] = 8;
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
  return puVar1;
}


