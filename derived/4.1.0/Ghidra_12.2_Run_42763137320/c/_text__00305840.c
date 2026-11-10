/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00305840; name: FUN_.text__00305840
 */


long FUN__text__00305840(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 1) {
    return 1;
  }
  iVar1 = FUN__text__00596670(param_1 + 4,0x20);
  if (((((iVar1 == param_1[3]) &&
        (iVar1 = FUN__text__00596670(param_1 + 0xc,0x1c5200), iVar1 == param_1[4])) &&
       (iVar1 = FUN__text__00596670(param_1 + 0x7148c,0x1c5200), iVar1 == param_1[5])) &&
      ((iVar1 = FUN__text__00596670(param_1 + 0xe290c,0x1c5200), iVar1 == param_1[6] &&
       (iVar1 = FUN__text__00596670(param_1 + 0x153d8c,0x1c5200), iVar1 == param_1[7])))) &&
     ((iVar1 = FUN__text__00596670(param_1 + 0x1c520c,0xe2900), iVar1 == param_1[8] &&
      ((iVar1 = FUN__text__00596670(param_1 + 0x1fdc4c,&LAB__text__00148200), iVar1 == param_1[9] &&
       (iVar1 = FUN__text__00596670(param_1 + 0x24fccc,0x2a30), iVar1 == param_1[10])))))) {
    iVar1 = FUN__text__00596670(param_1 + 0x250758,0x2a30);
    return (ulong)(iVar1 != param_1[0xb]) << 1;
  }
  return 2;
}


