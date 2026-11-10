/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00205e30; name: FUN_.text__00205e30
 */


uint FUN__text__00205e30(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  FUN__text__006312d8();
  uVar2 = FUN__text__00205730();
  uVar3 = FUN__text__00634570(param_1);
  uVar1 = uVar3 & 0xffff;
  if ((uVar2 & 1) != 0) {
    uVar1 = uVar3 % 1000000;
  }
  *param_2 = uVar1;
  return uVar2 & 1;
}


