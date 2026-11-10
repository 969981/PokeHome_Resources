/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00680ac0; name: FUN_.text__00680ac0
 */


int FUN__text__00680ac0(long param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN__text__00680b30(param_1,param_3);
  if (iVar1 == 0) {
    memset((void *)(param_1 + 0x40),0,0x400);
    if (param_2 < 0x1000) {
      *(ulong *)(param_1 + 0x30) = param_2;
    }
    *(bool *)(param_1 + 0x450) = param_2 < 0x1000;
    *(ulong *)(param_1 + 0x440) = param_2;
    *(undefined8 *)(param_1 + 0x448) = 0xffffffff;
  }
  return iVar1;
}


