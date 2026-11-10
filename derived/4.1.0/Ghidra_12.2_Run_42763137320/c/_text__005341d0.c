/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005341d0; name: FUN_.text__005341d0
 */


void FUN__text__005341d0(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = FUN__text__00509350(uVar2);
  if (((uVar1 & 1) != 0) || (uVar1 = FUN__text__00509374(uVar2), (uVar1 & 1) != 0)) {
    *(uint *)(param_2 + 8) =
         *(int *)(param_2 + 8) +
         (uint)*(ushort *)(*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 8) + 0x38);
  }
  return;
}


