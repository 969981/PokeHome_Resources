/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00207ecc; name: FUN_.text__00207ecc
 */


void FUN__text__00207ecc(long param_1)

{
  code *pcVar1;
  code *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  long alStack_90 [12];
  
  FUN__text__0012bcbc(param_1 + 0x110,1);
  local_b0 = FUN__text__002087c4;
  local_a8 = FUN__text__002087ec;
  local_a0 = &LAB__text__002087f0;
  local_98 = &LAB__text__002087fc;
  alStack_90[0] = param_1;
  FUN__text__0012c3b0(param_1 + 0x110,0x71028b,&local_b0);
  pcVar1 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (undefined1 *)0x0;
    local_98 = (undefined1 *)0x0;
    local_b0 = (code *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar1)(alStack_90);
  }
  *(undefined1 *)(param_1 + 0xa640) = 1;
  return;
}


