/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00406af0; name: FUN_.text__00406af0
 */


void FUN__text__00406af0(undefined4 param_1,long param_2)

{
  long lVar1;
  
  if (param_2 == 0) {
    return;
  }
  if (*(long *)(param_2 + 0x30) == 0) {
    if (*(long *)(param_2 + 0x68) == 0) {
      if (*(long *)(param_2 + 0x70) == 0) goto LAB__text__00406b10;
    }
    else if (*(long *)(*(long *)(param_2 + 0x68) + 0x80) != 0) goto LAB__text__00406b10;
    lVar1 = FUN__text__0040a740();
    if ((lVar1 != 0) && ((*(long *)(lVar1 + 0x548) == param_2 || (*(long *)(lVar1 + 0x548) == 0))))
    {
      *(undefined1 *)(lVar1 + 0x554) = 0;
      *(undefined8 *)(lVar1 + 0x548) = 0;
    }
  }
LAB__text__00406b10:
  FUN__text__004d3fb0(param_2);
  FUN__text__00400fc0(param_1,param_2);
  return;
}


