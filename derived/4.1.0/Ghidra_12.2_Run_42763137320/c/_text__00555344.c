/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00555344; name: FUN_.text__00555344
 */


int FUN__text__00555344(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1[3] != 0) {
    return 0;
  }
  uVar2 = *param_1;
  uVar1 = (param_1[1] - param_2) + param_1[6];
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = uVar1 / uVar2;
  }
  uVar1 = uVar1 - uVar3 * uVar2;
  if (param_1[2] <= uVar1) {
    uVar2 = 0;
  }
  return (uVar1 - param_1[2]) + uVar2;
}


