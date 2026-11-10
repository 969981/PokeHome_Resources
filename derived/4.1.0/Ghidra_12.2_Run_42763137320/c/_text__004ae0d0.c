/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ae0d0; name: FUN_.text__004ae0d0
 */


void FUN__text__004ae0d0(long *param_1,undefined4 param_2)

{
  ulong *puVar1;
  ulong uVar2;
  
  puVar1 = (ulong *)*param_1;
  while (puVar1 != (ulong *)0x0) {
    uVar2 = *puVar1;
    FUN__text__00400fc0(param_2);
    puVar1 = (ulong *)(uVar2 & 0xfffffffffffffffc);
  }
  *param_1 = 0;
  return;
}


