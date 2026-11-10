/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045df1c; name: FUN_.text__0045df1c
 */


void FUN__text__0045df1c(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  float fVar2;
  
  uVar1 = FUN__text__0045df80();
  if ((uVar1 & 1) == 0) {
    *(undefined8 *)(param_2 + 0x90) = 0x7000020;
    *(undefined8 *)(param_2 + 0x98) = 0;
    FUN__text__0045e0f0(param_1,param_2,param_3);
    fVar2 = *(float *)(param_2 + 0x10);
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(float *)(param_2 + 0x2c) = *(float *)(param_2 + 0x2c) + fVar2;
  }
  return;
}


