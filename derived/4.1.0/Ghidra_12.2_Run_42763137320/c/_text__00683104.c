/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00683104; name: FUN_.text__00683104
 */


int FUN__text__00683104(long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN__text__00683084(param_1,param_3 + 1,param_4);
  if (iVar1 == 0) {
    *(long *)(*param_1 + 0x18) = param_3;
    puVar2 = (undefined1 *)FUN__text__00679e18(*(undefined8 *)(*param_1 + 0x10),param_2,param_3);
    *puVar2 = 0;
  }
  return iVar1;
}


