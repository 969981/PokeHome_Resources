/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005635b4; name: FUN_.text__005635b4
 */


undefined8 FUN__text__005635b4(uint *param_1,long *param_2,uint param_3)

{
  long lVar1;
  
  *param_1 = param_3 & 0xfffffffc;
  if ((param_3 & 0xfffffffc) != 0) {
    lVar1 = (**(code **)(*param_2 + 0x10))(param_2,(ulong)(param_3 & 0xfffffffc) << 2,0x71ba8b,0x1b)
    ;
    *(long *)(param_1 + 2) = lVar1;
    if (lVar1 == 0) {
      return 0x34;
    }
  }
  param_1[4] = 0;
  return 1;
}


