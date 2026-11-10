/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0025ec38; name: FUN_.text__0025ec38
 */


void FUN__text__0025ec38(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 0x6e8) = 3;
  FUN__text__0012c378(lVar1 + 0x110,0x72c6d0);
  FUN__text__0012c378(lVar1 + 0x110,0x72c6d8);
  FUN__text__002575d4(lVar1);
  FUN__text__002579c0(lVar1,0,0xffffffffffffffff);
  if (*(long *)(lVar1 + 0x4e0) == 0) {
    return;
  }
  FUN__text__003c02e4();
  return;
}


