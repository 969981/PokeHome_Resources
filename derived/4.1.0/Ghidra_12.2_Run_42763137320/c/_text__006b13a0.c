/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b13a0; name: FUN_.text__006b13a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__006b13a0(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = nn::util::BinaryFileHeader::GetFirstBlock();
  return *(undefined8 *)
          (*(long *)(*(long *)(lVar1 + 0x20) + (long)param_2 * 0x40 +
                    *(long *)(_DAT_008a5970 + ((ulong)*(uint *)(param_1 + 8) & 7) * 8)) + 0x68);
}


