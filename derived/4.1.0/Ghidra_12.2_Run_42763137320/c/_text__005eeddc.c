/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005eeddc; name: FUN_.text__005eeddc
 */


void FUN__text__005eeddc(undefined1 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulong uVar3;
  code *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  code *local_98;
  undefined8 auStack_90 [12];
  
  local_b0 = FUN__text__005eef20;
  local_a8 = FUN__text__005eefbc;
  local_a0 = &LAB__text__005eefc0;
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  local_98 = FUN__text__005eefcc;
  auStack_90[0] = param_2;
  if (puVar1 < *(undefined8 **)(param_1 + 0x18)) {
    uVar3 = tpidr_el0;
    uVar3 = uVar3 & 0xffffffffffffe000;
    if (*(long *)(uVar3 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x20);
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN__text__005eefcc(auStack_90,puVar1 + 4);
    pcVar2 = local_a8;
    puVar1[3] = local_98;
    *puVar1 = local_b0;
    puVar1[1] = local_a8;
    puVar1[2] = local_a0;
    if (local_a8 != (code *)0x0) {
      local_a0 = (undefined1 *)0x0;
      local_98 = (code *)0x0;
      local_b0 = (code *)0x0;
      local_a8 = (code *)0x0;
      (*pcVar2)(auStack_90);
    }
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
    *(undefined8 **)(param_1 + 0x10) = puVar1 + 0x10;
    pcVar2 = local_a8;
  }
  else {
    FUN__text__00118510(param_1 + 8,&local_b0);
    pcVar2 = local_a8;
  }
  if (pcVar2 != (code *)0x0) {
    local_a0 = (undefined1 *)0x0;
    local_98 = (code *)0x0;
    local_b0 = (code *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar2)(auStack_90);
  }
  *param_1 = 1;
  return;
}


