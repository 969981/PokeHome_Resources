/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0011c1d8; name: FUN_.text__0011c1d8
 */


void FUN__text__0011c1d8(undefined8 *param_1)

{
  undefined8 local_8;
  
  nn::crypto::GenerateCryptographicallyRandomBytes(&local_8,8);
  *param_1 = local_8;
  param_1[1] = 0x82a2b175229d6a5b;
  param_1[2] = local_8;
  return;
}


