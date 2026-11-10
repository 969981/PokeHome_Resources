/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0025ed10; name: FUN_.text__0025ed10
 */


void FUN__text__0025ed10(long *param_1)

{
  code *pcVar1;
  code *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  long local_90 [12];
  long local_30;
  undefined4 local_28;
  
  local_90[0] = *param_1;
  local_b0 = FUN__text__0025f4a4;
  local_a8 = FUN__text__0025f4e0;
  local_a0 = &LAB__text__0025f4e4;
  puStack_98 = &LAB__text__0025f4f0;
  local_30 = local_90[0] + 0x648;
  local_28 = 2;
  FUN__text__001364d0(0x7167dd,*(undefined8 *)(local_90[0] + 0x60),&local_b0);
  pcVar1 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (undefined1 *)0x0;
    puStack_98 = (undefined1 *)0x0;
    local_b0 = (code *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar1)(local_90);
  }
  return;
}


