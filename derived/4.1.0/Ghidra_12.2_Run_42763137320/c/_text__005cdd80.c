/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cdd80; name: FUN_.text__005cdd80
 */


void FUN__text__005cdd80(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 local_28;
  
  FUN__text__005cde24();
  local_28 = *param_1;
  puVar1 = *(undefined8 **)(param_2 + 0x180);
  if (*(undefined8 **)(param_2 + 0x188) <= puVar1) {
    FUN__text__005ce560(param_2 + 0x178,&local_28);
    return;
  }
  uVar2 = tpidr_el0;
  uVar2 = uVar2 & 0xffffffffffffe000;
  if (*(long *)(uVar2 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(undefined8 *)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_2 + 400);
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
  *puVar1 = local_28;
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
  *(undefined8 **)(param_2 + 0x180) = puVar1 + 1;
  return;
}


