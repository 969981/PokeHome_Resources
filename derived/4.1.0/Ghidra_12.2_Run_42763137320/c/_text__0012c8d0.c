/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0012c8d0; name: FUN_.text__0012c8d0
 */


undefined8 FUN__text__0012c8d0(undefined4 param_1,long param_2,byte *param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong local_28;
  
  if (param_3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  local_28 = 0xcbf29ce484222645;
  bVar1 = *param_3;
  while (bVar1 != 0) {
    param_3 = param_3 + 1;
    local_28 = (local_28 ^ bVar1) * 0x100000001b3;
    bVar1 = *param_3;
  }
  uVar3 = 0;
  if (*(long *)(param_2 + 0x1c0) != 0) {
    uVar2 = FUN__text__003c7ec0(*(long *)(param_2 + 0x1c0),&local_28);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_2 + 0x1c0) == 0) {
        return 0;
      }
      FUN__text__003c7d90(*(long *)(param_2 + 0x1c0),&local_28);
    }
    FUN__text__003c8010(param_1,*(undefined8 *)(param_2 + 0x1c0),&local_28);
    uVar3 = 1;
  }
  return uVar3;
}


