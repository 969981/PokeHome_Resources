/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00684650; name: FUN_.text__00684650
 */


void FUN__text__00684650(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN__text__006799cc(param_2);
  *(uint *)(param_1 + 0x10) = uVar1 & 0x7fffffff;
  uVar2 = FUN__text__006799cc(param_2 + 4);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  return;
}


