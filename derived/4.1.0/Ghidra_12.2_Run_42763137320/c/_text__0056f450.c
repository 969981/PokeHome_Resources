/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0056f450; name: FUN_.text__0056f450
 */


undefined8 FUN__text__0056f450(long param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  float fVar2;
  
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = param_2[1];
  *(undefined4 *)(param_1 + 0x1c) = param_2[2];
  *(undefined4 *)(param_1 + 0x10) = param_2[3];
  fVar2 = exp2f((float)param_2[4] * 0.1660964);
  *(float *)(param_1 + 0x14) = fVar2;
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 5);
  uVar1 = *(undefined1 *)((long)param_2 + 0x15);
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined1 *)(param_1 + 0x22) = 1;
  *(undefined1 *)(param_1 + 0x21) = uVar1;
  return 1;
}


