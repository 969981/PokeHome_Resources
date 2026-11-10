/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0015ac20; name: FUN_.text__0015ac20
 */


bool FUN__text__0015ac20(long param_1,uint param_2)

{
  long lVar1;
  
  if ((param_1 == 0) ||
     (((lVar1 = FUN__text__006b46d0(param_1,0x719e06), lVar1 == 0 &&
       (lVar1 = FUN__text__006b46d0(param_1,0x719e0b), lVar1 == 0)) ||
      (*(int *)(lVar1 + (ulong)*(uint *)(lVar1 + 4)) == 0)))) {
    return (((param_2 & 0xfffffffe) == 2 || (param_2 & 0xfffffffe) == 4) || param_2 == 6) ||
           param_2 == 10;
  }
  return false;
}


