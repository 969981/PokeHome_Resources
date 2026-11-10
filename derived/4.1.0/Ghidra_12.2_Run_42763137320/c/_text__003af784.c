/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003af784; name: FUN_.text__003af784
 */


uint FUN__text__003af784(long param_1,undefined8 param_2,int *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x800) + 0x20);
  *(ulong *)(*(long *)(param_1 + 0x800) + 0x20) =
       CONCAT44(param_3[1] + (int)((ulong)uVar2 >> 0x20),*param_3 + (int)uVar2);
  uVar1 = FUN__text__003af424(param_1,param_2,2);
  *(undefined8 *)(*(long *)(param_1 + 0x800) + 0x20) = uVar2;
  return uVar1 & 1;
}


