/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d43e8; name: FUN_.text__003d43e8
 */


undefined4 FUN__text__003d43e8(long param_1,ulong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *(ulong *)(param_1 + 0xc0) = param_2;
  *(undefined8 *)(param_1 + 200) = param_3;
  nn::image::JpegDecoder::SetImageData((void *)(param_1 + 0x58),param_2);
  nn::image::JpegDecoder::SetResolutionDenominator((int)(void *)(param_1 + 0x58));
  uVar1 = nn::image::JpegDecoder::Analyze();
  uVar2 = nn::image::JpegDecoder::GetAnalyzedDimension();
  *(undefined8 *)(param_1 + 0xa8) = uVar2;
  *(undefined1 *)(param_1 + 0xb0) = 1;
  return uVar1;
}


