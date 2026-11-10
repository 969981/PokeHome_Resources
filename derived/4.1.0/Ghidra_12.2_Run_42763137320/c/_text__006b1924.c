/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b1924; name: FUN_.text__006b1924
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006b1924(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = nn::util::BinaryFileHeader::GetFirstBlock();
  FUN__text__006ed020(param_2,*(undefined8 *)
                               (*(long *)(*(long *)(lVar1 + 0x20) + (long)param_3 * 0x40 +
                                         *(long *)(_DAT_008a5970 +
                                                  ((ulong)*(uint *)(param_1 + 8) & 7) * 8)) + 0x68),
                      0x1ff);
  FUN__text__006ecfcc(param_2,*(long *)(param_1 + 0x10) + (long)param_3 * 0x20);
  return;
}


