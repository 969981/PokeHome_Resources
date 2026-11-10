/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004de2f0; name: FUN_.text__004de2f0
 */


void FUN__text__004de2f0(uint param_1,uint param_2,uint param_3,ushort param_4,uint *param_5,
                        ushort *param_6)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  
  *param_6 = param_4;
  if (((param_3 < param_2 || param_3 - param_2 == 0) || (param_1 <= param_3)) || (param_4 == 1)) {
    *param_5 = param_1;
    return;
  }
  uVar1 = (param_3 - param_2) + 1;
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = (param_1 - param_2) / uVar1;
  }
  if ((param_4 != 0) && (param_4 <= uVar3)) {
    *param_5 = param_1 - (param_4 - 1) * uVar1;
    *param_6 = 1;
    return;
  }
  uVar2 = 0;
  if (param_4 != 0) {
    uVar2 = param_4 - (short)uVar3;
  }
  *param_6 = uVar2;
  *param_5 = ((param_1 - param_2) - uVar3 * uVar1) + param_2;
  return;
}


