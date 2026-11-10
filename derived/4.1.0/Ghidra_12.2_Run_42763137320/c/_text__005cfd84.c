/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cfd84; name: FUN_.text__005cfd84
 */


undefined8 FUN__text__005cfd84(undefined8 param_1,int param_2)

{
  long lVar1;
  
  lVar1 = nn::util::BinaryFileHeader::GetFirstBlock();
  return *(undefined8 *)
          (*(long *)(lVar1 + 0x20) + (long)param_2 * 0x40 +
          *(long *)((ulong)*(byte *)(lVar1 + 0x14) * 8 + 0x8b4560));
}


