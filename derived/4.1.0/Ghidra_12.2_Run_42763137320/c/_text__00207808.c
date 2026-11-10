/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00207808; name: FUN_.text__00207808
 */


undefined8 * FUN__text__00207808(undefined8 param_1,long *param_2,long *param_3,long *param_4)

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
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x1c0,8);
  if (puVar1 == (undefined8 *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  local_28 = *param_3;
  *param_3 = 0;
  local_48 = *param_4;
  *param_4 = 0;
  FUN__text__0012566c(puVar1,&local_28,&local_48);
  *(undefined4 *)(puVar1 + 0x11) = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  *(undefined4 *)(puVar1 + 0x14) = 0;
  *(undefined4 *)(puVar1 + 0x17) = 0;
  *(undefined4 *)(puVar1 + 0x1a) = 0;
  *(undefined4 *)(puVar1 + 0x1d) = 0;
  *puVar1 = 0x86fc60;
  puVar1[9] = 0x86fcc8;
  puVar1[10] = 0x86fd08;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x35] = 0;
  puVar1[0x36] = 0;
  *(undefined8 *)((long)puVar1 + 0x1b5) = 0;
  puVar1[0x33] = 0;
  puVar1[0x34] = 0;
  puVar1[0x31] = 0;
  puVar1[0x32] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  puVar1[1] = param_2;
  puVar1[2] = puVar1;
  puVar1[3] = 0x1c0;
  puVar1[4] = 8;
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
  return puVar1;
}


