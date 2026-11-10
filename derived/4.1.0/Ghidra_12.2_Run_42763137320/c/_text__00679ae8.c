/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00679ae8; name: FUN_.text__00679ae8
 */


undefined8 FUN__text__00679ae8(int *param_1,int *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_4;
  if ((int)(uVar2 ^ 0x7fffffff) < *param_1) {
    return 0xfffffdf4;
  }
  *param_1 = *param_1 + uVar2;
  uVar3 = *param_3;
  uVar1 = uVar3;
  if ((int)uVar2 <= (int)uVar3) {
    uVar1 = uVar2;
  }
  *param_3 = uVar3 - uVar1;
  *param_2 = *param_2 + uVar1;
  *param_4 = *param_4 - uVar1;
  return 0;
}


