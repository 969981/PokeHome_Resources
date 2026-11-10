/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001969ec; name: FUN_.text__001969ec
 */


uint FUN__text__001969ec(int *param_1,int *param_2)

{
  int iVar1;
  
  if (*param_1 == 0xd) {
    return 0;
  }
  iVar1 = *param_2;
  if ((iVar1 == 0) || (iVar1 == 0xb)) {
    return 0;
  }
  return (uint)(*(ulong *)((long)*param_1 * 8 + 0x725a18) >>
               ((ulong)*(uint *)((long)iVar1 * 4 + 0x7259e0) & 0x3f)) & 1;
}


