/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001613d8; name: FUN_.text__001613d8
 */


undefined4 FUN__text__001613d8(uint param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0xb) {
    uVar1 = FUN__text__0016a510();
    FUN__text__0016ad94(uVar1,0);
  }
  if (param_1 < 4) {
    return *(undefined4 *)
            ((-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2) + 0x7249d0);
  }
  return 0x42280000;
}


