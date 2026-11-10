/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0012c300; name: FUN_.text__0012c300
 */


bool FUN__text__0012c300(long param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  ulong local_8;
  
  if (param_2 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  local_8 = 0xcbf29ce484222645;
  bVar1 = *param_2;
  while (bVar1 != 0) {
    param_2 = param_2 + 1;
    local_8 = (local_8 ^ bVar1) * 0x100000001b3;
    bVar1 = *param_2;
  }
  lVar2 = *(long *)(param_1 + 0x1c0);
  if (lVar2 != 0) {
    FUN__text__003c7d90(lVar2,&local_8);
  }
  return lVar2 != 0;
}


