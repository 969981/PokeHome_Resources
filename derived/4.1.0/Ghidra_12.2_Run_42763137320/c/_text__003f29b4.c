/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f29b4; name: FUN_.text__003f29b4
 */


void FUN__text__003f29b4(undefined8 *param_1)

{
  ulong uVar1;
  
  if (*(char *)(param_1 + 0x1c) != '\0') {
    (**(code **)(*(long *)param_1[8] + 0x28))();
    *(undefined1 *)(param_1 + 0x1c) = 0;
  }
  uVar1 = (**(code **)(*(long *)param_1[0xc] + 0x18))();
  if ((uVar1 & 1) != 0) {
    (**(code **)(*(long *)param_1[0xc] + 0x38))();
  }
  if (*(char *)((long)param_1 + 0xe2) != '\0') {
    (**(code **)(*(long *)*param_1 + 0x28))();
    (*(code *)**(undefined8 **)param_1[0x14])();
    *(undefined1 *)((long)param_1 + 0xe2) = 0;
  }
  uVar1 = (**(code **)(*(long *)param_1[4] + 0x10))();
  if ((uVar1 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003f2a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[4] + 0x18))();
  return;
}


