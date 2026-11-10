/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d83c0; name: FUN_.text__006d83c0
 */


void FUN__text__006d83c0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = param_1 + 0x1fU & 0xffffffffffffffe0;
  (**(code **)(*DAT_00c5fbc0 + 0x10))(DAT_00c5fbc0,uVar1,param_2);
  DAT_00c5fbb8 = DAT_00c5fbb8 + uVar1;
  return;
}


