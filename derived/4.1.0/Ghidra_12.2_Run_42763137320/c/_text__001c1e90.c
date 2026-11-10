/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c1e90; name: FUN_.text__001c1e90
 */


int FUN__text__001c1e90(long param_1,int param_2)

{
  if (*(char *)(param_1 + (long)param_2 * 0x38 + 0x20) == '\0') {
    return 0;
  }
  param_1 = param_1 + (long)param_2 * 0x38;
  return (uint)*(byte *)(param_1 + 0x38) + (uint)*(byte *)(param_1 + 0x3d) +
         (uint)*(byte *)(param_1 + 0x42) + (uint)*(byte *)(param_1 + 0x47) +
         (uint)*(byte *)(param_1 + 0x4c) + (uint)*(byte *)(param_1 + 0x51) +
         (uint)*(byte *)(param_1 + 0x39) +
         (uint)*(byte *)(param_1 + 0x3e) + (uint)*(byte *)(param_1 + 0x43) +
         (uint)*(byte *)(param_1 + 0x48) + (uint)*(byte *)(param_1 + 0x4d) +
         (uint)*(byte *)(param_1 + 0x52) + (uint)*(byte *)(param_1 + 0x3a) +
         (uint)*(byte *)(param_1 + 0x3f) + (uint)*(byte *)(param_1 + 0x44) +
         (uint)*(byte *)(param_1 + 0x49) +
         (uint)*(byte *)(param_1 + 0x4e) + (uint)*(byte *)(param_1 + 0x53) +
         (uint)*(byte *)(param_1 + 0x3b) + (uint)*(byte *)(param_1 + 0x40) +
         (uint)*(byte *)(param_1 + 0x45) + (uint)*(byte *)(param_1 + 0x4a) +
         (uint)*(byte *)(param_1 + 0x4f) + (uint)*(byte *)(param_1 + 0x54) +
         (uint)*(byte *)(param_1 + 0x3c) + (uint)*(byte *)(param_1 + 0x41) +
         (uint)*(byte *)(param_1 + 0x46) + (uint)*(byte *)(param_1 + 0x4b) +
         (uint)*(byte *)(param_1 + 0x50) + (uint)*(byte *)(param_1 + 0x55);
}


