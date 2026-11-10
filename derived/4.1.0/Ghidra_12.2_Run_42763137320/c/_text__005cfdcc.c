/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cfdcc; name: FUN_.text__005cfdcc
 */


undefined4 FUN__text__005cfdcc(void)

{
  long lVar1;
  
  lVar1 = nn::util::BinaryFileHeader::GetFirstBlock();
  return *(undefined4 *)(lVar1 + 0x1c);
}


