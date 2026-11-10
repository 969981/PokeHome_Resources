/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002cffdc; name: FUN_.text__002cffdc
 */


void FUN__text__002cffdc(long param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [96];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  uVar2 = FUN__text__002d2b78(*(undefined8 *)(param_1 + 0x80));
  uVar3 = FUN__text__002d3d1c(*(undefined8 *)(param_1 + 0x88));
  local_c0 = 0;
  uStack_b8 = 0;
  local_50 = 0x6ea3fdf7733ff2e;
  uStack_48 = 0x71947a;
  local_40 = 0x36;
  local_38 = 0;
  local_d0 = 0;
  local_c8 = (code *)0x0;
  uVar4 = FUN__text__002ce1c4(*(undefined8 *)(param_1 + 0xa0),&local_50,&local_d0);
  pcVar1 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    (*pcVar1)(auStack_b0);
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  uVar5 = FUN__text__002d4404(*(undefined8 *)(param_1 + 0x90));
  if (((uVar2 | uVar3 | uVar4 | uVar5) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  return;
}


