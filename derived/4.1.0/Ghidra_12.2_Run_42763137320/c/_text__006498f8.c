/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006498f8; name: FUN_.text__006498f8
 */


void FUN__text__006498f8(undefined4 *param_1,long param_2)

{
  undefined2 uVar1;
  
  uVar1 = FUN__text__0063a010(param_1 + 2,0x140);
  *(undefined2 *)((long)param_1 + 6) = uVar1;
  FUN__text__0063a0c0(param_1 + 2,0x140,*param_1);
  if (param_2 == 0) {
    return;
  }
  FUN__text__0063a0c0(param_2,0x10,*param_1);
  return;
}


