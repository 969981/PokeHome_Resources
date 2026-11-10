/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006f7200; name: cos
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double cos(double __x)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_cos_008a8868)();
  return dVar1;
}


