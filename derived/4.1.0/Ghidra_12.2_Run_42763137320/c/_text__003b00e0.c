/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b00e0; name: FUN_.text__003b00e0
 */


void FUN__text__003b00e0(long param_1)

{
  uint uVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1 + 0x548);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x550) = 0;
    *(undefined8 *)(param_1 + 0x558) = 0;
    *(undefined8 *)(param_1 + 0x540) = 0;
    *(undefined8 *)(param_1 + 0x548) = 0;
    (*pcVar2)(param_1 + 0x560);
  }
  uVar1 = *(int *)(param_1 + 0x7a8) - 1;
  if (uVar1 < 4) {
                    /* WARNING: Could not emulate address calculation at 0x003b012c */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__003b0138 + (ulong)*(byte *)((ulong)uVar1 + 0x73a7a7) * 4))();
    return;
  }
  return;
}


