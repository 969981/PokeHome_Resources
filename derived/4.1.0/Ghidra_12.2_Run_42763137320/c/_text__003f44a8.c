/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f44a8; name: FUN_.text__003f44a8
 */


undefined8 FUN__text__003f44a8(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char *in_x4;
  undefined8 *in_x5;
  
  if (*in_x4 == '\0' && *(char *)(param_1 + 0x1c) != '\0') {
    *in_x5 = 0;
    in_x5[1] = 0;
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    in_x5[3] = 0;
    *(undefined4 *)(in_x5 + 2) = 0;
    *(undefined4 *)(in_x5 + 5) = uVar1;
    return 1;
  }
  *in_x4 = '\x01';
  uVar2 = FUN__text__003f47c0(param_1 + 0x10);
  if ((int)uVar2 == 1) {
    in_x5[1] = 0;
    *(undefined4 *)(in_x5 + 5) = *(undefined4 *)(param_1 + 0x18);
  }
  return uVar2;
}


