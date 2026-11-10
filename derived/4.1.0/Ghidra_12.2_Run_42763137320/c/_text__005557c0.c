/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005557c0; name: FUN_.text__005557c0
 */


uint FUN__text__005557c0(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = param_1[3];
  uVar3 = *param_1;
  uVar1 = uVar2;
  if (param_2 <= uVar2) {
    uVar1 = param_2;
  }
  uVar4 = 0;
  if (uVar3 != 0) {
    uVar4 = (param_1[2] + uVar1) / uVar3;
  }
  param_1[2] = (param_1[2] + uVar1) - uVar4 * uVar3;
  param_1[3] = uVar2 - uVar1;
  return uVar1;
}


