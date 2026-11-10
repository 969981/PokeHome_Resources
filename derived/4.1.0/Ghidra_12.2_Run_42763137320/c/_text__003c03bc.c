/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c03bc; name: FUN_.text__003c03bc
 */


void FUN__text__003c03bc(long param_1)

{
  long *local_30 [2];
  long local_8;
  
  if (*(char *)(param_1 + 0x62) != '\0') {
    return;
  }
  FUN__text__003c0454();
  FUN__text__003c0e80(*(undefined8 *)(param_1 + 0x58),0);
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (*(char *)(param_1 + 0x61) != '\0') {
    local_30[0] = &local_8;
    local_8 = 0;
    FUN__text__003c10e0(*(undefined8 *)(param_1 + 0x58),local_30,0);
    if ((local_8 != 0) && (*(char *)(param_1 + 0x62) == '\0')) {
      *(undefined1 *)(param_1 + 0x60) = 0;
      FUN__text__003c0820(*(undefined8 *)(param_1 + 0x58),0);
    }
  }
  return;
}


