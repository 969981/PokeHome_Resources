/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00406b74; name: FUN_.text__00406b74
 */


void FUN__text__00406b74(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x548);
  if (lVar2 == 0) goto LAB__text__00406bac;
  if (*(long *)(lVar2 + 0x30) == 0) {
    if (*(long *)(lVar2 + 0x68) == 0) {
      if (*(long *)(lVar2 + 0x70) != 0) goto LAB__text__00406be0;
    }
    else if (*(long *)(*(long *)(lVar2 + 0x68) + 0x80) == 0) {
LAB__text__00406be0:
      lVar1 = FUN__text__0040a740();
      if ((lVar1 != 0) && ((*(long *)(lVar1 + 0x548) == lVar2 || (*(long *)(lVar1 + 0x548) == 0))))
      {
        *(undefined1 *)(lVar1 + 0x554) = 0;
        *(undefined8 *)(lVar1 + 0x548) = 0;
      }
    }
  }
  FUN__text__004d3fb0(lVar2);
  FUN__text__00400fc0(5,lVar2);
  *(undefined8 *)(param_1 + 0x548) = 0;
LAB__text__00406bac:
  *(undefined1 *)(param_1 + 0x554) = 1;
  return;
}


